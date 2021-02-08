/**************************************************************************************************
* can.h
*
* 版本历史
*
* 版本号      日期       修改者            描述
* 1.00     2006.12.05   李楚平     	模块化的第一次版本
*                                   适合SmartCom II CAN Bus Protocol V4通讯协议
*								    标准化工作：变量名称，函数名称按照《规范》修改；
*                                   代码风格一致性修改；
**************************************************************************************************/

#ifndef __can_h__
#define __can_h__




//CAN数据发送缓存变量组
extern INT8U	GUC_CANTxBuf2;  //字节0
extern INT8U	GUC_CANTxBuf3;  //字节1
extern INT8U	GUC_CANTxBuf4;  //字节2
extern INT8U	GUC_CANTxBuf5;  //字节3
extern INT8U	GUC_CANTxBuf6;  //字节4
extern INT8U	GUC_CANTxBuf7;  //字节5
extern INT8U	GUC_CANTxBuf8;  //字节6
extern INT8U	GUC_CANTxBuf9;  //字节7

extern INT8U 	GUC_CANTxReq;      //CAN数据发送请求标志,0-无发送请求;1-有发送请求

extern INT8U 	GUC_CurDir;        //显示方向,0-无方向;1-上行,未运行;2-上行,运行中;3-下行,运行中;4-下行,未运行;
extern INT8U 	GUC_DispFlr;       //显示楼层
extern INT8U 	GUC_CurFlr;        //实际楼层
extern INT8U 	GUC_UpLight;       //上召灯状态,0-灭;1-亮;
extern INT8U 	GUC_DownLight;     //下召灯状态,0-灭;1-亮;

extern INT8U 	GUC_EleNo;         //通过can通讯得到的本梯号
extern INT8U 	GUC_YearHi;        //通过can通讯得到的当前年份高位
extern INT8U 	GUC_YearLo;        //通过can通讯得到的当前年份低位
extern INT8U 	GUC_Month;         //通过can通讯得到的当前月份
extern INT8U 	GUC_Day;           //通过can通讯得到的当前日
extern INT8U 	GUC_UpDownSelect;  //通过can通讯得到集选方式:1-上集选,0-下集选

extern INT8U HallLrnStat;
extern INT8U XDoor;

extern INT8U    Errcode;
extern INT8U    SafeLoop;
extern INT8U 	GUC_TestFlg;       //进入测试状态标志,0-非测试状态;1-测试状态;

typedef union                   //电梯状态结构定义,用于实现对电梯特殊状态的位操作
{
    INT8U byte;

    struct
    {
        INT8U  OutOfService  :1;  //暂停
        INT8U  FullLoad      :1;  //满载
        INT8U  Fireman       :1;  //火灾
        INT8U  OverLoad      :1;  //超载
        INT8U  Inspection    :1;  //检修
        INT8U  Fault         :1;  //故障
        INT8U  Park          :1;  //锁梯
        INT8U  Independent   :1;  //独立
    } bit;
} STATUS_DATA;

extern STATUS_DATA G_EleStat;    //结构体变量,存储电梯状态

extern void init_CAN_2(void);       //CAN控制器初始化
extern void CANTranMng(void);    //待发送CAN数据处理
extern void CANTran(void);       //CAN数据发送
#endif