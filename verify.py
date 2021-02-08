import os
import sys
import argparse
def crc(s):
    c = 0
    for i in [int(l, 16) for l in [s[n:n+2] for n in range(0, len(s), 2)]]:
        c += i
    return '%02X' % ((0x100-(c & 0xFF)) & 0xFF)


def createline(d):
    s = ':'
    s += "%02X" % (int(len(d['data'])/2))
    s += "%04X" % d['addr']
    s += "%02X" % d['flag']
    s += d['data']
    s += crc(s[1:])
    s += '\n'
    return s


def b2s(b):
    s = ""
    for d in b:
        s += "%02X" % d
    return s


def write_hex_file(file, offset, data,startup):
    lines = []
    count = 0
    if offset % 0x10 != 0:
        lines.append(createline(
            {'data': "%04X" % (offset >> 16), 'addr': 0x0000, 'flag': 0x04}))
        lines.append(createline({'data': b2s(
            data[:(0x10-offset % 0x10)]), 'addr': offset & 0xFFFF, 'flag': 0x00}))  # 没有对齐的数据
        count = (0x10-offset % 0x10)

    for c in range(count, len(data), 0x10):
        if (c + offset) & 0xFFFF == 0x0000:
            lines.append(createline(
                {'data': "%04X" % ((c + offset) >> 16), 'addr': 0x0000, 'flag': 0x04}))
        lines.append(createline(
            {'data': b2s(data[c:c + 0x10]), 'addr': ((c + offset) & 0xFFFF), 'flag': 0x00}))

    if startup != 0xFFFFFFFF:    
        lines.append(createline({'data': "%08X"%(startup), 'addr': 0x0000, 'flag': 0x05}))
    lines.append(createline({'data': "", 'addr': 0x0000, 'flag': 0x01}))
    file.writelines(lines)


def readline(s):
    if s[0] != ':' and len(s) >= 11 and crc(s[1:-2]) == crc(s[-2:]):  # 格式校验
        raise IOError()
    return {'flag': int(s[7:9], 16), 'addr': int(s[3:7], 16), 'data': s[9: (int(s[1:3], 16))*2+9]}


def read_hex_file(file):
    startup = 0xFFFFFFFF
    lines = [readline(s) for s in file.readlines()]

    min = 0xFFFFFFFF
    max = 0x00000000
    base = 0x00000000
    for line in lines:
        if line['flag'] == 4:
            base = int(line['data'], 16) << 16
        elif line['flag'] == 0:
            if line['addr']+base < min:
                min = line['addr']+base
            if line['addr']+base + len(line['data'])/2 > max:
                max = line['addr']+base+int(len(line['data'])/2)
        elif line['flag'] == 5:
            startup = int(line['data'], 16)
            print(startup)
    offset = min
    length = max-min

    bin_list = list([0])*length
    base = 0x00000000
    for line in lines:
        if line['flag'] == 4:
            base = int(line['data'], 16) << 16
        elif line['flag'] == 0:
            begin = base + line['addr']-offset
            strdata = line['data']
            length = int(len(strdata)/2)
            bin_list[begin:begin+length] = [int(l, 16)
                                            for l in [strdata[n:n+2] for n in range(0, length*2, 2)]]
    data = bytes(bin_list)
    return offset, data, startup



description = """
在程序文件中读取一段程序转换为32位数组，长度不够以0xFFFFFFFF补齐；
匹配数组中[flg,0]的位置，并重设0使得整个数组的异或校验等于校验值。
例：’verify.exe in.hex -o out.hex -i 0x7800 -v 0x969EFF9F -f 0xBD01BD00‘
"""
parser = argparse.ArgumentParser(prog="verify tools", description=description)
parser.add_argument("file")
parser.add_argument('-i', '--size', help='设置校验段长度，十六进制格式，例：-i 0x7800')
parser.add_argument('-v', '--verify', help='设置校验值，十六进制格式，例：-v 0x969EFF9F')
parser.add_argument('-o', '--out', help='设置输出文件，默认与输入文件同名同目录，例：-o out.bin')
parser.add_argument('-f', '--flg', help='设置修改位置匹配标志，十六进制格式，例：-f 0xBD01BD00')
args = parser.parse_args()

if args.size:
    args_size = int(args.size[2:],16)
else:
    args_size = 0x7800

if args.verify:
    args_verify = int(args.verify[2:],16)
else:
    args_verify = 0x969EFF9F

if args.flg:
    args_flg = int(args.flg[2:],16)
else:
    args_flg = 0x969EFF9F


(filepath, tempfilename) = os.path.split(args.file)
(filename, extension) = os.path.splitext(tempfilename)
if extension != ".hex":
    #print("错误：仅支持hex文件"%args.file)
    raise IndexError("错误：仅支持hex文件"%args.file)
try:
    file = open(args.file, 'r')
except:
    #print("错误：无法打开文件%s"%args.file)
    raise IndexError("错误：无法打开文件%s"%args.file)

offset, src_data,startup = read_hex_file(file)
if args_size >= len(src_data):
    data = src_data + bytes([0xFF]*(args_size-len(src_data)))
else:
    data = src_data[0:args_size]
data_list = []
for i in range(0,len(data), 4):
    data_list.append(data[i] + (data[i + 1] << 8) + (data[i + 2] << 16) + (data[i + 3] << 24))


v = 0
for i in range(len(data_list)):
    v = v ^ data_list[i]
    v = v & 0xFFFFFFFF

dst_data = b''
if v != args_verify:
    flag_site = 0
    for i in range(len(data_list), 1, -1):
        if data_list[i-1] == args_flg and data_list[i] == 0x00000000:
            flag_site = i
            break
    if flag_site == 0:
        raise IndexError("错误：匹配不到标志")
    v = v ^ args_verify
    data = bytearray(src_data)
    data[4*flag_site + 0] = (v)&0xFF
    data[4*flag_site + 1] = (v>>8)&0xFF
    data[4*flag_site + 2] = (v>>16)&0xFF
    data[4*flag_site + 3] = (v>>24)&0xFF
    dst_data = bytes(data)

if args.out:
    pass
else:
    args.out = args.file
(filepath, tempfilename) = os.path.split(args.out)
(filename, extension) = os.path.splitext(tempfilename)
if extension != ".hex":
    raise IndexError("错误：仅支持hex文件"%args.out)
try:
    file = open(args.out, 'w')
except:
    raise IndexError("错误：无法写入文件%s"%args.out)

write_hex_file(file,offset,dst_data,startup)
print("完成")
