/*
 MB96610 Series I/O register declaration file V01L10
 ALL RIGHTS RESERVED, COPYRIGHT (C) FUJITSU SEMICONDUCTOR LIMITED 2011
 LICENSED MATERIAL - PROGRAM PROPERTY OF FUJITSU SEMICONDUCTOR LIMITED
*/
#ifndef _MB96610_H
#define _MB96610_H

#ifdef  __IO_NEAR
#ifdef  __IO_FAR
#error "__IO_NEAR and __IO_FAR must not be defined at the same time"
#else
#define ___IOWIDTH __near
#endif
#else
#ifdef __IO_FAR
#define ___IOWIDTH __far
#else                               /* specified by memory model */
#define ___IOWIDTH
#endif
#endif

#ifdef  __IO_DEFINE
#define __IO_EXTERN __io
#define __IO_EXTENDED volatile ___IOWIDTH
#else
#define __IO_EXTERN   extern __io      /* for data, which can have __io */
#define __IO_EXTENDED extern volatile ___IOWIDTH
#endif

typedef unsigned char        __BYTE;
typedef unsigned short       __WORD;
typedef unsigned long        __LWORD;
typedef const unsigned short __WORD_READ;

#define	CONSTANT_0	(0)
#define	CONSTANT_1	(1)
#define	CONSTANT_2	(2)
#define	CONSTANT_3	(3)
#define	CONSTANT_4	(4)
#define	CONSTANT_5	(5)
#define	CONSTANT_6	(6)
#define	CONSTANT_7	(7)
#define	CONSTANT_8	(8)
#define	CONSTANT_9	(9)
#define	CONSTANT_10	(10)
#define	CONSTANT_11	(11)
#define	CONSTANT_12	(12)
#define	CONSTANT_13	(13)
#define	CONSTANT_14	(14)
#define	CONSTANT_15	(15)
#define	CONSTANT_16	(16)
#define	CONSTANT_17	(17)
#define	CONSTANT_18	(18)
#define	CONSTANT_19	(19)
#define	CONSTANT_20	(20)
#define	CONSTANT_21	(21)
#define	CONSTANT_22	(22)
#define	CONSTANT_23	(23)
#define	CONSTANT_24	(24)
#define	CONSTANT_25	(25)
#define	CONSTANT_26	(26)
#define	CONSTANT_27	(27)
#define	CONSTANT_28	(28)
#define	CONSTANT_29	(29)
#define	CONSTANT_30	(30)
#define	CONSTANT_31	(31)
#define	CONSTANT_32	(32)
#define	CONSTANT_33	(33)
#define	CONSTANT_34	(34)
#define	CONSTANT_35	(35)
#define	CONSTANT_36	(36)
#define	CONSTANT_37	(37)
#define	CONSTANT_38	(38)
#define	CONSTANT_39	(39)
#define	CONSTANT_40	(40)
#define	CONSTANT_41	(41)
#define	CONSTANT_42	(42)
#define	CONSTANT_43	(43)
#define	CONSTANT_44	(44)
#define	CONSTANT_45	(45)
#define	CONSTANT_46	(46)
#define	CONSTANT_47	(47)
#define	CONSTANT_48	(48)
#define	CONSTANT_49	(49)
#define	CONSTANT_50	(50)
#define	CONSTANT_51	(51)
#define	CONSTANT_52	(52)
#define	CONSTANT_53	(53)
#define	CONSTANT_54	(54)
#define	CONSTANT_55	(55)
#define	CONSTANT_56	(56)
#define	CONSTANT_57	(57)
#define	CONSTANT_58	(58)
#define	CONSTANT_59	(59)
#define	CONSTANT_60	(60)
#define	CONSTANT_61	(61)
#define	CONSTANT_62	(62)
#define	CONSTANT_63	(63)


#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR00, locate=0x0
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR00STR;

__IO_EXTERN	  PDR00STR	IO_PDR00;
#define	_pdr00		(IO_PDR00)
#define	PDR00		(IO_PDR00.byte)
#define	PDR00_P0  	(IO_PDR00.bit.P0)
#define	PDR00_P1  	(IO_PDR00.bit.P1)
#define	PDR00_P2  	(IO_PDR00.bit.P2)
#define	PDR00_P3  	(IO_PDR00.bit.P3)
#define	PDR00_P4  	(IO_PDR00.bit.P4)
#define	PDR00_P5  	(IO_PDR00.bit.P5)
#define	PDR00_P6  	(IO_PDR00.bit.P6)
#define	PDR00_P7  	(IO_PDR00.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR01, locate=0x1
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR01STR;

__IO_EXTERN	  PDR01STR	IO_PDR01;
#define	_pdr01		(IO_PDR01)
#define	PDR01		(IO_PDR01.byte)
#define	PDR01_P0  	(IO_PDR01.bit.P0)
#define	PDR01_P1  	(IO_PDR01.bit.P1)
#define	PDR01_P2  	(IO_PDR01.bit.P2)
#define	PDR01_P3  	(IO_PDR01.bit.P3)
#define	PDR01_P4  	(IO_PDR01.bit.P4)
#define	PDR01_P5  	(IO_PDR01.bit.P5)
#define	PDR01_P6  	(IO_PDR01.bit.P6)
#define	PDR01_P7  	(IO_PDR01.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR02, locate=0x2
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR02STR;

__IO_EXTERN	  PDR02STR	IO_PDR02;
#define	_pdr02		(IO_PDR02)
#define	PDR02		(IO_PDR02.byte)
#define	PDR02_P0  	(IO_PDR02.bit.P0)
#define	PDR02_P1  	(IO_PDR02.bit.P1)
#define	PDR02_P2  	(IO_PDR02.bit.P2)
#define	PDR02_P3  	(IO_PDR02.bit.P3)
#define	PDR02_P4  	(IO_PDR02.bit.P4)
#define	PDR02_P5  	(IO_PDR02.bit.P5)
#define	PDR02_P6  	(IO_PDR02.bit.P6)
#define	PDR02_P7  	(IO_PDR02.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR03, locate=0x3
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR03STR;

__IO_EXTERN	  PDR03STR	IO_PDR03;
#define	_pdr03		(IO_PDR03)
#define	PDR03		(IO_PDR03.byte)
#define	PDR03_P0  	(IO_PDR03.bit.P0)
#define	PDR03_P1  	(IO_PDR03.bit.P1)
#define	PDR03_P2  	(IO_PDR03.bit.P2)
#define	PDR03_P3  	(IO_PDR03.bit.P3)
#define	PDR03_P4  	(IO_PDR03.bit.P4)
#define	PDR03_P5  	(IO_PDR03.bit.P5)
#define	PDR03_P6  	(IO_PDR03.bit.P6)
#define	PDR03_P7  	(IO_PDR03.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR04, locate=0x4
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR04STR;

__IO_EXTERN	  PDR04STR	IO_PDR04;
#define	_pdr04		(IO_PDR04)
#define	PDR04		(IO_PDR04.byte)
#define	PDR04_P0  	(IO_PDR04.bit.P0)
#define	PDR04_P1  	(IO_PDR04.bit.P1)
#define	PDR04_P2  	(IO_PDR04.bit.P2)
#define	PDR04_P3  	(IO_PDR04.bit.P3)
#define	PDR04_P4  	(IO_PDR04.bit.P4)
#define	PDR04_P5  	(IO_PDR04.bit.P5)
#define	PDR04_P6  	(IO_PDR04.bit.P6)
#define	PDR04_P7  	(IO_PDR04.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR05, locate=0x5
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR05STR;

__IO_EXTERN	  PDR05STR	IO_PDR05;
#define	_pdr05		(IO_PDR05)
#define	PDR05		(IO_PDR05.byte)
#define	PDR05_P0  	(IO_PDR05.bit.P0)
#define	PDR05_P1  	(IO_PDR05.bit.P1)
#define	PDR05_P2  	(IO_PDR05.bit.P2)
#define	PDR05_P3  	(IO_PDR05.bit.P3)
#define	PDR05_P4  	(IO_PDR05.bit.P4)
#define	PDR05_P5  	(IO_PDR05.bit.P5)
#define	PDR05_P6  	(IO_PDR05.bit.P6)
#define	PDR05_P7  	(IO_PDR05.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR06, locate=0x6
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR06STR;

__IO_EXTERN	  PDR06STR	IO_PDR06;
#define	_pdr06		(IO_PDR06)
#define	PDR06		(IO_PDR06.byte)
#define	PDR06_P0  	(IO_PDR06.bit.P0)
#define	PDR06_P1  	(IO_PDR06.bit.P1)
#define	PDR06_P2  	(IO_PDR06.bit.P2)
#define	PDR06_P3  	(IO_PDR06.bit.P3)
#define	PDR06_P4  	(IO_PDR06.bit.P4)
#define	PDR06_P5  	(IO_PDR06.bit.P5)
#define	PDR06_P6  	(IO_PDR06.bit.P6)
#define	PDR06_P7  	(IO_PDR06.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR07, locate=0x7
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR07STR;

__IO_EXTERN	  PDR07STR	IO_PDR07;
#define	_pdr07		(IO_PDR07)
#define	PDR07		(IO_PDR07.byte)
#define	PDR07_P0  	(IO_PDR07.bit.P0)
#define	PDR07_P1  	(IO_PDR07.bit.P1)
#define	PDR07_P2  	(IO_PDR07.bit.P2)
#define	PDR07_P3  	(IO_PDR07.bit.P3)
#define	PDR07_P4  	(IO_PDR07.bit.P4)
#define	PDR07_P5  	(IO_PDR07.bit.P5)
#define	PDR07_P6  	(IO_PDR07.bit.P6)
#define	PDR07_P7  	(IO_PDR07.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR17, locate=0x11
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	P7:1;
			__BYTE	P6:1;
			__BYTE	P5:1;
			__BYTE	P4:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
#else
			__BYTE	P0:1;
			__BYTE	P1:1;
			__BYTE	P2:1;
			__BYTE	P3:1;
			__BYTE	P4:1;
			__BYTE	P5:1;
			__BYTE	P6:1;
			__BYTE	P7:1;
#endif
	} bitc;
} PDR17STR;

__IO_EXTERN	  PDR17STR	IO_PDR17;
#define	_pdr17		(IO_PDR17)
#define	PDR17		(IO_PDR17.byte)
#define	PDR17_P0  	(IO_PDR17.bit.P0)
#define	PDR17_P1  	(IO_PDR17.bit.P1)
#define	PDR17_P2  	(IO_PDR17.bit.P2)
#define	PDR17_P3  	(IO_PDR17.bit.P3)
#define	PDR17_P4  	(IO_PDR17.bit.P4)
#define	PDR17_P5  	(IO_PDR17.bit.P5)
#define	PDR17_P6  	(IO_PDR17.bit.P6)
#define	PDR17_P7  	(IO_PDR17.bit.P7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ADCSL, locate=0x18
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD:2;
			__BYTE	S10:1;
			__BYTE	CSEN:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	CSEN:1;
			__BYTE	S10:1;
			__BYTE	MD:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	S10:1;
			__BYTE	CSEN:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	CSEN:1;
			__BYTE	S10:1;
			__BYTE	MD0:1;
			__BYTE	MD1:1;
#endif
	} bitc;
} ADCSLSTR;

__IO_EXTERN	  ADCSLSTR	IO_ADCSL;
#define	_adcsl		(IO_ADCSL)
#define	ADCSL		(IO_ADCSL.byte)
#define	ADCSL_CSEN  	(IO_ADCSL.bit.CSEN)
#define	ADCSL_S10  	(IO_ADCSL.bit.S10)
#define	ADCSL_MD  	(IO_ADCSL.bit.MD)
#define	ADCSL_MD0  	(IO_ADCSL.bitc.MD0)
#define	ADCSL_MD1  	(IO_ADCSL.bitc.MD1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ADCSH, locate=0x19
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BUSY:1;
			__BYTE	INT:1;
			__BYTE	INTE:1;
			__BYTE	PAUS:1;
			__BYTE	STS:2;
			__BYTE	STRT:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	STRT:1;
			__BYTE	STS:2;
			__BYTE	PAUS:1;
			__BYTE	INTE:1;
			__BYTE	INT:1;
			__BYTE	BUSY:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BUSY:1;
			__BYTE	INT:1;
			__BYTE	INTE:1;
			__BYTE	PAUS:1;
			__BYTE	STS1:1;
			__BYTE	STS0:1;
			__BYTE	STRT:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	STRT:1;
			__BYTE	STS0:1;
			__BYTE	STS1:1;
			__BYTE	PAUS:1;
			__BYTE	INTE:1;
			__BYTE	INT:1;
			__BYTE	BUSY:1;
#endif
	} bitc;
} ADCSHSTR;

__IO_EXTERN	  ADCSHSTR	IO_ADCSH;
#define	_adcsh		(IO_ADCSH)
#define	ADCSH		(IO_ADCSH.byte)
#define	ADCSH_STRT  	(IO_ADCSH.bit.STRT)
#define	ADCSH_STS  	(IO_ADCSH.bit.STS)
#define	ADCSH_STS0  	(IO_ADCSH.bitc.STS0)
#define	ADCSH_STS1  	(IO_ADCSH.bitc.STS1)
#define	ADCSH_PAUS  	(IO_ADCSH.bit.PAUS)
#define	ADCSH_INTE  	(IO_ADCSH.bit.INTE)
#define	ADCSH_INT  	(IO_ADCSH.bit.INT)
#define	ADCSH_BUSY  	(IO_ADCSH.bit.BUSY)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ADCR, locate=0x1A
#endif

__IO_EXTERN	const	union {
	__WORD	word;
	__BYTE	DATA8;
	__WORD	DATA10;
} IO_ADCR;

#define	ADCR		(IO_ADCR.word)
#define	ADCR_DATA8	(IO_ADCR.DATA8)
#define	ADCR_DATA10	(IO_ADCR.DATA10)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ADSR, locate=0x1C
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ST:3;
			__WORD	CT:3;
			__WORD	ANS:5;
			__WORD	ANE:5;
#else
			__WORD	ANE:5;
			__WORD	ANS:5;
			__WORD	CT:3;
			__WORD	ST:3;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ST2:1;
			__WORD	ST1:1;
			__WORD	ST0:1;
			__WORD	CT2:1;
			__WORD	CT1:1;
			__WORD	CT0:1;
			__WORD	ANS4:1;
			__WORD	ANS3:1;
			__WORD	ANS2:1;
			__WORD	ANS1:1;
			__WORD	ANS0:1;
			__WORD	ANE4:1;
			__WORD	ANE3:1;
			__WORD	ANE2:1;
			__WORD	ANE1:1;
			__WORD	ANE0:1;
#else
			__WORD	ANE0:1;
			__WORD	ANE1:1;
			__WORD	ANE2:1;
			__WORD	ANE3:1;
			__WORD	ANE4:1;
			__WORD	ANS0:1;
			__WORD	ANS1:1;
			__WORD	ANS2:1;
			__WORD	ANS3:1;
			__WORD	ANS4:1;
			__WORD	CT0:1;
			__WORD	CT1:1;
			__WORD	CT2:1;
			__WORD	ST0:1;
			__WORD	ST1:1;
			__WORD	ST2:1;
#endif
	} bitc;
} ADSRSTR;

__IO_EXTERN	  ADSRSTR	IO_ADSR;
#define	_adsr		(IO_ADSR)
#define	ADSR		(IO_ADSR.word)
#define	ADSR_ANE  	(IO_ADSR.bit.ANE)
#define	ADSR_ANE0  	(IO_ADSR.bitc.ANE0)
#define	ADSR_ANE1  	(IO_ADSR.bitc.ANE1)
#define	ADSR_ANE2  	(IO_ADSR.bitc.ANE2)
#define	ADSR_ANE3  	(IO_ADSR.bitc.ANE3)
#define	ADSR_ANE4  	(IO_ADSR.bitc.ANE4)
#define	ADSR_ANS  	(IO_ADSR.bit.ANS)
#define	ADSR_ANS0  	(IO_ADSR.bitc.ANS0)
#define	ADSR_ANS1  	(IO_ADSR.bitc.ANS1)
#define	ADSR_ANS2  	(IO_ADSR.bitc.ANS2)
#define	ADSR_ANS3  	(IO_ADSR.bitc.ANS3)
#define	ADSR_ANS4  	(IO_ADSR.bitc.ANS4)
#define	ADSR_CT  	(IO_ADSR.bit.CT)
#define	ADSR_CT0  	(IO_ADSR.bitc.CT0)
#define	ADSR_CT1  	(IO_ADSR.bitc.CT1)
#define	ADSR_CT2  	(IO_ADSR.bitc.CT2)
#define	ADSR_ST  	(IO_ADSR.bit.ST)
#define	ADSR_ST0  	(IO_ADSR.bitc.ST0)
#define	ADSR_ST1  	(IO_ADSR.bitc.ST1)
#define	ADSR_ST2  	(IO_ADSR.bitc.ST2)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TCDT0, locate=0x20
#endif

__IO_EXTERN	__WORD	IO_TCDT0;
#define	_tcdt0		(IO_TCDT0)
#define	TCDT0	(_tcdt0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TCCS0, locate=0x22
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK:3;
#else
			__WORD	CLK:3;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK2:1;
			__WORD	CLK1:1;
			__WORD	CLK0:1;
#else
			__WORD	CLK0:1;
			__WORD	CLK1:1;
			__WORD	CLK2:1;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bitc;
} TCCS0STR;

__IO_EXTERN	  TCCS0STR	IO_TCCS0;
#define	_tccs0		(IO_TCCS0)
#define	TCCS0		(IO_TCCS0.word)
#define	TCCS0_CLK  	(IO_TCCS0.bit.CLK)
#define	TCCS0_CLK0  	(IO_TCCS0.bitc.CLK0)
#define	TCCS0_CLK1  	(IO_TCCS0.bitc.CLK1)
#define	TCCS0_CLK2  	(IO_TCCS0.bitc.CLK2)
#define	TCCS0_CLR  	(IO_TCCS0.bit.CLR)
#define	TCCS0_MODE  	(IO_TCCS0.bit.MODE)
#define	TCCS0_STOP  	(IO_TCCS0.bit.STOP)
#define	TCCS0_IVFE  	(IO_TCCS0.bit.IVFE)
#define	TCCS0_IVF  	(IO_TCCS0.bit.IVF)
#define	TCCS0_FSEL  	(IO_TCCS0.bit.FSEL)
#define	TCCS0_ECKE  	(IO_TCCS0.bit.ECKE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TCDT1, locate=0x24
#endif

__IO_EXTERN	__WORD	IO_TCDT1;
#define	_tcdt1		(IO_TCDT1)
#define	TCDT1	(_tcdt1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TCCS1, locate=0x26
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK:3;
#else
			__WORD	CLK:3;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK2:1;
			__WORD	CLK1:1;
			__WORD	CLK0:1;
#else
			__WORD	CLK0:1;
			__WORD	CLK1:1;
			__WORD	CLK2:1;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bitc;
} TCCS1STR;

__IO_EXTERN	  TCCS1STR	IO_TCCS1;
#define	_tccs1		(IO_TCCS1)
#define	TCCS1		(IO_TCCS1.word)
#define	TCCS1_CLK  	(IO_TCCS1.bit.CLK)
#define	TCCS1_CLK0  	(IO_TCCS1.bitc.CLK0)
#define	TCCS1_CLK1  	(IO_TCCS1.bitc.CLK1)
#define	TCCS1_CLK2  	(IO_TCCS1.bitc.CLK2)
#define	TCCS1_CLR  	(IO_TCCS1.bit.CLR)
#define	TCCS1_MODE  	(IO_TCCS1.bit.MODE)
#define	TCCS1_STOP  	(IO_TCCS1.bit.STOP)
#define	TCCS1_IVFE  	(IO_TCCS1.bit.IVFE)
#define	TCCS1_IVF  	(IO_TCCS1.bit.IVF)
#define	TCCS1_FSEL  	(IO_TCCS1.bit.FSEL)
#define	TCCS1_ECKE  	(IO_TCCS1.bit.ECKE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCS0, locate=0x28
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CST1:1;
			__BYTE	CST0:1;
#else
			__BYTE	CST0:1;
			__BYTE	CST1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICE0:1;
			__BYTE	ICE1:1;
			__BYTE	ICP0:1;
			__BYTE	ICP1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CST1:1;
			__BYTE	CST0:1;
#else
			__BYTE	CST0:1;
			__BYTE	CST1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICE0:1;
			__BYTE	ICE1:1;
			__BYTE	ICP0:1;
			__BYTE	ICP1:1;
#endif
	} bitc;
} OCS0STR;

__IO_EXTERN	  OCS0STR	IO_OCS0;
#define	_ocs0		(IO_OCS0)
#define	OCS0		(IO_OCS0.byte)
#define	OCS0_CST0  	(IO_OCS0.bit.CST0)
#define	OCS0_CST1  	(IO_OCS0.bit.CST1)
#define	OCS0_ICE0  	(IO_OCS0.bit.ICE0)
#define	OCS0_ICE1  	(IO_OCS0.bit.ICE1)
#define	OCS0_ICP0  	(IO_OCS0.bit.ICP0)
#define	OCS0_ICP1  	(IO_OCS0.bit.ICP1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCS1, locate=0x29
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CMOD1:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	CMOD0:1;
			__BYTE	OTE1:1;
			__BYTE	OTE0:1;
			__BYTE	OTD1:1;
			__BYTE	OTD0:1;
#else
			__BYTE	OTD0:1;
			__BYTE	OTD1:1;
			__BYTE	OTE0:1;
			__BYTE	OTE1:1;
			__BYTE	CMOD0:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	CMOD1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CMOD1:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	CMOD0:1;
			__BYTE	OTE1:1;
			__BYTE	OTE0:1;
			__BYTE	OTD1:1;
			__BYTE	OTD0:1;
#else
			__BYTE	OTD0:1;
			__BYTE	OTD1:1;
			__BYTE	OTE0:1;
			__BYTE	OTE1:1;
			__BYTE	CMOD0:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	CMOD1:1;
#endif
	} bitc;
} OCS1STR;

__IO_EXTERN	  OCS1STR	IO_OCS1;
#define	_ocs1		(IO_OCS1)
#define	OCS1		(IO_OCS1.byte)
#define	OCS1_OTD0  	(IO_OCS1.bit.OTD0)
#define	OCS1_OTD1  	(IO_OCS1.bit.OTD1)
#define	OCS1_OTE0  	(IO_OCS1.bit.OTE0)
#define	OCS1_OTE1  	(IO_OCS1.bit.OTE1)
#define	OCS1_CMOD0  	(IO_OCS1.bit.CMOD0)
#define	OCS1_CMOD1  	(IO_OCS1.bit.CMOD1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCCP0, locate=0x2A
#endif

__IO_EXTERN	__WORD	IO_OCCP0;
#define	_occp0		(IO_OCCP0)
#define	OCCP0	(_occp0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCCP1, locate=0x2C
#endif

__IO_EXTERN	__WORD	IO_OCCP1;
#define	_occp1		(IO_OCCP1)
#define	OCCP1	(_occp1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCS4, locate=0x34
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CST5:1;
			__BYTE	CST4:1;
#else
			__BYTE	CST4:1;
			__BYTE	CST5:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICE4:1;
			__BYTE	ICE5:1;
			__BYTE	ICP4:1;
			__BYTE	ICP5:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CST5:1;
			__BYTE	CST4:1;
#else
			__BYTE	CST4:1;
			__BYTE	CST5:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICE4:1;
			__BYTE	ICE5:1;
			__BYTE	ICP4:1;
			__BYTE	ICP5:1;
#endif
	} bitc;
} OCS4STR;

__IO_EXTERN	  OCS4STR	IO_OCS4;
#define	_ocs4		(IO_OCS4)
#define	OCS4		(IO_OCS4.byte)
#define	OCS4_CST4  	(IO_OCS4.bit.CST4)
#define	OCS4_CST5  	(IO_OCS4.bit.CST5)
#define	OCS4_ICE4  	(IO_OCS4.bit.ICE4)
#define	OCS4_ICE5  	(IO_OCS4.bit.ICE5)
#define	OCS4_ICP4  	(IO_OCS4.bit.ICP4)
#define	OCS4_ICP5  	(IO_OCS4.bit.ICP5)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCS5, locate=0x35
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CMOD1:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	CMOD0:1;
			__BYTE	OTE5:1;
			__BYTE	OTE4:1;
			__BYTE	OTD5:1;
			__BYTE	OTD4:1;
#else
			__BYTE	OTD4:1;
			__BYTE	OTD5:1;
			__BYTE	OTE4:1;
			__BYTE	OTE5:1;
			__BYTE	CMOD0:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	CMOD1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CMOD1:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	CMOD0:1;
			__BYTE	OTE5:1;
			__BYTE	OTE4:1;
			__BYTE	OTD5:1;
			__BYTE	OTD4:1;
#else
			__BYTE	OTD4:1;
			__BYTE	OTD5:1;
			__BYTE	OTE4:1;
			__BYTE	OTE5:1;
			__BYTE	CMOD0:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	CMOD1:1;
#endif
	} bitc;
} OCS5STR;

__IO_EXTERN	  OCS5STR	IO_OCS5;
#define	_ocs5		(IO_OCS5)
#define	OCS5		(IO_OCS5.byte)
#define	OCS5_OTD4  	(IO_OCS5.bit.OTD4)
#define	OCS5_OTD5  	(IO_OCS5.bit.OTD5)
#define	OCS5_OTE4  	(IO_OCS5.bit.OTE4)
#define	OCS5_OTE5  	(IO_OCS5.bit.OTE5)
#define	OCS5_CMOD0  	(IO_OCS5.bit.CMOD0)
#define	OCS5_CMOD1  	(IO_OCS5.bit.CMOD1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCCP4, locate=0x36
#endif

__IO_EXTERN	__WORD	IO_OCCP4;
#define	_occp4		(IO_OCCP4)
#define	OCCP4	(_occp4)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCS6, locate=0x3A
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP7:1;
			__BYTE	ICP6:1;
			__BYTE	ICE7:1;
			__BYTE	ICE6:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CST7:1;
			__BYTE	CST6:1;
#else
			__BYTE	CST6:1;
			__BYTE	CST7:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICE6:1;
			__BYTE	ICE7:1;
			__BYTE	ICP6:1;
			__BYTE	ICP7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP7:1;
			__BYTE	ICP6:1;
			__BYTE	ICE7:1;
			__BYTE	ICE6:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CST7:1;
			__BYTE	CST6:1;
#else
			__BYTE	CST6:1;
			__BYTE	CST7:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICE6:1;
			__BYTE	ICE7:1;
			__BYTE	ICP6:1;
			__BYTE	ICP7:1;
#endif
	} bitc;
} OCS6STR;

__IO_EXTERN	  OCS6STR	IO_OCS6;
#define	_ocs6		(IO_OCS6)
#define	OCS6		(IO_OCS6.byte)
#define	OCS6_CST6  	(IO_OCS6.bit.CST6)
#define	OCS6_CST7  	(IO_OCS6.bit.CST7)
#define	OCS6_ICE6  	(IO_OCS6.bit.ICE6)
#define	OCS6_ICE7  	(IO_OCS6.bit.ICE7)
#define	OCS6_ICP6  	(IO_OCS6.bit.ICP6)
#define	OCS6_ICP7  	(IO_OCS6.bit.ICP7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCS7, locate=0x3B
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CMOD1:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	CMOD0:1;
			__BYTE	OTE7:1;
			__BYTE	OTE6:1;
			__BYTE	OTD7:1;
			__BYTE	OTD6:1;
#else
			__BYTE	OTD6:1;
			__BYTE	OTD7:1;
			__BYTE	OTE6:1;
			__BYTE	OTE7:1;
			__BYTE	CMOD0:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	CMOD1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CMOD1:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	CMOD0:1;
			__BYTE	OTE7:1;
			__BYTE	OTE6:1;
			__BYTE	OTD7:1;
			__BYTE	OTD6:1;
#else
			__BYTE	OTD6:1;
			__BYTE	OTD7:1;
			__BYTE	OTE6:1;
			__BYTE	OTE7:1;
			__BYTE	CMOD0:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	CMOD1:1;
#endif
	} bitc;
} OCS7STR;

__IO_EXTERN	  OCS7STR	IO_OCS7;
#define	_ocs7		(IO_OCS7)
#define	OCS7		(IO_OCS7.byte)
#define	OCS7_OTD6  	(IO_OCS7.bit.OTD6)
#define	OCS7_OTD7  	(IO_OCS7.bit.OTD7)
#define	OCS7_OTE6  	(IO_OCS7.bit.OTE6)
#define	OCS7_OTE7  	(IO_OCS7.bit.OTE7)
#define	OCS7_CMOD0  	(IO_OCS7.bit.CMOD0)
#define	OCS7_CMOD1  	(IO_OCS7.bit.CMOD1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCCP6, locate=0x3C
#endif

__IO_EXTERN	__WORD	IO_OCCP6;
#define	_occp6		(IO_OCCP6)
#define	OCCP6	(_occp6)

#ifdef __IO_DEFINE
#pragma segment IO=IO_OCCP7, locate=0x3E
#endif

__IO_EXTERN	__WORD	IO_OCCP7;
#define	_occp7		(IO_OCCP7)
#define	OCCP7	(_occp7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ICS01, locate=0x40
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	EG1:2;
			__BYTE	EG0:2;
#else
			__BYTE	EG0:2;
			__BYTE	EG1:2;
			__BYTE	ICE0:1;
			__BYTE	ICE1:1;
			__BYTE	ICP0:1;
			__BYTE	ICP1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	EG11:1;
			__BYTE	EG10:1;
			__BYTE	EG01:1;
			__BYTE	EG00:1;
#else
			__BYTE	EG00:1;
			__BYTE	EG01:1;
			__BYTE	EG10:1;
			__BYTE	EG11:1;
			__BYTE	ICE0:1;
			__BYTE	ICE1:1;
			__BYTE	ICP0:1;
			__BYTE	ICP1:1;
#endif
	} bitc;
} ICS01STR;

__IO_EXTERN	  ICS01STR	IO_ICS01;
#define	_ics01		(IO_ICS01)
#define	ICS01		(IO_ICS01.byte)
#define	ICS01_EG0  	(IO_ICS01.bit.EG0)
#define	ICS01_EG00  	(IO_ICS01.bitc.EG00)
#define	ICS01_EG01  	(IO_ICS01.bitc.EG01)
#define	ICS01_EG1  	(IO_ICS01.bit.EG1)
#define	ICS01_EG10  	(IO_ICS01.bitc.EG10)
#define	ICS01_EG11  	(IO_ICS01.bitc.EG11)
#define	ICS01_ICE0  	(IO_ICS01.bit.ICE0)
#define	ICS01_ICE1  	(IO_ICS01.bit.ICE1)
#define	ICS01_ICP0  	(IO_ICS01.bit.ICP0)
#define	ICS01_ICP1  	(IO_ICS01.bit.ICP1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ICE01, locate=0x41
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	IEI1:1;
			__BYTE	IEI0:1;
#else
			__BYTE	IEI0:1;
			__BYTE	IEI1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	IEI1:1;
			__BYTE	IEI0:1;
#else
			__BYTE	IEI0:1;
			__BYTE	IEI1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ICE01STR;

__IO_EXTERN	  ICE01STR	IO_ICE01;
#define	_ice01		(IO_ICE01)
#define	ICE01		(IO_ICE01.byte)
#define	ICE01_IEI0  	(IO_ICE01.bit.IEI0)
#define	ICE01_IEI1  	(IO_ICE01.bit.IEI1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_IPCP0, locate=0x42
#endif

__IO_EXTERN	const __WORD	IO_IPCP0;
#define	_ipcp0		(IO_IPCP0)
#define	IPCP0	(_ipcp0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_IPCP1, locate=0x44
#endif

__IO_EXTERN	const __WORD	IO_IPCP1;
#define	_ipcp1		(IO_IPCP1)
#define	IPCP1	(_ipcp1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ICS45, locate=0x4C
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	EG5:2;
			__BYTE	EG4:2;
#else
			__BYTE	EG4:2;
			__BYTE	EG5:2;
			__BYTE	ICE4:1;
			__BYTE	ICE5:1;
			__BYTE	ICP4:1;
			__BYTE	ICP5:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	EG51:1;
			__BYTE	EG50:1;
			__BYTE	EG41:1;
			__BYTE	EG40:1;
#else
			__BYTE	EG40:1;
			__BYTE	EG41:1;
			__BYTE	EG50:1;
			__BYTE	EG51:1;
			__BYTE	ICE4:1;
			__BYTE	ICE5:1;
			__BYTE	ICP4:1;
			__BYTE	ICP5:1;
#endif
	} bitc;
} ICS45STR;

__IO_EXTERN	  ICS45STR	IO_ICS45;
#define	_ics45		(IO_ICS45)
#define	ICS45		(IO_ICS45.byte)
#define	ICS45_EG4  	(IO_ICS45.bit.EG4)
#define	ICS45_EG40  	(IO_ICS45.bitc.EG40)
#define	ICS45_EG41  	(IO_ICS45.bitc.EG41)
#define	ICS45_EG5  	(IO_ICS45.bit.EG5)
#define	ICS45_EG50  	(IO_ICS45.bitc.EG50)
#define	ICS45_EG51  	(IO_ICS45.bitc.EG51)
#define	ICS45_ICE4  	(IO_ICS45.bit.ICE4)
#define	ICS45_ICE5  	(IO_ICS45.bit.ICE5)
#define	ICS45_ICP4  	(IO_ICS45.bit.ICP4)
#define	ICS45_ICP5  	(IO_ICS45.bit.ICP5)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ICE45, locate=0x4D
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	IEI5:1;
			__BYTE	IEI4:1;
#else
			__BYTE	IEI4:1;
			__BYTE	IEI5:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	IEI5:1;
			__BYTE	IEI4:1;
#else
			__BYTE	IEI4:1;
			__BYTE	IEI5:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ICE45STR;

__IO_EXTERN	  ICE45STR	IO_ICE45;
#define	_ice45		(IO_ICE45)
#define	ICE45		(IO_ICE45.byte)
#define	ICE45_IEI4  	(IO_ICE45.bit.IEI4)
#define	ICE45_IEI5  	(IO_ICE45.bit.IEI5)

#ifdef __IO_DEFINE
#pragma segment IO=IO_IPCP4, locate=0x4E
#endif

__IO_EXTERN	const __WORD	IO_IPCP4;
#define	_ipcp4		(IO_IPCP4)
#define	IPCP4	(_ipcp4)

#ifdef __IO_DEFINE
#pragma segment IO=IO_IPCP5, locate=0x50
#endif

__IO_EXTERN	const __WORD	IO_IPCP5;
#define	_ipcp5		(IO_IPCP5)
#define	IPCP5	(_ipcp5)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ICS67, locate=0x52
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP7:1;
			__BYTE	ICP6:1;
			__BYTE	ICE7:1;
			__BYTE	ICE6:1;
			__BYTE	EG7:2;
			__BYTE	EG6:2;
#else
			__BYTE	EG6:2;
			__BYTE	EG7:2;
			__BYTE	ICE6:1;
			__BYTE	ICE7:1;
			__BYTE	ICP6:1;
			__BYTE	ICP7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP7:1;
			__BYTE	ICP6:1;
			__BYTE	ICE7:1;
			__BYTE	ICE6:1;
			__BYTE	EG71:1;
			__BYTE	EG70:1;
			__BYTE	EG61:1;
			__BYTE	EG60:1;
#else
			__BYTE	EG60:1;
			__BYTE	EG61:1;
			__BYTE	EG70:1;
			__BYTE	EG71:1;
			__BYTE	ICE6:1;
			__BYTE	ICE7:1;
			__BYTE	ICP6:1;
			__BYTE	ICP7:1;
#endif
	} bitc;
} ICS67STR;

__IO_EXTERN	  ICS67STR	IO_ICS67;
#define	_ics67		(IO_ICS67)
#define	ICS67		(IO_ICS67.byte)
#define	ICS67_EG6  	(IO_ICS67.bit.EG6)
#define	ICS67_EG60  	(IO_ICS67.bitc.EG60)
#define	ICS67_EG61  	(IO_ICS67.bitc.EG61)
#define	ICS67_EG7  	(IO_ICS67.bit.EG7)
#define	ICS67_EG70  	(IO_ICS67.bitc.EG70)
#define	ICS67_EG71  	(IO_ICS67.bitc.EG71)
#define	ICS67_ICE6  	(IO_ICS67.bit.ICE6)
#define	ICS67_ICE7  	(IO_ICS67.bit.ICE7)
#define	ICS67_ICP6  	(IO_ICS67.bit.ICP6)
#define	ICS67_ICP7  	(IO_ICS67.bit.ICP7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ICE67, locate=0x53
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	ICUS6:1;
			__BYTE	RESV1:1;
			__BYTE	IEI6:1;
#else
			__BYTE	IEI6:1;
			__BYTE	RESV1:1;
			__BYTE	ICUS6:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	ICUS6:1;
			__BYTE	RESV1:1;
			__BYTE	IEI6:1;
#else
			__BYTE	IEI6:1;
			__BYTE	RESV1:1;
			__BYTE	ICUS6:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ICE67STR;

__IO_EXTERN	  ICE67STR	IO_ICE67;
#define	_ice67		(IO_ICE67)
#define	ICE67		(IO_ICE67.byte)
#define	ICE67_IEI6  	(IO_ICE67.bit.IEI6)
#define	ICE67_ICUS6  	(IO_ICE67.bit.ICUS6)

#ifdef __IO_DEFINE
#pragma segment IO=IO_IPCP6, locate=0x54
#endif

__IO_EXTERN	const __WORD	IO_IPCP6;
#define	_ipcp6		(IO_IPCP6)
#define	IPCP6	(_ipcp6)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ENIR0, locate=0x58
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	EN7:1;
			__BYTE	EN6:1;
			__BYTE	EN5:1;
			__BYTE	EN4:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
#else
			__BYTE	EN0:1;
			__BYTE	EN1:1;
			__BYTE	EN2:1;
			__BYTE	EN3:1;
			__BYTE	EN4:1;
			__BYTE	EN5:1;
			__BYTE	EN6:1;
			__BYTE	EN7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	EN7:1;
			__BYTE	EN6:1;
			__BYTE	EN5:1;
			__BYTE	EN4:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
#else
			__BYTE	EN0:1;
			__BYTE	EN1:1;
			__BYTE	EN2:1;
			__BYTE	EN3:1;
			__BYTE	EN4:1;
			__BYTE	EN5:1;
			__BYTE	EN6:1;
			__BYTE	EN7:1;
#endif
	} bitc;
} ENIR0STR;

__IO_EXTERN	  ENIR0STR	IO_ENIR0;
#define	_enir0		(IO_ENIR0)
#define	ENIR0		(IO_ENIR0.byte)
#define	ENIR0_EN0  	(IO_ENIR0.bit.EN0)
#define	ENIR0_EN1  	(IO_ENIR0.bit.EN1)
#define	ENIR0_EN2  	(IO_ENIR0.bit.EN2)
#define	ENIR0_EN3  	(IO_ENIR0.bit.EN3)
#define	ENIR0_EN4  	(IO_ENIR0.bit.EN4)
#define	ENIR0_EN5  	(IO_ENIR0.bit.EN5)
#define	ENIR0_EN6  	(IO_ENIR0.bit.EN6)
#define	ENIR0_EN7  	(IO_ENIR0.bit.EN7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_EIRR0, locate=0x59
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ER7:1;
			__BYTE	ER6:1;
			__BYTE	ER5:1;
			__BYTE	ER4:1;
			__BYTE	ER3:1;
			__BYTE	ER2:1;
			__BYTE	ER1:1;
			__BYTE	ER0:1;
#else
			__BYTE	ER0:1;
			__BYTE	ER1:1;
			__BYTE	ER2:1;
			__BYTE	ER3:1;
			__BYTE	ER4:1;
			__BYTE	ER5:1;
			__BYTE	ER6:1;
			__BYTE	ER7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ER7:1;
			__BYTE	ER6:1;
			__BYTE	ER5:1;
			__BYTE	ER4:1;
			__BYTE	ER3:1;
			__BYTE	ER2:1;
			__BYTE	ER1:1;
			__BYTE	ER0:1;
#else
			__BYTE	ER0:1;
			__BYTE	ER1:1;
			__BYTE	ER2:1;
			__BYTE	ER3:1;
			__BYTE	ER4:1;
			__BYTE	ER5:1;
			__BYTE	ER6:1;
			__BYTE	ER7:1;
#endif
	} bitc;
} EIRR0STR;

__IO_EXTERN	  EIRR0STR	IO_EIRR0;
#define	_eirr0		(IO_EIRR0)
#define	EIRR0		(IO_EIRR0.byte)
#define	EIRR0_ER0  	(IO_EIRR0.bit.ER0)
#define	EIRR0_ER1  	(IO_EIRR0.bit.ER1)
#define	EIRR0_ER2  	(IO_EIRR0.bit.ER2)
#define	EIRR0_ER3  	(IO_EIRR0.bit.ER3)
#define	EIRR0_ER4  	(IO_EIRR0.bit.ER4)
#define	EIRR0_ER5  	(IO_EIRR0.bit.ER5)
#define	EIRR0_ER6  	(IO_EIRR0.bit.ER6)
#define	EIRR0_ER7  	(IO_EIRR0.bit.ER7)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ELVR0, locate=0x5A
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	LALB7:2;
			__WORD	LALB6:2;
			__WORD	LALB5:2;
			__WORD	LALB4:2;
			__WORD	LALB3:2;
			__WORD	LALB2:2;
			__WORD	LALB1:2;
			__WORD	LALB0:2;
#else
			__WORD	LALB0:2;
			__WORD	LALB1:2;
			__WORD	LALB2:2;
			__WORD	LALB3:2;
			__WORD	LALB4:2;
			__WORD	LALB5:2;
			__WORD	LALB6:2;
			__WORD	LALB7:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	LALB71:1;
			__WORD	LALB70:1;
			__WORD	LALB61:1;
			__WORD	LALB60:1;
			__WORD	LALB51:1;
			__WORD	LALB50:1;
			__WORD	LALB41:1;
			__WORD	LALB40:1;
			__WORD	LALB31:1;
			__WORD	LALB30:1;
			__WORD	LALB21:1;
			__WORD	LALB20:1;
			__WORD	LALB11:1;
			__WORD	LALB10:1;
			__WORD	LALB01:1;
			__WORD	LALB00:1;
#else
			__WORD	LALB00:1;
			__WORD	LALB01:1;
			__WORD	LALB10:1;
			__WORD	LALB11:1;
			__WORD	LALB20:1;
			__WORD	LALB21:1;
			__WORD	LALB30:1;
			__WORD	LALB31:1;
			__WORD	LALB40:1;
			__WORD	LALB41:1;
			__WORD	LALB50:1;
			__WORD	LALB51:1;
			__WORD	LALB60:1;
			__WORD	LALB61:1;
			__WORD	LALB70:1;
			__WORD	LALB71:1;
#endif
	} bitc;
} ELVR0STR;

__IO_EXTERN	  ELVR0STR	IO_ELVR0;
#define	_elvr0		(IO_ELVR0)
#define	ELVR0		(IO_ELVR0.word)
#define	ELVR0_LALB0  	(IO_ELVR0.bit.LALB0)
#define	ELVR0_LALB00  	(IO_ELVR0.bitc.LALB00)
#define	ELVR0_LALB01  	(IO_ELVR0.bitc.LALB01)
#define	ELVR0_LALB1  	(IO_ELVR0.bit.LALB1)
#define	ELVR0_LALB10  	(IO_ELVR0.bitc.LALB10)
#define	ELVR0_LALB11  	(IO_ELVR0.bitc.LALB11)
#define	ELVR0_LALB2  	(IO_ELVR0.bit.LALB2)
#define	ELVR0_LALB20  	(IO_ELVR0.bitc.LALB20)
#define	ELVR0_LALB21  	(IO_ELVR0.bitc.LALB21)
#define	ELVR0_LALB3  	(IO_ELVR0.bit.LALB3)
#define	ELVR0_LALB30  	(IO_ELVR0.bitc.LALB30)
#define	ELVR0_LALB31  	(IO_ELVR0.bitc.LALB31)
#define	ELVR0_LALB4  	(IO_ELVR0.bit.LALB4)
#define	ELVR0_LALB40  	(IO_ELVR0.bitc.LALB40)
#define	ELVR0_LALB41  	(IO_ELVR0.bitc.LALB41)
#define	ELVR0_LALB5  	(IO_ELVR0.bit.LALB5)
#define	ELVR0_LALB50  	(IO_ELVR0.bitc.LALB50)
#define	ELVR0_LALB51  	(IO_ELVR0.bitc.LALB51)
#define	ELVR0_LALB6  	(IO_ELVR0.bit.LALB6)
#define	ELVR0_LALB60  	(IO_ELVR0.bitc.LALB60)
#define	ELVR0_LALB61  	(IO_ELVR0.bitc.LALB61)
#define	ELVR0_LALB7  	(IO_ELVR0.bit.LALB7)
#define	ELVR0_LALB70  	(IO_ELVR0.bitc.LALB70)
#define	ELVR0_LALB71  	(IO_ELVR0.bitc.LALB71)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ENIR1, locate=0x5C
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	EN15:1;
			__BYTE	EN14:1;
			__BYTE	EN13:1;
			__BYTE	EN12:1;
			__BYTE	EN11:1;
			__BYTE	EN10:1;
			__BYTE	EN9:1;
			__BYTE	EN8:1;
#else
			__BYTE	EN8:1;
			__BYTE	EN9:1;
			__BYTE	EN10:1;
			__BYTE	EN11:1;
			__BYTE	EN12:1;
			__BYTE	EN13:1;
			__BYTE	EN14:1;
			__BYTE	EN15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	EN15:1;
			__BYTE	EN14:1;
			__BYTE	EN13:1;
			__BYTE	EN12:1;
			__BYTE	EN11:1;
			__BYTE	EN10:1;
			__BYTE	EN9:1;
			__BYTE	EN8:1;
#else
			__BYTE	EN8:1;
			__BYTE	EN9:1;
			__BYTE	EN10:1;
			__BYTE	EN11:1;
			__BYTE	EN12:1;
			__BYTE	EN13:1;
			__BYTE	EN14:1;
			__BYTE	EN15:1;
#endif
	} bitc;
} ENIR1STR;

__IO_EXTERN	  ENIR1STR	IO_ENIR1;
#define	_enir1		(IO_ENIR1)
#define	ENIR1		(IO_ENIR1.byte)
#define	ENIR1_EN8  	(IO_ENIR1.bit.EN8)
#define	ENIR1_EN9  	(IO_ENIR1.bit.EN9)
#define	ENIR1_EN10  	(IO_ENIR1.bit.EN10)
#define	ENIR1_EN11  	(IO_ENIR1.bit.EN11)
#define	ENIR1_EN12  	(IO_ENIR1.bit.EN12)
#define	ENIR1_EN13  	(IO_ENIR1.bit.EN13)
#define	ENIR1_EN14  	(IO_ENIR1.bit.EN14)
#define	ENIR1_EN15  	(IO_ENIR1.bit.EN15)

#ifdef __IO_DEFINE
#pragma segment IO=IO_EIRR1, locate=0x5D
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ER15:1;
			__BYTE	ER14:1;
			__BYTE	ER13:1;
			__BYTE	ER12:1;
			__BYTE	ER11:1;
			__BYTE	ER10:1;
			__BYTE	ER9:1;
			__BYTE	ER8:1;
#else
			__BYTE	ER8:1;
			__BYTE	ER9:1;
			__BYTE	ER10:1;
			__BYTE	ER11:1;
			__BYTE	ER12:1;
			__BYTE	ER13:1;
			__BYTE	ER14:1;
			__BYTE	ER15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ER15:1;
			__BYTE	ER14:1;
			__BYTE	ER13:1;
			__BYTE	ER12:1;
			__BYTE	ER11:1;
			__BYTE	ER10:1;
			__BYTE	ER9:1;
			__BYTE	ER8:1;
#else
			__BYTE	ER8:1;
			__BYTE	ER9:1;
			__BYTE	ER10:1;
			__BYTE	ER11:1;
			__BYTE	ER12:1;
			__BYTE	ER13:1;
			__BYTE	ER14:1;
			__BYTE	ER15:1;
#endif
	} bitc;
} EIRR1STR;

__IO_EXTERN	  EIRR1STR	IO_EIRR1;
#define	_eirr1		(IO_EIRR1)
#define	EIRR1		(IO_EIRR1.byte)
#define	EIRR1_ER8  	(IO_EIRR1.bit.ER8)
#define	EIRR1_ER9  	(IO_EIRR1.bit.ER9)
#define	EIRR1_ER10  	(IO_EIRR1.bit.ER10)
#define	EIRR1_ER11  	(IO_EIRR1.bit.ER11)
#define	EIRR1_ER12  	(IO_EIRR1.bit.ER12)
#define	EIRR1_ER13  	(IO_EIRR1.bit.ER13)
#define	EIRR1_ER14  	(IO_EIRR1.bit.ER14)
#define	EIRR1_ER15  	(IO_EIRR1.bit.ER15)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ELVR1, locate=0x5E
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	LALB15:2;
			__WORD	LALB14:2;
			__WORD	LALB13:2;
			__WORD	LALB12:2;
			__WORD	LALB11:2;
			__WORD	LALB10:2;
			__WORD	LALB9:2;
			__WORD	LALB8:2;
#else
			__WORD	LALB8:2;
			__WORD	LALB9:2;
			__WORD	LALB10:2;
			__WORD	LALB11:2;
			__WORD	LALB12:2;
			__WORD	LALB13:2;
			__WORD	LALB14:2;
			__WORD	LALB15:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	LALB151:1;
			__WORD	LALB150:1;
			__WORD	LALB141:1;
			__WORD	LALB140:1;
			__WORD	LALB131:1;
			__WORD	LALB130:1;
			__WORD	LALB121:1;
			__WORD	LALB120:1;
			__WORD	LALB111:1;
			__WORD	LALB110:1;
			__WORD	LALB101:1;
			__WORD	LALB100:1;
			__WORD	LALB91:1;
			__WORD	LALB90:1;
			__WORD	LALB81:1;
			__WORD	LALB80:1;
#else
			__WORD	LALB80:1;
			__WORD	LALB81:1;
			__WORD	LALB90:1;
			__WORD	LALB91:1;
			__WORD	LALB100:1;
			__WORD	LALB101:1;
			__WORD	LALB110:1;
			__WORD	LALB111:1;
			__WORD	LALB120:1;
			__WORD	LALB121:1;
			__WORD	LALB130:1;
			__WORD	LALB131:1;
			__WORD	LALB140:1;
			__WORD	LALB141:1;
			__WORD	LALB150:1;
			__WORD	LALB151:1;
#endif
	} bitc;
} ELVR1STR;

__IO_EXTERN	  ELVR1STR	IO_ELVR1;
#define	_elvr1		(IO_ELVR1)
#define	ELVR1		(IO_ELVR1.word)
#define	ELVR1_LALB8  	(IO_ELVR1.bit.LALB8)
#define	ELVR1_LALB80  	(IO_ELVR1.bitc.LALB80)
#define	ELVR1_LALB81  	(IO_ELVR1.bitc.LALB81)
#define	ELVR1_LALB9  	(IO_ELVR1.bit.LALB9)
#define	ELVR1_LALB90  	(IO_ELVR1.bitc.LALB90)
#define	ELVR1_LALB91  	(IO_ELVR1.bitc.LALB91)
#define	ELVR1_LALB10  	(IO_ELVR1.bit.LALB10)
#define	ELVR1_LALB100  	(IO_ELVR1.bitc.LALB100)
#define	ELVR1_LALB101  	(IO_ELVR1.bitc.LALB101)
#define	ELVR1_LALB11  	(IO_ELVR1.bit.LALB11)
#define	ELVR1_LALB110  	(IO_ELVR1.bitc.LALB110)
#define	ELVR1_LALB111  	(IO_ELVR1.bitc.LALB111)
#define	ELVR1_LALB12  	(IO_ELVR1.bit.LALB12)
#define	ELVR1_LALB120  	(IO_ELVR1.bitc.LALB120)
#define	ELVR1_LALB121  	(IO_ELVR1.bitc.LALB121)
#define	ELVR1_LALB13  	(IO_ELVR1.bit.LALB13)
#define	ELVR1_LALB130  	(IO_ELVR1.bitc.LALB130)
#define	ELVR1_LALB131  	(IO_ELVR1.bitc.LALB131)
#define	ELVR1_LALB14  	(IO_ELVR1.bit.LALB14)
#define	ELVR1_LALB140  	(IO_ELVR1.bitc.LALB140)
#define	ELVR1_LALB141  	(IO_ELVR1.bitc.LALB141)
#define	ELVR1_LALB15  	(IO_ELVR1.bit.LALB15)
#define	ELVR1_LALB150  	(IO_ELVR1.bitc.LALB150)
#define	ELVR1_LALB151  	(IO_ELVR1.bitc.LALB151)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TMCSR1, locate=0x64
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	DIN:1;
			__WORD	EN:1;
			__WORD	RESV10:1;
			__WORD	FSEL:1;
			__WORD	CSL:2;
			__WORD	MOD:3;
			__WORD	OUTE:1;
			__WORD	OUTL:1;
			__WORD	RELD:1;
			__WORD	INTE:1;
			__WORD	UF:1;
			__WORD	CNTE:1;
			__WORD	TRG:1;
#else
			__WORD	TRG:1;
			__WORD	CNTE:1;
			__WORD	UF:1;
			__WORD	INTE:1;
			__WORD	RELD:1;
			__WORD	OUTL:1;
			__WORD	OUTE:1;
			__WORD	MOD:3;
			__WORD	CSL:2;
			__WORD	FSEL:1;
			__WORD	RESV10:1;
			__WORD	EN:1;
			__WORD	DIN:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	DIN:1;
			__WORD	EN:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	CSL1:1;
			__WORD	CSL0:1;
			__WORD	MOD2:1;
			__WORD	MOD1:1;
			__WORD	MOD0:1;
			__WORD	OUTE:1;
			__WORD	OUTL:1;
			__WORD	RELD:1;
			__WORD	INTE:1;
			__WORD	UF:1;
			__WORD	CNTE:1;
			__WORD	TRG:1;
#else
			__WORD	TRG:1;
			__WORD	CNTE:1;
			__WORD	UF:1;
			__WORD	INTE:1;
			__WORD	RELD:1;
			__WORD	OUTL:1;
			__WORD	OUTE:1;
			__WORD	MOD0:1;
			__WORD	MOD1:1;
			__WORD	MOD2:1;
			__WORD	CSL0:1;
			__WORD	CSL1:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	EN:1;
			__WORD	DIN:1;
#endif
	} bitc;
} TMCSR1STR;

__IO_EXTERN	  TMCSR1STR	IO_TMCSR1;
#define	_tmcsr1		(IO_TMCSR1)
#define	TMCSR1		(IO_TMCSR1.word)
#define	TMCSR1_TRG  	(IO_TMCSR1.bit.TRG)
#define	TMCSR1_CNTE  	(IO_TMCSR1.bit.CNTE)
#define	TMCSR1_UF  	(IO_TMCSR1.bit.UF)
#define	TMCSR1_INTE  	(IO_TMCSR1.bit.INTE)
#define	TMCSR1_RELD  	(IO_TMCSR1.bit.RELD)
#define	TMCSR1_OUTL  	(IO_TMCSR1.bit.OUTL)
#define	TMCSR1_OUTE  	(IO_TMCSR1.bit.OUTE)
#define	TMCSR1_MOD  	(IO_TMCSR1.bit.MOD)
#define	TMCSR1_MOD0  	(IO_TMCSR1.bitc.MOD0)
#define	TMCSR1_MOD1  	(IO_TMCSR1.bitc.MOD1)
#define	TMCSR1_MOD2  	(IO_TMCSR1.bitc.MOD2)
#define	TMCSR1_CSL  	(IO_TMCSR1.bit.CSL)
#define	TMCSR1_CSL0  	(IO_TMCSR1.bitc.CSL0)
#define	TMCSR1_CSL1  	(IO_TMCSR1.bitc.CSL1)
#define	TMCSR1_FSEL  	(IO_TMCSR1.bit.FSEL)
#define	TMCSR1_EN  	(IO_TMCSR1.bit.EN)
#define	TMCSR1_DIN  	(IO_TMCSR1.bit.DIN)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TMR1, locate=0x66
#endif

__IO_EXTERN	__WORD	IO_TMR1;
#define	_tmr1		(IO_TMR1)
#define	TMR1	(_tmr1)
#define	_tmrlr1		(IO_TMR1)
#define	TMRLR1	(_tmrlr1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TMCSR3, locate=0x6C
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	DIN:1;
			__WORD	EN:1;
			__WORD	RESV10:1;
			__WORD	FSEL:1;
			__WORD	CSL:2;
			__WORD	MOD:3;
			__WORD	OUTE:1;
			__WORD	OUTL:1;
			__WORD	RELD:1;
			__WORD	INTE:1;
			__WORD	UF:1;
			__WORD	CNTE:1;
			__WORD	TRG:1;
#else
			__WORD	TRG:1;
			__WORD	CNTE:1;
			__WORD	UF:1;
			__WORD	INTE:1;
			__WORD	RELD:1;
			__WORD	OUTL:1;
			__WORD	OUTE:1;
			__WORD	MOD:3;
			__WORD	CSL:2;
			__WORD	FSEL:1;
			__WORD	RESV10:1;
			__WORD	EN:1;
			__WORD	DIN:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	DIN:1;
			__WORD	EN:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	CSL1:1;
			__WORD	CSL0:1;
			__WORD	MOD2:1;
			__WORD	MOD1:1;
			__WORD	MOD0:1;
			__WORD	OUTE:1;
			__WORD	OUTL:1;
			__WORD	RELD:1;
			__WORD	INTE:1;
			__WORD	UF:1;
			__WORD	CNTE:1;
			__WORD	TRG:1;
#else
			__WORD	TRG:1;
			__WORD	CNTE:1;
			__WORD	UF:1;
			__WORD	INTE:1;
			__WORD	RELD:1;
			__WORD	OUTL:1;
			__WORD	OUTE:1;
			__WORD	MOD0:1;
			__WORD	MOD1:1;
			__WORD	MOD2:1;
			__WORD	CSL0:1;
			__WORD	CSL1:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	EN:1;
			__WORD	DIN:1;
#endif
	} bitc;
} TMCSR3STR;

__IO_EXTERN	  TMCSR3STR	IO_TMCSR3;
#define	_tmcsr3		(IO_TMCSR3)
#define	TMCSR3		(IO_TMCSR3.word)
#define	TMCSR3_TRG  	(IO_TMCSR3.bit.TRG)
#define	TMCSR3_CNTE  	(IO_TMCSR3.bit.CNTE)
#define	TMCSR3_UF  	(IO_TMCSR3.bit.UF)
#define	TMCSR3_INTE  	(IO_TMCSR3.bit.INTE)
#define	TMCSR3_RELD  	(IO_TMCSR3.bit.RELD)
#define	TMCSR3_OUTL  	(IO_TMCSR3.bit.OUTL)
#define	TMCSR3_OUTE  	(IO_TMCSR3.bit.OUTE)
#define	TMCSR3_MOD  	(IO_TMCSR3.bit.MOD)
#define	TMCSR3_MOD0  	(IO_TMCSR3.bitc.MOD0)
#define	TMCSR3_MOD1  	(IO_TMCSR3.bitc.MOD1)
#define	TMCSR3_MOD2  	(IO_TMCSR3.bitc.MOD2)
#define	TMCSR3_CSL  	(IO_TMCSR3.bit.CSL)
#define	TMCSR3_CSL0  	(IO_TMCSR3.bitc.CSL0)
#define	TMCSR3_CSL1  	(IO_TMCSR3.bitc.CSL1)
#define	TMCSR3_FSEL  	(IO_TMCSR3.bit.FSEL)
#define	TMCSR3_EN  	(IO_TMCSR3.bit.EN)
#define	TMCSR3_DIN  	(IO_TMCSR3.bit.DIN)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TMR3, locate=0x6E
#endif

__IO_EXTERN	__WORD	IO_TMR3;
#define	_tmr3		(IO_TMR3)
#define	TMR3	(_tmr3)
#define	_tmrlr3		(IO_TMR3)
#define	TMRLR3	(_tmrlr3)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TMCSR6, locate=0x70
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	DIN:1;
			__WORD	EN:1;
			__WORD	RESV10:1;
			__WORD	FSEL:1;
			__WORD	CSL:2;
			__WORD	MOD:3;
			__WORD	OUTE:1;
			__WORD	OUTL:1;
			__WORD	RELD:1;
			__WORD	INTE:1;
			__WORD	UF:1;
			__WORD	CNTE:1;
			__WORD	TRG:1;
#else
			__WORD	TRG:1;
			__WORD	CNTE:1;
			__WORD	UF:1;
			__WORD	INTE:1;
			__WORD	RELD:1;
			__WORD	OUTL:1;
			__WORD	OUTE:1;
			__WORD	MOD:3;
			__WORD	CSL:2;
			__WORD	FSEL:1;
			__WORD	RESV10:1;
			__WORD	EN:1;
			__WORD	DIN:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	DIN:1;
			__WORD	EN:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	CSL1:1;
			__WORD	CSL0:1;
			__WORD	MOD2:1;
			__WORD	MOD1:1;
			__WORD	MOD0:1;
			__WORD	OUTE:1;
			__WORD	OUTL:1;
			__WORD	RELD:1;
			__WORD	INTE:1;
			__WORD	UF:1;
			__WORD	CNTE:1;
			__WORD	TRG:1;
#else
			__WORD	TRG:1;
			__WORD	CNTE:1;
			__WORD	UF:1;
			__WORD	INTE:1;
			__WORD	RELD:1;
			__WORD	OUTL:1;
			__WORD	OUTE:1;
			__WORD	MOD0:1;
			__WORD	MOD1:1;
			__WORD	MOD2:1;
			__WORD	CSL0:1;
			__WORD	CSL1:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	EN:1;
			__WORD	DIN:1;
#endif
	} bitc;
} TMCSR6STR;

__IO_EXTERN	  TMCSR6STR	IO_TMCSR6;
#define	_tmcsr6		(IO_TMCSR6)
#define	TMCSR6		(IO_TMCSR6.word)
#define	TMCSR6_TRG  	(IO_TMCSR6.bit.TRG)
#define	TMCSR6_CNTE  	(IO_TMCSR6.bit.CNTE)
#define	TMCSR6_UF  	(IO_TMCSR6.bit.UF)
#define	TMCSR6_INTE  	(IO_TMCSR6.bit.INTE)
#define	TMCSR6_RELD  	(IO_TMCSR6.bit.RELD)
#define	TMCSR6_OUTL  	(IO_TMCSR6.bit.OUTL)
#define	TMCSR6_OUTE  	(IO_TMCSR6.bit.OUTE)
#define	TMCSR6_MOD  	(IO_TMCSR6.bit.MOD)
#define	TMCSR6_MOD0  	(IO_TMCSR6.bitc.MOD0)
#define	TMCSR6_MOD1  	(IO_TMCSR6.bitc.MOD1)
#define	TMCSR6_MOD2  	(IO_TMCSR6.bitc.MOD2)
#define	TMCSR6_CSL  	(IO_TMCSR6.bit.CSL)
#define	TMCSR6_CSL0  	(IO_TMCSR6.bitc.CSL0)
#define	TMCSR6_CSL1  	(IO_TMCSR6.bitc.CSL1)
#define	TMCSR6_FSEL  	(IO_TMCSR6.bit.FSEL)
#define	TMCSR6_EN  	(IO_TMCSR6.bit.EN)
#define	TMCSR6_DIN  	(IO_TMCSR6.bit.DIN)

#ifdef __IO_DEFINE
#pragma segment IO=IO_TMR6, locate=0x72
#endif

__IO_EXTERN	__WORD	IO_TMR6;
#define	_tmr6		(IO_TMR6)
#define	TMR6	(_tmr6)
#define	_tmrlr6		(IO_TMR6)
#define	TMRLR6	(_tmrlr6)

#ifdef __IO_DEFINE
#pragma segment IO=IO_GCN10, locate=0x74
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	TSEL3:4;
			__WORD	TSEL2:4;
			__WORD	TSEL1:4;
			__WORD	TSEL0:4;
#else
			__WORD	TSEL0:4;
			__WORD	TSEL1:4;
			__WORD	TSEL2:4;
			__WORD	TSEL3:4;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	TSEL33:1;
			__WORD	TSEL32:1;
			__WORD	TSEL31:1;
			__WORD	TSEL30:1;
			__WORD	TSEL23:1;
			__WORD	TSEL22:1;
			__WORD	TSEL21:1;
			__WORD	TSEL20:1;
			__WORD	TSEL13:1;
			__WORD	TSEL12:1;
			__WORD	TSEL11:1;
			__WORD	TSEL10:1;
			__WORD	TSEL03:1;
			__WORD	TSEL02:1;
			__WORD	TSEL01:1;
			__WORD	TSEL00:1;
#else
			__WORD	TSEL00:1;
			__WORD	TSEL01:1;
			__WORD	TSEL02:1;
			__WORD	TSEL03:1;
			__WORD	TSEL10:1;
			__WORD	TSEL11:1;
			__WORD	TSEL12:1;
			__WORD	TSEL13:1;
			__WORD	TSEL20:1;
			__WORD	TSEL21:1;
			__WORD	TSEL22:1;
			__WORD	TSEL23:1;
			__WORD	TSEL30:1;
			__WORD	TSEL31:1;
			__WORD	TSEL32:1;
			__WORD	TSEL33:1;
#endif
	} bitc;
} GCN10STR;

__IO_EXTERN	  GCN10STR	IO_GCN10;
#define	_gcn10		(IO_GCN10)
#define	GCN10		(IO_GCN10.word)
#define	GCN10_TSEL0  	(IO_GCN10.bit.TSEL0)
#define	GCN10_TSEL00  	(IO_GCN10.bitc.TSEL00)
#define	GCN10_TSEL01  	(IO_GCN10.bitc.TSEL01)
#define	GCN10_TSEL02  	(IO_GCN10.bitc.TSEL02)
#define	GCN10_TSEL03  	(IO_GCN10.bitc.TSEL03)
#define	GCN10_TSEL1  	(IO_GCN10.bit.TSEL1)
#define	GCN10_TSEL10  	(IO_GCN10.bitc.TSEL10)
#define	GCN10_TSEL11  	(IO_GCN10.bitc.TSEL11)
#define	GCN10_TSEL12  	(IO_GCN10.bitc.TSEL12)
#define	GCN10_TSEL13  	(IO_GCN10.bitc.TSEL13)
#define	GCN10_TSEL2  	(IO_GCN10.bit.TSEL2)
#define	GCN10_TSEL20  	(IO_GCN10.bitc.TSEL20)
#define	GCN10_TSEL21  	(IO_GCN10.bitc.TSEL21)
#define	GCN10_TSEL22  	(IO_GCN10.bitc.TSEL22)
#define	GCN10_TSEL23  	(IO_GCN10.bitc.TSEL23)
#define	GCN10_TSEL3  	(IO_GCN10.bit.TSEL3)
#define	GCN10_TSEL30  	(IO_GCN10.bitc.TSEL30)
#define	GCN10_TSEL31  	(IO_GCN10.bitc.TSEL31)
#define	GCN10_TSEL32  	(IO_GCN10.bitc.TSEL32)
#define	GCN10_TSEL33  	(IO_GCN10.bitc.TSEL33)

#ifdef __IO_DEFINE
#pragma segment IO=IO_GCN20, locate=0x76
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	CKSEL3:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	EN3:1;
			__WORD	EN2:1;
			__WORD	EN1:1;
			__WORD	EN0:1;
#else
			__WORD	EN0:1;
			__WORD	EN1:1;
			__WORD	EN2:1;
			__WORD	EN3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	CKSEL0:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL3:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	CKSEL3:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	EN3:1;
			__WORD	EN2:1;
			__WORD	EN1:1;
			__WORD	EN0:1;
#else
			__WORD	EN0:1;
			__WORD	EN1:1;
			__WORD	EN2:1;
			__WORD	EN3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	CKSEL0:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL3:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN20STR;

__IO_EXTERN	  GCN20STR	IO_GCN20;
#define	_gcn20		(IO_GCN20)
#define	GCN20		(IO_GCN20.word)
#define	GCN20_EN0  	(IO_GCN20.bit.EN0)
#define	GCN20_EN1  	(IO_GCN20.bit.EN1)
#define	GCN20_EN2  	(IO_GCN20.bit.EN2)
#define	GCN20_EN3  	(IO_GCN20.bit.EN3)
#define	GCN20_CKSEL0  	(IO_GCN20.bit.CKSEL0)
#define	GCN20_CKSEL1  	(IO_GCN20.bit.CKSEL1)
#define	GCN20_CKSEL2  	(IO_GCN20.bit.CKSEL2)
#define	GCN20_CKSEL3  	(IO_GCN20.bit.CKSEL3)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PTMR0, locate=0x78
#endif

__IO_EXTERN	const __WORD	IO_PTMR0;
#define	_ptmr0		(IO_PTMR0)
#define	PTMR0	(_ptmr0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCSR0, locate=0x7A
#endif

__IO_EXTERN	__WORD	IO_PCSR0;
#define	_pcsr0		(IO_PCSR0)
#define	PCSR0	(_pcsr0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDUT0, locate=0x7C
#endif

__IO_EXTERN	__WORD	IO_PDUT0;
#define	_pdut0		(IO_PDUT0)
#define	PDUT0	(_pdut0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCN0, locate=0x7E
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN0STR;

__IO_EXTERN	  PCN0STR	IO_PCN0;
#define	_pcn0		(IO_PCN0)
#define	PCN0		(IO_PCN0.word)
#define	PCN0_OSEL  	(IO_PCN0.bit.OSEL)
#define	PCN0_OE  	(IO_PCN0.bit.OE)
#define	PCN0_IRS  	(IO_PCN0.bit.IRS)
#define	PCN0_IRS0  	(IO_PCN0.bitc.IRS0)
#define	PCN0_IRS1  	(IO_PCN0.bitc.IRS1)
#define	PCN0_IRQF  	(IO_PCN0.bit.IRQF)
#define	PCN0_IREN  	(IO_PCN0.bit.IREN)
#define	PCN0_EGS  	(IO_PCN0.bit.EGS)
#define	PCN0_EGS0  	(IO_PCN0.bitc.EGS0)
#define	PCN0_EGS1  	(IO_PCN0.bitc.EGS1)
#define	PCN0_MOD  	(IO_PCN0.bit.MOD)
#define	PCN0_PGMS  	(IO_PCN0.bit.PGMS)
#define	PCN0_CKS  	(IO_PCN0.bit.CKS)
#define	PCN0_CKS0  	(IO_PCN0.bitc.CKS0)
#define	PCN0_CKS1  	(IO_PCN0.bitc.CKS1)
#define	PCN0_RTRG  	(IO_PCN0.bit.RTRG)
#define	PCN0_MDSE  	(IO_PCN0.bit.MDSE)
#define	PCN0_STGR  	(IO_PCN0.bit.STGR)
#define	PCN0_CNTE  	(IO_PCN0.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PTMR1, locate=0x80
#endif

__IO_EXTERN	const __WORD	IO_PTMR1;
#define	_ptmr1		(IO_PTMR1)
#define	PTMR1	(_ptmr1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCSR1, locate=0x82
#endif

__IO_EXTERN	__WORD	IO_PCSR1;
#define	_pcsr1		(IO_PCSR1)
#define	PCSR1	(_pcsr1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDUT1, locate=0x84
#endif

__IO_EXTERN	__WORD	IO_PDUT1;
#define	_pdut1		(IO_PDUT1)
#define	PDUT1	(_pdut1)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCN1, locate=0x86
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN1STR;

__IO_EXTERN	  PCN1STR	IO_PCN1;
#define	_pcn1		(IO_PCN1)
#define	PCN1		(IO_PCN1.word)
#define	PCN1_OSEL  	(IO_PCN1.bit.OSEL)
#define	PCN1_OE  	(IO_PCN1.bit.OE)
#define	PCN1_IRS  	(IO_PCN1.bit.IRS)
#define	PCN1_IRS0  	(IO_PCN1.bitc.IRS0)
#define	PCN1_IRS1  	(IO_PCN1.bitc.IRS1)
#define	PCN1_IRQF  	(IO_PCN1.bit.IRQF)
#define	PCN1_IREN  	(IO_PCN1.bit.IREN)
#define	PCN1_EGS  	(IO_PCN1.bit.EGS)
#define	PCN1_EGS0  	(IO_PCN1.bitc.EGS0)
#define	PCN1_EGS1  	(IO_PCN1.bitc.EGS1)
#define	PCN1_MOD  	(IO_PCN1.bit.MOD)
#define	PCN1_PGMS  	(IO_PCN1.bit.PGMS)
#define	PCN1_CKS  	(IO_PCN1.bit.CKS)
#define	PCN1_CKS0  	(IO_PCN1.bitc.CKS0)
#define	PCN1_CKS1  	(IO_PCN1.bitc.CKS1)
#define	PCN1_RTRG  	(IO_PCN1.bit.RTRG)
#define	PCN1_MDSE  	(IO_PCN1.bit.MDSE)
#define	PCN1_STGR  	(IO_PCN1.bit.STGR)
#define	PCN1_CNTE  	(IO_PCN1.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PTMR3, locate=0x90
#endif

__IO_EXTERN	const __WORD	IO_PTMR3;
#define	_ptmr3		(IO_PTMR3)
#define	PTMR3	(_ptmr3)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCSR3, locate=0x92
#endif

__IO_EXTERN	__WORD	IO_PCSR3;
#define	_pcsr3		(IO_PCSR3)
#define	PCSR3	(_pcsr3)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDUT3, locate=0x94
#endif

__IO_EXTERN	__WORD	IO_PDUT3;
#define	_pdut3		(IO_PDUT3)
#define	PDUT3	(_pdut3)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCN3, locate=0x96
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN3STR;

__IO_EXTERN	  PCN3STR	IO_PCN3;
#define	_pcn3		(IO_PCN3)
#define	PCN3		(IO_PCN3.word)
#define	PCN3_OSEL  	(IO_PCN3.bit.OSEL)
#define	PCN3_OE  	(IO_PCN3.bit.OE)
#define	PCN3_IRS  	(IO_PCN3.bit.IRS)
#define	PCN3_IRS0  	(IO_PCN3.bitc.IRS0)
#define	PCN3_IRS1  	(IO_PCN3.bitc.IRS1)
#define	PCN3_IRQF  	(IO_PCN3.bit.IRQF)
#define	PCN3_IREN  	(IO_PCN3.bit.IREN)
#define	PCN3_EGS  	(IO_PCN3.bit.EGS)
#define	PCN3_EGS0  	(IO_PCN3.bitc.EGS0)
#define	PCN3_EGS1  	(IO_PCN3.bitc.EGS1)
#define	PCN3_MOD  	(IO_PCN3.bit.MOD)
#define	PCN3_PGMS  	(IO_PCN3.bit.PGMS)
#define	PCN3_CKS  	(IO_PCN3.bit.CKS)
#define	PCN3_CKS0  	(IO_PCN3.bitc.CKS0)
#define	PCN3_CKS1  	(IO_PCN3.bitc.CKS1)
#define	PCN3_RTRG  	(IO_PCN3.bit.RTRG)
#define	PCN3_MDSE  	(IO_PCN3.bit.MDSE)
#define	PCN3_STGR  	(IO_PCN3.bit.STGR)
#define	PCN3_CNTE  	(IO_PCN3.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_GCN11, locate=0x98
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	TSEL3:4;
			__WORD	TSEL2:4;
			__WORD	TSEL1:4;
			__WORD	TSEL0:4;
#else
			__WORD	TSEL0:4;
			__WORD	TSEL1:4;
			__WORD	TSEL2:4;
			__WORD	TSEL3:4;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	TSEL33:1;
			__WORD	TSEL32:1;
			__WORD	TSEL31:1;
			__WORD	TSEL30:1;
			__WORD	TSEL23:1;
			__WORD	TSEL22:1;
			__WORD	TSEL21:1;
			__WORD	TSEL20:1;
			__WORD	TSEL13:1;
			__WORD	TSEL12:1;
			__WORD	TSEL11:1;
			__WORD	TSEL10:1;
			__WORD	TSEL03:1;
			__WORD	TSEL02:1;
			__WORD	TSEL01:1;
			__WORD	TSEL00:1;
#else
			__WORD	TSEL00:1;
			__WORD	TSEL01:1;
			__WORD	TSEL02:1;
			__WORD	TSEL03:1;
			__WORD	TSEL10:1;
			__WORD	TSEL11:1;
			__WORD	TSEL12:1;
			__WORD	TSEL13:1;
			__WORD	TSEL20:1;
			__WORD	TSEL21:1;
			__WORD	TSEL22:1;
			__WORD	TSEL23:1;
			__WORD	TSEL30:1;
			__WORD	TSEL31:1;
			__WORD	TSEL32:1;
			__WORD	TSEL33:1;
#endif
	} bitc;
} GCN11STR;

__IO_EXTERN	  GCN11STR	IO_GCN11;
#define	_gcn11		(IO_GCN11)
#define	GCN11		(IO_GCN11.word)
#define	GCN11_TSEL0  	(IO_GCN11.bit.TSEL0)
#define	GCN11_TSEL00  	(IO_GCN11.bitc.TSEL00)
#define	GCN11_TSEL01  	(IO_GCN11.bitc.TSEL01)
#define	GCN11_TSEL02  	(IO_GCN11.bitc.TSEL02)
#define	GCN11_TSEL03  	(IO_GCN11.bitc.TSEL03)
#define	GCN11_TSEL1  	(IO_GCN11.bit.TSEL1)
#define	GCN11_TSEL10  	(IO_GCN11.bitc.TSEL10)
#define	GCN11_TSEL11  	(IO_GCN11.bitc.TSEL11)
#define	GCN11_TSEL12  	(IO_GCN11.bitc.TSEL12)
#define	GCN11_TSEL13  	(IO_GCN11.bitc.TSEL13)
#define	GCN11_TSEL2  	(IO_GCN11.bit.TSEL2)
#define	GCN11_TSEL20  	(IO_GCN11.bitc.TSEL20)
#define	GCN11_TSEL21  	(IO_GCN11.bitc.TSEL21)
#define	GCN11_TSEL22  	(IO_GCN11.bitc.TSEL22)
#define	GCN11_TSEL23  	(IO_GCN11.bitc.TSEL23)
#define	GCN11_TSEL3  	(IO_GCN11.bit.TSEL3)
#define	GCN11_TSEL30  	(IO_GCN11.bitc.TSEL30)
#define	GCN11_TSEL31  	(IO_GCN11.bitc.TSEL31)
#define	GCN11_TSEL32  	(IO_GCN11.bitc.TSEL32)
#define	GCN11_TSEL33  	(IO_GCN11.bitc.TSEL33)

#ifdef __IO_DEFINE
#pragma segment IO=IO_GCN21, locate=0x9A
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	CKSEL3:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	EN3:1;
			__WORD	EN2:1;
			__WORD	EN1:1;
			__WORD	EN0:1;
#else
			__WORD	EN0:1;
			__WORD	EN1:1;
			__WORD	EN2:1;
			__WORD	EN3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	CKSEL0:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL3:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	CKSEL3:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	EN3:1;
			__WORD	EN2:1;
			__WORD	EN1:1;
			__WORD	EN0:1;
#else
			__WORD	EN0:1;
			__WORD	EN1:1;
			__WORD	EN2:1;
			__WORD	EN3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	CKSEL0:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL3:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN21STR;

__IO_EXTERN	  GCN21STR	IO_GCN21;
#define	_gcn21		(IO_GCN21)
#define	GCN21		(IO_GCN21.word)
#define	GCN21_EN0  	(IO_GCN21.bit.EN0)
#define	GCN21_EN1  	(IO_GCN21.bit.EN1)
#define	GCN21_EN2  	(IO_GCN21.bit.EN2)
#define	GCN21_EN3  	(IO_GCN21.bit.EN3)
#define	GCN21_CKSEL0  	(IO_GCN21.bit.CKSEL0)
#define	GCN21_CKSEL1  	(IO_GCN21.bit.CKSEL1)
#define	GCN21_CKSEL2  	(IO_GCN21.bit.CKSEL2)
#define	GCN21_CKSEL3  	(IO_GCN21.bit.CKSEL3)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PTMR4, locate=0x9C
#endif

__IO_EXTERN	const __WORD	IO_PTMR4;
#define	_ptmr4		(IO_PTMR4)
#define	PTMR4	(_ptmr4)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCSR4, locate=0x9E
#endif

__IO_EXTERN	__WORD	IO_PCSR4;
#define	_pcsr4		(IO_PCSR4)
#define	PCSR4	(_pcsr4)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDUT4, locate=0xA0
#endif

__IO_EXTERN	__WORD	IO_PDUT4;
#define	_pdut4		(IO_PDUT4)
#define	PDUT4	(_pdut4)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PCN4, locate=0xA2
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN4STR;

__IO_EXTERN	  PCN4STR	IO_PCN4;
#define	_pcn4		(IO_PCN4)
#define	PCN4		(IO_PCN4.word)
#define	PCN4_OSEL  	(IO_PCN4.bit.OSEL)
#define	PCN4_OE  	(IO_PCN4.bit.OE)
#define	PCN4_IRS  	(IO_PCN4.bit.IRS)
#define	PCN4_IRS0  	(IO_PCN4.bitc.IRS0)
#define	PCN4_IRS1  	(IO_PCN4.bitc.IRS1)
#define	PCN4_IRQF  	(IO_PCN4.bit.IRQF)
#define	PCN4_IREN  	(IO_PCN4.bit.IREN)
#define	PCN4_EGS  	(IO_PCN4.bit.EGS)
#define	PCN4_EGS0  	(IO_PCN4.bitc.EGS0)
#define	PCN4_EGS1  	(IO_PCN4.bitc.EGS1)
#define	PCN4_MOD  	(IO_PCN4.bit.MOD)
#define	PCN4_PGMS  	(IO_PCN4.bit.PGMS)
#define	PCN4_CKS  	(IO_PCN4.bit.CKS)
#define	PCN4_CKS0  	(IO_PCN4.bitc.CKS0)
#define	PCN4_CKS1  	(IO_PCN4.bitc.CKS1)
#define	PCN4_RTRG  	(IO_PCN4.bit.RTRG)
#define	PCN4_MDSE  	(IO_PCN4.bit.MDSE)
#define	PCN4_STGR  	(IO_PCN4.bit.STGR)
#define	PCN4_CNTE  	(IO_PCN4.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_UART2, locate=0xD4
#endif

__IO_EXTERN	struct {
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD:2;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
#else
			__BYTE	SOE:1;
			__BYTE	SCKE:1;
			__BYTE	UPCL:1;
			__BYTE	REST:1;
			__BYTE	EXT:1;
			__BYTE	OTO:1;
			__BYTE	MD:2;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
#else
			__BYTE	SOE:1;
			__BYTE	SCKE:1;
			__BYTE	UPCL:1;
			__BYTE	REST:1;
			__BYTE	EXT:1;
			__BYTE	OTO:1;
			__BYTE	MD0:1;
			__BYTE	MD1:1;
#endif
		} bitc;
	} SMR2;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
#else
			__BYTE	TXE:1;
			__BYTE	RXE:1;
			__BYTE	CRE:1;
			__BYTE	AD:1;
			__BYTE	CL:1;
			__BYTE	SBL:1;
			__BYTE	P:1;
			__BYTE	PEN:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
#else
			__BYTE	TXE:1;
			__BYTE	RXE:1;
			__BYTE	CRE:1;
			__BYTE	AD:1;
			__BYTE	CL:1;
			__BYTE	SBL:1;
			__BYTE	P:1;
			__BYTE	PEN:1;
#endif
		} bitc;
	} SCR2;
	__BYTE	RDR2;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
#else
			__BYTE	TIE:1;
			__BYTE	RIE:1;
			__BYTE	BDS:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	FRE:1;
			__BYTE	ORE:1;
			__BYTE	PE:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
#else
			__BYTE	TIE:1;
			__BYTE	RIE:1;
			__BYTE	BDS:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	FRE:1;
			__BYTE	ORE:1;
			__BYTE	PE:1;
#endif
		} bitc;
	} SSR2;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INV:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
#else
			__BYTE	TBI:1;
			__BYTE	RBI:1;
			__BYTE	BIE:1;
			__BYTE	SSM:1;
			__BYTE	SCDE:1;
			__BYTE	MS:1;
			__BYTE	LBR:1;
			__BYTE	INV:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INV:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
#else
			__BYTE	TBI:1;
			__BYTE	RBI:1;
			__BYTE	BIE:1;
			__BYTE	SSM:1;
			__BYTE	SCDE:1;
			__BYTE	MS:1;
			__BYTE	LBR:1;
			__BYTE	INV:1;
#endif
		} bitc;
	} ECCR2;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL:2;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
#else
			__BYTE	SCES:1;
			__BYTE	CCO:1;
			__BYTE	SIOP:1;
			__BYTE	SOPE:1;
			__BYTE	LBL:2;
			__BYTE	LBD:1;
			__BYTE	LBIE:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL1:1;
			__BYTE	LBL0:1;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
#else
			__BYTE	SCES:1;
			__BYTE	CCO:1;
			__BYTE	SIOP:1;
			__BYTE	SOPE:1;
			__BYTE	LBL0:1;
			__BYTE	LBL1:1;
			__BYTE	LBD:1;
			__BYTE	LBIE:1;
#endif
		} bitc;
	} ESCR2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BGRH2:8;
			__WORD	BGRL2:8;
#else
			__WORD	BGRL2:8;
			__WORD	BGRH2:8;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BGRH27:1;
			__WORD	BGRH26:1;
			__WORD	BGRH25:1;
			__WORD	BGRH24:1;
			__WORD	BGRH23:1;
			__WORD	BGRH22:1;
			__WORD	BGRH21:1;
			__WORD	BGRH20:1;
			__WORD	BGRL27:1;
			__WORD	BGRL26:1;
			__WORD	BGRL25:1;
			__WORD	BGRL24:1;
			__WORD	BGRL23:1;
			__WORD	BGRL22:1;
			__WORD	BGRL21:1;
			__WORD	BGRL20:1;
#else
			__WORD	BGRL20:1;
			__WORD	BGRL21:1;
			__WORD	BGRL22:1;
			__WORD	BGRL23:1;
			__WORD	BGRL24:1;
			__WORD	BGRL25:1;
			__WORD	BGRL26:1;
			__WORD	BGRL27:1;
			__WORD	BGRH20:1;
			__WORD	BGRH21:1;
			__WORD	BGRH22:1;
			__WORD	BGRH23:1;
			__WORD	BGRH24:1;
			__WORD	BGRH25:1;
			__WORD	BGRH26:1;
			__WORD	BGRH27:1;
#endif
		} bitc;
	} BGR2;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV87:1;
			__BYTE	RESV86:1;
			__BYTE	RESV85:1;
			__BYTE	RESV84:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	RBI:1;
			__BYTE	AICD:1;
#else
			__BYTE	AICD:1;
			__BYTE	RBI:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV87:1;
			__BYTE	RESV86:1;
			__BYTE	RESV85:1;
			__BYTE	RESV84:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	RBI:1;
			__BYTE	AICD:1;
#else
			__BYTE	AICD:1;
			__BYTE	RBI:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
#endif
		} bitc;
	} ESIR2;
	__BYTE	FIDR2;
} IO_UART2;

#define	UART2_SMR2			(IO_UART2.SMR2.byte)
#define	UART2_SMR2_SOE    	(IO_UART2.SMR2.bit.SOE)
#define	UART2_SMR2_SCKE    	(IO_UART2.SMR2.bit.SCKE)
#define	UART2_SMR2_UPCL    	(IO_UART2.SMR2.bit.UPCL)
#define	UART2_SMR2_REST    	(IO_UART2.SMR2.bit.REST)
#define	UART2_SMR2_EXT    	(IO_UART2.SMR2.bit.EXT)
#define	UART2_SMR2_OTO    	(IO_UART2.SMR2.bit.OTO)
#define	UART2_SMR2_MD    	(IO_UART2.SMR2.bit.MD)
#define	UART2_SMR2_MD0    	(IO_UART2.SMR2.bitc.MD0)
#define	UART2_SMR2_MD1    	(IO_UART2.SMR2.bitc.MD1)
#define	UART2_SCR2			(IO_UART2.SCR2.byte)
#define	UART2_SCR2_TXE    	(IO_UART2.SCR2.bit.TXE)
#define	UART2_SCR2_RXE    	(IO_UART2.SCR2.bit.RXE)
#define	UART2_SCR2_CRE    	(IO_UART2.SCR2.bit.CRE)
#define	UART2_SCR2_AD    	(IO_UART2.SCR2.bit.AD)
#define	UART2_SCR2_CL    	(IO_UART2.SCR2.bit.CL)
#define	UART2_SCR2_SBL    	(IO_UART2.SCR2.bit.SBL)
#define	UART2_SCR2_P    	(IO_UART2.SCR2.bit.P)
#define	UART2_SCR2_PEN    	(IO_UART2.SCR2.bit.PEN)
#define	UART2_RDR2	(IO_UART2.RDR2)
#define	UART2_TDR2	(IO_UART2.RDR2)
#define	UART2_SSR2			(IO_UART2.SSR2.byte)
#define	UART2_SSR2_TIE    	(IO_UART2.SSR2.bit.TIE)
#define	UART2_SSR2_RIE    	(IO_UART2.SSR2.bit.RIE)
#define	UART2_SSR2_BDS    	(IO_UART2.SSR2.bit.BDS)
#define	UART2_SSR2_TDRE    	(IO_UART2.SSR2.bit.TDRE)
#define	UART2_SSR2_RDRF    	(IO_UART2.SSR2.bit.RDRF)
#define	UART2_SSR2_FRE    	(IO_UART2.SSR2.bit.FRE)
#define	UART2_SSR2_ORE    	(IO_UART2.SSR2.bit.ORE)
#define	UART2_SSR2_PE    	(IO_UART2.SSR2.bit.PE)
#define	UART2_ECCR2			(IO_UART2.ECCR2.byte)
#define	UART2_ECCR2_TBI    	(IO_UART2.ECCR2.bit.TBI)
#define	UART2_ECCR2_RBI    	(IO_UART2.ECCR2.bit.RBI)
#define	UART2_ECCR2_BIE    	(IO_UART2.ECCR2.bit.BIE)
#define	UART2_ECCR2_SSM    	(IO_UART2.ECCR2.bit.SSM)
#define	UART2_ECCR2_SCDE    	(IO_UART2.ECCR2.bit.SCDE)
#define	UART2_ECCR2_MS    	(IO_UART2.ECCR2.bit.MS)
#define	UART2_ECCR2_LBR    	(IO_UART2.ECCR2.bit.LBR)
#define	UART2_ECCR2_INV    	(IO_UART2.ECCR2.bit.INV)
#define	UART2_ESCR2			(IO_UART2.ESCR2.byte)
#define	UART2_ESCR2_SCES    	(IO_UART2.ESCR2.bit.SCES)
#define	UART2_ESCR2_CCO    	(IO_UART2.ESCR2.bit.CCO)
#define	UART2_ESCR2_SIOP    	(IO_UART2.ESCR2.bit.SIOP)
#define	UART2_ESCR2_SOPE    	(IO_UART2.ESCR2.bit.SOPE)
#define	UART2_ESCR2_LBL    	(IO_UART2.ESCR2.bit.LBL)
#define	UART2_ESCR2_LBL0    	(IO_UART2.ESCR2.bitc.LBL0)
#define	UART2_ESCR2_LBL1    	(IO_UART2.ESCR2.bitc.LBL1)
#define	UART2_ESCR2_LBD    	(IO_UART2.ESCR2.bit.LBD)
#define	UART2_ESCR2_LBIE    	(IO_UART2.ESCR2.bit.LBIE)
#define	UART2_BGR2			(IO_UART2.BGR2.word)
#define	UART2_BGR2_BGRL2    	(IO_UART2.BGR2.bit.BGRL2)
#define	UART2_BGR2_BGRL20    	(IO_UART2.BGR2.bitc.BGRL20)
#define	UART2_BGR2_BGRL21    	(IO_UART2.BGR2.bitc.BGRL21)
#define	UART2_BGR2_BGRL22    	(IO_UART2.BGR2.bitc.BGRL22)
#define	UART2_BGR2_BGRL23    	(IO_UART2.BGR2.bitc.BGRL23)
#define	UART2_BGR2_BGRL24    	(IO_UART2.BGR2.bitc.BGRL24)
#define	UART2_BGR2_BGRL25    	(IO_UART2.BGR2.bitc.BGRL25)
#define	UART2_BGR2_BGRL26    	(IO_UART2.BGR2.bitc.BGRL26)
#define	UART2_BGR2_BGRL27    	(IO_UART2.BGR2.bitc.BGRL27)
#define	UART2_BGR2_BGRH2    	(IO_UART2.BGR2.bit.BGRH2)
#define	UART2_BGR2_BGRH20    	(IO_UART2.BGR2.bitc.BGRH20)
#define	UART2_BGR2_BGRH21    	(IO_UART2.BGR2.bitc.BGRH21)
#define	UART2_BGR2_BGRH22    	(IO_UART2.BGR2.bitc.BGRH22)
#define	UART2_BGR2_BGRH23    	(IO_UART2.BGR2.bitc.BGRH23)
#define	UART2_BGR2_BGRH24    	(IO_UART2.BGR2.bitc.BGRH24)
#define	UART2_BGR2_BGRH25    	(IO_UART2.BGR2.bitc.BGRH25)
#define	UART2_BGR2_BGRH26    	(IO_UART2.BGR2.bitc.BGRH26)
#define	UART2_BGR2_BGRH27    	(IO_UART2.BGR2.bitc.BGRH27)
#define	UART2_ESIR2			(IO_UART2.ESIR2.byte)
#define	UART2_ESIR2_AICD    	(IO_UART2.ESIR2.bit.AICD)
#define	UART2_ESIR2_RBI    	(IO_UART2.ESIR2.bit.RBI)
#define	UART2_ESIR2_RDRF    	(IO_UART2.ESIR2.bit.RDRF)
#define	UART2_ESIR2_TDRE    	(IO_UART2.ESIR2.bit.TDRE)
#define	UART2_FIDR2	(IO_UART2.FIDR2)

#ifdef __IO_DEFINE
#pragma segment IO=IO_GCNR0, locate=0xEC
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CTG1:1;
			__BYTE	CTG0:1;
#else
			__BYTE	CTG0:1;
			__BYTE	CTG1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	CTG1:1;
			__BYTE	CTG0:1;
#else
			__BYTE	CTG0:1;
			__BYTE	CTG1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} GCNR0STR;

__IO_EXTERN	  GCNR0STR	IO_GCNR0;
#define	_gcnr0		(IO_GCNR0)
#define	GCNR0		(IO_GCNR0.byte)
#define	GCNR0_CTG0  	(IO_GCNR0.bit.CTG0)
#define	GCNR0_CTG1  	(IO_GCNR0.bit.CTG1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BAPL0,   locate=0x100
#pragma segment FAR_DATA=IO_BAPL0, locate=0x100
#endif

__IO_EXTENDED	__BYTE	IO_BAPL0;
#define	_bapl0		(IO_BAPL0)
#define	BAPL0	(_bapl0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BAPM0,   locate=0x101
#pragma segment FAR_DATA=IO_BAPM0, locate=0x101
#endif

__IO_EXTENDED	__BYTE	IO_BAPM0;
#define	_bapm0		(IO_BAPM0)
#define	BAPM0	(_bapm0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BAPH0,   locate=0x102
#pragma segment FAR_DATA=IO_BAPH0, locate=0x102
#endif

__IO_EXTENDED	__BYTE	IO_BAPH0;
#define	_baph0		(IO_BAPH0)
#define	BAPH0	(_baph0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACS0,   locate=0x103
#pragma segment FAR_DATA=IO_DMACS0, locate=0x103
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	BPD:1;
			__BYTE	IF:1;
			__BYTE	BW:1;
			__BYTE	BF:1;
			__BYTE	DIR:1;
			__BYTE	SE:1;
#else
			__BYTE	SE:1;
			__BYTE	DIR:1;
			__BYTE	BF:1;
			__BYTE	BW:1;
			__BYTE	IF:1;
			__BYTE	BPD:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	BPD:1;
			__BYTE	IF:1;
			__BYTE	BW:1;
			__BYTE	BF:1;
			__BYTE	DIR:1;
			__BYTE	SE:1;
#else
			__BYTE	SE:1;
			__BYTE	DIR:1;
			__BYTE	BF:1;
			__BYTE	BW:1;
			__BYTE	IF:1;
			__BYTE	BPD:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DMACS0STR;

__IO_EXTENDED	  DMACS0STR	IO_DMACS0;
#define	_dmacs0		(IO_DMACS0)
#define	DMACS0		(IO_DMACS0.byte)
#define	DMACS0_SE  	(IO_DMACS0.bit.SE)
#define	DMACS0_DIR  	(IO_DMACS0.bit.DIR)
#define	DMACS0_BF  	(IO_DMACS0.bit.BF)
#define	DMACS0_BW  	(IO_DMACS0.bit.BW)
#define	DMACS0_IF  	(IO_DMACS0.bit.IF)
#define	DMACS0_BPD  	(IO_DMACS0.bit.BPD)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IOA0,   locate=0x104
#pragma segment FAR_DATA=IO_IOA0, locate=0x104
#endif

__IO_EXTENDED	__WORD	IO_IOA0;
#define	_ioa0		(IO_IOA0)
#define	IOA0	(_ioa0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DCT0,   locate=0x106
#pragma segment FAR_DATA=IO_DCT0, locate=0x106
#endif

__IO_EXTENDED	__WORD	IO_DCT0;
#define	_dct0		(IO_DCT0)
#define	DCT0	(_dct0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BAPL1,   locate=0x108
#pragma segment FAR_DATA=IO_BAPL1, locate=0x108
#endif

__IO_EXTENDED	__BYTE	IO_BAPL1;
#define	_bapl1		(IO_BAPL1)
#define	BAPL1	(_bapl1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BAPM1,   locate=0x109
#pragma segment FAR_DATA=IO_BAPM1, locate=0x109
#endif

__IO_EXTENDED	__BYTE	IO_BAPM1;
#define	_bapm1		(IO_BAPM1)
#define	BAPM1	(_bapm1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BAPH1,   locate=0x10A
#pragma segment FAR_DATA=IO_BAPH1, locate=0x10A
#endif

__IO_EXTENDED	__BYTE	IO_BAPH1;
#define	_baph1		(IO_BAPH1)
#define	BAPH1	(_baph1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACS1,   locate=0x10B
#pragma segment FAR_DATA=IO_DMACS1, locate=0x10B
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	BPD:1;
			__BYTE	IF:1;
			__BYTE	BW:1;
			__BYTE	BF:1;
			__BYTE	DIR:1;
			__BYTE	SE:1;
#else
			__BYTE	SE:1;
			__BYTE	DIR:1;
			__BYTE	BF:1;
			__BYTE	BW:1;
			__BYTE	IF:1;
			__BYTE	BPD:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	BPD:1;
			__BYTE	IF:1;
			__BYTE	BW:1;
			__BYTE	BF:1;
			__BYTE	DIR:1;
			__BYTE	SE:1;
#else
			__BYTE	SE:1;
			__BYTE	DIR:1;
			__BYTE	BF:1;
			__BYTE	BW:1;
			__BYTE	IF:1;
			__BYTE	BPD:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DMACS1STR;

__IO_EXTENDED	  DMACS1STR	IO_DMACS1;
#define	_dmacs1		(IO_DMACS1)
#define	DMACS1		(IO_DMACS1.byte)
#define	DMACS1_SE  	(IO_DMACS1.bit.SE)
#define	DMACS1_DIR  	(IO_DMACS1.bit.DIR)
#define	DMACS1_BF  	(IO_DMACS1.bit.BF)
#define	DMACS1_BW  	(IO_DMACS1.bit.BW)
#define	DMACS1_IF  	(IO_DMACS1.bit.IF)
#define	DMACS1_BPD  	(IO_DMACS1.bit.BPD)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IOA1,   locate=0x10C
#pragma segment FAR_DATA=IO_IOA1, locate=0x10C
#endif

__IO_EXTENDED	__WORD	IO_IOA1;
#define	_ioa1		(IO_IOA1)
#define	IOA1	(_ioa1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DCT1,   locate=0x10E
#pragma segment FAR_DATA=IO_DCT1, locate=0x10E
#endif

__IO_EXTENDED	__WORD	IO_DCT1;
#define	_dct1		(IO_DCT1)
#define	DCT1	(_dct1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DISEL0,   locate=0x380
#pragma segment FAR_DATA=IO_DISEL0, locate=0x380
#endif

__IO_EXTENDED	__BYTE	IO_DISEL0;
#define	_disel0		(IO_DISEL0)
#define	DISEL0	(_disel0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DISEL1,   locate=0x381
#pragma segment FAR_DATA=IO_DISEL1, locate=0x381
#endif

__IO_EXTENDED	__BYTE	IO_DISEL1;
#define	_disel1		(IO_DISEL1)
#define	DISEL1	(_disel1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DSR,   locate=0x390
#pragma segment FAR_DATA=IO_DSR, locate=0x390
#endif

__IO_EXTENDED	__WORD	IO_DSR;
#define	_dsr		(IO_DSR)
#define	DSR	(_dsr)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DSSR,   locate=0x392
#pragma segment FAR_DATA=IO_DSSR, locate=0x392
#endif

__IO_EXTENDED	__WORD	IO_DSSR;
#define	_dssr		(IO_DSSR)
#define	DSSR	(_dssr)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DER,   locate=0x394
#pragma segment FAR_DATA=IO_DER, locate=0x394
#endif

__IO_EXTENDED	__WORD	IO_DER;
#define	_der		(IO_DER)
#define	DER	(_der)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICR,   locate=0x3A0
#pragma segment FAR_DATA=IO_ICR, locate=0x3A0
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	IX:8;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	IL:3;
#else
			__WORD	IL:3;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	IX:8;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	IX7:1;
			__WORD	IX6:1;
			__WORD	IX5:1;
			__WORD	IX4:1;
			__WORD	IX3:1;
			__WORD	IX2:1;
			__WORD	IX1:1;
			__WORD	IX0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	IL2:1;
			__WORD	IL1:1;
			__WORD	IL0:1;
#else
			__WORD	IL0:1;
			__WORD	IL1:1;
			__WORD	IL2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	IX0:1;
			__WORD	IX1:1;
			__WORD	IX2:1;
			__WORD	IX3:1;
			__WORD	IX4:1;
			__WORD	IX5:1;
			__WORD	IX6:1;
			__WORD	IX7:1;
#endif
	} bitc;
} ICRSTR;

__IO_EXTENDED	  ICRSTR	IO_ICR;
#define	_icr		(IO_ICR)
#define	ICR		(IO_ICR.word)
#define	ICR_IL  	(IO_ICR.bit.IL)
#define	ICR_IL0  	(IO_ICR.bitc.IL0)
#define	ICR_IL1  	(IO_ICR.bitc.IL1)
#define	ICR_IL2  	(IO_ICR.bitc.IL2)
#define	ICR_IX  	(IO_ICR.bit.IX)
#define	ICR_IX0  	(IO_ICR.bitc.IX0)
#define	ICR_IX1  	(IO_ICR.bitc.IX1)
#define	ICR_IX2  	(IO_ICR.bitc.IX2)
#define	ICR_IX3  	(IO_ICR.bitc.IX3)
#define	ICR_IX4  	(IO_ICR.bitc.IX4)
#define	ICR_IX5  	(IO_ICR.bitc.IX5)
#define	ICR_IX6  	(IO_ICR.bitc.IX6)
#define	ICR_IX7  	(IO_ICR.bitc.IX7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TBR,   locate=0x3A2
#pragma segment FAR_DATA=IO_TBR, locate=0x3A2
#endif

__IO_EXTENDED	__WORD	IO_TBR;
#define	_tbr		(IO_TBR)
#define	TBR	(_tbr)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DIRR,   locate=0x3A4
#pragma segment FAR_DATA=IO_DIRR, locate=0x3A4
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	R0:1;
#else
			__BYTE	R0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	R0:1;
#else
			__BYTE	R0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DIRRSTR;

__IO_EXTENDED	  DIRRSTR	IO_DIRR;
#define	_dirr		(IO_DIRR)
#define	DIRR		(IO_DIRR.byte)
#define	DIRR_R0  	(IO_DIRR.bit.R0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_NMI,   locate=0x3A5
#pragma segment FAR_DATA=IO_NMI, locate=0x3A5
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	LEV:1;
			__BYTE	EN:1;
			__BYTE	FLAG:1;
#else
			__BYTE	FLAG:1;
			__BYTE	EN:1;
			__BYTE	LEV:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	LEV:1;
			__BYTE	EN:1;
			__BYTE	FLAG:1;
#else
			__BYTE	FLAG:1;
			__BYTE	EN:1;
			__BYTE	LEV:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} NMISTR;

__IO_EXTENDED	  NMISTR	IO_NMI;
#define	_nmi		(IO_NMI)
#define	NMI		(IO_NMI.byte)
#define	NMI_FLAG  	(IO_NMI.bit.FLAG)
#define	NMI_EN  	(IO_NMI.bit.EN)
#define	NMI_LEV  	(IO_NMI.bit.LEV)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ROMM,   locate=0x3AE
#pragma segment FAR_DATA=IO_ROMM, locate=0x3AE
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BS:4;
			__BYTE	RESV2:1;
			__BYTE	SZ:2;
			__BYTE	MI:1;
#else
			__BYTE	MI:1;
			__BYTE	SZ:2;
			__BYTE	RESV2:1;
			__BYTE	BS:4;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BS3:1;
			__BYTE	BS2:1;
			__BYTE	BS1:1;
			__BYTE	BS0:1;
			__BYTE	RESV3:1;
			__BYTE	SZ1:1;
			__BYTE	SZ0:1;
			__BYTE	MI:1;
#else
			__BYTE	MI:1;
			__BYTE	SZ0:1;
			__BYTE	SZ1:1;
			__BYTE	RESV3:1;
			__BYTE	BS0:1;
			__BYTE	BS1:1;
			__BYTE	BS2:1;
			__BYTE	BS3:1;
#endif
	} bitc;
} ROMMSTR;

__IO_EXTENDED	  ROMMSTR	IO_ROMM;
#define	_romm		(IO_ROMM)
#define	ROMM		(IO_ROMM.byte)
#define	ROMM_MI  	(IO_ROMM.bit.MI)
#define	ROMM_SZ  	(IO_ROMM.bit.SZ)
#define	ROMM_SZ0  	(IO_ROMM.bitc.SZ0)
#define	ROMM_SZ1  	(IO_ROMM.bitc.SZ1)
#define	ROMM_BS  	(IO_ROMM.bit.BS)
#define	ROMM_BS0  	(IO_ROMM.bitc.BS0)
#define	ROMM_BS1  	(IO_ROMM.bitc.BS1)
#define	ROMM_BS2  	(IO_ROMM.bitc.BS2)
#define	ROMM_BS3  	(IO_ROMM.bitc.BS3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DFCA,   locate=0x3E8
#pragma segment FAR_DATA=IO_DFCA, locate=0x3E8
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	TMG:1;
			__BYTE	CSWE:1;
			__BYTE	WE:1;
#else
			__BYTE	WE:1;
			__BYTE	CSWE:1;
			__BYTE	TMG:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	TMG:1;
			__BYTE	CSWE:1;
			__BYTE	WE:1;
#else
			__BYTE	WE:1;
			__BYTE	CSWE:1;
			__BYTE	TMG:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DFCASTR;

__IO_EXTENDED	  DFCASTR	IO_DFCA;
#define	_dfca		(IO_DFCA)
#define	DFCA		(IO_DFCA.byte)
#define	DFCA_WE  	(IO_DFCA.bit.WE)
#define	DFCA_CSWE  	(IO_DFCA.bit.CSWE)
#define	DFCA_TMG  	(IO_DFCA.bit.TMG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DFICA,   locate=0x3E9
#pragma segment FAR_DATA=IO_DFICA, locate=0x3E9
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	ERINTE:1;
			__BYTE	FININTE:1;
			__BYTE	IDLINTE:1;
			__BYTE	WBINTE:1;
			__BYTE	WPSINTE:1;
			__BYTE	HANGINTE:1;
			__BYTE	RDYINTE:1;
#else
			__BYTE	RDYINTE:1;
			__BYTE	HANGINTE:1;
			__BYTE	WPSINTE:1;
			__BYTE	WBINTE:1;
			__BYTE	IDLINTE:1;
			__BYTE	FININTE:1;
			__BYTE	ERINTE:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	ERINTE:1;
			__BYTE	FININTE:1;
			__BYTE	IDLINTE:1;
			__BYTE	WBINTE:1;
			__BYTE	WPSINTE:1;
			__BYTE	HANGINTE:1;
			__BYTE	RDYINTE:1;
#else
			__BYTE	RDYINTE:1;
			__BYTE	HANGINTE:1;
			__BYTE	WPSINTE:1;
			__BYTE	WBINTE:1;
			__BYTE	IDLINTE:1;
			__BYTE	FININTE:1;
			__BYTE	ERINTE:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DFICASTR;

__IO_EXTENDED	  DFICASTR	IO_DFICA;
#define	_dfica		(IO_DFICA)
#define	DFICA		(IO_DFICA.byte)
#define	DFICA_RDYINTE  	(IO_DFICA.bit.RDYINTE)
#define	DFICA_HANGINTE  	(IO_DFICA.bit.HANGINTE)
#define	DFICA_WPSINTE  	(IO_DFICA.bit.WPSINTE)
#define	DFICA_WBINTE  	(IO_DFICA.bit.WBINTE)
#define	DFICA_IDLINTE  	(IO_DFICA.bit.IDLINTE)
#define	DFICA_FININTE  	(IO_DFICA.bit.FININTE)
#define	DFICA_ERINTE  	(IO_DFICA.bit.ERINTE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DFSA,   locate=0x3EA
#pragma segment FAR_DATA=IO_DFSA, locate=0x3EA
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ST:2;
			__BYTE	PGMS:1;
			__BYTE	SERS:1;
			__BYTE	ESPS:1;
			__BYTE	CERS:1;
			__BYTE	HANG:1;
			__BYTE	RDY:1;
#else
			__BYTE	RDY:1;
			__BYTE	HANG:1;
			__BYTE	CERS:1;
			__BYTE	ESPS:1;
			__BYTE	SERS:1;
			__BYTE	PGMS:1;
			__BYTE	ST:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ST1:1;
			__BYTE	ST0:1;
			__BYTE	PGMS:1;
			__BYTE	SERS:1;
			__BYTE	ESPS:1;
			__BYTE	CERS:1;
			__BYTE	HANG:1;
			__BYTE	RDY:1;
#else
			__BYTE	RDY:1;
			__BYTE	HANG:1;
			__BYTE	CERS:1;
			__BYTE	ESPS:1;
			__BYTE	SERS:1;
			__BYTE	PGMS:1;
			__BYTE	ST0:1;
			__BYTE	ST1:1;
#endif
	} bitc;
} DFSASTR;

__IO_EXTENDED	 const  DFSASTR	IO_DFSA;
#define	_dfsa		(IO_DFSA)
#define	DFSA		(IO_DFSA.byte)
#define	DFSA_RDY  	(IO_DFSA.bit.RDY)
#define	DFSA_HANG  	(IO_DFSA.bit.HANG)
#define	DFSA_CERS  	(IO_DFSA.bit.CERS)
#define	DFSA_ESPS  	(IO_DFSA.bit.ESPS)
#define	DFSA_SERS  	(IO_DFSA.bit.SERS)
#define	DFSA_PGMS  	(IO_DFSA.bit.PGMS)
#define	DFSA_ST  	(IO_DFSA.bit.ST)
#define	DFSA_ST0  	(IO_DFSA.bitc.ST0)
#define	DFSA_ST1  	(IO_DFSA.bitc.ST1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DFISA,   locate=0x3EB
#pragma segment FAR_DATA=IO_DFISA, locate=0x3EB
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	ERINT:1;
			__BYTE	FININT:1;
			__BYTE	IDLINT:1;
			__BYTE	WBINT:1;
			__BYTE	WPSINT:1;
			__BYTE	HANGINT:1;
			__BYTE	RDYINT:1;
#else
			__BYTE	RDYINT:1;
			__BYTE	HANGINT:1;
			__BYTE	WPSINT:1;
			__BYTE	WBINT:1;
			__BYTE	IDLINT:1;
			__BYTE	FININT:1;
			__BYTE	ERINT:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	ERINT:1;
			__BYTE	FININT:1;
			__BYTE	IDLINT:1;
			__BYTE	WBINT:1;
			__BYTE	WPSINT:1;
			__BYTE	HANGINT:1;
			__BYTE	RDYINT:1;
#else
			__BYTE	RDYINT:1;
			__BYTE	HANGINT:1;
			__BYTE	WPSINT:1;
			__BYTE	WBINT:1;
			__BYTE	IDLINT:1;
			__BYTE	FININT:1;
			__BYTE	ERINT:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DFISASTR;

__IO_EXTENDED	  DFISASTR	IO_DFISA;
#define	_dfisa		(IO_DFISA)
#define	DFISA		(IO_DFISA.byte)
#define	DFISA_RDYINT  	(IO_DFISA.bit.RDYINT)
#define	DFISA_HANGINT  	(IO_DFISA.bit.HANGINT)
#define	DFISA_WPSINT  	(IO_DFISA.bit.WPSINT)
#define	DFISA_WBINT  	(IO_DFISA.bit.WBINT)
#define	DFISA_IDLINT  	(IO_DFISA.bit.IDLINT)
#define	DFISA_FININT  	(IO_DFISA.bit.FININT)
#define	DFISA_ERINT  	(IO_DFISA.bit.ERINT)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DFWC0A,   locate=0x3F9
#pragma segment FAR_DATA=IO_DFWC0A, locate=0x3F9
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	SA:4;
			__BYTE	SAS:1;
#else
			__BYTE	SAS:1;
			__BYTE	SA:4;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	SA4:1;
			__BYTE	SA3:1;
			__BYTE	SA2:1;
			__BYTE	SA1:1;
			__BYTE	SAS:1;
#else
			__BYTE	SAS:1;
			__BYTE	SA1:1;
			__BYTE	SA2:1;
			__BYTE	SA3:1;
			__BYTE	SA4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} DFWC0ASTR;

__IO_EXTENDED	  DFWC0ASTR	IO_DFWC0A;
#define	_dfwc0a		(IO_DFWC0A)
#define	DFWC0A		(IO_DFWC0A.byte)
#define	DFWC0A_SAS  	(IO_DFWC0A.bit.SAS)
#define	DFWC0A_SA  	(IO_DFWC0A.bit.SA)
#define	DFWC0A_SA1  	(IO_DFWC0A.bitc.SA1)
#define	DFWC0A_SA2  	(IO_DFWC0A.bitc.SA2)
#define	DFWC0A_SA3  	(IO_DFWC0A.bitc.SA3)
#define	DFWC0A_SA4  	(IO_DFWC0A.bitc.SA4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DFWC1A,   locate=0x3FD
#pragma segment FAR_DATA=IO_DFWC1A, locate=0x3FD
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SA3:8;
#else
			__BYTE	SA3:8;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SA39:1;
			__BYTE	SA38:1;
			__BYTE	SA37:1;
			__BYTE	SA36:1;
			__BYTE	SA35:1;
			__BYTE	SA34:1;
			__BYTE	SA33:1;
			__BYTE	SA32:1;
#else
			__BYTE	SA32:1;
			__BYTE	SA33:1;
			__BYTE	SA34:1;
			__BYTE	SA35:1;
			__BYTE	SA36:1;
			__BYTE	SA37:1;
			__BYTE	SA38:1;
			__BYTE	SA39:1;
#endif
	} bitc;
} DFWC1ASTR;

__IO_EXTENDED	  DFWC1ASTR	IO_DFWC1A;
#define	_dfwc1a		(IO_DFWC1A)
#define	DFWC1A		(IO_DFWC1A.byte)
#define	DFWC1A_SA3  	(IO_DFWC1A.bit.SA3)
#define	DFWC1A_SA32  	(IO_DFWC1A.bitc.SA32)
#define	DFWC1A_SA33  	(IO_DFWC1A.bitc.SA33)
#define	DFWC1A_SA34  	(IO_DFWC1A.bitc.SA34)
#define	DFWC1A_SA35  	(IO_DFWC1A.bitc.SA35)
#define	DFWC1A_SA36  	(IO_DFWC1A.bitc.SA36)
#define	DFWC1A_SA37  	(IO_DFWC1A.bitc.SA37)
#define	DFWC1A_SA38  	(IO_DFWC1A.bitc.SA38)
#define	DFWC1A_SA39  	(IO_DFWC1A.bitc.SA39)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_SMCR,   locate=0x400
#pragma segment FAR_DATA=IO_SMCR, locate=0x400
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	LPMSS:1;
			__BYTE	RESV2:1;
			__BYTE	SPL:1;
			__BYTE	SMS:2;
#else
			__BYTE	SMS:2;
			__BYTE	SPL:1;
			__BYTE	RESV2:1;
			__BYTE	LPMSS:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	LPMSS:1;
			__BYTE	RESV3:1;
			__BYTE	SPL:1;
			__BYTE	SMS1:1;
			__BYTE	SMS0:1;
#else
			__BYTE	SMS0:1;
			__BYTE	SMS1:1;
			__BYTE	SPL:1;
			__BYTE	RESV3:1;
			__BYTE	LPMSS:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} SMCRSTR;

__IO_EXTENDED	  SMCRSTR	IO_SMCR;
#define	_smcr		(IO_SMCR)
#define	SMCR		(IO_SMCR.byte)
#define	SMCR_SMS  	(IO_SMCR.bit.SMS)
#define	SMCR_SMS0  	(IO_SMCR.bitc.SMS0)
#define	SMCR_SMS1  	(IO_SMCR.bitc.SMS1)
#define	SMCR_SPL  	(IO_SMCR.bit.SPL)
#define	SMCR_LPMSS  	(IO_SMCR.bit.LPMSS)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CKSR,   locate=0x401
#pragma segment FAR_DATA=IO_CKSR, locate=0x401
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCE:1;
			__BYTE	PCE:1;
			__BYTE	MCE:1;
			__BYTE	RCE:1;
			__BYTE	SC2S:2;
			__BYTE	SC1S:2;
#else
			__BYTE	SC1S:2;
			__BYTE	SC2S:2;
			__BYTE	RCE:1;
			__BYTE	MCE:1;
			__BYTE	PCE:1;
			__BYTE	SCE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCE:1;
			__BYTE	PCE:1;
			__BYTE	MCE:1;
			__BYTE	RCE:1;
			__BYTE	SC2S1:1;
			__BYTE	SC2S0:1;
			__BYTE	SC1S1:1;
			__BYTE	SC1S0:1;
#else
			__BYTE	SC1S0:1;
			__BYTE	SC1S1:1;
			__BYTE	SC2S0:1;
			__BYTE	SC2S1:1;
			__BYTE	RCE:1;
			__BYTE	MCE:1;
			__BYTE	PCE:1;
			__BYTE	SCE:1;
#endif
	} bitc;
} CKSRSTR;

__IO_EXTENDED	  CKSRSTR	IO_CKSR;
#define	_cksr		(IO_CKSR)
#define	CKSR		(IO_CKSR.byte)
#define	CKSR_SC1S  	(IO_CKSR.bit.SC1S)
#define	CKSR_SC1S0  	(IO_CKSR.bitc.SC1S0)
#define	CKSR_SC1S1  	(IO_CKSR.bitc.SC1S1)
#define	CKSR_SC2S  	(IO_CKSR.bit.SC2S)
#define	CKSR_SC2S0  	(IO_CKSR.bitc.SC2S0)
#define	CKSR_SC2S1  	(IO_CKSR.bitc.SC2S1)
#define	CKSR_RCE  	(IO_CKSR.bit.RCE)
#define	CKSR_MCE  	(IO_CKSR.bit.MCE)
#define	CKSR_PCE  	(IO_CKSR.bit.PCE)
#define	CKSR_SCE  	(IO_CKSR.bit.SCE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CKSSR,   locate=0x402
#pragma segment FAR_DATA=IO_CKSSR, locate=0x402
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	PCST:1;
			__BYTE	SCST:2;
			__BYTE	MCST:3;
#else
			__BYTE	MCST:3;
			__BYTE	SCST:2;
			__BYTE	PCST:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	PCST:1;
			__BYTE	SCST1:1;
			__BYTE	SCST0:1;
			__BYTE	MCST2:1;
			__BYTE	MCST1:1;
			__BYTE	MCST0:1;
#else
			__BYTE	MCST0:1;
			__BYTE	MCST1:1;
			__BYTE	MCST2:1;
			__BYTE	SCST0:1;
			__BYTE	SCST1:1;
			__BYTE	PCST:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} CKSSRSTR;

__IO_EXTENDED	  CKSSRSTR	IO_CKSSR;
#define	_ckssr		(IO_CKSSR)
#define	CKSSR		(IO_CKSSR.byte)
#define	CKSSR_MCST  	(IO_CKSSR.bit.MCST)
#define	CKSSR_MCST0  	(IO_CKSSR.bitc.MCST0)
#define	CKSSR_MCST1  	(IO_CKSSR.bitc.MCST1)
#define	CKSSR_MCST2  	(IO_CKSSR.bitc.MCST2)
#define	CKSSR_SCST  	(IO_CKSSR.bit.SCST)
#define	CKSSR_SCST0  	(IO_CKSSR.bitc.SCST0)
#define	CKSSR_SCST1  	(IO_CKSSR.bitc.SCST1)
#define	CKSSR_PCST  	(IO_CKSSR.bit.PCST)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CKMR,   locate=0x403
#pragma segment FAR_DATA=IO_CKMR, locate=0x403
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCM:1;
			__BYTE	PCM:1;
			__BYTE	MCM:1;
			__BYTE	RCM:1;
			__BYTE	SC2M:2;
			__BYTE	SC1M:2;
#else
			__BYTE	SC1M:2;
			__BYTE	SC2M:2;
			__BYTE	RCM:1;
			__BYTE	MCM:1;
			__BYTE	PCM:1;
			__BYTE	SCM:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCM:1;
			__BYTE	PCM:1;
			__BYTE	MCM:1;
			__BYTE	RCM:1;
			__BYTE	SC2M1:1;
			__BYTE	SC2M0:1;
			__BYTE	SC1M1:1;
			__BYTE	SC1M0:1;
#else
			__BYTE	SC1M0:1;
			__BYTE	SC1M1:1;
			__BYTE	SC2M0:1;
			__BYTE	SC2M1:1;
			__BYTE	RCM:1;
			__BYTE	MCM:1;
			__BYTE	PCM:1;
			__BYTE	SCM:1;
#endif
	} bitc;
} CKMRSTR;

__IO_EXTENDED	 const  CKMRSTR	IO_CKMR;
#define	_ckmr		(IO_CKMR)
#define	CKMR		(IO_CKMR.byte)
#define	CKMR_SC1M  	(IO_CKMR.bit.SC1M)
#define	CKMR_SC1M0  	(IO_CKMR.bitc.SC1M0)
#define	CKMR_SC1M1  	(IO_CKMR.bitc.SC1M1)
#define	CKMR_SC2M  	(IO_CKMR.bit.SC2M)
#define	CKMR_SC2M0  	(IO_CKMR.bitc.SC2M0)
#define	CKMR_SC2M1  	(IO_CKMR.bitc.SC2M1)
#define	CKMR_RCM  	(IO_CKMR.bit.RCM)
#define	CKMR_MCM  	(IO_CKMR.bit.MCM)
#define	CKMR_PCM  	(IO_CKMR.bit.PCM)
#define	CKMR_SCM  	(IO_CKMR.bit.SCM)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CKFCR,   locate=0x404
#pragma segment FAR_DATA=IO_CKFCR, locate=0x404
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	PC2D:4;
			__WORD	PC1D:4;
			__WORD	BCD:4;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	RCFS:1;
#else
			__WORD	RCFS:1;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	BCD:4;
			__WORD	PC1D:4;
			__WORD	PC2D:4;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	PC2D3:1;
			__WORD	PC2D2:1;
			__WORD	PC2D1:1;
			__WORD	PC2D0:1;
			__WORD	PC1D3:1;
			__WORD	PC1D2:1;
			__WORD	PC1D1:1;
			__WORD	PC1D0:1;
			__WORD	BCD3:1;
			__WORD	BCD2:1;
			__WORD	BCD1:1;
			__WORD	BCD0:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	RCFS:1;
#else
			__WORD	RCFS:1;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	BCD0:1;
			__WORD	BCD1:1;
			__WORD	BCD2:1;
			__WORD	BCD3:1;
			__WORD	PC1D0:1;
			__WORD	PC1D1:1;
			__WORD	PC1D2:1;
			__WORD	PC1D3:1;
			__WORD	PC2D0:1;
			__WORD	PC2D1:1;
			__WORD	PC2D2:1;
			__WORD	PC2D3:1;
#endif
	} bitc;
} CKFCRSTR;

__IO_EXTENDED	  CKFCRSTR	IO_CKFCR;
#define	_ckfcr		(IO_CKFCR)
#define	CKFCR		(IO_CKFCR.word)
#define	CKFCR_RCFS  	(IO_CKFCR.bit.RCFS)
#define	CKFCR_BCD  	(IO_CKFCR.bit.BCD)
#define	CKFCR_BCD0  	(IO_CKFCR.bitc.BCD0)
#define	CKFCR_BCD1  	(IO_CKFCR.bitc.BCD1)
#define	CKFCR_BCD2  	(IO_CKFCR.bitc.BCD2)
#define	CKFCR_BCD3  	(IO_CKFCR.bitc.BCD3)
#define	CKFCR_PC1D  	(IO_CKFCR.bit.PC1D)
#define	CKFCR_PC1D0  	(IO_CKFCR.bitc.PC1D0)
#define	CKFCR_PC1D1  	(IO_CKFCR.bitc.PC1D1)
#define	CKFCR_PC1D2  	(IO_CKFCR.bitc.PC1D2)
#define	CKFCR_PC1D3  	(IO_CKFCR.bitc.PC1D3)
#define	CKFCR_PC2D  	(IO_CKFCR.bit.PC2D)
#define	CKFCR_PC2D0  	(IO_CKFCR.bitc.PC2D0)
#define	CKFCR_PC2D1  	(IO_CKFCR.bitc.PC2D1)
#define	CKFCR_PC2D2  	(IO_CKFCR.bitc.PC2D2)
#define	CKFCR_PC2D3  	(IO_CKFCR.bitc.PC2D3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PLLCR,   locate=0x406
#pragma segment FAR_DATA=IO_PLLCR, locate=0x406
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	VMS:3;
			__WORD	RESV1:1;
			__WORD	PMS:4;
#else
			__WORD	PMS:4;
			__WORD	RESV1:1;
			__WORD	VMS:3;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	VMS2:1;
			__WORD	VMS1:1;
			__WORD	VMS0:1;
			__WORD	RESV4:1;
			__WORD	PMS3:1;
			__WORD	PMS2:1;
			__WORD	PMS1:1;
			__WORD	PMS0:1;
#else
			__WORD	PMS0:1;
			__WORD	PMS1:1;
			__WORD	PMS2:1;
			__WORD	PMS3:1;
			__WORD	RESV4:1;
			__WORD	VMS0:1;
			__WORD	VMS1:1;
			__WORD	VMS2:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} PLLCRSTR;

__IO_EXTENDED	  PLLCRSTR	IO_PLLCR;
#define	_pllcr		(IO_PLLCR)
#define	PLLCR		(IO_PLLCR.word)
#define	PLLCR_PMS  	(IO_PLLCR.bit.PMS)
#define	PLLCR_PMS0  	(IO_PLLCR.bitc.PMS0)
#define	PLLCR_PMS1  	(IO_PLLCR.bitc.PMS1)
#define	PLLCR_PMS2  	(IO_PLLCR.bitc.PMS2)
#define	PLLCR_PMS3  	(IO_PLLCR.bitc.PMS3)
#define	PLLCR_VMS  	(IO_PLLCR.bit.VMS)
#define	PLLCR_VMS0  	(IO_PLLCR.bitc.VMS0)
#define	PLLCR_VMS1  	(IO_PLLCR.bitc.VMS1)
#define	PLLCR_VMS2  	(IO_PLLCR.bitc.VMS2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_RCTCR,   locate=0x408
#pragma segment FAR_DATA=IO_RCTCR, locate=0x408
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV4:1;
			__BYTE	RCTIE:1;
			__BYTE	RCTIF:1;
			__BYTE	RCTR:1;
			__BYTE	RCTI:4;
#else
			__BYTE	RCTI:4;
			__BYTE	RCTR:1;
			__BYTE	RCTIF:1;
			__BYTE	RCTIE:1;
			__BYTE	RESV4:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCTIE:1;
			__BYTE	RCTIF:1;
			__BYTE	RCTR:1;
			__BYTE	RCTI3:1;
			__BYTE	RCTI2:1;
			__BYTE	RCTI1:1;
			__BYTE	RCTI0:1;
#else
			__BYTE	RCTI0:1;
			__BYTE	RCTI1:1;
			__BYTE	RCTI2:1;
			__BYTE	RCTI3:1;
			__BYTE	RCTR:1;
			__BYTE	RCTIF:1;
			__BYTE	RCTIE:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} RCTCRSTR;

__IO_EXTENDED	  RCTCRSTR	IO_RCTCR;
#define	_rctcr		(IO_RCTCR)
#define	RCTCR		(IO_RCTCR.byte)
#define	RCTCR_RCTI  	(IO_RCTCR.bit.RCTI)
#define	RCTCR_RCTI0  	(IO_RCTCR.bitc.RCTI0)
#define	RCTCR_RCTI1  	(IO_RCTCR.bitc.RCTI1)
#define	RCTCR_RCTI2  	(IO_RCTCR.bitc.RCTI2)
#define	RCTCR_RCTI3  	(IO_RCTCR.bitc.RCTI3)
#define	RCTCR_RCTR  	(IO_RCTCR.bit.RCTR)
#define	RCTCR_RCTIF  	(IO_RCTCR.bit.RCTIF)
#define	RCTCR_RCTIE  	(IO_RCTCR.bit.RCTIE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_MCTCR,   locate=0x409
#pragma segment FAR_DATA=IO_MCTCR, locate=0x409
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV4:1;
			__BYTE	MCTIE:1;
			__BYTE	MCTIF:1;
			__BYTE	MCTR:1;
			__BYTE	MCTI:4;
#else
			__BYTE	MCTI:4;
			__BYTE	MCTR:1;
			__BYTE	MCTIF:1;
			__BYTE	MCTIE:1;
			__BYTE	RESV4:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	MCTIE:1;
			__BYTE	MCTIF:1;
			__BYTE	MCTR:1;
			__BYTE	MCTI3:1;
			__BYTE	MCTI2:1;
			__BYTE	MCTI1:1;
			__BYTE	MCTI0:1;
#else
			__BYTE	MCTI0:1;
			__BYTE	MCTI1:1;
			__BYTE	MCTI2:1;
			__BYTE	MCTI3:1;
			__BYTE	MCTR:1;
			__BYTE	MCTIF:1;
			__BYTE	MCTIE:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} MCTCRSTR;

__IO_EXTENDED	  MCTCRSTR	IO_MCTCR;
#define	_mctcr		(IO_MCTCR)
#define	MCTCR		(IO_MCTCR.byte)
#define	MCTCR_MCTI  	(IO_MCTCR.bit.MCTI)
#define	MCTCR_MCTI0  	(IO_MCTCR.bitc.MCTI0)
#define	MCTCR_MCTI1  	(IO_MCTCR.bitc.MCTI1)
#define	MCTCR_MCTI2  	(IO_MCTCR.bitc.MCTI2)
#define	MCTCR_MCTI3  	(IO_MCTCR.bitc.MCTI3)
#define	MCTCR_MCTR  	(IO_MCTCR.bit.MCTR)
#define	MCTCR_MCTIF  	(IO_MCTCR.bit.MCTIF)
#define	MCTCR_MCTIE  	(IO_MCTCR.bit.MCTIE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_SCTCR,   locate=0x40A
#pragma segment FAR_DATA=IO_SCTCR, locate=0x40A
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV5:1;
			__BYTE	SCTIE:1;
			__BYTE	SCTIF:1;
			__BYTE	SCTR:1;
			__BYTE	RESV1:1;
			__BYTE	SCTI:3;
#else
			__BYTE	SCTI:3;
			__BYTE	RESV1:1;
			__BYTE	SCTR:1;
			__BYTE	SCTIF:1;
			__BYTE	SCTIE:1;
			__BYTE	RESV5:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	SCTIE:1;
			__BYTE	SCTIF:1;
			__BYTE	SCTR:1;
			__BYTE	RESV3:1;
			__BYTE	SCTI2:1;
			__BYTE	SCTI1:1;
			__BYTE	SCTI0:1;
#else
			__BYTE	SCTI0:1;
			__BYTE	SCTI1:1;
			__BYTE	SCTI2:1;
			__BYTE	RESV3:1;
			__BYTE	SCTR:1;
			__BYTE	SCTIF:1;
			__BYTE	SCTIE:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} SCTCRSTR;

__IO_EXTENDED	  SCTCRSTR	IO_SCTCR;
#define	_sctcr		(IO_SCTCR)
#define	SCTCR		(IO_SCTCR.byte)
#define	SCTCR_SCTI  	(IO_SCTCR.bit.SCTI)
#define	SCTCR_SCTI0  	(IO_SCTCR.bitc.SCTI0)
#define	SCTCR_SCTI1  	(IO_SCTCR.bitc.SCTI1)
#define	SCTCR_SCTI2  	(IO_SCTCR.bitc.SCTI2)
#define	SCTCR_SCTR  	(IO_SCTCR.bit.SCTR)
#define	SCTCR_SCTIF  	(IO_SCTCR.bit.SCTIF)
#define	SCTCR_SCTIE  	(IO_SCTCR.bit.SCTIE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_RCCSRC,   locate=0x40B
#pragma segment FAR_DATA=IO_RCCSRC, locate=0x40B
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCMF:1;
			__BYTE	MCMF:1;
			__BYTE	WRST:1;
			__BYTE	SRST:1;
			__BYTE	SCRST:1;
			__BYTE	MCRST:1;
			__BYTE	ERST:1;
			__BYTE	PRST:1;
#else
			__BYTE	PRST:1;
			__BYTE	ERST:1;
			__BYTE	MCRST:1;
			__BYTE	SCRST:1;
			__BYTE	SRST:1;
			__BYTE	WRST:1;
			__BYTE	MCMF:1;
			__BYTE	SCMF:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCMF:1;
			__BYTE	MCMF:1;
			__BYTE	WRST:1;
			__BYTE	SRST:1;
			__BYTE	SCRST:1;
			__BYTE	MCRST:1;
			__BYTE	ERST:1;
			__BYTE	PRST:1;
#else
			__BYTE	PRST:1;
			__BYTE	ERST:1;
			__BYTE	MCRST:1;
			__BYTE	SCRST:1;
			__BYTE	SRST:1;
			__BYTE	WRST:1;
			__BYTE	MCMF:1;
			__BYTE	SCMF:1;
#endif
	} bitc;
} RCCSRCSTR;

__IO_EXTENDED	 const  RCCSRCSTR	IO_RCCSRC;
#define	_rccsrc		(IO_RCCSRC)
#define	RCCSRC		(IO_RCCSRC.byte)
#define	RCCSRC_PRST  	(IO_RCCSRC.bit.PRST)
#define	RCCSRC_ERST  	(IO_RCCSRC.bit.ERST)
#define	RCCSRC_MCRST  	(IO_RCCSRC.bit.MCRST)
#define	RCCSRC_SCRST  	(IO_RCCSRC.bit.SCRST)
#define	RCCSRC_SRST  	(IO_RCCSRC.bit.SRST)
#define	RCCSRC_WRST  	(IO_RCCSRC.bit.WRST)
#define	RCCSRC_MCMF  	(IO_RCCSRC.bit.MCMF)
#define	RCCSRC_SCMF  	(IO_RCCSRC.bit.SCMF)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_RCR,   locate=0x40C
#pragma segment FAR_DATA=IO_RCR, locate=0x40C
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	SCSDI:1;
			__BYTE	MCSDI:1;
			__BYTE	CSDRE:1;
			__BYTE	LVDE:1;
			__BYTE	LVRE:1;
			__BYTE	SRSTG:1;
#else
			__BYTE	SRSTG:1;
			__BYTE	LVRE:1;
			__BYTE	LVDE:1;
			__BYTE	CSDRE:1;
			__BYTE	MCSDI:1;
			__BYTE	SCSDI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	SCSDI:1;
			__BYTE	MCSDI:1;
			__BYTE	CSDRE:1;
			__BYTE	LVDE:1;
			__BYTE	LVRE:1;
			__BYTE	SRSTG:1;
#else
			__BYTE	SRSTG:1;
			__BYTE	LVRE:1;
			__BYTE	LVDE:1;
			__BYTE	CSDRE:1;
			__BYTE	MCSDI:1;
			__BYTE	SCSDI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} RCRSTR;

__IO_EXTENDED	  RCRSTR	IO_RCR;
#define	_rcr		(IO_RCR)
#define	RCR		(IO_RCR.byte)
#define	RCR_SRSTG  	(IO_RCR.bit.SRSTG)
#define	RCR_LVRE  	(IO_RCR.bit.LVRE)
#define	RCR_LVDE  	(IO_RCR.bit.LVDE)
#define	RCR_CSDRE  	(IO_RCR.bit.CSDRE)
#define	RCR_MCSDI  	(IO_RCR.bit.MCSDI)
#define	RCR_SCSDI  	(IO_RCR.bit.SCSDI)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_RCCSR,   locate=0x40D
#pragma segment FAR_DATA=IO_RCCSR, locate=0x40D
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCMF:1;
			__BYTE	MCMF:1;
			__BYTE	WRST:1;
			__BYTE	SRST:1;
			__BYTE	SCRST:1;
			__BYTE	MCRST:1;
			__BYTE	ERST:1;
			__BYTE	PRST:1;
#else
			__BYTE	PRST:1;
			__BYTE	ERST:1;
			__BYTE	MCRST:1;
			__BYTE	SCRST:1;
			__BYTE	SRST:1;
			__BYTE	WRST:1;
			__BYTE	MCMF:1;
			__BYTE	SCMF:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SCMF:1;
			__BYTE	MCMF:1;
			__BYTE	WRST:1;
			__BYTE	SRST:1;
			__BYTE	SCRST:1;
			__BYTE	MCRST:1;
			__BYTE	ERST:1;
			__BYTE	PRST:1;
#else
			__BYTE	PRST:1;
			__BYTE	ERST:1;
			__BYTE	MCRST:1;
			__BYTE	SCRST:1;
			__BYTE	SRST:1;
			__BYTE	WRST:1;
			__BYTE	MCMF:1;
			__BYTE	SCMF:1;
#endif
	} bitc;
} RCCSRSTR;

__IO_EXTENDED	 const  RCCSRSTR	IO_RCCSR;
#define	_rccsr		(IO_RCCSR)
#define	RCCSR		(IO_RCCSR.byte)
#define	RCCSR_PRST  	(IO_RCCSR.bit.PRST)
#define	RCCSR_ERST  	(IO_RCCSR.bit.ERST)
#define	RCCSR_MCRST  	(IO_RCCSR.bit.MCRST)
#define	RCCSR_SCRST  	(IO_RCCSR.bit.SCRST)
#define	RCCSR_SRST  	(IO_RCCSR.bit.SRST)
#define	RCCSR_WRST  	(IO_RCCSR.bit.WRST)
#define	RCCSR_MCMF  	(IO_RCCSR.bit.MCMF)
#define	RCCSR_SCMF  	(IO_RCCSR.bit.SCMF)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_WDT,   locate=0x40E
#pragma segment FAR_DATA=IO_WDT, locate=0x40E
#endif

__IO_EXTENDED	union {
	__WORD	word;
    struct {
        __BYTE	IO_WDTC;
        __BYTE	IO_WDTCP;
    } byte;
    union {
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV011:1;
			__WORD	RESV010:1;
			__WORD	RESV09:1;
			__WORD	RESV08:1;
			__WORD	RESV07:1;
			__WORD	RESV06:1;
			__WORD	RESV05:1;
			__WORD	RESV04:1;
			__WORD	WD:1;
			__WORD	RSTP:1;
			__WORD	WTCS:2;
			__WORD	WTI:4;
#else
			__WORD	WTI:4;
			__WORD	WTCS:2;
			__WORD	RSTP:1;
			__WORD	WD:1;
			__WORD	RESV04:1;
			__WORD	RESV05:1;
			__WORD	RESV06:1;
			__WORD	RESV07:1;
			__WORD	RESV08:1;
			__WORD	RESV09:1;
			__WORD	RESV010:1;
			__WORD	RESV011:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV015:1;
			__WORD	RESV014:1;
			__WORD	RESV013:1;
			__WORD	RESV012:1;
			__WORD	RESV011:1;
			__WORD	RESV010:1;
			__WORD	RESV09:1;
			__WORD	RESV08:1;
			__WORD	WD:1;
			__WORD	RSTP:1;
			__WORD	WTCS1:1;
			__WORD	WTCS0:1;
			__WORD	WTI3:1;
			__WORD	WTI2:1;
			__WORD	WTI1:1;
			__WORD	WTI0:1;
#else
			__WORD	WTI0:1;
			__WORD	WTI1:1;
			__WORD	WTI2:1;
			__WORD	WTI3:1;
			__WORD	WTCS0:1;
			__WORD	WTCS1:1;
			__WORD	RSTP:1;
			__WORD	WD:1;
			__WORD	RESV08:1;
			__WORD	RESV09:1;
			__WORD	RESV010:1;
			__WORD	RESV011:1;
			__WORD	RESV012:1;
			__WORD	RESV013:1;
			__WORD	RESV014:1;
			__WORD	RESV015:1;
#endif
		} bitc;
	} WDTC;
} IO_WDT;

#define	WDT			(IO_WDT.word)
#define	WDTCP_		(IO_WDT.byte.IO_WDTCP)
#define	WDTC_		(IO_WDT.byte.IO_WDTC)
#define	WDTC_WTI  	(IO_WDT.WDTC.bit.WTI)
#define	WDTC_WTI0  	(IO_WDT.WDTC.bitc.WTI0)
#define	WDTC_WTI1  	(IO_WDT.WDTC.bitc.WTI1)
#define	WDTC_WTI2  	(IO_WDT.WDTC.bitc.WTI2)
#define	WDTC_WTI3  	(IO_WDT.WDTC.bitc.WTI3)
#define	WDTC_WTCS  	(IO_WDT.WDTC.bit.WTCS)
#define	WDTC_WTCS0 	(IO_WDT.WDTC.bitc.WTCS0)
#define	WDTC_WTCS1 	(IO_WDT.WDTC.bitc.WTCS1)
#define	WDTC_RSTP  	(IO_WDT.WDTC.bit.RSTP)
#define	WDTC_WD  	(IO_WDT.WDTC.bit.WD)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_COAR,   locate=0x415
#pragma segment FAR_DATA=IO_COAR, locate=0x415
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RUNM1:1;
			__BYTE	RUNC1:1;
			__BYTE	CKOXE1:1;
			__BYTE	CKOE1:1;
			__BYTE	RUNM0:1;
			__BYTE	RUNC0:1;
			__BYTE	CKOXE0:1;
			__BYTE	CKOE0:1;
#else
			__BYTE	CKOE0:1;
			__BYTE	CKOXE0:1;
			__BYTE	RUNC0:1;
			__BYTE	RUNM0:1;
			__BYTE	CKOE1:1;
			__BYTE	CKOXE1:1;
			__BYTE	RUNC1:1;
			__BYTE	RUNM1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RUNM1:1;
			__BYTE	RUNC1:1;
			__BYTE	CKOXE1:1;
			__BYTE	CKOE1:1;
			__BYTE	RUNM0:1;
			__BYTE	RUNC0:1;
			__BYTE	CKOXE0:1;
			__BYTE	CKOE0:1;
#else
			__BYTE	CKOE0:1;
			__BYTE	CKOXE0:1;
			__BYTE	RUNC0:1;
			__BYTE	RUNM0:1;
			__BYTE	CKOE1:1;
			__BYTE	CKOXE1:1;
			__BYTE	RUNC1:1;
			__BYTE	RUNM1:1;
#endif
	} bitc;
} COARSTR;

__IO_EXTENDED	  COARSTR	IO_COAR;
#define	_coar		(IO_COAR)
#define	COAR		(IO_COAR.byte)
#define	COAR_CKOE0  	(IO_COAR.bit.CKOE0)
#define	COAR_CKOXE0  	(IO_COAR.bit.CKOXE0)
#define	COAR_RUNC0  	(IO_COAR.bit.RUNC0)
#define	COAR_RUNM0  	(IO_COAR.bit.RUNM0)
#define	COAR_CKOE1  	(IO_COAR.bit.CKOE1)
#define	COAR_CKOXE1  	(IO_COAR.bit.CKOXE1)
#define	COAR_RUNC1  	(IO_COAR.bit.RUNC1)
#define	COAR_RUNM1  	(IO_COAR.bit.RUNM1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_COCR0,   locate=0x416
#pragma segment FAR_DATA=IO_COCR0, locate=0x416
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV2:1;
			__BYTE	DIV:3;
			__BYTE	SEL:4;
#else
			__BYTE	SEL:4;
			__BYTE	DIV:3;
			__BYTE	RESV2:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	DIV2:1;
			__BYTE	DIV1:1;
			__BYTE	DIV0:1;
			__BYTE	SEL3:1;
			__BYTE	SEL2:1;
			__BYTE	SEL1:1;
			__BYTE	SEL0:1;
#else
			__BYTE	SEL0:1;
			__BYTE	SEL1:1;
			__BYTE	SEL2:1;
			__BYTE	SEL3:1;
			__BYTE	DIV0:1;
			__BYTE	DIV1:1;
			__BYTE	DIV2:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} COCR0STR;

__IO_EXTENDED	  COCR0STR	IO_COCR0;
#define	_cocr0		(IO_COCR0)
#define	COCR0		(IO_COCR0.byte)
#define	COCR0_SEL  	(IO_COCR0.bit.SEL)
#define	COCR0_SEL0  	(IO_COCR0.bitc.SEL0)
#define	COCR0_SEL1  	(IO_COCR0.bitc.SEL1)
#define	COCR0_SEL2  	(IO_COCR0.bitc.SEL2)
#define	COCR0_SEL3  	(IO_COCR0.bitc.SEL3)
#define	COCR0_DIV  	(IO_COCR0.bit.DIV)
#define	COCR0_DIV0  	(IO_COCR0.bitc.DIV0)
#define	COCR0_DIV1  	(IO_COCR0.bitc.DIV1)
#define	COCR0_DIV2  	(IO_COCR0.bitc.DIV2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_COCR1,   locate=0x417
#pragma segment FAR_DATA=IO_COCR1, locate=0x417
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV2:1;
			__BYTE	DIV:3;
			__BYTE	SEL:4;
#else
			__BYTE	SEL:4;
			__BYTE	DIV:3;
			__BYTE	RESV2:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	DIV2:1;
			__BYTE	DIV1:1;
			__BYTE	DIV0:1;
			__BYTE	SEL3:1;
			__BYTE	SEL2:1;
			__BYTE	SEL1:1;
			__BYTE	SEL0:1;
#else
			__BYTE	SEL0:1;
			__BYTE	SEL1:1;
			__BYTE	SEL2:1;
			__BYTE	SEL3:1;
			__BYTE	DIV0:1;
			__BYTE	DIV1:1;
			__BYTE	DIV2:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} COCR1STR;

__IO_EXTENDED	  COCR1STR	IO_COCR1;
#define	_cocr1		(IO_COCR1)
#define	COCR1		(IO_COCR1.byte)
#define	COCR1_SEL  	(IO_COCR1.bit.SEL)
#define	COCR1_SEL0  	(IO_COCR1.bitc.SEL0)
#define	COCR1_SEL1  	(IO_COCR1.bitc.SEL1)
#define	COCR1_SEL2  	(IO_COCR1.bitc.SEL2)
#define	COCR1_SEL3  	(IO_COCR1.bitc.SEL3)
#define	COCR1_DIV  	(IO_COCR1.bit.DIV)
#define	COCR1_DIV0  	(IO_COCR1.bitc.DIV0)
#define	COCR1_DIV1  	(IO_COCR1.bitc.DIV1)
#define	COCR1_DIV2  	(IO_COCR1.bitc.DIV2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_WDTEC,   locate=0x420
#pragma segment FAR_DATA=IO_WDTEC, locate=0x420
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	WTWE:1;
			__BYTE	WTLI:4;
#else
			__BYTE	WTLI:4;
			__BYTE	WTWE:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	WTWE:1;
			__BYTE	WTLI3:1;
			__BYTE	WTLI2:1;
			__BYTE	WTLI1:1;
			__BYTE	WTLI0:1;
#else
			__BYTE	WTLI0:1;
			__BYTE	WTLI1:1;
			__BYTE	WTLI2:1;
			__BYTE	WTLI3:1;
			__BYTE	WTWE:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} WDTECSTR;

__IO_EXTENDED	  WDTECSTR	IO_WDTEC;
#define	_wdtec		(IO_WDTEC)
#define	WDTEC		(IO_WDTEC.byte)
#define	WDTEC_WTLI  	(IO_WDTEC.bit.WTLI)
#define	WDTEC_WTLI0  	(IO_WDTEC.bitc.WTLI0)
#define	WDTEC_WTLI1  	(IO_WDTEC.bitc.WTLI1)
#define	WDTEC_WTLI2  	(IO_WDTEC.bitc.WTLI2)
#define	WDTEC_WTLI3  	(IO_WDTEC.bitc.WTLI3)
#define	WDTEC_WTWE  	(IO_WDTEC.bit.WTWE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_VRCR,   locate=0x42C
#pragma segment FAR_DATA=IO_VRCR, locate=0x42C
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	HPM:2;
			__BYTE	RESV3:1;
			__BYTE	LPMA:2;
			__BYTE	RESV1:1;
			__BYTE	LPMB:2;
#else
			__BYTE	LPMB:2;
			__BYTE	RESV1:1;
			__BYTE	LPMA:2;
			__BYTE	RESV3:1;
			__BYTE	HPM:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	HPM1:1;
			__BYTE	HPM0:1;
			__BYTE	RESV5:1;
			__BYTE	LPMA1:1;
			__BYTE	LPMA0:1;
			__BYTE	RESV2:1;
			__BYTE	LPMB1:1;
			__BYTE	LPMB0:1;
#else
			__BYTE	LPMB0:1;
			__BYTE	LPMB1:1;
			__BYTE	RESV2:1;
			__BYTE	LPMA0:1;
			__BYTE	LPMA1:1;
			__BYTE	RESV5:1;
			__BYTE	HPM0:1;
			__BYTE	HPM1:1;
#endif
	} bitc;
} VRCRSTR;

__IO_EXTENDED	  VRCRSTR	IO_VRCR;
#define	_vrcr		(IO_VRCR)
#define	VRCR		(IO_VRCR.byte)
#define	VRCR_LPMB  	(IO_VRCR.bit.LPMB)
#define	VRCR_LPMB0  	(IO_VRCR.bitc.LPMB0)
#define	VRCR_LPMB1  	(IO_VRCR.bitc.LPMB1)
#define	VRCR_LPMA  	(IO_VRCR.bit.LPMA)
#define	VRCR_LPMA0  	(IO_VRCR.bitc.LPMA0)
#define	VRCR_LPMA1  	(IO_VRCR.bitc.LPMA1)
#define	VRCR_HPM  	(IO_VRCR.bit.HPM)
#define	VRCR_HPM0  	(IO_VRCR.bitc.HPM0)
#define	VRCR_HPM1  	(IO_VRCR.bitc.HPM1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CILCR,   locate=0x42D
#pragma segment FAR_DATA=IO_CILCR, locate=0x42D
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LVINTE:1;
			__BYTE	LVINT:1;
			__BYTE	LVHYS:1;
			__BYTE	FCI:1;
			__BYTE	LVL:4;
#else
			__BYTE	LVL:4;
			__BYTE	FCI:1;
			__BYTE	LVHYS:1;
			__BYTE	LVINT:1;
			__BYTE	LVINTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LVINTE:1;
			__BYTE	LVINT:1;
			__BYTE	LVHYS:1;
			__BYTE	FCI:1;
			__BYTE	LVL3:1;
			__BYTE	LVL2:1;
			__BYTE	LVL1:1;
			__BYTE	LVL0:1;
#else
			__BYTE	LVL0:1;
			__BYTE	LVL1:1;
			__BYTE	LVL2:1;
			__BYTE	LVL3:1;
			__BYTE	FCI:1;
			__BYTE	LVHYS:1;
			__BYTE	LVINT:1;
			__BYTE	LVINTE:1;
#endif
	} bitc;
} CILCRSTR;

__IO_EXTENDED	  CILCRSTR	IO_CILCR;
#define	_cilcr		(IO_CILCR)
#define	CILCR		(IO_CILCR.byte)
#define	CILCR_LVL  	(IO_CILCR.bit.LVL)
#define	CILCR_LVL0  	(IO_CILCR.bitc.LVL0)
#define	CILCR_LVL1  	(IO_CILCR.bitc.LVL1)
#define	CILCR_LVL2  	(IO_CILCR.bitc.LVL2)
#define	CILCR_LVL3  	(IO_CILCR.bitc.LVL3)
#define	CILCR_FCI  	(IO_CILCR.bit.FCI)
#define	CILCR_LVHYS  	(IO_CILCR.bit.LVHYS)
#define	CILCR_LVINT  	(IO_CILCR.bit.LVINT)
#define	CILCR_LVINTE  	(IO_CILCR.bit.LVINTE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ESMCR,   locate=0x42E
#pragma segment FAR_DATA=IO_ESMCR, locate=0x42E
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	FPDS:1;
			__BYTE	BSD:4;
#else
			__BYTE	BSD:4;
			__BYTE	FPDS:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	FPDS:1;
			__BYTE	BSD3:1;
			__BYTE	BSD2:1;
			__BYTE	BSD1:1;
			__BYTE	BSD0:1;
#else
			__BYTE	BSD0:1;
			__BYTE	BSD1:1;
			__BYTE	BSD2:1;
			__BYTE	BSD3:1;
			__BYTE	FPDS:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ESMCRSTR;

__IO_EXTENDED	  ESMCRSTR	IO_ESMCR;
#define	_esmcr		(IO_ESMCR)
#define	ESMCR		(IO_ESMCR.byte)
#define	ESMCR_BSD  	(IO_ESMCR.bit.BSD)
#define	ESMCR_BSD0  	(IO_ESMCR.bitc.BSD0)
#define	ESMCR_BSD1  	(IO_ESMCR.bitc.BSD1)
#define	ESMCR_BSD2  	(IO_ESMCR.bitc.BSD2)
#define	ESMCR_BSD3  	(IO_ESMCR.bitc.BSD3)
#define	ESMCR_FPDS  	(IO_ESMCR.bit.FPDS)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR00,   locate=0x430
#pragma segment FAR_DATA=IO_DDR00, locate=0x430
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR00STR;

__IO_EXTENDED	  DDR00STR	IO_DDR00;
#define	_ddr00		(IO_DDR00)
#define	DDR00		(IO_DDR00.byte)
#define	DDR00_D0  	(IO_DDR00.bit.D0)
#define	DDR00_D1  	(IO_DDR00.bit.D1)
#define	DDR00_D2  	(IO_DDR00.bit.D2)
#define	DDR00_D3  	(IO_DDR00.bit.D3)
#define	DDR00_D4  	(IO_DDR00.bit.D4)
#define	DDR00_D5  	(IO_DDR00.bit.D5)
#define	DDR00_D6  	(IO_DDR00.bit.D6)
#define	DDR00_D7  	(IO_DDR00.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR01,   locate=0x431
#pragma segment FAR_DATA=IO_DDR01, locate=0x431
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR01STR;

__IO_EXTENDED	  DDR01STR	IO_DDR01;
#define	_ddr01		(IO_DDR01)
#define	DDR01		(IO_DDR01.byte)
#define	DDR01_D0  	(IO_DDR01.bit.D0)
#define	DDR01_D1  	(IO_DDR01.bit.D1)
#define	DDR01_D2  	(IO_DDR01.bit.D2)
#define	DDR01_D3  	(IO_DDR01.bit.D3)
#define	DDR01_D4  	(IO_DDR01.bit.D4)
#define	DDR01_D5  	(IO_DDR01.bit.D5)
#define	DDR01_D6  	(IO_DDR01.bit.D6)
#define	DDR01_D7  	(IO_DDR01.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR02,   locate=0x432
#pragma segment FAR_DATA=IO_DDR02, locate=0x432
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR02STR;

__IO_EXTENDED	  DDR02STR	IO_DDR02;
#define	_ddr02		(IO_DDR02)
#define	DDR02		(IO_DDR02.byte)
#define	DDR02_D0  	(IO_DDR02.bit.D0)
#define	DDR02_D1  	(IO_DDR02.bit.D1)
#define	DDR02_D2  	(IO_DDR02.bit.D2)
#define	DDR02_D3  	(IO_DDR02.bit.D3)
#define	DDR02_D4  	(IO_DDR02.bit.D4)
#define	DDR02_D5  	(IO_DDR02.bit.D5)
#define	DDR02_D6  	(IO_DDR02.bit.D6)
#define	DDR02_D7  	(IO_DDR02.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR03,   locate=0x433
#pragma segment FAR_DATA=IO_DDR03, locate=0x433
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR03STR;

__IO_EXTENDED	  DDR03STR	IO_DDR03;
#define	_ddr03		(IO_DDR03)
#define	DDR03		(IO_DDR03.byte)
#define	DDR03_D0  	(IO_DDR03.bit.D0)
#define	DDR03_D1  	(IO_DDR03.bit.D1)
#define	DDR03_D2  	(IO_DDR03.bit.D2)
#define	DDR03_D3  	(IO_DDR03.bit.D3)
#define	DDR03_D4  	(IO_DDR03.bit.D4)
#define	DDR03_D5  	(IO_DDR03.bit.D5)
#define	DDR03_D6  	(IO_DDR03.bit.D6)
#define	DDR03_D7  	(IO_DDR03.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR04,   locate=0x434
#pragma segment FAR_DATA=IO_DDR04, locate=0x434
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR04STR;

__IO_EXTENDED	  DDR04STR	IO_DDR04;
#define	_ddr04		(IO_DDR04)
#define	DDR04		(IO_DDR04.byte)
#define	DDR04_D0  	(IO_DDR04.bit.D0)
#define	DDR04_D1  	(IO_DDR04.bit.D1)
#define	DDR04_D2  	(IO_DDR04.bit.D2)
#define	DDR04_D3  	(IO_DDR04.bit.D3)
#define	DDR04_D4  	(IO_DDR04.bit.D4)
#define	DDR04_D5  	(IO_DDR04.bit.D5)
#define	DDR04_D6  	(IO_DDR04.bit.D6)
#define	DDR04_D7  	(IO_DDR04.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR05,   locate=0x435
#pragma segment FAR_DATA=IO_DDR05, locate=0x435
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR05STR;

__IO_EXTENDED	  DDR05STR	IO_DDR05;
#define	_ddr05		(IO_DDR05)
#define	DDR05		(IO_DDR05.byte)
#define	DDR05_D0  	(IO_DDR05.bit.D0)
#define	DDR05_D1  	(IO_DDR05.bit.D1)
#define	DDR05_D2  	(IO_DDR05.bit.D2)
#define	DDR05_D3  	(IO_DDR05.bit.D3)
#define	DDR05_D4  	(IO_DDR05.bit.D4)
#define	DDR05_D5  	(IO_DDR05.bit.D5)
#define	DDR05_D6  	(IO_DDR05.bit.D6)
#define	DDR05_D7  	(IO_DDR05.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR06,   locate=0x436
#pragma segment FAR_DATA=IO_DDR06, locate=0x436
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR06STR;

__IO_EXTENDED	  DDR06STR	IO_DDR06;
#define	_ddr06		(IO_DDR06)
#define	DDR06		(IO_DDR06.byte)
#define	DDR06_D0  	(IO_DDR06.bit.D0)
#define	DDR06_D1  	(IO_DDR06.bit.D1)
#define	DDR06_D2  	(IO_DDR06.bit.D2)
#define	DDR06_D3  	(IO_DDR06.bit.D3)
#define	DDR06_D4  	(IO_DDR06.bit.D4)
#define	DDR06_D5  	(IO_DDR06.bit.D5)
#define	DDR06_D6  	(IO_DDR06.bit.D6)
#define	DDR06_D7  	(IO_DDR06.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR07,   locate=0x437
#pragma segment FAR_DATA=IO_DDR07, locate=0x437
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR07STR;

__IO_EXTENDED	  DDR07STR	IO_DDR07;
#define	_ddr07		(IO_DDR07)
#define	DDR07		(IO_DDR07.byte)
#define	DDR07_D0  	(IO_DDR07.bit.D0)
#define	DDR07_D1  	(IO_DDR07.bit.D1)
#define	DDR07_D2  	(IO_DDR07.bit.D2)
#define	DDR07_D3  	(IO_DDR07.bit.D3)
#define	DDR07_D4  	(IO_DDR07.bit.D4)
#define	DDR07_D5  	(IO_DDR07.bit.D5)
#define	DDR07_D6  	(IO_DDR07.bit.D6)
#define	DDR07_D7  	(IO_DDR07.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DDR17,   locate=0x441
#pragma segment FAR_DATA=IO_DDR17, locate=0x441
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
#else
			__BYTE	D0:1;
			__BYTE	D1:1;
			__BYTE	D2:1;
			__BYTE	D3:1;
			__BYTE	D4:1;
			__BYTE	D5:1;
			__BYTE	D6:1;
			__BYTE	D7:1;
#endif
	} bitc;
} DDR17STR;

__IO_EXTENDED	  DDR17STR	IO_DDR17;
#define	_ddr17		(IO_DDR17)
#define	DDR17		(IO_DDR17.byte)
#define	DDR17_D0  	(IO_DDR17.bit.D0)
#define	DDR17_D1  	(IO_DDR17.bit.D1)
#define	DDR17_D2  	(IO_DDR17.bit.D2)
#define	DDR17_D3  	(IO_DDR17.bit.D3)
#define	DDR17_D4  	(IO_DDR17.bit.D4)
#define	DDR17_D5  	(IO_DDR17.bit.D5)
#define	DDR17_D6  	(IO_DDR17.bit.D6)
#define	DDR17_D7  	(IO_DDR17.bit.D7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER00,   locate=0x444
#pragma segment FAR_DATA=IO_PIER00, locate=0x444
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER00STR;

__IO_EXTENDED	  PIER00STR	IO_PIER00;
#define	_pier00		(IO_PIER00)
#define	PIER00		(IO_PIER00.byte)
#define	PIER00_IE0  	(IO_PIER00.bit.IE0)
#define	PIER00_IE1  	(IO_PIER00.bit.IE1)
#define	PIER00_IE2  	(IO_PIER00.bit.IE2)
#define	PIER00_IE3  	(IO_PIER00.bit.IE3)
#define	PIER00_IE4  	(IO_PIER00.bit.IE4)
#define	PIER00_IE5  	(IO_PIER00.bit.IE5)
#define	PIER00_IE6  	(IO_PIER00.bit.IE6)
#define	PIER00_IE7  	(IO_PIER00.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER01,   locate=0x445
#pragma segment FAR_DATA=IO_PIER01, locate=0x445
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER01STR;

__IO_EXTENDED	  PIER01STR	IO_PIER01;
#define	_pier01		(IO_PIER01)
#define	PIER01		(IO_PIER01.byte)
#define	PIER01_IE0  	(IO_PIER01.bit.IE0)
#define	PIER01_IE1  	(IO_PIER01.bit.IE1)
#define	PIER01_IE2  	(IO_PIER01.bit.IE2)
#define	PIER01_IE3  	(IO_PIER01.bit.IE3)
#define	PIER01_IE4  	(IO_PIER01.bit.IE4)
#define	PIER01_IE5  	(IO_PIER01.bit.IE5)
#define	PIER01_IE6  	(IO_PIER01.bit.IE6)
#define	PIER01_IE7  	(IO_PIER01.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER02,   locate=0x446
#pragma segment FAR_DATA=IO_PIER02, locate=0x446
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER02STR;

__IO_EXTENDED	  PIER02STR	IO_PIER02;
#define	_pier02		(IO_PIER02)
#define	PIER02		(IO_PIER02.byte)
#define	PIER02_IE0  	(IO_PIER02.bit.IE0)
#define	PIER02_IE1  	(IO_PIER02.bit.IE1)
#define	PIER02_IE2  	(IO_PIER02.bit.IE2)
#define	PIER02_IE3  	(IO_PIER02.bit.IE3)
#define	PIER02_IE4  	(IO_PIER02.bit.IE4)
#define	PIER02_IE5  	(IO_PIER02.bit.IE5)
#define	PIER02_IE6  	(IO_PIER02.bit.IE6)
#define	PIER02_IE7  	(IO_PIER02.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER03,   locate=0x447
#pragma segment FAR_DATA=IO_PIER03, locate=0x447
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER03STR;

__IO_EXTENDED	  PIER03STR	IO_PIER03;
#define	_pier03		(IO_PIER03)
#define	PIER03		(IO_PIER03.byte)
#define	PIER03_IE0  	(IO_PIER03.bit.IE0)
#define	PIER03_IE1  	(IO_PIER03.bit.IE1)
#define	PIER03_IE2  	(IO_PIER03.bit.IE2)
#define	PIER03_IE3  	(IO_PIER03.bit.IE3)
#define	PIER03_IE4  	(IO_PIER03.bit.IE4)
#define	PIER03_IE5  	(IO_PIER03.bit.IE5)
#define	PIER03_IE6  	(IO_PIER03.bit.IE6)
#define	PIER03_IE7  	(IO_PIER03.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER04,   locate=0x448
#pragma segment FAR_DATA=IO_PIER04, locate=0x448
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER04STR;

__IO_EXTENDED	  PIER04STR	IO_PIER04;
#define	_pier04		(IO_PIER04)
#define	PIER04		(IO_PIER04.byte)
#define	PIER04_IE0  	(IO_PIER04.bit.IE0)
#define	PIER04_IE1  	(IO_PIER04.bit.IE1)
#define	PIER04_IE2  	(IO_PIER04.bit.IE2)
#define	PIER04_IE3  	(IO_PIER04.bit.IE3)
#define	PIER04_IE4  	(IO_PIER04.bit.IE4)
#define	PIER04_IE5  	(IO_PIER04.bit.IE5)
#define	PIER04_IE6  	(IO_PIER04.bit.IE6)
#define	PIER04_IE7  	(IO_PIER04.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER05,   locate=0x449
#pragma segment FAR_DATA=IO_PIER05, locate=0x449
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER05STR;

__IO_EXTENDED	  PIER05STR	IO_PIER05;
#define	_pier05		(IO_PIER05)
#define	PIER05		(IO_PIER05.byte)
#define	PIER05_IE0  	(IO_PIER05.bit.IE0)
#define	PIER05_IE1  	(IO_PIER05.bit.IE1)
#define	PIER05_IE2  	(IO_PIER05.bit.IE2)
#define	PIER05_IE3  	(IO_PIER05.bit.IE3)
#define	PIER05_IE4  	(IO_PIER05.bit.IE4)
#define	PIER05_IE5  	(IO_PIER05.bit.IE5)
#define	PIER05_IE6  	(IO_PIER05.bit.IE6)
#define	PIER05_IE7  	(IO_PIER05.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER06,   locate=0x44A
#pragma segment FAR_DATA=IO_PIER06, locate=0x44A
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER06STR;

__IO_EXTENDED	  PIER06STR	IO_PIER06;
#define	_pier06		(IO_PIER06)
#define	PIER06		(IO_PIER06.byte)
#define	PIER06_IE0  	(IO_PIER06.bit.IE0)
#define	PIER06_IE1  	(IO_PIER06.bit.IE1)
#define	PIER06_IE2  	(IO_PIER06.bit.IE2)
#define	PIER06_IE3  	(IO_PIER06.bit.IE3)
#define	PIER06_IE4  	(IO_PIER06.bit.IE4)
#define	PIER06_IE5  	(IO_PIER06.bit.IE5)
#define	PIER06_IE6  	(IO_PIER06.bit.IE6)
#define	PIER06_IE7  	(IO_PIER06.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER07,   locate=0x44B
#pragma segment FAR_DATA=IO_PIER07, locate=0x44B
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER07STR;

__IO_EXTENDED	  PIER07STR	IO_PIER07;
#define	_pier07		(IO_PIER07)
#define	PIER07		(IO_PIER07.byte)
#define	PIER07_IE0  	(IO_PIER07.bit.IE0)
#define	PIER07_IE1  	(IO_PIER07.bit.IE1)
#define	PIER07_IE2  	(IO_PIER07.bit.IE2)
#define	PIER07_IE3  	(IO_PIER07.bit.IE3)
#define	PIER07_IE4  	(IO_PIER07.bit.IE4)
#define	PIER07_IE5  	(IO_PIER07.bit.IE5)
#define	PIER07_IE6  	(IO_PIER07.bit.IE6)
#define	PIER07_IE7  	(IO_PIER07.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PIER17,   locate=0x455
#pragma segment FAR_DATA=IO_PIER17, locate=0x455
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	IE7:1;
			__BYTE	IE6:1;
			__BYTE	IE5:1;
			__BYTE	IE4:1;
			__BYTE	IE3:1;
			__BYTE	IE2:1;
			__BYTE	IE1:1;
			__BYTE	IE0:1;
#else
			__BYTE	IE0:1;
			__BYTE	IE1:1;
			__BYTE	IE2:1;
			__BYTE	IE3:1;
			__BYTE	IE4:1;
			__BYTE	IE5:1;
			__BYTE	IE6:1;
			__BYTE	IE7:1;
#endif
	} bitc;
} PIER17STR;

__IO_EXTENDED	  PIER17STR	IO_PIER17;
#define	_pier17		(IO_PIER17)
#define	PIER17		(IO_PIER17.byte)
#define	PIER17_IE0  	(IO_PIER17.bit.IE0)
#define	PIER17_IE1  	(IO_PIER17.bit.IE1)
#define	PIER17_IE2  	(IO_PIER17.bit.IE2)
#define	PIER17_IE3  	(IO_PIER17.bit.IE3)
#define	PIER17_IE4  	(IO_PIER17.bit.IE4)
#define	PIER17_IE5  	(IO_PIER17.bit.IE5)
#define	PIER17_IE6  	(IO_PIER17.bit.IE6)
#define	PIER17_IE7  	(IO_PIER17.bit.IE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR00,   locate=0x4A8
#pragma segment FAR_DATA=IO_PUCR00, locate=0x4A8
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR00STR;

__IO_EXTENDED	  PUCR00STR	IO_PUCR00;
#define	_pucr00		(IO_PUCR00)
#define	PUCR00		(IO_PUCR00.byte)
#define	PUCR00_PU0  	(IO_PUCR00.bit.PU0)
#define	PUCR00_PU1  	(IO_PUCR00.bit.PU1)
#define	PUCR00_PU2  	(IO_PUCR00.bit.PU2)
#define	PUCR00_PU3  	(IO_PUCR00.bit.PU3)
#define	PUCR00_PU4  	(IO_PUCR00.bit.PU4)
#define	PUCR00_PU5  	(IO_PUCR00.bit.PU5)
#define	PUCR00_PU6  	(IO_PUCR00.bit.PU6)
#define	PUCR00_PU7  	(IO_PUCR00.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR01,   locate=0x4A9
#pragma segment FAR_DATA=IO_PUCR01, locate=0x4A9
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR01STR;

__IO_EXTENDED	  PUCR01STR	IO_PUCR01;
#define	_pucr01		(IO_PUCR01)
#define	PUCR01		(IO_PUCR01.byte)
#define	PUCR01_PU0  	(IO_PUCR01.bit.PU0)
#define	PUCR01_PU1  	(IO_PUCR01.bit.PU1)
#define	PUCR01_PU2  	(IO_PUCR01.bit.PU2)
#define	PUCR01_PU3  	(IO_PUCR01.bit.PU3)
#define	PUCR01_PU4  	(IO_PUCR01.bit.PU4)
#define	PUCR01_PU5  	(IO_PUCR01.bit.PU5)
#define	PUCR01_PU6  	(IO_PUCR01.bit.PU6)
#define	PUCR01_PU7  	(IO_PUCR01.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR02,   locate=0x4AA
#pragma segment FAR_DATA=IO_PUCR02, locate=0x4AA
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR02STR;

__IO_EXTENDED	  PUCR02STR	IO_PUCR02;
#define	_pucr02		(IO_PUCR02)
#define	PUCR02		(IO_PUCR02.byte)
#define	PUCR02_PU0  	(IO_PUCR02.bit.PU0)
#define	PUCR02_PU1  	(IO_PUCR02.bit.PU1)
#define	PUCR02_PU2  	(IO_PUCR02.bit.PU2)
#define	PUCR02_PU3  	(IO_PUCR02.bit.PU3)
#define	PUCR02_PU4  	(IO_PUCR02.bit.PU4)
#define	PUCR02_PU5  	(IO_PUCR02.bit.PU5)
#define	PUCR02_PU6  	(IO_PUCR02.bit.PU6)
#define	PUCR02_PU7  	(IO_PUCR02.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR03,   locate=0x4AB
#pragma segment FAR_DATA=IO_PUCR03, locate=0x4AB
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR03STR;

__IO_EXTENDED	  PUCR03STR	IO_PUCR03;
#define	_pucr03		(IO_PUCR03)
#define	PUCR03		(IO_PUCR03.byte)
#define	PUCR03_PU0  	(IO_PUCR03.bit.PU0)
#define	PUCR03_PU1  	(IO_PUCR03.bit.PU1)
#define	PUCR03_PU2  	(IO_PUCR03.bit.PU2)
#define	PUCR03_PU3  	(IO_PUCR03.bit.PU3)
#define	PUCR03_PU4  	(IO_PUCR03.bit.PU4)
#define	PUCR03_PU5  	(IO_PUCR03.bit.PU5)
#define	PUCR03_PU6  	(IO_PUCR03.bit.PU6)
#define	PUCR03_PU7  	(IO_PUCR03.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR04,   locate=0x4AC
#pragma segment FAR_DATA=IO_PUCR04, locate=0x4AC
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR04STR;

__IO_EXTENDED	  PUCR04STR	IO_PUCR04;
#define	_pucr04		(IO_PUCR04)
#define	PUCR04		(IO_PUCR04.byte)
#define	PUCR04_PU0  	(IO_PUCR04.bit.PU0)
#define	PUCR04_PU1  	(IO_PUCR04.bit.PU1)
#define	PUCR04_PU2  	(IO_PUCR04.bit.PU2)
#define	PUCR04_PU3  	(IO_PUCR04.bit.PU3)
#define	PUCR04_PU4  	(IO_PUCR04.bit.PU4)
#define	PUCR04_PU5  	(IO_PUCR04.bit.PU5)
#define	PUCR04_PU6  	(IO_PUCR04.bit.PU6)
#define	PUCR04_PU7  	(IO_PUCR04.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR05,   locate=0x4AD
#pragma segment FAR_DATA=IO_PUCR05, locate=0x4AD
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR05STR;

__IO_EXTENDED	  PUCR05STR	IO_PUCR05;
#define	_pucr05		(IO_PUCR05)
#define	PUCR05		(IO_PUCR05.byte)
#define	PUCR05_PU0  	(IO_PUCR05.bit.PU0)
#define	PUCR05_PU1  	(IO_PUCR05.bit.PU1)
#define	PUCR05_PU2  	(IO_PUCR05.bit.PU2)
#define	PUCR05_PU3  	(IO_PUCR05.bit.PU3)
#define	PUCR05_PU4  	(IO_PUCR05.bit.PU4)
#define	PUCR05_PU5  	(IO_PUCR05.bit.PU5)
#define	PUCR05_PU6  	(IO_PUCR05.bit.PU6)
#define	PUCR05_PU7  	(IO_PUCR05.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR06,   locate=0x4AE
#pragma segment FAR_DATA=IO_PUCR06, locate=0x4AE
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR06STR;

__IO_EXTENDED	  PUCR06STR	IO_PUCR06;
#define	_pucr06		(IO_PUCR06)
#define	PUCR06		(IO_PUCR06.byte)
#define	PUCR06_PU0  	(IO_PUCR06.bit.PU0)
#define	PUCR06_PU1  	(IO_PUCR06.bit.PU1)
#define	PUCR06_PU2  	(IO_PUCR06.bit.PU2)
#define	PUCR06_PU3  	(IO_PUCR06.bit.PU3)
#define	PUCR06_PU4  	(IO_PUCR06.bit.PU4)
#define	PUCR06_PU5  	(IO_PUCR06.bit.PU5)
#define	PUCR06_PU6  	(IO_PUCR06.bit.PU6)
#define	PUCR06_PU7  	(IO_PUCR06.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR07,   locate=0x4AF
#pragma segment FAR_DATA=IO_PUCR07, locate=0x4AF
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR07STR;

__IO_EXTENDED	  PUCR07STR	IO_PUCR07;
#define	_pucr07		(IO_PUCR07)
#define	PUCR07		(IO_PUCR07.byte)
#define	PUCR07_PU0  	(IO_PUCR07.bit.PU0)
#define	PUCR07_PU1  	(IO_PUCR07.bit.PU1)
#define	PUCR07_PU2  	(IO_PUCR07.bit.PU2)
#define	PUCR07_PU3  	(IO_PUCR07.bit.PU3)
#define	PUCR07_PU4  	(IO_PUCR07.bit.PU4)
#define	PUCR07_PU5  	(IO_PUCR07.bit.PU5)
#define	PUCR07_PU6  	(IO_PUCR07.bit.PU6)
#define	PUCR07_PU7  	(IO_PUCR07.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PUCR17,   locate=0x4B9
#pragma segment FAR_DATA=IO_PUCR17, locate=0x4B9
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PU7:1;
			__BYTE	PU6:1;
			__BYTE	PU5:1;
			__BYTE	PU4:1;
			__BYTE	PU3:1;
			__BYTE	PU2:1;
			__BYTE	PU1:1;
			__BYTE	PU0:1;
#else
			__BYTE	PU0:1;
			__BYTE	PU1:1;
			__BYTE	PU2:1;
			__BYTE	PU3:1;
			__BYTE	PU4:1;
			__BYTE	PU5:1;
			__BYTE	PU6:1;
			__BYTE	PU7:1;
#endif
	} bitc;
} PUCR17STR;

__IO_EXTENDED	  PUCR17STR	IO_PUCR17;
#define	_pucr17		(IO_PUCR17)
#define	PUCR17		(IO_PUCR17.byte)
#define	PUCR17_PU0  	(IO_PUCR17.bit.PU0)
#define	PUCR17_PU1  	(IO_PUCR17.bit.PU1)
#define	PUCR17_PU2  	(IO_PUCR17.bit.PU2)
#define	PUCR17_PU3  	(IO_PUCR17.bit.PU3)
#define	PUCR17_PU4  	(IO_PUCR17.bit.PU4)
#define	PUCR17_PU5  	(IO_PUCR17.bit.PU5)
#define	PUCR17_PU6  	(IO_PUCR17.bit.PU6)
#define	PUCR17_PU7  	(IO_PUCR17.bit.PU7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR00,   locate=0x4BC
#pragma segment FAR_DATA=IO_EPSR00, locate=0x4BC
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR00STR;

__IO_EXTENDED	 const  EPSR00STR	IO_EPSR00;
#define	_epsr00		(IO_EPSR00)
#define	EPSR00		(IO_EPSR00.byte)
#define	EPSR00_PS0  	(IO_EPSR00.bit.PS0)
#define	EPSR00_PS1  	(IO_EPSR00.bit.PS1)
#define	EPSR00_PS2  	(IO_EPSR00.bit.PS2)
#define	EPSR00_PS3  	(IO_EPSR00.bit.PS3)
#define	EPSR00_PS4  	(IO_EPSR00.bit.PS4)
#define	EPSR00_PS5  	(IO_EPSR00.bit.PS5)
#define	EPSR00_PS6  	(IO_EPSR00.bit.PS6)
#define	EPSR00_PS7  	(IO_EPSR00.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR01,   locate=0x4BD
#pragma segment FAR_DATA=IO_EPSR01, locate=0x4BD
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR01STR;

__IO_EXTENDED	 const  EPSR01STR	IO_EPSR01;
#define	_epsr01		(IO_EPSR01)
#define	EPSR01		(IO_EPSR01.byte)
#define	EPSR01_PS0  	(IO_EPSR01.bit.PS0)
#define	EPSR01_PS1  	(IO_EPSR01.bit.PS1)
#define	EPSR01_PS2  	(IO_EPSR01.bit.PS2)
#define	EPSR01_PS3  	(IO_EPSR01.bit.PS3)
#define	EPSR01_PS4  	(IO_EPSR01.bit.PS4)
#define	EPSR01_PS5  	(IO_EPSR01.bit.PS5)
#define	EPSR01_PS6  	(IO_EPSR01.bit.PS6)
#define	EPSR01_PS7  	(IO_EPSR01.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR02,   locate=0x4BE
#pragma segment FAR_DATA=IO_EPSR02, locate=0x4BE
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR02STR;

__IO_EXTENDED	 const  EPSR02STR	IO_EPSR02;
#define	_epsr02		(IO_EPSR02)
#define	EPSR02		(IO_EPSR02.byte)
#define	EPSR02_PS0  	(IO_EPSR02.bit.PS0)
#define	EPSR02_PS1  	(IO_EPSR02.bit.PS1)
#define	EPSR02_PS2  	(IO_EPSR02.bit.PS2)
#define	EPSR02_PS3  	(IO_EPSR02.bit.PS3)
#define	EPSR02_PS4  	(IO_EPSR02.bit.PS4)
#define	EPSR02_PS5  	(IO_EPSR02.bit.PS5)
#define	EPSR02_PS6  	(IO_EPSR02.bit.PS6)
#define	EPSR02_PS7  	(IO_EPSR02.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR03,   locate=0x4BF
#pragma segment FAR_DATA=IO_EPSR03, locate=0x4BF
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR03STR;

__IO_EXTENDED	 const  EPSR03STR	IO_EPSR03;
#define	_epsr03		(IO_EPSR03)
#define	EPSR03		(IO_EPSR03.byte)
#define	EPSR03_PS0  	(IO_EPSR03.bit.PS0)
#define	EPSR03_PS1  	(IO_EPSR03.bit.PS1)
#define	EPSR03_PS2  	(IO_EPSR03.bit.PS2)
#define	EPSR03_PS3  	(IO_EPSR03.bit.PS3)
#define	EPSR03_PS4  	(IO_EPSR03.bit.PS4)
#define	EPSR03_PS5  	(IO_EPSR03.bit.PS5)
#define	EPSR03_PS6  	(IO_EPSR03.bit.PS6)
#define	EPSR03_PS7  	(IO_EPSR03.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR04,   locate=0x4C0
#pragma segment FAR_DATA=IO_EPSR04, locate=0x4C0
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR04STR;

__IO_EXTENDED	 const  EPSR04STR	IO_EPSR04;
#define	_epsr04		(IO_EPSR04)
#define	EPSR04		(IO_EPSR04.byte)
#define	EPSR04_PS0  	(IO_EPSR04.bit.PS0)
#define	EPSR04_PS1  	(IO_EPSR04.bit.PS1)
#define	EPSR04_PS2  	(IO_EPSR04.bit.PS2)
#define	EPSR04_PS3  	(IO_EPSR04.bit.PS3)
#define	EPSR04_PS4  	(IO_EPSR04.bit.PS4)
#define	EPSR04_PS5  	(IO_EPSR04.bit.PS5)
#define	EPSR04_PS6  	(IO_EPSR04.bit.PS6)
#define	EPSR04_PS7  	(IO_EPSR04.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR05,   locate=0x4C1
#pragma segment FAR_DATA=IO_EPSR05, locate=0x4C1
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR05STR;

__IO_EXTENDED	 const  EPSR05STR	IO_EPSR05;
#define	_epsr05		(IO_EPSR05)
#define	EPSR05		(IO_EPSR05.byte)
#define	EPSR05_PS0  	(IO_EPSR05.bit.PS0)
#define	EPSR05_PS1  	(IO_EPSR05.bit.PS1)
#define	EPSR05_PS2  	(IO_EPSR05.bit.PS2)
#define	EPSR05_PS3  	(IO_EPSR05.bit.PS3)
#define	EPSR05_PS4  	(IO_EPSR05.bit.PS4)
#define	EPSR05_PS5  	(IO_EPSR05.bit.PS5)
#define	EPSR05_PS6  	(IO_EPSR05.bit.PS6)
#define	EPSR05_PS7  	(IO_EPSR05.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR06,   locate=0x4C2
#pragma segment FAR_DATA=IO_EPSR06, locate=0x4C2
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR06STR;

__IO_EXTENDED	 const  EPSR06STR	IO_EPSR06;
#define	_epsr06		(IO_EPSR06)
#define	EPSR06		(IO_EPSR06.byte)
#define	EPSR06_PS0  	(IO_EPSR06.bit.PS0)
#define	EPSR06_PS1  	(IO_EPSR06.bit.PS1)
#define	EPSR06_PS2  	(IO_EPSR06.bit.PS2)
#define	EPSR06_PS3  	(IO_EPSR06.bit.PS3)
#define	EPSR06_PS4  	(IO_EPSR06.bit.PS4)
#define	EPSR06_PS5  	(IO_EPSR06.bit.PS5)
#define	EPSR06_PS6  	(IO_EPSR06.bit.PS6)
#define	EPSR06_PS7  	(IO_EPSR06.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR07,   locate=0x4C3
#pragma segment FAR_DATA=IO_EPSR07, locate=0x4C3
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR07STR;

__IO_EXTENDED	 const  EPSR07STR	IO_EPSR07;
#define	_epsr07		(IO_EPSR07)
#define	EPSR07		(IO_EPSR07.byte)
#define	EPSR07_PS0  	(IO_EPSR07.bit.PS0)
#define	EPSR07_PS1  	(IO_EPSR07.bit.PS1)
#define	EPSR07_PS2  	(IO_EPSR07.bit.PS2)
#define	EPSR07_PS3  	(IO_EPSR07.bit.PS3)
#define	EPSR07_PS4  	(IO_EPSR07.bit.PS4)
#define	EPSR07_PS5  	(IO_EPSR07.bit.PS5)
#define	EPSR07_PS6  	(IO_EPSR07.bit.PS6)
#define	EPSR07_PS7  	(IO_EPSR07.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPSR17,   locate=0x4CD
#pragma segment FAR_DATA=IO_EPSR17, locate=0x4CD
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PS7:1;
			__BYTE	PS6:1;
			__BYTE	PS5:1;
			__BYTE	PS4:1;
			__BYTE	PS3:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
#else
			__BYTE	PS0:1;
			__BYTE	PS1:1;
			__BYTE	PS2:1;
			__BYTE	PS3:1;
			__BYTE	PS4:1;
			__BYTE	PS5:1;
			__BYTE	PS6:1;
			__BYTE	PS7:1;
#endif
	} bitc;
} EPSR17STR;

__IO_EXTENDED	 const  EPSR17STR	IO_EPSR17;
#define	_epsr17		(IO_EPSR17)
#define	EPSR17		(IO_EPSR17.byte)
#define	EPSR17_PS0  	(IO_EPSR17.bit.PS0)
#define	EPSR17_PS1  	(IO_EPSR17.bit.PS1)
#define	EPSR17_PS2  	(IO_EPSR17.bit.PS2)
#define	EPSR17_PS3  	(IO_EPSR17.bit.PS3)
#define	EPSR17_PS4  	(IO_EPSR17.bit.PS4)
#define	EPSR17_PS5  	(IO_EPSR17.bit.PS5)
#define	EPSR17_PS6  	(IO_EPSR17.bit.PS6)
#define	EPSR17_PS7  	(IO_EPSR17.bit.PS7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADER0,   locate=0x4D0
#pragma segment FAR_DATA=IO_ADER0, locate=0x4D0
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ADE7:1;
			__BYTE	ADE6:1;
			__BYTE	RESV5:1;
			__BYTE	ADE4:1;
			__BYTE	ADE3:1;
			__BYTE	RESV2:1;
			__BYTE	ADE1:1;
			__BYTE	ADE0:1;
#else
			__BYTE	ADE0:1;
			__BYTE	ADE1:1;
			__BYTE	RESV2:1;
			__BYTE	ADE3:1;
			__BYTE	ADE4:1;
			__BYTE	RESV5:1;
			__BYTE	ADE6:1;
			__BYTE	ADE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ADE7:1;
			__BYTE	ADE6:1;
			__BYTE	RESV5:1;
			__BYTE	ADE4:1;
			__BYTE	ADE3:1;
			__BYTE	RESV2:1;
			__BYTE	ADE1:1;
			__BYTE	ADE0:1;
#else
			__BYTE	ADE0:1;
			__BYTE	ADE1:1;
			__BYTE	RESV2:1;
			__BYTE	ADE3:1;
			__BYTE	ADE4:1;
			__BYTE	RESV5:1;
			__BYTE	ADE6:1;
			__BYTE	ADE7:1;
#endif
	} bitc;
} ADER0STR;

__IO_EXTENDED	  ADER0STR	IO_ADER0;
#define	_ader0		(IO_ADER0)
#define	ADER0		(IO_ADER0.byte)
#define	ADER0_ADE0  	(IO_ADER0.bit.ADE0)
#define	ADER0_ADE1  	(IO_ADER0.bit.ADE1)
#define	ADER0_ADE3  	(IO_ADER0.bit.ADE3)
#define	ADER0_ADE4  	(IO_ADER0.bit.ADE4)
#define	ADER0_ADE6  	(IO_ADER0.bit.ADE6)
#define	ADER0_ADE7  	(IO_ADER0.bit.ADE7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADER1,   locate=0x4D1
#pragma segment FAR_DATA=IO_ADER1, locate=0x4D1
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	ADE14:1;
			__BYTE	RESV5:1;
			__BYTE	ADE12:1;
			__BYTE	RESV3:1;
			__BYTE	ADE10:1;
			__BYTE	ADE9:1;
			__BYTE	ADE8:1;
#else
			__BYTE	ADE8:1;
			__BYTE	ADE9:1;
			__BYTE	ADE10:1;
			__BYTE	RESV3:1;
			__BYTE	ADE12:1;
			__BYTE	RESV5:1;
			__BYTE	ADE14:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	ADE14:1;
			__BYTE	RESV5:1;
			__BYTE	ADE12:1;
			__BYTE	RESV3:1;
			__BYTE	ADE10:1;
			__BYTE	ADE9:1;
			__BYTE	ADE8:1;
#else
			__BYTE	ADE8:1;
			__BYTE	ADE9:1;
			__BYTE	ADE10:1;
			__BYTE	RESV3:1;
			__BYTE	ADE12:1;
			__BYTE	RESV5:1;
			__BYTE	ADE14:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADER1STR;

__IO_EXTENDED	  ADER1STR	IO_ADER1;
#define	_ader1		(IO_ADER1)
#define	ADER1		(IO_ADER1.byte)
#define	ADER1_ADE8  	(IO_ADER1.bit.ADE8)
#define	ADER1_ADE9  	(IO_ADER1.bit.ADE9)
#define	ADER1_ADE10  	(IO_ADER1.bit.ADE10)
#define	ADER1_ADE12  	(IO_ADER1.bit.ADE12)
#define	ADER1_ADE14  	(IO_ADER1.bit.ADE14)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADER2,   locate=0x4D2
#pragma segment FAR_DATA=IO_ADER2, locate=0x4D2
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	ADE16:1;
#else
			__BYTE	ADE16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	ADE16:1;
#else
			__BYTE	ADE16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADER2STR;

__IO_EXTENDED	  ADER2STR	IO_ADER2;
#define	_ader2		(IO_ADER2)
#define	ADER2		(IO_ADER2.byte)
#define	ADER2_ADE16  	(IO_ADER2.bit.ADE16)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADER3,   locate=0x4D3
#pragma segment FAR_DATA=IO_ADER3, locate=0x4D3
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ADE31:1;
			__BYTE	ADE30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	ADE25:1;
			__BYTE	ADE24:1;
#else
			__BYTE	ADE24:1;
			__BYTE	ADE25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	ADE30:1;
			__BYTE	ADE31:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ADE31:1;
			__BYTE	ADE30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	ADE25:1;
			__BYTE	ADE24:1;
#else
			__BYTE	ADE24:1;
			__BYTE	ADE25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	ADE30:1;
			__BYTE	ADE31:1;
#endif
	} bitc;
} ADER3STR;

__IO_EXTENDED	  ADER3STR	IO_ADER3;
#define	_ader3		(IO_ADER3)
#define	ADER3		(IO_ADER3.byte)
#define	ADER3_ADE24  	(IO_ADER3.bit.ADE24)
#define	ADER3_ADE25  	(IO_ADER3.bit.ADE25)
#define	ADER3_ADE30  	(IO_ADER3.bit.ADE30)
#define	ADER3_ADE31  	(IO_ADER3.bit.ADE31)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR0,   locate=0x4D6
#pragma segment FAR_DATA=IO_PRRR0, locate=0x4D6
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INT7_R:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	INT4_R:1;
			__BYTE	RESV3:1;
			__BYTE	INT2_R:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	INT2_R:1;
			__BYTE	RESV3:1;
			__BYTE	INT4_R:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	INT7_R:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INT7_R:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	INT4_R:1;
			__BYTE	RESV3:1;
			__BYTE	INT2_R:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	INT2_R:1;
			__BYTE	RESV3:1;
			__BYTE	INT4_R:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	INT7_R:1;
#endif
	} bitc;
} PRRR0STR;

__IO_EXTENDED	  PRRR0STR	IO_PRRR0;
#define	_prrr0		(IO_PRRR0)
#define	PRRR0		(IO_PRRR0.byte)
#define	PRRR0_INT2_R  	(IO_PRRR0.bit.INT2_R)
#define	PRRR0_INT4_R  	(IO_PRRR0.bit.INT4_R)
#define	PRRR0_INT7_R  	(IO_PRRR0.bit.INT7_R)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR1,   locate=0x4D7
#pragma segment FAR_DATA=IO_PRRR1, locate=0x4D7
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	INT10_R:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	INT10_R:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	INT10_R:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	INT10_R:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} PRRR1STR;

__IO_EXTENDED	  PRRR1STR	IO_PRRR1;
#define	_prrr1		(IO_PRRR1)
#define	PRRR1		(IO_PRRR1.byte)
#define	PRRR1_INT10_R  	(IO_PRRR1.bit.INT10_R)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR5,   locate=0x4DB
#pragma segment FAR_DATA=IO_PRRR5, locate=0x4DB
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	OUT1_R:1;
			__BYTE	OUT0_R:1;
#else
			__BYTE	OUT0_R:1;
			__BYTE	OUT1_R:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	OUT1_R:1;
			__BYTE	OUT0_R:1;
#else
			__BYTE	OUT0_R:1;
			__BYTE	OUT1_R:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} PRRR5STR;

__IO_EXTENDED	  PRRR5STR	IO_PRRR5;
#define	_prrr5		(IO_PRRR5)
#define	PRRR5		(IO_PRRR5.byte)
#define	PRRR5_OUT0_R  	(IO_PRRR5.bit.OUT0_R)
#define	PRRR5_OUT1_R  	(IO_PRRR5.bit.OUT1_R)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR6,   locate=0x4DC
#pragma segment FAR_DATA=IO_PRRR6, locate=0x4DC
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	CKOT1_R:1;
			__BYTE	SCK2_R:1;
			__BYTE	SOT2_R:1;
			__BYTE	SIN2_R:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	SIN2_R:1;
			__BYTE	SOT2_R:1;
			__BYTE	SCK2_R:1;
			__BYTE	CKOT1_R:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	CKOT1_R:1;
			__BYTE	SCK2_R:1;
			__BYTE	SOT2_R:1;
			__BYTE	SIN2_R:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	SIN2_R:1;
			__BYTE	SOT2_R:1;
			__BYTE	SCK2_R:1;
			__BYTE	CKOT1_R:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} PRRR6STR;

__IO_EXTENDED	  PRRR6STR	IO_PRRR6;
#define	_prrr6		(IO_PRRR6)
#define	PRRR6		(IO_PRRR6.byte)
#define	PRRR6_SIN2_R  	(IO_PRRR6.bit.SIN2_R)
#define	PRRR6_SOT2_R  	(IO_PRRR6.bit.SOT2_R)
#define	PRRR6_SCK2_R  	(IO_PRRR6.bit.SCK2_R)
#define	PRRR6_CKOT1_R  	(IO_PRRR6.bit.CKOT1_R)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR7,   locate=0x4DD
#pragma segment FAR_DATA=IO_PRRR7, locate=0x4DD
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	INT3_R1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	ADTG_R:1;
#else
			__BYTE	ADTG_R:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	INT3_R1:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	INT3_R1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	ADTG_R:1;
#else
			__BYTE	ADTG_R:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	INT3_R1:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} PRRR7STR;

__IO_EXTENDED	  PRRR7STR	IO_PRRR7;
#define	_prrr7		(IO_PRRR7)
#define	PRRR7		(IO_PRRR7.byte)
#define	PRRR7_ADTG_R  	(IO_PRRR7.bit.ADTG_R)
#define	PRRR7_INT3_R1  	(IO_PRRR7.bit.INT3_R1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR8,   locate=0x4DE
#pragma segment FAR_DATA=IO_PRRR8, locate=0x4DE
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	SCK8_R:1;
			__BYTE	SOT8_R:1;
			__BYTE	SIN8_R:1;
			__BYTE	SCK7_R:1;
			__BYTE	SOT7_R:1;
			__BYTE	SIN7_R:1;
#else
			__BYTE	SIN7_R:1;
			__BYTE	SOT7_R:1;
			__BYTE	SCK7_R:1;
			__BYTE	SIN8_R:1;
			__BYTE	SOT8_R:1;
			__BYTE	SCK8_R:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	SCK8_R:1;
			__BYTE	SOT8_R:1;
			__BYTE	SIN8_R:1;
			__BYTE	SCK7_R:1;
			__BYTE	SOT7_R:1;
			__BYTE	SIN7_R:1;
#else
			__BYTE	SIN7_R:1;
			__BYTE	SOT7_R:1;
			__BYTE	SCK7_R:1;
			__BYTE	SIN8_R:1;
			__BYTE	SOT8_R:1;
			__BYTE	SCK8_R:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} PRRR8STR;

__IO_EXTENDED	  PRRR8STR	IO_PRRR8;
#define	_prrr8		(IO_PRRR8)
#define	PRRR8		(IO_PRRR8.byte)
#define	PRRR8_SIN7_R  	(IO_PRRR8.bit.SIN7_R)
#define	PRRR8_SOT7_R  	(IO_PRRR8.bit.SOT7_R)
#define	PRRR8_SCK7_R  	(IO_PRRR8.bit.SCK7_R)
#define	PRRR8_SIN8_R  	(IO_PRRR8.bit.SIN8_R)
#define	PRRR8_SOT8_R  	(IO_PRRR8.bit.SOT8_R)
#define	PRRR8_SCK8_R  	(IO_PRRR8.bit.SCK8_R)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PRRR9,   locate=0x4DF
#pragma segment FAR_DATA=IO_PRRR9, locate=0x4DF
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	CKOT0_R:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	CKOT0_R:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	CKOT0_R:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	CKOT0_R:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} PRRR9STR;

__IO_EXTENDED	  PRRR9STR	IO_PRRR9;
#define	_prrr9		(IO_PRRR9)
#define	PRRR9		(IO_PRRR9.byte)
#define	PRRR9_CKOT0_R  	(IO_PRRR9.bit.CKOT0_R)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_WT,   locate=0x4E0
#pragma segment FAR_DATA=IO_WT, locate=0x4E0
#endif

__IO_EXTENDED	struct {
	__BYTE	WTBRL0;
	__BYTE	WTBRH0;
	__BYTE	WTBR1;
	__BYTE	WTSR;
	__BYTE	WTMR;
	__BYTE	WTHR;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV67:1;
			__BYTE	RESV66:1;
			__BYTE	RESV65:1;
			__BYTE	RESV64:1;
			__BYTE	RESV63:1;
			__BYTE	RESV62:1;
			__BYTE	INTE4:1;
			__BYTE	INT4:1;
#else
			__BYTE	INT4:1;
			__BYTE	INTE4:1;
			__BYTE	RESV62:1;
			__BYTE	RESV63:1;
			__BYTE	RESV64:1;
			__BYTE	RESV65:1;
			__BYTE	RESV66:1;
			__BYTE	RESV67:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV67:1;
			__BYTE	RESV66:1;
			__BYTE	RESV65:1;
			__BYTE	RESV64:1;
			__BYTE	RESV63:1;
			__BYTE	RESV62:1;
			__BYTE	INTE4:1;
			__BYTE	INT4:1;
#else
			__BYTE	INT4:1;
			__BYTE	INTE4:1;
			__BYTE	RESV62:1;
			__BYTE	RESV63:1;
			__BYTE	RESV64:1;
			__BYTE	RESV65:1;
			__BYTE	RESV66:1;
			__BYTE	RESV67:1;
#endif
		} bitc;
	} WTCER;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV76:1;
			__BYTE	RESV75:1;
			__BYTE	RESV74:1;
			__BYTE	RESV73:1;
			__BYTE	RESV72:1;
			__BYTE	RESV71:1;
			__BYTE	CKSEL:2;
#else
			__BYTE	CKSEL:2;
			__BYTE	RESV71:1;
			__BYTE	RESV72:1;
			__BYTE	RESV73:1;
			__BYTE	RESV74:1;
			__BYTE	RESV75:1;
			__BYTE	RESV76:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV77:1;
			__BYTE	RESV76:1;
			__BYTE	RESV75:1;
			__BYTE	RESV74:1;
			__BYTE	RESV73:1;
			__BYTE	RESV72:1;
			__BYTE	CKSEL1:1;
			__BYTE	CKSEL0:1;
#else
			__BYTE	CKSEL0:1;
			__BYTE	CKSEL1:1;
			__BYTE	RESV72:1;
			__BYTE	RESV73:1;
			__BYTE	RESV74:1;
			__BYTE	RESV75:1;
			__BYTE	RESV76:1;
			__BYTE	RESV77:1;
#endif
		} bitc;
	} WTCKSR;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	INTE3:1;
			__WORD	INT3:1;
			__WORD	INTE2:1;
			__WORD	INT2:1;
			__WORD	INTE1:1;
			__WORD	INT1:1;
			__WORD	INTE0:1;
			__WORD	INT0:1;
			__WORD	RESV87:1;
			__WORD	RESV86:1;
			__WORD	RESV85:1;
			__WORD	RESV84:1;
			__WORD	RUN:1;
			__WORD	UPDT:1;
			__WORD	OE:1;
			__WORD	ST:1;
#else
			__WORD	ST:1;
			__WORD	OE:1;
			__WORD	UPDT:1;
			__WORD	RUN:1;
			__WORD	RESV84:1;
			__WORD	RESV85:1;
			__WORD	RESV86:1;
			__WORD	RESV87:1;
			__WORD	INT0:1;
			__WORD	INTE0:1;
			__WORD	INT1:1;
			__WORD	INTE1:1;
			__WORD	INT2:1;
			__WORD	INTE2:1;
			__WORD	INT3:1;
			__WORD	INTE3:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	INTE3:1;
			__WORD	INT3:1;
			__WORD	INTE2:1;
			__WORD	INT2:1;
			__WORD	INTE1:1;
			__WORD	INT1:1;
			__WORD	INTE0:1;
			__WORD	INT0:1;
			__WORD	RESV87:1;
			__WORD	RESV86:1;
			__WORD	RESV85:1;
			__WORD	RESV84:1;
			__WORD	RUN:1;
			__WORD	UPDT:1;
			__WORD	OE:1;
			__WORD	ST:1;
#else
			__WORD	ST:1;
			__WORD	OE:1;
			__WORD	UPDT:1;
			__WORD	RUN:1;
			__WORD	RESV84:1;
			__WORD	RESV85:1;
			__WORD	RESV86:1;
			__WORD	RESV87:1;
			__WORD	INT0:1;
			__WORD	INTE0:1;
			__WORD	INT1:1;
			__WORD	INTE1:1;
			__WORD	INT2:1;
			__WORD	INTE2:1;
			__WORD	INT3:1;
			__WORD	INTE3:1;
#endif
		} bitc;
	} WTCR;
} IO_WT;

#define	WT_WTBRL0 	(IO_WT.WTBRL0)
#define	WT_WTBRH0 	(IO_WT.WTBRH0)
#define	WT_WTBR1	(IO_WT.WTBR1)
#define	WT_WTSR	(IO_WT.WTSR)
#define	WT_WTMR	(IO_WT.WTMR)
#define	WT_WTHR	(IO_WT.WTHR)
#define	WT_WTCER			(IO_WT.WTCER.byte)
#define	WT_WTCER_INT4    	(IO_WT.WTCER.bit.INT4)
#define	WT_WTCER_INTE4    	(IO_WT.WTCER.bit.INTE4)
#define	WT_WTCKSR			(IO_WT.WTCKSR.byte)
#define	WT_WTCKSR_CKSEL    	(IO_WT.WTCKSR.bit.CKSEL)
#define	WT_WTCKSR_CKSEL0    	(IO_WT.WTCKSR.bitc.CKSEL0)
#define	WT_WTCKSR_CKSEL1    	(IO_WT.WTCKSR.bitc.CKSEL1)
#define	WT_WTCR			(IO_WT.WTCR.word)
#define	WT_WTCR_ST    	(IO_WT.WTCR.bit.ST)
#define	WT_WTCR_OE    	(IO_WT.WTCR.bit.OE)
#define	WT_WTCR_UPDT    	(IO_WT.WTCR.bit.UPDT)
#define	WT_WTCR_RUN    	(IO_WT.WTCR.bit.RUN)
#define	WT_WTCR_INT0    	(IO_WT.WTCR.bit.INT0)
#define	WT_WTCR_INTE0    	(IO_WT.WTCR.bit.INTE0)
#define	WT_WTCR_INT1    	(IO_WT.WTCR.bit.INT1)
#define	WT_WTCR_INTE1    	(IO_WT.WTCR.bit.INTE1)
#define	WT_WTCR_INT2    	(IO_WT.WTCR.bit.INT2)
#define	WT_WTCR_INTE2    	(IO_WT.WTCR.bit.INTE2)
#define	WT_WTCR_INT3    	(IO_WT.WTCR.bit.INT3)
#define	WT_WTCR_INTE3    	(IO_WT.WTCR.bit.INTE3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CUCR,   locate=0x4EA
#pragma segment FAR_DATA=IO_CUCR, locate=0x4EA
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	STRT:1;
			__BYTE	RESV3:1;
			__BYTE	CKSEL:1;
			__BYTE	INT:1;
			__BYTE	INTEN:1;
#else
			__BYTE	INTEN:1;
			__BYTE	INT:1;
			__BYTE	CKSEL:1;
			__BYTE	RESV3:1;
			__BYTE	STRT:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	STRT:1;
			__BYTE	RESV3:1;
			__BYTE	CKSEL:1;
			__BYTE	INT:1;
			__BYTE	INTEN:1;
#else
			__BYTE	INTEN:1;
			__BYTE	INT:1;
			__BYTE	CKSEL:1;
			__BYTE	RESV3:1;
			__BYTE	STRT:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} CUCRSTR;

__IO_EXTENDED	  CUCRSTR	IO_CUCR;
#define	_cucr		(IO_CUCR)
#define	CUCR		(IO_CUCR.byte)
#define	CUCR_INTEN  	(IO_CUCR.bit.INTEN)
#define	CUCR_INT  	(IO_CUCR.bit.INT)
#define	CUCR_CKSEL  	(IO_CUCR.bit.CKSEL)
#define	CUCR_STRT  	(IO_CUCR.bit.STRT)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CUTD,   locate=0x4EC
#pragma segment FAR_DATA=IO_CUTD, locate=0x4EC
#endif

__IO_EXTENDED	__WORD	IO_CUTD;
#define	_cutd		(IO_CUTD)
#define	CUTD	(_cutd)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CUTR2,   locate=0x4EE
#pragma segment FAR_DATA=IO_CUTR2, locate=0x4EE
#endif

__IO_EXTENDED	const __WORD	IO_CUTR2;
#define	_cutr2		(IO_CUTR2)
#define	CUTR2	(_cutr2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CUTR1,   locate=0x4F0
#pragma segment FAR_DATA=IO_CUTR1, locate=0x4F0
#endif

__IO_EXTENDED	const __WORD	IO_CUTR1;
#define	_cutr1		(IO_CUTR1)
#define	CUTR1	(_cutr1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMISR,   locate=0x4FA
#pragma segment FAR_DATA=IO_TMISR, locate=0x4FA
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TMIS5:1;
			__BYTE	TMIS4:1;
			__BYTE	TMIS3:1;
			__BYTE	TMIS2:1;
			__BYTE	TMIS1:1;
			__BYTE	TMIS0:1;
#else
			__BYTE	TMIS0:1;
			__BYTE	TMIS1:1;
			__BYTE	TMIS2:1;
			__BYTE	TMIS3:1;
			__BYTE	TMIS4:1;
			__BYTE	TMIS5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TMIS5:1;
			__BYTE	TMIS4:1;
			__BYTE	TMIS3:1;
			__BYTE	TMIS2:1;
			__BYTE	TMIS1:1;
			__BYTE	TMIS0:1;
#else
			__BYTE	TMIS0:1;
			__BYTE	TMIS1:1;
			__BYTE	TMIS2:1;
			__BYTE	TMIS3:1;
			__BYTE	TMIS4:1;
			__BYTE	TMIS5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} TMISRSTR;

__IO_EXTENDED	  TMISRSTR	IO_TMISR;
#define	_tmisr		(IO_TMISR)
#define	TMISR		(IO_TMISR.byte)
#define	TMISR_TMIS0  	(IO_TMISR.bit.TMIS0)
#define	TMISR_TMIS1  	(IO_TMISR.bit.TMIS1)
#define	TMISR_TMIS2  	(IO_TMISR.bit.TMIS2)
#define	TMISR_TMIS3  	(IO_TMISR.bit.TMIS3)
#define	TMISR_TMIS4  	(IO_TMISR.bit.TMIS4)
#define	TMISR_TMIS5  	(IO_TMISR.bit.TMIS5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT2,   locate=0x500
#pragma segment FAR_DATA=IO_TCDT2, locate=0x500
#endif

__IO_EXTENDED	__WORD	IO_TCDT2;
#define	_tcdt2		(IO_TCDT2)
#define	TCDT2	(_tcdt2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS2,   locate=0x502
#pragma segment FAR_DATA=IO_TCCS2, locate=0x502
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK:3;
#else
			__WORD	CLK:3;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK2:1;
			__WORD	CLK1:1;
			__WORD	CLK0:1;
#else
			__WORD	CLK0:1;
			__WORD	CLK1:1;
			__WORD	CLK2:1;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bitc;
} TCCS2STR;

__IO_EXTENDED	  TCCS2STR	IO_TCCS2;
#define	_tccs2		(IO_TCCS2)
#define	TCCS2		(IO_TCCS2.word)
#define	TCCS2_CLK  	(IO_TCCS2.bit.CLK)
#define	TCCS2_CLK0  	(IO_TCCS2.bitc.CLK0)
#define	TCCS2_CLK1  	(IO_TCCS2.bitc.CLK1)
#define	TCCS2_CLK2  	(IO_TCCS2.bitc.CLK2)
#define	TCCS2_CLR  	(IO_TCCS2.bit.CLR)
#define	TCCS2_MODE  	(IO_TCCS2.bit.MODE)
#define	TCCS2_STOP  	(IO_TCCS2.bit.STOP)
#define	TCCS2_IVFE  	(IO_TCCS2.bit.IVFE)
#define	TCCS2_IVF  	(IO_TCCS2.bit.IVF)
#define	TCCS2_FSEL  	(IO_TCCS2.bit.FSEL)
#define	TCCS2_ECKE  	(IO_TCCS2.bit.ECKE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT3,   locate=0x504
#pragma segment FAR_DATA=IO_TCDT3, locate=0x504
#endif

__IO_EXTENDED	__WORD	IO_TCDT3;
#define	_tcdt3		(IO_TCDT3)
#define	TCDT3	(_tcdt3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS3,   locate=0x506
#pragma segment FAR_DATA=IO_TCCS3, locate=0x506
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK:3;
#else
			__WORD	CLK:3;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	ECKE:1;
			__WORD	FSEL:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	IVF:1;
			__WORD	IVFE:1;
			__WORD	STOP:1;
			__WORD	MODE:1;
			__WORD	CLR:1;
			__WORD	CLK2:1;
			__WORD	CLK1:1;
			__WORD	CLK0:1;
#else
			__WORD	CLK0:1;
			__WORD	CLK1:1;
			__WORD	CLK2:1;
			__WORD	CLR:1;
			__WORD	MODE:1;
			__WORD	STOP:1;
			__WORD	IVFE:1;
			__WORD	IVF:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	FSEL:1;
			__WORD	ECKE:1;
#endif
	} bitc;
} TCCS3STR;

__IO_EXTENDED	  TCCS3STR	IO_TCCS3;
#define	_tccs3		(IO_TCCS3)
#define	TCCS3		(IO_TCCS3.word)
#define	TCCS3_CLK  	(IO_TCCS3.bit.CLK)
#define	TCCS3_CLK0  	(IO_TCCS3.bitc.CLK0)
#define	TCCS3_CLK1  	(IO_TCCS3.bitc.CLK1)
#define	TCCS3_CLK2  	(IO_TCCS3.bitc.CLK2)
#define	TCCS3_CLR  	(IO_TCCS3.bit.CLR)
#define	TCCS3_MODE  	(IO_TCCS3.bit.MODE)
#define	TCCS3_STOP  	(IO_TCCS3.bit.STOP)
#define	TCCS3_IVFE  	(IO_TCCS3.bit.IVFE)
#define	TCCS3_IVF  	(IO_TCCS3.bit.IVF)
#define	TCCS3_FSEL  	(IO_TCCS3.bit.FSEL)
#define	TCCS3_ECKE  	(IO_TCCS3.bit.ECKE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICS89,   locate=0x514
#pragma segment FAR_DATA=IO_ICS89, locate=0x514
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP9:1;
			__BYTE	ICP8:1;
			__BYTE	ICE9:1;
			__BYTE	ICE8:1;
			__BYTE	EG9:2;
			__BYTE	EG8:2;
#else
			__BYTE	EG8:2;
			__BYTE	EG9:2;
			__BYTE	ICE8:1;
			__BYTE	ICE9:1;
			__BYTE	ICP8:1;
			__BYTE	ICP9:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP9:1;
			__BYTE	ICP8:1;
			__BYTE	ICE9:1;
			__BYTE	ICE8:1;
			__BYTE	EG91:1;
			__BYTE	EG90:1;
			__BYTE	EG81:1;
			__BYTE	EG80:1;
#else
			__BYTE	EG80:1;
			__BYTE	EG81:1;
			__BYTE	EG90:1;
			__BYTE	EG91:1;
			__BYTE	ICE8:1;
			__BYTE	ICE9:1;
			__BYTE	ICP8:1;
			__BYTE	ICP9:1;
#endif
	} bitc;
} ICS89STR;

__IO_EXTENDED	  ICS89STR	IO_ICS89;
#define	_ics89		(IO_ICS89)
#define	ICS89		(IO_ICS89.byte)
#define	ICS89_EG8  	(IO_ICS89.bit.EG8)
#define	ICS89_EG80  	(IO_ICS89.bitc.EG80)
#define	ICS89_EG81  	(IO_ICS89.bitc.EG81)
#define	ICS89_EG9  	(IO_ICS89.bit.EG9)
#define	ICS89_EG90  	(IO_ICS89.bitc.EG90)
#define	ICS89_EG91  	(IO_ICS89.bitc.EG91)
#define	ICS89_ICE8  	(IO_ICS89.bit.ICE8)
#define	ICS89_ICE9  	(IO_ICS89.bit.ICE9)
#define	ICS89_ICP8  	(IO_ICS89.bit.ICP8)
#define	ICS89_ICP9  	(IO_ICS89.bit.ICP9)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICE89,   locate=0x515
#pragma segment FAR_DATA=IO_ICE89, locate=0x515
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	ICUS9:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	IEI9:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	IEI9:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICUS9:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	ICUS9:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	IEI9:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	IEI9:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	ICUS9:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ICE89STR;

__IO_EXTENDED	  ICE89STR	IO_ICE89;
#define	_ice89		(IO_ICE89)
#define	ICE89		(IO_ICE89.byte)
#define	ICE89_IEI9  	(IO_ICE89.bit.IEI9)
#define	ICE89_ICUS9  	(IO_ICE89.bit.ICUS9)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP9,   locate=0x518
#pragma segment FAR_DATA=IO_IPCP9, locate=0x518
#endif

__IO_EXTENDED	const __WORD	IO_IPCP9;
#define	_ipcp9		(IO_IPCP9)
#define	IPCP9	(_ipcp9)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICS1011,   locate=0x51A
#pragma segment FAR_DATA=IO_ICS1011, locate=0x51A
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP11:1;
			__BYTE	ICP10:1;
			__BYTE	ICE11:1;
			__BYTE	ICE10:1;
			__BYTE	EG11:2;
			__BYTE	EG10:2;
#else
			__BYTE	EG10:2;
			__BYTE	EG11:2;
			__BYTE	ICE10:1;
			__BYTE	ICE11:1;
			__BYTE	ICP10:1;
			__BYTE	ICP11:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	ICP11:1;
			__BYTE	ICP10:1;
			__BYTE	ICE11:1;
			__BYTE	ICE10:1;
			__BYTE	EG111:1;
			__BYTE	EG110:1;
			__BYTE	EG101:1;
			__BYTE	EG100:1;
#else
			__BYTE	EG100:1;
			__BYTE	EG101:1;
			__BYTE	EG110:1;
			__BYTE	EG111:1;
			__BYTE	ICE10:1;
			__BYTE	ICE11:1;
			__BYTE	ICP10:1;
			__BYTE	ICP11:1;
#endif
	} bitc;
} ICS1011STR;

__IO_EXTENDED	  ICS1011STR	IO_ICS1011;
#define	_ics1011		(IO_ICS1011)
#define	ICS1011		(IO_ICS1011.byte)
#define	ICS1011_EG10  	(IO_ICS1011.bit.EG10)
#define	ICS1011_EG100  	(IO_ICS1011.bitc.EG100)
#define	ICS1011_EG101  	(IO_ICS1011.bitc.EG101)
#define	ICS1011_EG11  	(IO_ICS1011.bit.EG11)
#define	ICS1011_EG110  	(IO_ICS1011.bitc.EG110)
#define	ICS1011_EG111  	(IO_ICS1011.bitc.EG111)
#define	ICS1011_ICE10  	(IO_ICS1011.bit.ICE10)
#define	ICS1011_ICE11  	(IO_ICS1011.bit.ICE11)
#define	ICS1011_ICP10  	(IO_ICS1011.bit.ICP10)
#define	ICS1011_ICP11  	(IO_ICS1011.bit.ICP11)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICE1011,   locate=0x51B
#pragma segment FAR_DATA=IO_ICE1011, locate=0x51B
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	ICUS10:1;
			__BYTE	RESV1:1;
			__BYTE	IEI10:1;
#else
			__BYTE	IEI10:1;
			__BYTE	RESV1:1;
			__BYTE	ICUS10:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	ICUS10:1;
			__BYTE	RESV1:1;
			__BYTE	IEI10:1;
#else
			__BYTE	IEI10:1;
			__BYTE	RESV1:1;
			__BYTE	ICUS10:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ICE1011STR;

__IO_EXTENDED	  ICE1011STR	IO_ICE1011;
#define	_ice1011		(IO_ICE1011)
#define	ICE1011		(IO_ICE1011.byte)
#define	ICE1011_IEI10  	(IO_ICE1011.bit.IEI10)
#define	ICE1011_ICUS10  	(IO_ICE1011.bit.ICUS10)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP10,   locate=0x51C
#pragma segment FAR_DATA=IO_IPCP10, locate=0x51C
#endif

__IO_EXTENDED	const __WORD	IO_IPCP10;
#define	_ipcp10		(IO_IPCP10)
#define	IPCP10	(_ipcp10)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_UART7,   locate=0x53E
#pragma segment FAR_DATA=IO_UART7, locate=0x53E
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD:2;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
#else
			__BYTE	SOE:1;
			__BYTE	SCKE:1;
			__BYTE	UPCL:1;
			__BYTE	REST:1;
			__BYTE	EXT:1;
			__BYTE	OTO:1;
			__BYTE	MD:2;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
#else
			__BYTE	SOE:1;
			__BYTE	SCKE:1;
			__BYTE	UPCL:1;
			__BYTE	REST:1;
			__BYTE	EXT:1;
			__BYTE	OTO:1;
			__BYTE	MD0:1;
			__BYTE	MD1:1;
#endif
		} bitc;
	} SMR7;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
#else
			__BYTE	TXE:1;
			__BYTE	RXE:1;
			__BYTE	CRE:1;
			__BYTE	AD:1;
			__BYTE	CL:1;
			__BYTE	SBL:1;
			__BYTE	P:1;
			__BYTE	PEN:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
#else
			__BYTE	TXE:1;
			__BYTE	RXE:1;
			__BYTE	CRE:1;
			__BYTE	AD:1;
			__BYTE	CL:1;
			__BYTE	SBL:1;
			__BYTE	P:1;
			__BYTE	PEN:1;
#endif
		} bitc;
	} SCR7;
	__BYTE	RDR7;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
#else
			__BYTE	TIE:1;
			__BYTE	RIE:1;
			__BYTE	BDS:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	FRE:1;
			__BYTE	ORE:1;
			__BYTE	PE:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
#else
			__BYTE	TIE:1;
			__BYTE	RIE:1;
			__BYTE	BDS:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	FRE:1;
			__BYTE	ORE:1;
			__BYTE	PE:1;
#endif
		} bitc;
	} SSR7;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INV:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
#else
			__BYTE	TBI:1;
			__BYTE	RBI:1;
			__BYTE	BIE:1;
			__BYTE	SSM:1;
			__BYTE	SCDE:1;
			__BYTE	MS:1;
			__BYTE	LBR:1;
			__BYTE	INV:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INV:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
#else
			__BYTE	TBI:1;
			__BYTE	RBI:1;
			__BYTE	BIE:1;
			__BYTE	SSM:1;
			__BYTE	SCDE:1;
			__BYTE	MS:1;
			__BYTE	LBR:1;
			__BYTE	INV:1;
#endif
		} bitc;
	} ECCR7;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL:2;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
#else
			__BYTE	SCES:1;
			__BYTE	CCO:1;
			__BYTE	SIOP:1;
			__BYTE	SOPE:1;
			__BYTE	LBL:2;
			__BYTE	LBD:1;
			__BYTE	LBIE:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL1:1;
			__BYTE	LBL0:1;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
#else
			__BYTE	SCES:1;
			__BYTE	CCO:1;
			__BYTE	SIOP:1;
			__BYTE	SOPE:1;
			__BYTE	LBL0:1;
			__BYTE	LBL1:1;
			__BYTE	LBD:1;
			__BYTE	LBIE:1;
#endif
		} bitc;
	} ESCR7;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BGRH7:8;
			__WORD	BGRL7:8;
#else
			__WORD	BGRL7:8;
			__WORD	BGRH7:8;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BGRH77:1;
			__WORD	BGRH76:1;
			__WORD	BGRH75:1;
			__WORD	BGRH74:1;
			__WORD	BGRH73:1;
			__WORD	BGRH72:1;
			__WORD	BGRH71:1;
			__WORD	BGRH70:1;
			__WORD	BGRL77:1;
			__WORD	BGRL76:1;
			__WORD	BGRL75:1;
			__WORD	BGRL74:1;
			__WORD	BGRL73:1;
			__WORD	BGRL72:1;
			__WORD	BGRL71:1;
			__WORD	BGRL70:1;
#else
			__WORD	BGRL70:1;
			__WORD	BGRL71:1;
			__WORD	BGRL72:1;
			__WORD	BGRL73:1;
			__WORD	BGRL74:1;
			__WORD	BGRL75:1;
			__WORD	BGRL76:1;
			__WORD	BGRL77:1;
			__WORD	BGRH70:1;
			__WORD	BGRH71:1;
			__WORD	BGRH72:1;
			__WORD	BGRH73:1;
			__WORD	BGRH74:1;
			__WORD	BGRH75:1;
			__WORD	BGRH76:1;
			__WORD	BGRH77:1;
#endif
		} bitc;
	} BGR7;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV87:1;
			__BYTE	RESV86:1;
			__BYTE	RESV85:1;
			__BYTE	RESV84:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	RBI:1;
			__BYTE	AICD:1;
#else
			__BYTE	AICD:1;
			__BYTE	RBI:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV87:1;
			__BYTE	RESV86:1;
			__BYTE	RESV85:1;
			__BYTE	RESV84:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	RBI:1;
			__BYTE	AICD:1;
#else
			__BYTE	AICD:1;
			__BYTE	RBI:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
#endif
		} bitc;
	} ESIR7;
} IO_UART7;

#define	UART7_SMR7			(IO_UART7.SMR7.byte)
#define	UART7_SMR7_SOE    	(IO_UART7.SMR7.bit.SOE)
#define	UART7_SMR7_SCKE    	(IO_UART7.SMR7.bit.SCKE)
#define	UART7_SMR7_UPCL    	(IO_UART7.SMR7.bit.UPCL)
#define	UART7_SMR7_REST    	(IO_UART7.SMR7.bit.REST)
#define	UART7_SMR7_EXT    	(IO_UART7.SMR7.bit.EXT)
#define	UART7_SMR7_OTO    	(IO_UART7.SMR7.bit.OTO)
#define	UART7_SMR7_MD    	(IO_UART7.SMR7.bit.MD)
#define	UART7_SMR7_MD0    	(IO_UART7.SMR7.bitc.MD0)
#define	UART7_SMR7_MD1    	(IO_UART7.SMR7.bitc.MD1)
#define	UART7_SCR7			(IO_UART7.SCR7.byte)
#define	UART7_SCR7_TXE    	(IO_UART7.SCR7.bit.TXE)
#define	UART7_SCR7_RXE    	(IO_UART7.SCR7.bit.RXE)
#define	UART7_SCR7_CRE    	(IO_UART7.SCR7.bit.CRE)
#define	UART7_SCR7_AD    	(IO_UART7.SCR7.bit.AD)
#define	UART7_SCR7_CL    	(IO_UART7.SCR7.bit.CL)
#define	UART7_SCR7_SBL    	(IO_UART7.SCR7.bit.SBL)
#define	UART7_SCR7_P    	(IO_UART7.SCR7.bit.P)
#define	UART7_SCR7_PEN    	(IO_UART7.SCR7.bit.PEN)
#define	UART7_RDR7	(IO_UART7.RDR7)
#define	UART7_TDR7	(IO_UART7.RDR7)
#define	UART7_SSR7			(IO_UART7.SSR7.byte)
#define	UART7_SSR7_TIE    	(IO_UART7.SSR7.bit.TIE)
#define	UART7_SSR7_RIE    	(IO_UART7.SSR7.bit.RIE)
#define	UART7_SSR7_BDS    	(IO_UART7.SSR7.bit.BDS)
#define	UART7_SSR7_TDRE    	(IO_UART7.SSR7.bit.TDRE)
#define	UART7_SSR7_RDRF    	(IO_UART7.SSR7.bit.RDRF)
#define	UART7_SSR7_FRE    	(IO_UART7.SSR7.bit.FRE)
#define	UART7_SSR7_ORE    	(IO_UART7.SSR7.bit.ORE)
#define	UART7_SSR7_PE    	(IO_UART7.SSR7.bit.PE)
#define	UART7_ECCR7			(IO_UART7.ECCR7.byte)
#define	UART7_ECCR7_TBI    	(IO_UART7.ECCR7.bit.TBI)
#define	UART7_ECCR7_RBI    	(IO_UART7.ECCR7.bit.RBI)
#define	UART7_ECCR7_BIE    	(IO_UART7.ECCR7.bit.BIE)
#define	UART7_ECCR7_SSM    	(IO_UART7.ECCR7.bit.SSM)
#define	UART7_ECCR7_SCDE    	(IO_UART7.ECCR7.bit.SCDE)
#define	UART7_ECCR7_MS    	(IO_UART7.ECCR7.bit.MS)
#define	UART7_ECCR7_LBR    	(IO_UART7.ECCR7.bit.LBR)
#define	UART7_ECCR7_INV    	(IO_UART7.ECCR7.bit.INV)
#define	UART7_ESCR7			(IO_UART7.ESCR7.byte)
#define	UART7_ESCR7_SCES    	(IO_UART7.ESCR7.bit.SCES)
#define	UART7_ESCR7_CCO    	(IO_UART7.ESCR7.bit.CCO)
#define	UART7_ESCR7_SIOP    	(IO_UART7.ESCR7.bit.SIOP)
#define	UART7_ESCR7_SOPE    	(IO_UART7.ESCR7.bit.SOPE)
#define	UART7_ESCR7_LBL    	(IO_UART7.ESCR7.bit.LBL)
#define	UART7_ESCR7_LBL0    	(IO_UART7.ESCR7.bitc.LBL0)
#define	UART7_ESCR7_LBL1    	(IO_UART7.ESCR7.bitc.LBL1)
#define	UART7_ESCR7_LBD    	(IO_UART7.ESCR7.bit.LBD)
#define	UART7_ESCR7_LBIE    	(IO_UART7.ESCR7.bit.LBIE)
#define	UART7_BGR7			(IO_UART7.BGR7.word)
#define	UART7_BGR7_BGRL7    	(IO_UART7.BGR7.bit.BGRL7)
#define	UART7_BGR7_BGRL70    	(IO_UART7.BGR7.bitc.BGRL70)
#define	UART7_BGR7_BGRL71    	(IO_UART7.BGR7.bitc.BGRL71)
#define	UART7_BGR7_BGRL72    	(IO_UART7.BGR7.bitc.BGRL72)
#define	UART7_BGR7_BGRL73    	(IO_UART7.BGR7.bitc.BGRL73)
#define	UART7_BGR7_BGRL74    	(IO_UART7.BGR7.bitc.BGRL74)
#define	UART7_BGR7_BGRL75    	(IO_UART7.BGR7.bitc.BGRL75)
#define	UART7_BGR7_BGRL76    	(IO_UART7.BGR7.bitc.BGRL76)
#define	UART7_BGR7_BGRL77    	(IO_UART7.BGR7.bitc.BGRL77)
#define	UART7_BGR7_BGRH7    	(IO_UART7.BGR7.bit.BGRH7)
#define	UART7_BGR7_BGRH70    	(IO_UART7.BGR7.bitc.BGRH70)
#define	UART7_BGR7_BGRH71    	(IO_UART7.BGR7.bitc.BGRH71)
#define	UART7_BGR7_BGRH72    	(IO_UART7.BGR7.bitc.BGRH72)
#define	UART7_BGR7_BGRH73    	(IO_UART7.BGR7.bitc.BGRH73)
#define	UART7_BGR7_BGRH74    	(IO_UART7.BGR7.bitc.BGRH74)
#define	UART7_BGR7_BGRH75    	(IO_UART7.BGR7.bitc.BGRH75)
#define	UART7_BGR7_BGRH76    	(IO_UART7.BGR7.bitc.BGRH76)
#define	UART7_BGR7_BGRH77    	(IO_UART7.BGR7.bitc.BGRH77)
#define	UART7_ESIR7			(IO_UART7.ESIR7.byte)
#define	UART7_ESIR7_AICD    	(IO_UART7.ESIR7.bit.AICD)
#define	UART7_ESIR7_RBI    	(IO_UART7.ESIR7.bit.RBI)
#define	UART7_ESIR7_RDRF    	(IO_UART7.ESIR7.bit.RDRF)
#define	UART7_ESIR7_TDRE    	(IO_UART7.ESIR7.bit.TDRE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_UART8,   locate=0x548
#pragma segment FAR_DATA=IO_UART8, locate=0x548
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD:2;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
#else
			__BYTE	SOE:1;
			__BYTE	SCKE:1;
			__BYTE	UPCL:1;
			__BYTE	REST:1;
			__BYTE	EXT:1;
			__BYTE	OTO:1;
			__BYTE	MD:2;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
#else
			__BYTE	SOE:1;
			__BYTE	SCKE:1;
			__BYTE	UPCL:1;
			__BYTE	REST:1;
			__BYTE	EXT:1;
			__BYTE	OTO:1;
			__BYTE	MD0:1;
			__BYTE	MD1:1;
#endif
		} bitc;
	} SMR8;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
#else
			__BYTE	TXE:1;
			__BYTE	RXE:1;
			__BYTE	CRE:1;
			__BYTE	AD:1;
			__BYTE	CL:1;
			__BYTE	SBL:1;
			__BYTE	P:1;
			__BYTE	PEN:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
#else
			__BYTE	TXE:1;
			__BYTE	RXE:1;
			__BYTE	CRE:1;
			__BYTE	AD:1;
			__BYTE	CL:1;
			__BYTE	SBL:1;
			__BYTE	P:1;
			__BYTE	PEN:1;
#endif
		} bitc;
	} SCR8;
	__BYTE	RDR8;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
#else
			__BYTE	TIE:1;
			__BYTE	RIE:1;
			__BYTE	BDS:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	FRE:1;
			__BYTE	ORE:1;
			__BYTE	PE:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
#else
			__BYTE	TIE:1;
			__BYTE	RIE:1;
			__BYTE	BDS:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	FRE:1;
			__BYTE	ORE:1;
			__BYTE	PE:1;
#endif
		} bitc;
	} SSR8;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INV:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
#else
			__BYTE	TBI:1;
			__BYTE	RBI:1;
			__BYTE	BIE:1;
			__BYTE	SSM:1;
			__BYTE	SCDE:1;
			__BYTE	MS:1;
			__BYTE	LBR:1;
			__BYTE	INV:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	INV:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
#else
			__BYTE	TBI:1;
			__BYTE	RBI:1;
			__BYTE	BIE:1;
			__BYTE	SSM:1;
			__BYTE	SCDE:1;
			__BYTE	MS:1;
			__BYTE	LBR:1;
			__BYTE	INV:1;
#endif
		} bitc;
	} ECCR8;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL:2;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
#else
			__BYTE	SCES:1;
			__BYTE	CCO:1;
			__BYTE	SIOP:1;
			__BYTE	SOPE:1;
			__BYTE	LBL:2;
			__BYTE	LBD:1;
			__BYTE	LBIE:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL1:1;
			__BYTE	LBL0:1;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
#else
			__BYTE	SCES:1;
			__BYTE	CCO:1;
			__BYTE	SIOP:1;
			__BYTE	SOPE:1;
			__BYTE	LBL0:1;
			__BYTE	LBL1:1;
			__BYTE	LBD:1;
			__BYTE	LBIE:1;
#endif
		} bitc;
	} ESCR8;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BGRH8:8;
			__WORD	BGRL8:8;
#else
			__WORD	BGRL8:8;
			__WORD	BGRH8:8;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BGRH87:1;
			__WORD	BGRH86:1;
			__WORD	BGRH85:1;
			__WORD	BGRH84:1;
			__WORD	BGRH83:1;
			__WORD	BGRH82:1;
			__WORD	BGRH81:1;
			__WORD	BGRH80:1;
			__WORD	BGRL87:1;
			__WORD	BGRL86:1;
			__WORD	BGRL85:1;
			__WORD	BGRL84:1;
			__WORD	BGRL83:1;
			__WORD	BGRL82:1;
			__WORD	BGRL81:1;
			__WORD	BGRL80:1;
#else
			__WORD	BGRL80:1;
			__WORD	BGRL81:1;
			__WORD	BGRL82:1;
			__WORD	BGRL83:1;
			__WORD	BGRL84:1;
			__WORD	BGRL85:1;
			__WORD	BGRL86:1;
			__WORD	BGRL87:1;
			__WORD	BGRH80:1;
			__WORD	BGRH81:1;
			__WORD	BGRH82:1;
			__WORD	BGRH83:1;
			__WORD	BGRH84:1;
			__WORD	BGRH85:1;
			__WORD	BGRH86:1;
			__WORD	BGRH87:1;
#endif
		} bitc;
	} BGR8;
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV87:1;
			__BYTE	RESV86:1;
			__BYTE	RESV85:1;
			__BYTE	RESV84:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	RBI:1;
			__BYTE	AICD:1;
#else
			__BYTE	AICD:1;
			__BYTE	RBI:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV87:1;
			__BYTE	RESV86:1;
			__BYTE	RESV85:1;
			__BYTE	RESV84:1;
			__BYTE	TDRE:1;
			__BYTE	RDRF:1;
			__BYTE	RBI:1;
			__BYTE	AICD:1;
#else
			__BYTE	AICD:1;
			__BYTE	RBI:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
#endif
		} bitc;
	} ESIR8;
} IO_UART8;

#define	UART8_SMR8			(IO_UART8.SMR8.byte)
#define	UART8_SMR8_SOE    	(IO_UART8.SMR8.bit.SOE)
#define	UART8_SMR8_SCKE    	(IO_UART8.SMR8.bit.SCKE)
#define	UART8_SMR8_UPCL    	(IO_UART8.SMR8.bit.UPCL)
#define	UART8_SMR8_REST    	(IO_UART8.SMR8.bit.REST)
#define	UART8_SMR8_EXT    	(IO_UART8.SMR8.bit.EXT)
#define	UART8_SMR8_OTO    	(IO_UART8.SMR8.bit.OTO)
#define	UART8_SMR8_MD    	(IO_UART8.SMR8.bit.MD)
#define	UART8_SMR8_MD0    	(IO_UART8.SMR8.bitc.MD0)
#define	UART8_SMR8_MD1    	(IO_UART8.SMR8.bitc.MD1)
#define	UART8_SCR8			(IO_UART8.SCR8.byte)
#define	UART8_SCR8_TXE    	(IO_UART8.SCR8.bit.TXE)
#define	UART8_SCR8_RXE    	(IO_UART8.SCR8.bit.RXE)
#define	UART8_SCR8_CRE    	(IO_UART8.SCR8.bit.CRE)
#define	UART8_SCR8_AD    	(IO_UART8.SCR8.bit.AD)
#define	UART8_SCR8_CL    	(IO_UART8.SCR8.bit.CL)
#define	UART8_SCR8_SBL    	(IO_UART8.SCR8.bit.SBL)
#define	UART8_SCR8_P    	(IO_UART8.SCR8.bit.P)
#define	UART8_SCR8_PEN    	(IO_UART8.SCR8.bit.PEN)
#define	UART8_RDR8	(IO_UART8.RDR8)
#define	UART8_TDR8	(IO_UART8.RDR8)
#define	UART8_SSR8			(IO_UART8.SSR8.byte)
#define	UART8_SSR8_TIE    	(IO_UART8.SSR8.bit.TIE)
#define	UART8_SSR8_RIE    	(IO_UART8.SSR8.bit.RIE)
#define	UART8_SSR8_BDS    	(IO_UART8.SSR8.bit.BDS)
#define	UART8_SSR8_TDRE    	(IO_UART8.SSR8.bit.TDRE)
#define	UART8_SSR8_RDRF    	(IO_UART8.SSR8.bit.RDRF)
#define	UART8_SSR8_FRE    	(IO_UART8.SSR8.bit.FRE)
#define	UART8_SSR8_ORE    	(IO_UART8.SSR8.bit.ORE)
#define	UART8_SSR8_PE    	(IO_UART8.SSR8.bit.PE)
#define	UART8_ECCR8			(IO_UART8.ECCR8.byte)
#define	UART8_ECCR8_TBI    	(IO_UART8.ECCR8.bit.TBI)
#define	UART8_ECCR8_RBI    	(IO_UART8.ECCR8.bit.RBI)
#define	UART8_ECCR8_BIE    	(IO_UART8.ECCR8.bit.BIE)
#define	UART8_ECCR8_SSM    	(IO_UART8.ECCR8.bit.SSM)
#define	UART8_ECCR8_SCDE    	(IO_UART8.ECCR8.bit.SCDE)
#define	UART8_ECCR8_MS    	(IO_UART8.ECCR8.bit.MS)
#define	UART8_ECCR8_LBR    	(IO_UART8.ECCR8.bit.LBR)
#define	UART8_ECCR8_INV    	(IO_UART8.ECCR8.bit.INV)
#define	UART8_ESCR8			(IO_UART8.ESCR8.byte)
#define	UART8_ESCR8_SCES    	(IO_UART8.ESCR8.bit.SCES)
#define	UART8_ESCR8_CCO    	(IO_UART8.ESCR8.bit.CCO)
#define	UART8_ESCR8_SIOP    	(IO_UART8.ESCR8.bit.SIOP)
#define	UART8_ESCR8_SOPE    	(IO_UART8.ESCR8.bit.SOPE)
#define	UART8_ESCR8_LBL    	(IO_UART8.ESCR8.bit.LBL)
#define	UART8_ESCR8_LBL0    	(IO_UART8.ESCR8.bitc.LBL0)
#define	UART8_ESCR8_LBL1    	(IO_UART8.ESCR8.bitc.LBL1)
#define	UART8_ESCR8_LBD    	(IO_UART8.ESCR8.bit.LBD)
#define	UART8_ESCR8_LBIE    	(IO_UART8.ESCR8.bit.LBIE)
#define	UART8_BGR8			(IO_UART8.BGR8.word)
#define	UART8_BGR8_BGRL8    	(IO_UART8.BGR8.bit.BGRL8)
#define	UART8_BGR8_BGRL80    	(IO_UART8.BGR8.bitc.BGRL80)
#define	UART8_BGR8_BGRL81    	(IO_UART8.BGR8.bitc.BGRL81)
#define	UART8_BGR8_BGRL82    	(IO_UART8.BGR8.bitc.BGRL82)
#define	UART8_BGR8_BGRL83    	(IO_UART8.BGR8.bitc.BGRL83)
#define	UART8_BGR8_BGRL84    	(IO_UART8.BGR8.bitc.BGRL84)
#define	UART8_BGR8_BGRL85    	(IO_UART8.BGR8.bitc.BGRL85)
#define	UART8_BGR8_BGRL86    	(IO_UART8.BGR8.bitc.BGRL86)
#define	UART8_BGR8_BGRL87    	(IO_UART8.BGR8.bitc.BGRL87)
#define	UART8_BGR8_BGRH8    	(IO_UART8.BGR8.bit.BGRH8)
#define	UART8_BGR8_BGRH80    	(IO_UART8.BGR8.bitc.BGRH80)
#define	UART8_BGR8_BGRH81    	(IO_UART8.BGR8.bitc.BGRH81)
#define	UART8_BGR8_BGRH82    	(IO_UART8.BGR8.bitc.BGRH82)
#define	UART8_BGR8_BGRH83    	(IO_UART8.BGR8.bitc.BGRH83)
#define	UART8_BGR8_BGRH84    	(IO_UART8.BGR8.bitc.BGRH84)
#define	UART8_BGR8_BGRH85    	(IO_UART8.BGR8.bitc.BGRH85)
#define	UART8_BGR8_BGRH86    	(IO_UART8.BGR8.bitc.BGRH86)
#define	UART8_BGR8_BGRH87    	(IO_UART8.BGR8.bitc.BGRH87)
#define	UART8_ESIR8			(IO_UART8.ESIR8.byte)
#define	UART8_ESIR8_AICD    	(IO_UART8.ESIR8.bit.AICD)
#define	UART8_ESIR8_RBI    	(IO_UART8.ESIR8.bit.RBI)
#define	UART8_ESIR8_RDRF    	(IO_UART8.ESIR8.bit.RDRF)
#define	UART8_ESIR8_TDRE    	(IO_UART8.ESIR8.bit.TDRE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR6,   locate=0x564
#pragma segment FAR_DATA=IO_PTMR6, locate=0x564
#endif

__IO_EXTENDED	const __WORD	IO_PTMR6;
#define	_ptmr6		(IO_PTMR6)
#define	PTMR6	(_ptmr6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR6,   locate=0x566
#pragma segment FAR_DATA=IO_PCSR6, locate=0x566
#endif

__IO_EXTENDED	__WORD	IO_PCSR6;
#define	_pcsr6		(IO_PCSR6)
#define	PCSR6	(_pcsr6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT6,   locate=0x568
#pragma segment FAR_DATA=IO_PDUT6, locate=0x568
#endif

__IO_EXTENDED	__WORD	IO_PDUT6;
#define	_pdut6		(IO_PDUT6)
#define	PDUT6	(_pdut6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN6,   locate=0x56A
#pragma segment FAR_DATA=IO_PCN6, locate=0x56A
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN6STR;

__IO_EXTENDED	  PCN6STR	IO_PCN6;
#define	_pcn6		(IO_PCN6)
#define	PCN6		(IO_PCN6.word)
#define	PCN6_OSEL  	(IO_PCN6.bit.OSEL)
#define	PCN6_OE  	(IO_PCN6.bit.OE)
#define	PCN6_IRS  	(IO_PCN6.bit.IRS)
#define	PCN6_IRS0  	(IO_PCN6.bitc.IRS0)
#define	PCN6_IRS1  	(IO_PCN6.bitc.IRS1)
#define	PCN6_IRQF  	(IO_PCN6.bit.IRQF)
#define	PCN6_IREN  	(IO_PCN6.bit.IREN)
#define	PCN6_EGS  	(IO_PCN6.bit.EGS)
#define	PCN6_EGS0  	(IO_PCN6.bitc.EGS0)
#define	PCN6_EGS1  	(IO_PCN6.bitc.EGS1)
#define	PCN6_MOD  	(IO_PCN6.bit.MOD)
#define	PCN6_PGMS  	(IO_PCN6.bit.PGMS)
#define	PCN6_CKS  	(IO_PCN6.bit.CKS)
#define	PCN6_CKS0  	(IO_PCN6.bitc.CKS0)
#define	PCN6_CKS1  	(IO_PCN6.bitc.CKS1)
#define	PCN6_RTRG  	(IO_PCN6.bit.RTRG)
#define	PCN6_MDSE  	(IO_PCN6.bit.MDSE)
#define	PCN6_STGR  	(IO_PCN6.bit.STGR)
#define	PCN6_CNTE  	(IO_PCN6.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR7,   locate=0x56C
#pragma segment FAR_DATA=IO_PTMR7, locate=0x56C
#endif

__IO_EXTENDED	const __WORD	IO_PTMR7;
#define	_ptmr7		(IO_PTMR7)
#define	PTMR7	(_ptmr7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR7,   locate=0x56E
#pragma segment FAR_DATA=IO_PCSR7, locate=0x56E
#endif

__IO_EXTENDED	__WORD	IO_PCSR7;
#define	_pcsr7		(IO_PCSR7)
#define	PCSR7	(_pcsr7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT7,   locate=0x570
#pragma segment FAR_DATA=IO_PDUT7, locate=0x570
#endif

__IO_EXTENDED	__WORD	IO_PDUT7;
#define	_pdut7		(IO_PDUT7)
#define	PDUT7	(_pdut7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN7,   locate=0x572
#pragma segment FAR_DATA=IO_PCN7, locate=0x572
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN7STR;

__IO_EXTENDED	  PCN7STR	IO_PCN7;
#define	_pcn7		(IO_PCN7)
#define	PCN7		(IO_PCN7.word)
#define	PCN7_OSEL  	(IO_PCN7.bit.OSEL)
#define	PCN7_OE  	(IO_PCN7.bit.OE)
#define	PCN7_IRS  	(IO_PCN7.bit.IRS)
#define	PCN7_IRS0  	(IO_PCN7.bitc.IRS0)
#define	PCN7_IRS1  	(IO_PCN7.bitc.IRS1)
#define	PCN7_IRQF  	(IO_PCN7.bit.IRQF)
#define	PCN7_IREN  	(IO_PCN7.bit.IREN)
#define	PCN7_EGS  	(IO_PCN7.bit.EGS)
#define	PCN7_EGS0  	(IO_PCN7.bitc.EGS0)
#define	PCN7_EGS1  	(IO_PCN7.bitc.EGS1)
#define	PCN7_MOD  	(IO_PCN7.bit.MOD)
#define	PCN7_PGMS  	(IO_PCN7.bit.PGMS)
#define	PCN7_CKS  	(IO_PCN7.bit.CKS)
#define	PCN7_CKS0  	(IO_PCN7.bitc.CKS0)
#define	PCN7_CKS1  	(IO_PCN7.bitc.CKS1)
#define	PCN7_RTRG  	(IO_PCN7.bit.RTRG)
#define	PCN7_MDSE  	(IO_PCN7.bit.MDSE)
#define	PCN7_STGR  	(IO_PCN7.bit.STGR)
#define	PCN7_CNTE  	(IO_PCN7.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN13,   locate=0x598
#pragma segment FAR_DATA=IO_GCN13, locate=0x598
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	TSEL3:4;
			__WORD	TSEL2:4;
			__WORD	TSEL1:4;
			__WORD	TSEL0:4;
#else
			__WORD	TSEL0:4;
			__WORD	TSEL1:4;
			__WORD	TSEL2:4;
			__WORD	TSEL3:4;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	TSEL33:1;
			__WORD	TSEL32:1;
			__WORD	TSEL31:1;
			__WORD	TSEL30:1;
			__WORD	TSEL23:1;
			__WORD	TSEL22:1;
			__WORD	TSEL21:1;
			__WORD	TSEL20:1;
			__WORD	TSEL13:1;
			__WORD	TSEL12:1;
			__WORD	TSEL11:1;
			__WORD	TSEL10:1;
			__WORD	TSEL03:1;
			__WORD	TSEL02:1;
			__WORD	TSEL01:1;
			__WORD	TSEL00:1;
#else
			__WORD	TSEL00:1;
			__WORD	TSEL01:1;
			__WORD	TSEL02:1;
			__WORD	TSEL03:1;
			__WORD	TSEL10:1;
			__WORD	TSEL11:1;
			__WORD	TSEL12:1;
			__WORD	TSEL13:1;
			__WORD	TSEL20:1;
			__WORD	TSEL21:1;
			__WORD	TSEL22:1;
			__WORD	TSEL23:1;
			__WORD	TSEL30:1;
			__WORD	TSEL31:1;
			__WORD	TSEL32:1;
			__WORD	TSEL33:1;
#endif
	} bitc;
} GCN13STR;

__IO_EXTENDED	  GCN13STR	IO_GCN13;
#define	_gcn13		(IO_GCN13)
#define	GCN13		(IO_GCN13.word)
#define	GCN13_TSEL0  	(IO_GCN13.bit.TSEL0)
#define	GCN13_TSEL00  	(IO_GCN13.bitc.TSEL00)
#define	GCN13_TSEL01  	(IO_GCN13.bitc.TSEL01)
#define	GCN13_TSEL02  	(IO_GCN13.bitc.TSEL02)
#define	GCN13_TSEL03  	(IO_GCN13.bitc.TSEL03)
#define	GCN13_TSEL1  	(IO_GCN13.bit.TSEL1)
#define	GCN13_TSEL10  	(IO_GCN13.bitc.TSEL10)
#define	GCN13_TSEL11  	(IO_GCN13.bitc.TSEL11)
#define	GCN13_TSEL12  	(IO_GCN13.bitc.TSEL12)
#define	GCN13_TSEL13  	(IO_GCN13.bitc.TSEL13)
#define	GCN13_TSEL2  	(IO_GCN13.bit.TSEL2)
#define	GCN13_TSEL20  	(IO_GCN13.bitc.TSEL20)
#define	GCN13_TSEL21  	(IO_GCN13.bitc.TSEL21)
#define	GCN13_TSEL22  	(IO_GCN13.bitc.TSEL22)
#define	GCN13_TSEL23  	(IO_GCN13.bitc.TSEL23)
#define	GCN13_TSEL3  	(IO_GCN13.bit.TSEL3)
#define	GCN13_TSEL30  	(IO_GCN13.bitc.TSEL30)
#define	GCN13_TSEL31  	(IO_GCN13.bitc.TSEL31)
#define	GCN13_TSEL32  	(IO_GCN13.bitc.TSEL32)
#define	GCN13_TSEL33  	(IO_GCN13.bitc.TSEL33)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN23,   locate=0x59A
#pragma segment FAR_DATA=IO_GCN23, locate=0x59A
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	CKSEL3:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	EN3:1;
			__WORD	EN2:1;
			__WORD	EN1:1;
			__WORD	EN0:1;
#else
			__WORD	EN0:1;
			__WORD	EN1:1;
			__WORD	EN2:1;
			__WORD	EN3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	CKSEL0:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL3:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	CKSEL3:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	EN3:1;
			__WORD	EN2:1;
			__WORD	EN1:1;
			__WORD	EN0:1;
#else
			__WORD	EN0:1;
			__WORD	EN1:1;
			__WORD	EN2:1;
			__WORD	EN3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	CKSEL0:1;
			__WORD	CKSEL1:1;
			__WORD	CKSEL2:1;
			__WORD	CKSEL3:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN23STR;

__IO_EXTENDED	  GCN23STR	IO_GCN23;
#define	_gcn23		(IO_GCN23)
#define	GCN23		(IO_GCN23.word)
#define	GCN23_EN0  	(IO_GCN23.bit.EN0)
#define	GCN23_EN1  	(IO_GCN23.bit.EN1)
#define	GCN23_EN2  	(IO_GCN23.bit.EN2)
#define	GCN23_EN3  	(IO_GCN23.bit.EN3)
#define	GCN23_CKSEL0  	(IO_GCN23.bit.CKSEL0)
#define	GCN23_CKSEL1  	(IO_GCN23.bit.CKSEL1)
#define	GCN23_CKSEL2  	(IO_GCN23.bit.CKSEL2)
#define	GCN23_CKSEL3  	(IO_GCN23.bit.CKSEL3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR12,   locate=0x59C
#pragma segment FAR_DATA=IO_PTMR12, locate=0x59C
#endif

__IO_EXTENDED	const __WORD	IO_PTMR12;
#define	_ptmr12		(IO_PTMR12)
#define	PTMR12	(_ptmr12)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR12,   locate=0x59E
#pragma segment FAR_DATA=IO_PCSR12, locate=0x59E
#endif

__IO_EXTENDED	__WORD	IO_PCSR12;
#define	_pcsr12		(IO_PCSR12)
#define	PCSR12	(_pcsr12)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT12,   locate=0x5A0
#pragma segment FAR_DATA=IO_PDUT12, locate=0x5A0
#endif

__IO_EXTENDED	__WORD	IO_PDUT12;
#define	_pdut12		(IO_PDUT12)
#define	PDUT12	(_pdut12)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN12,   locate=0x5A2
#pragma segment FAR_DATA=IO_PCN12, locate=0x5A2
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN12STR;

__IO_EXTENDED	  PCN12STR	IO_PCN12;
#define	_pcn12		(IO_PCN12)
#define	PCN12		(IO_PCN12.word)
#define	PCN12_OSEL  	(IO_PCN12.bit.OSEL)
#define	PCN12_OE  	(IO_PCN12.bit.OE)
#define	PCN12_IRS  	(IO_PCN12.bit.IRS)
#define	PCN12_IRS0  	(IO_PCN12.bitc.IRS0)
#define	PCN12_IRS1  	(IO_PCN12.bitc.IRS1)
#define	PCN12_IRQF  	(IO_PCN12.bit.IRQF)
#define	PCN12_IREN  	(IO_PCN12.bit.IREN)
#define	PCN12_EGS  	(IO_PCN12.bit.EGS)
#define	PCN12_EGS0  	(IO_PCN12.bitc.EGS0)
#define	PCN12_EGS1  	(IO_PCN12.bitc.EGS1)
#define	PCN12_MOD  	(IO_PCN12.bit.MOD)
#define	PCN12_PGMS  	(IO_PCN12.bit.PGMS)
#define	PCN12_CKS  	(IO_PCN12.bit.CKS)
#define	PCN12_CKS0  	(IO_PCN12.bitc.CKS0)
#define	PCN12_CKS1  	(IO_PCN12.bitc.CKS1)
#define	PCN12_RTRG  	(IO_PCN12.bit.RTRG)
#define	PCN12_MDSE  	(IO_PCN12.bit.MDSE)
#define	PCN12_STGR  	(IO_PCN12.bit.STGR)
#define	PCN12_CNTE  	(IO_PCN12.bit.CNTE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR14,   locate=0x5AC
#pragma segment FAR_DATA=IO_PTMR14, locate=0x5AC
#endif

__IO_EXTENDED	const __WORD	IO_PTMR14;
#define	_ptmr14		(IO_PTMR14)
#define	PTMR14	(_ptmr14)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR14,   locate=0x5AE
#pragma segment FAR_DATA=IO_PCSR14, locate=0x5AE
#endif

__IO_EXTENDED	__WORD	IO_PCSR14;
#define	_pcsr14		(IO_PCSR14)
#define	PCSR14	(_pcsr14)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT14,   locate=0x5B0
#pragma segment FAR_DATA=IO_PDUT14, locate=0x5B0
#endif

__IO_EXTENDED	__WORD	IO_PDUT14;
#define	_pdut14		(IO_PDUT14)
#define	PDUT14	(_pdut14)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN14,   locate=0x5B2
#pragma segment FAR_DATA=IO_PCN14, locate=0x5B2
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS:2;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS:2;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS:2;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS:2;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS:2;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS:2;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	CNTE:1;
			__WORD	STGR:1;
			__WORD	MDSE:1;
			__WORD	RTRG:1;
			__WORD	CKS1:1;
			__WORD	CKS0:1;
			__WORD	PGMS:1;
			__WORD	MOD:1;
			__WORD	EGS1:1;
			__WORD	EGS0:1;
			__WORD	IREN:1;
			__WORD	IRQF:1;
			__WORD	IRS1:1;
			__WORD	IRS0:1;
			__WORD	OE:1;
			__WORD	OSEL:1;
#else
			__WORD	OSEL:1;
			__WORD	OE:1;
			__WORD	IRS0:1;
			__WORD	IRS1:1;
			__WORD	IRQF:1;
			__WORD	IREN:1;
			__WORD	EGS0:1;
			__WORD	EGS1:1;
			__WORD	MOD:1;
			__WORD	PGMS:1;
			__WORD	CKS0:1;
			__WORD	CKS1:1;
			__WORD	RTRG:1;
			__WORD	MDSE:1;
			__WORD	STGR:1;
			__WORD	CNTE:1;
#endif
	} bitc;
} PCN14STR;

__IO_EXTENDED	  PCN14STR	IO_PCN14;
#define	_pcn14		(IO_PCN14)
#define	PCN14		(IO_PCN14.word)
#define	PCN14_OSEL  	(IO_PCN14.bit.OSEL)
#define	PCN14_OE  	(IO_PCN14.bit.OE)
#define	PCN14_IRS  	(IO_PCN14.bit.IRS)
#define	PCN14_IRS0  	(IO_PCN14.bitc.IRS0)
#define	PCN14_IRS1  	(IO_PCN14.bitc.IRS1)
#define	PCN14_IRQF  	(IO_PCN14.bit.IRQF)
#define	PCN14_IREN  	(IO_PCN14.bit.IREN)
#define	PCN14_EGS  	(IO_PCN14.bit.EGS)
#define	PCN14_EGS0  	(IO_PCN14.bitc.EGS0)
#define	PCN14_EGS1  	(IO_PCN14.bitc.EGS1)
#define	PCN14_MOD  	(IO_PCN14.bit.MOD)
#define	PCN14_PGMS  	(IO_PCN14.bit.PGMS)
#define	PCN14_CKS  	(IO_PCN14.bit.CKS)
#define	PCN14_CKS0  	(IO_PCN14.bitc.CKS0)
#define	PCN14_CKS1  	(IO_PCN14.bitc.CKS1)
#define	PCN14_RTRG  	(IO_PCN14.bit.RTRG)
#define	PCN14_MDSE  	(IO_PCN14.bit.MDSE)
#define	PCN14_STGR  	(IO_PCN14.bit.STGR)
#define	PCN14_CNTE  	(IO_PCN14.bit.CNTE)

#if defined(__CPU_MB96F612RA__) || \
    defined(__CPU_MB96F613RA__) || \
    defined(__CPU_MB96F615RA__) || \
    defined(__CPU_MB96F612RB__) || \
    defined(__CPU_MB96F613RB__) || \
    defined(__CPU_MB96F615RB__) 

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CAN2,   locate=0x900
#pragma segment FAR_DATA=IO_CAN2, locate=0x900
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV015:1;
			__WORD	RESV014:1;
			__WORD	RESV013:1;
			__WORD	RESV012:1;
			__WORD	RESV011:1;
			__WORD	RESV010:1;
			__WORD	RESV09:1;
			__WORD	RESV08:1;
			__WORD	TEST:1;
			__WORD	CCE:1;
			__WORD	DAR:1;
			__WORD	RESV04:1;
			__WORD	EIE:1;
			__WORD	SIE:1;
			__WORD	IE:1;
			__WORD	INIT:1;
#else
			__WORD	INIT:1;
			__WORD	IE:1;
			__WORD	SIE:1;
			__WORD	EIE:1;
			__WORD	RESV04:1;
			__WORD	DAR:1;
			__WORD	CCE:1;
			__WORD	TEST:1;
			__WORD	RESV08:1;
			__WORD	RESV09:1;
			__WORD	RESV010:1;
			__WORD	RESV011:1;
			__WORD	RESV012:1;
			__WORD	RESV013:1;
			__WORD	RESV014:1;
			__WORD	RESV015:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV015:1;
			__WORD	RESV014:1;
			__WORD	RESV013:1;
			__WORD	RESV012:1;
			__WORD	RESV011:1;
			__WORD	RESV010:1;
			__WORD	RESV09:1;
			__WORD	RESV08:1;
			__WORD	TEST:1;
			__WORD	CCE:1;
			__WORD	DAR:1;
			__WORD	RESV04:1;
			__WORD	EIE:1;
			__WORD	SIE:1;
			__WORD	IE:1;
			__WORD	INIT:1;
#else
			__WORD	INIT:1;
			__WORD	IE:1;
			__WORD	SIE:1;
			__WORD	EIE:1;
			__WORD	RESV04:1;
			__WORD	DAR:1;
			__WORD	CCE:1;
			__WORD	TEST:1;
			__WORD	RESV08:1;
			__WORD	RESV09:1;
			__WORD	RESV010:1;
			__WORD	RESV011:1;
			__WORD	RESV012:1;
			__WORD	RESV013:1;
			__WORD	RESV014:1;
			__WORD	RESV015:1;
#endif
		} bitc;
	} CTRLR2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV213:1;
			__WORD	RESV212:1;
			__WORD	RESV211:1;
			__WORD	RESV210:1;
			__WORD	RESV29:1;
			__WORD	RESV28:1;
			__WORD	RESV27:1;
			__WORD	RESV26:1;
			__WORD	BOFF:1;
			__WORD	EWARN:1;
			__WORD	EPASS:1;
			__WORD	RXOK:1;
			__WORD	TXOK:1;
			__WORD	LEC:3;
#else
			__WORD	LEC:3;
			__WORD	TXOK:1;
			__WORD	RXOK:1;
			__WORD	EPASS:1;
			__WORD	EWARN:1;
			__WORD	BOFF:1;
			__WORD	RESV26:1;
			__WORD	RESV27:1;
			__WORD	RESV28:1;
			__WORD	RESV29:1;
			__WORD	RESV210:1;
			__WORD	RESV211:1;
			__WORD	RESV212:1;
			__WORD	RESV213:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV215:1;
			__WORD	RESV214:1;
			__WORD	RESV213:1;
			__WORD	RESV212:1;
			__WORD	RESV211:1;
			__WORD	RESV210:1;
			__WORD	RESV29:1;
			__WORD	RESV28:1;
			__WORD	BOFF:1;
			__WORD	EWARN:1;
			__WORD	EPASS:1;
			__WORD	RXOK:1;
			__WORD	TXOK:1;
			__WORD	LEC2:1;
			__WORD	LEC1:1;
			__WORD	LEC0:1;
#else
			__WORD	LEC0:1;
			__WORD	LEC1:1;
			__WORD	LEC2:1;
			__WORD	TXOK:1;
			__WORD	RXOK:1;
			__WORD	EPASS:1;
			__WORD	EWARN:1;
			__WORD	BOFF:1;
			__WORD	RESV28:1;
			__WORD	RESV29:1;
			__WORD	RESV210:1;
			__WORD	RESV211:1;
			__WORD	RESV212:1;
			__WORD	RESV213:1;
			__WORD	RESV214:1;
			__WORD	RESV215:1;
#endif
		} bitc;
	} STATR2;
	const union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RP:1;
			__WORD	REC:7;
			__WORD	TEC:8;
#else
			__WORD	TEC:8;
			__WORD	REC:7;
			__WORD	RP:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RP:1;
			__WORD	REC6:1;
			__WORD	REC5:1;
			__WORD	REC4:1;
			__WORD	REC3:1;
			__WORD	REC2:1;
			__WORD	REC1:1;
			__WORD	REC0:1;
			__WORD	TEC7:1;
			__WORD	TEC6:1;
			__WORD	TEC5:1;
			__WORD	TEC4:1;
			__WORD	TEC3:1;
			__WORD	TEC2:1;
			__WORD	TEC1:1;
			__WORD	TEC0:1;
#else
			__WORD	TEC0:1;
			__WORD	TEC1:1;
			__WORD	TEC2:1;
			__WORD	TEC3:1;
			__WORD	TEC4:1;
			__WORD	TEC5:1;
			__WORD	TEC6:1;
			__WORD	TEC7:1;
			__WORD	REC0:1;
			__WORD	REC1:1;
			__WORD	REC2:1;
			__WORD	REC3:1;
			__WORD	REC4:1;
			__WORD	REC5:1;
			__WORD	REC6:1;
			__WORD	RP:1;
#endif
		} bitc;
	} ERRCNT2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV64:1;
			__WORD	TSEG2:3;
			__WORD	TSEG1:4;
			__WORD	SJW:2;
			__WORD	BRP:6;
#else
			__WORD	BRP:6;
			__WORD	SJW:2;
			__WORD	TSEG1:4;
			__WORD	TSEG2:3;
			__WORD	RESV64:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV615:1;
			__WORD	TSEG22:1;
			__WORD	TSEG21:1;
			__WORD	TSEG20:1;
			__WORD	TSEG13:1;
			__WORD	TSEG12:1;
			__WORD	TSEG11:1;
			__WORD	TSEG10:1;
			__WORD	SJW1:1;
			__WORD	SJW0:1;
			__WORD	BRP5:1;
			__WORD	BRP4:1;
			__WORD	BRP3:1;
			__WORD	BRP2:1;
			__WORD	BRP1:1;
			__WORD	BRP0:1;
#else
			__WORD	BRP0:1;
			__WORD	BRP1:1;
			__WORD	BRP2:1;
			__WORD	BRP3:1;
			__WORD	BRP4:1;
			__WORD	BRP5:1;
			__WORD	SJW0:1;
			__WORD	SJW1:1;
			__WORD	TSEG10:1;
			__WORD	TSEG11:1;
			__WORD	TSEG12:1;
			__WORD	TSEG13:1;
			__WORD	TSEG20:1;
			__WORD	TSEG21:1;
			__WORD	TSEG22:1;
			__WORD	RESV615:1;
#endif
		} bitc;
	} BTR2;
	const __WORD	INTR2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV1014:1;
			__WORD	RESV1013:1;
			__WORD	RESV1012:1;
			__WORD	RESV1011:1;
			__WORD	RESV1010:1;
			__WORD	RESV109:1;
			__WORD	RESV108:1;
			__WORD	RESV107:1;
			__WORD	RX:1;
			__WORD	TX:2;
			__WORD	LBACK:1;
			__WORD	SILENT:1;
			__WORD	BASIC:1;
			__WORD	RESV101:1;
			__WORD	RESV100:1;
#else
			__WORD	RESV100:1;
			__WORD	RESV101:1;
			__WORD	BASIC:1;
			__WORD	SILENT:1;
			__WORD	LBACK:1;
			__WORD	TX:2;
			__WORD	RX:1;
			__WORD	RESV107:1;
			__WORD	RESV108:1;
			__WORD	RESV109:1;
			__WORD	RESV1010:1;
			__WORD	RESV1011:1;
			__WORD	RESV1012:1;
			__WORD	RESV1013:1;
			__WORD	RESV1014:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV1015:1;
			__WORD	RESV1014:1;
			__WORD	RESV1013:1;
			__WORD	RESV1012:1;
			__WORD	RESV1011:1;
			__WORD	RESV1010:1;
			__WORD	RESV109:1;
			__WORD	RESV108:1;
			__WORD	RX:1;
			__WORD	TX1:1;
			__WORD	TX0:1;
			__WORD	LBACK:1;
			__WORD	SILENT:1;
			__WORD	BASIC:1;
			__WORD	RESV101:1;
			__WORD	RESV100:1;
#else
			__WORD	RESV100:1;
			__WORD	RESV101:1;
			__WORD	BASIC:1;
			__WORD	SILENT:1;
			__WORD	LBACK:1;
			__WORD	TX0:1;
			__WORD	TX1:1;
			__WORD	RX:1;
			__WORD	RESV108:1;
			__WORD	RESV109:1;
			__WORD	RESV1010:1;
			__WORD	RESV1011:1;
			__WORD	RESV1012:1;
			__WORD	RESV1013:1;
			__WORD	RESV1014:1;
			__WORD	RESV1015:1;
#endif
		} bitc;
	} TESTR2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV1212:1;
			__WORD	RESV1211:1;
			__WORD	RESV1210:1;
			__WORD	RESV129:1;
			__WORD	RESV128:1;
			__WORD	RESV127:1;
			__WORD	RESV126:1;
			__WORD	RESV125:1;
			__WORD	RESV124:1;
			__WORD	RESV123:1;
			__WORD	RESV122:1;
			__WORD	RESV121:1;
			__WORD	BRPE:4;
#else
			__WORD	BRPE:4;
			__WORD	RESV121:1;
			__WORD	RESV122:1;
			__WORD	RESV123:1;
			__WORD	RESV124:1;
			__WORD	RESV125:1;
			__WORD	RESV126:1;
			__WORD	RESV127:1;
			__WORD	RESV128:1;
			__WORD	RESV129:1;
			__WORD	RESV1210:1;
			__WORD	RESV1211:1;
			__WORD	RESV1212:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV1215:1;
			__WORD	RESV1214:1;
			__WORD	RESV1213:1;
			__WORD	RESV1212:1;
			__WORD	RESV1211:1;
			__WORD	RESV1210:1;
			__WORD	RESV129:1;
			__WORD	RESV128:1;
			__WORD	RESV127:1;
			__WORD	RESV126:1;
			__WORD	RESV125:1;
			__WORD	RESV124:1;
			__WORD	BRPE3:1;
			__WORD	BRPE2:1;
			__WORD	BRPE1:1;
			__WORD	BRPE0:1;
#else
			__WORD	BRPE0:1;
			__WORD	BRPE1:1;
			__WORD	BRPE2:1;
			__WORD	BRPE3:1;
			__WORD	RESV124:1;
			__WORD	RESV125:1;
			__WORD	RESV126:1;
			__WORD	RESV127:1;
			__WORD	RESV128:1;
			__WORD	RESV129:1;
			__WORD	RESV1210:1;
			__WORD	RESV1211:1;
			__WORD	RESV1212:1;
			__WORD	RESV1213:1;
			__WORD	RESV1214:1;
			__WORD	RESV1215:1;
#endif
		} bitc;
	} BRPER2;
	__WORD	RESV1;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BUSY:1;
			__WORD	RESV167:1;
			__WORD	RESV166:1;
			__WORD	RESV165:1;
			__WORD	RESV164:1;
			__WORD	RESV163:1;
			__WORD	RESV162:1;
			__WORD	RESV161:1;
			__WORD	MSGN:8;
#else
			__WORD	MSGN:8;
			__WORD	RESV161:1;
			__WORD	RESV162:1;
			__WORD	RESV163:1;
			__WORD	RESV164:1;
			__WORD	RESV165:1;
			__WORD	RESV166:1;
			__WORD	RESV167:1;
			__WORD	BUSY:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BUSY:1;
			__WORD	RESV1614:1;
			__WORD	RESV1613:1;
			__WORD	RESV1612:1;
			__WORD	RESV1611:1;
			__WORD	RESV1610:1;
			__WORD	RESV169:1;
			__WORD	RESV168:1;
			__WORD	MSGN7:1;
			__WORD	MSGN6:1;
			__WORD	MSGN5:1;
			__WORD	MSGN4:1;
			__WORD	MSGN3:1;
			__WORD	MSGN2:1;
			__WORD	MSGN1:1;
			__WORD	MSGN0:1;
#else
			__WORD	MSGN0:1;
			__WORD	MSGN1:1;
			__WORD	MSGN2:1;
			__WORD	MSGN3:1;
			__WORD	MSGN4:1;
			__WORD	MSGN5:1;
			__WORD	MSGN6:1;
			__WORD	MSGN7:1;
			__WORD	RESV168:1;
			__WORD	RESV169:1;
			__WORD	RESV1610:1;
			__WORD	RESV1611:1;
			__WORD	RESV1612:1;
			__WORD	RESV1613:1;
			__WORD	RESV1614:1;
			__WORD	BUSY:1;
#endif
		} bitc;
	} IF1CREQ2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV1815:1;
			__WORD	RESV1814:1;
			__WORD	RESV1813:1;
			__WORD	RESV1812:1;
			__WORD	RESV1811:1;
			__WORD	RESV1810:1;
			__WORD	RESV189:1;
			__WORD	RESV188:1;
			__WORD	WRRD:1;
			__WORD	MASK:1;
			__WORD	ARB:1;
			__WORD	CONTROL:1;
			__WORD	CIP:1;
			__WORD	TXREQ:1;
			__WORD	DATAA:1;
			__WORD	DATAB:1;
#else
			__WORD	DATAB:1;
			__WORD	DATAA:1;
			__WORD	TXREQ:1;
			__WORD	CIP:1;
			__WORD	CONTROL:1;
			__WORD	ARB:1;
			__WORD	MASK:1;
			__WORD	WRRD:1;
			__WORD	RESV188:1;
			__WORD	RESV189:1;
			__WORD	RESV1810:1;
			__WORD	RESV1811:1;
			__WORD	RESV1812:1;
			__WORD	RESV1813:1;
			__WORD	RESV1814:1;
			__WORD	RESV1815:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV1815:1;
			__WORD	RESV1814:1;
			__WORD	RESV1813:1;
			__WORD	RESV1812:1;
			__WORD	RESV1811:1;
			__WORD	RESV1810:1;
			__WORD	RESV189:1;
			__WORD	RESV188:1;
			__WORD	WRRD:1;
			__WORD	MASK:1;
			__WORD	ARB:1;
			__WORD	CONTROL:1;
			__WORD	CIP:1;
			__WORD	TXREQ:1;
			__WORD	DATAA:1;
			__WORD	DATAB:1;
#else
			__WORD	DATAB:1;
			__WORD	DATAA:1;
			__WORD	TXREQ:1;
			__WORD	CIP:1;
			__WORD	CONTROL:1;
			__WORD	ARB:1;
			__WORD	MASK:1;
			__WORD	WRRD:1;
			__WORD	RESV188:1;
			__WORD	RESV189:1;
			__WORD	RESV1810:1;
			__WORD	RESV1811:1;
			__WORD	RESV1812:1;
			__WORD	RESV1813:1;
			__WORD	RESV1814:1;
			__WORD	RESV1815:1;
#endif
		} bitc;
	} IF1CMSK2;
	union {
		__LWORD	lword;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MXTD:1;
			__LWORD	MDIR:1;
			__LWORD	RESV201:1;
			__LWORD	MSK:29;
#else
			__LWORD	MSK:29;
			__LWORD	RESV201:1;
			__LWORD	MDIR:1;
			__LWORD	MXTD:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MXTD:1;
			__LWORD	MDIR:1;
			__LWORD	RESV2029:1;
			__LWORD	MSK28:1;
			__LWORD	MSK27:1;
			__LWORD	MSK26:1;
			__LWORD	MSK25:1;
			__LWORD	MSK24:1;
			__LWORD	MSK23:1;
			__LWORD	MSK22:1;
			__LWORD	MSK21:1;
			__LWORD	MSK20:1;
			__LWORD	MSK19:1;
			__LWORD	MSK18:1;
			__LWORD	MSK17:1;
			__LWORD	MSK16:1;
			__LWORD	MSK15:1;
			__LWORD	MSK14:1;
			__LWORD	MSK13:1;
			__LWORD	MSK12:1;
			__LWORD	MSK11:1;
			__LWORD	MSK10:1;
			__LWORD	MSK9:1;
			__LWORD	MSK8:1;
			__LWORD	MSK7:1;
			__LWORD	MSK6:1;
			__LWORD	MSK5:1;
			__LWORD	MSK4:1;
			__LWORD	MSK3:1;
			__LWORD	MSK2:1;
			__LWORD	MSK1:1;
			__LWORD	MSK0:1;
#else
			__LWORD	MSK0:1;
			__LWORD	MSK1:1;
			__LWORD	MSK2:1;
			__LWORD	MSK3:1;
			__LWORD	MSK4:1;
			__LWORD	MSK5:1;
			__LWORD	MSK6:1;
			__LWORD	MSK7:1;
			__LWORD	MSK8:1;
			__LWORD	MSK9:1;
			__LWORD	MSK10:1;
			__LWORD	MSK11:1;
			__LWORD	MSK12:1;
			__LWORD	MSK13:1;
			__LWORD	MSK14:1;
			__LWORD	MSK15:1;
			__LWORD	MSK16:1;
			__LWORD	MSK17:1;
			__LWORD	MSK18:1;
			__LWORD	MSK19:1;
			__LWORD	MSK20:1;
			__LWORD	MSK21:1;
			__LWORD	MSK22:1;
			__LWORD	MSK23:1;
			__LWORD	MSK24:1;
			__LWORD	MSK25:1;
			__LWORD	MSK26:1;
			__LWORD	MSK27:1;
			__LWORD	MSK28:1;
			__LWORD	RESV2029:1;
			__LWORD	MDIR:1;
			__LWORD	MXTD:1;
#endif
		} bitc;
	} IF1MSK2;
	union {
		__LWORD	lword;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MSGVAL:1;
			__LWORD	XTD:1;
			__LWORD	DIR:1;
			__LWORD	ID:29;
#else
			__LWORD	ID:29;
			__LWORD	DIR:1;
			__LWORD	XTD:1;
			__LWORD	MSGVAL:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MSGVAL:1;
			__LWORD	XTD:1;
			__LWORD	DIR:1;
			__LWORD	ID28:1;
			__LWORD	ID27:1;
			__LWORD	ID26:1;
			__LWORD	ID25:1;
			__LWORD	ID24:1;
			__LWORD	ID23:1;
			__LWORD	ID22:1;
			__LWORD	ID21:1;
			__LWORD	ID20:1;
			__LWORD	ID19:1;
			__LWORD	ID18:1;
			__LWORD	ID17:1;
			__LWORD	ID16:1;
			__LWORD	ID15:1;
			__LWORD	ID14:1;
			__LWORD	ID13:1;
			__LWORD	ID12:1;
			__LWORD	ID11:1;
			__LWORD	ID10:1;
			__LWORD	ID9:1;
			__LWORD	ID8:1;
			__LWORD	ID7:1;
			__LWORD	ID6:1;
			__LWORD	ID5:1;
			__LWORD	ID4:1;
			__LWORD	ID3:1;
			__LWORD	ID2:1;
			__LWORD	ID1:1;
			__LWORD	ID0:1;
#else
			__LWORD	ID0:1;
			__LWORD	ID1:1;
			__LWORD	ID2:1;
			__LWORD	ID3:1;
			__LWORD	ID4:1;
			__LWORD	ID5:1;
			__LWORD	ID6:1;
			__LWORD	ID7:1;
			__LWORD	ID8:1;
			__LWORD	ID9:1;
			__LWORD	ID10:1;
			__LWORD	ID11:1;
			__LWORD	ID12:1;
			__LWORD	ID13:1;
			__LWORD	ID14:1;
			__LWORD	ID15:1;
			__LWORD	ID16:1;
			__LWORD	ID17:1;
			__LWORD	ID18:1;
			__LWORD	ID19:1;
			__LWORD	ID20:1;
			__LWORD	ID21:1;
			__LWORD	ID22:1;
			__LWORD	ID23:1;
			__LWORD	ID24:1;
			__LWORD	ID25:1;
			__LWORD	ID26:1;
			__LWORD	ID27:1;
			__LWORD	ID28:1;
			__LWORD	DIR:1;
			__LWORD	XTD:1;
			__LWORD	MSGVAL:1;
#endif
		} bitc;
	} IF1ARB2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	NEWDAT:1;
			__WORD	MSGLST:1;
			__WORD	INTPND:1;
			__WORD	UMASK:1;
			__WORD	TXIE:1;
			__WORD	RXIE:1;
			__WORD	RMTEN:1;
			__WORD	TXRQST:1;
			__WORD	EOB:1;
			__WORD	RESV283:1;
			__WORD	RESV282:1;
			__WORD	RESV281:1;
			__WORD	DLC:4;
#else
			__WORD	DLC:4;
			__WORD	RESV281:1;
			__WORD	RESV282:1;
			__WORD	RESV283:1;
			__WORD	EOB:1;
			__WORD	TXRQST:1;
			__WORD	RMTEN:1;
			__WORD	RXIE:1;
			__WORD	TXIE:1;
			__WORD	UMASK:1;
			__WORD	INTPND:1;
			__WORD	MSGLST:1;
			__WORD	NEWDAT:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	NEWDAT:1;
			__WORD	MSGLST:1;
			__WORD	INTPND:1;
			__WORD	UMASK:1;
			__WORD	TXIE:1;
			__WORD	RXIE:1;
			__WORD	RMTEN:1;
			__WORD	TXRQST:1;
			__WORD	EOB:1;
			__WORD	RESV286:1;
			__WORD	RESV285:1;
			__WORD	RESV284:1;
			__WORD	DLC3:1;
			__WORD	DLC2:1;
			__WORD	DLC1:1;
			__WORD	DLC0:1;
#else
			__WORD	DLC0:1;
			__WORD	DLC1:1;
			__WORD	DLC2:1;
			__WORD	DLC3:1;
			__WORD	RESV284:1;
			__WORD	RESV285:1;
			__WORD	RESV286:1;
			__WORD	EOB:1;
			__WORD	TXRQST:1;
			__WORD	RMTEN:1;
			__WORD	RXIE:1;
			__WORD	TXIE:1;
			__WORD	UMASK:1;
			__WORD	INTPND:1;
			__WORD	MSGLST:1;
			__WORD	NEWDAT:1;
#endif
		} bitc;
	} IF1MCTR2;
	__WORD	IF1DTA12;
	__WORD	IF1DTA22;
	__WORD	IF1DTB12;
	__WORD	IF1DTB22;
	__BYTE	RESV2[CONSTANT_26];
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BUSY:1;
			__WORD	RESV647:1;
			__WORD	RESV646:1;
			__WORD	RESV645:1;
			__WORD	RESV644:1;
			__WORD	RESV643:1;
			__WORD	RESV642:1;
			__WORD	RESV641:1;
			__WORD	MSGN:8;
#else
			__WORD	MSGN:8;
			__WORD	RESV641:1;
			__WORD	RESV642:1;
			__WORD	RESV643:1;
			__WORD	RESV644:1;
			__WORD	RESV645:1;
			__WORD	RESV646:1;
			__WORD	RESV647:1;
			__WORD	BUSY:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	BUSY:1;
			__WORD	RESV6414:1;
			__WORD	RESV6413:1;
			__WORD	RESV6412:1;
			__WORD	RESV6411:1;
			__WORD	RESV6410:1;
			__WORD	RESV649:1;
			__WORD	RESV648:1;
			__WORD	MSGN7:1;
			__WORD	MSGN6:1;
			__WORD	MSGN5:1;
			__WORD	MSGN4:1;
			__WORD	MSGN3:1;
			__WORD	MSGN2:1;
			__WORD	MSGN1:1;
			__WORD	MSGN0:1;
#else
			__WORD	MSGN0:1;
			__WORD	MSGN1:1;
			__WORD	MSGN2:1;
			__WORD	MSGN3:1;
			__WORD	MSGN4:1;
			__WORD	MSGN5:1;
			__WORD	MSGN6:1;
			__WORD	MSGN7:1;
			__WORD	RESV648:1;
			__WORD	RESV649:1;
			__WORD	RESV6410:1;
			__WORD	RESV6411:1;
			__WORD	RESV6412:1;
			__WORD	RESV6413:1;
			__WORD	RESV6414:1;
			__WORD	BUSY:1;
#endif
		} bitc;
	} IF2CREQ2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6615:1;
			__WORD	RESV6614:1;
			__WORD	RESV6613:1;
			__WORD	RESV6612:1;
			__WORD	RESV6611:1;
			__WORD	RESV6610:1;
			__WORD	RESV669:1;
			__WORD	RESV668:1;
			__WORD	WRRD:1;
			__WORD	MASK:1;
			__WORD	ARB:1;
			__WORD	CONTROL:1;
			__WORD	CIP:1;
			__WORD	TXREQ:1;
			__WORD	DATAA:1;
			__WORD	DATAB:1;
#else
			__WORD	DATAB:1;
			__WORD	DATAA:1;
			__WORD	TXREQ:1;
			__WORD	CIP:1;
			__WORD	CONTROL:1;
			__WORD	ARB:1;
			__WORD	MASK:1;
			__WORD	WRRD:1;
			__WORD	RESV668:1;
			__WORD	RESV669:1;
			__WORD	RESV6610:1;
			__WORD	RESV6611:1;
			__WORD	RESV6612:1;
			__WORD	RESV6613:1;
			__WORD	RESV6614:1;
			__WORD	RESV6615:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6615:1;
			__WORD	RESV6614:1;
			__WORD	RESV6613:1;
			__WORD	RESV6612:1;
			__WORD	RESV6611:1;
			__WORD	RESV6610:1;
			__WORD	RESV669:1;
			__WORD	RESV668:1;
			__WORD	WRRD:1;
			__WORD	MASK:1;
			__WORD	ARB:1;
			__WORD	CONTROL:1;
			__WORD	CIP:1;
			__WORD	TXREQ:1;
			__WORD	DATAA:1;
			__WORD	DATAB:1;
#else
			__WORD	DATAB:1;
			__WORD	DATAA:1;
			__WORD	TXREQ:1;
			__WORD	CIP:1;
			__WORD	CONTROL:1;
			__WORD	ARB:1;
			__WORD	MASK:1;
			__WORD	WRRD:1;
			__WORD	RESV668:1;
			__WORD	RESV669:1;
			__WORD	RESV6610:1;
			__WORD	RESV6611:1;
			__WORD	RESV6612:1;
			__WORD	RESV6613:1;
			__WORD	RESV6614:1;
			__WORD	RESV6615:1;
#endif
		} bitc;
	} IF2CMSK2;
	union {
		__LWORD	lword;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MXTD:1;
			__LWORD	MDIR:1;
			__LWORD	RESV681:1;
			__LWORD	MSK:29;
#else
			__LWORD	MSK:29;
			__LWORD	RESV681:1;
			__LWORD	MDIR:1;
			__LWORD	MXTD:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MXTD:1;
			__LWORD	MDIR:1;
			__LWORD	RESV6829:1;
			__LWORD	MSK28:1;
			__LWORD	MSK27:1;
			__LWORD	MSK26:1;
			__LWORD	MSK25:1;
			__LWORD	MSK24:1;
			__LWORD	MSK23:1;
			__LWORD	MSK22:1;
			__LWORD	MSK21:1;
			__LWORD	MSK20:1;
			__LWORD	MSK19:1;
			__LWORD	MSK18:1;
			__LWORD	MSK17:1;
			__LWORD	MSK16:1;
			__LWORD	MSK15:1;
			__LWORD	MSK14:1;
			__LWORD	MSK13:1;
			__LWORD	MSK12:1;
			__LWORD	MSK11:1;
			__LWORD	MSK10:1;
			__LWORD	MSK9:1;
			__LWORD	MSK8:1;
			__LWORD	MSK7:1;
			__LWORD	MSK6:1;
			__LWORD	MSK5:1;
			__LWORD	MSK4:1;
			__LWORD	MSK3:1;
			__LWORD	MSK2:1;
			__LWORD	MSK1:1;
			__LWORD	MSK0:1;
#else
			__LWORD	MSK0:1;
			__LWORD	MSK1:1;
			__LWORD	MSK2:1;
			__LWORD	MSK3:1;
			__LWORD	MSK4:1;
			__LWORD	MSK5:1;
			__LWORD	MSK6:1;
			__LWORD	MSK7:1;
			__LWORD	MSK8:1;
			__LWORD	MSK9:1;
			__LWORD	MSK10:1;
			__LWORD	MSK11:1;
			__LWORD	MSK12:1;
			__LWORD	MSK13:1;
			__LWORD	MSK14:1;
			__LWORD	MSK15:1;
			__LWORD	MSK16:1;
			__LWORD	MSK17:1;
			__LWORD	MSK18:1;
			__LWORD	MSK19:1;
			__LWORD	MSK20:1;
			__LWORD	MSK21:1;
			__LWORD	MSK22:1;
			__LWORD	MSK23:1;
			__LWORD	MSK24:1;
			__LWORD	MSK25:1;
			__LWORD	MSK26:1;
			__LWORD	MSK27:1;
			__LWORD	MSK28:1;
			__LWORD	RESV6829:1;
			__LWORD	MDIR:1;
			__LWORD	MXTD:1;
#endif
		} bitc;
	} IF2MSK2;
	union {
		__LWORD	lword;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MSGVAL:1;
			__LWORD	XTD:1;
			__LWORD	DIR:1;
			__LWORD	ID:29;
#else
			__LWORD	ID:29;
			__LWORD	DIR:1;
			__LWORD	XTD:1;
			__LWORD	MSGVAL:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__LWORD	MSGVAL:1;
			__LWORD	XTD:1;
			__LWORD	DIR:1;
			__LWORD	ID28:1;
			__LWORD	ID27:1;
			__LWORD	ID26:1;
			__LWORD	ID25:1;
			__LWORD	ID24:1;
			__LWORD	ID23:1;
			__LWORD	ID22:1;
			__LWORD	ID21:1;
			__LWORD	ID20:1;
			__LWORD	ID19:1;
			__LWORD	ID18:1;
			__LWORD	ID17:1;
			__LWORD	ID16:1;
			__LWORD	ID15:1;
			__LWORD	ID14:1;
			__LWORD	ID13:1;
			__LWORD	ID12:1;
			__LWORD	ID11:1;
			__LWORD	ID10:1;
			__LWORD	ID9:1;
			__LWORD	ID8:1;
			__LWORD	ID7:1;
			__LWORD	ID6:1;
			__LWORD	ID5:1;
			__LWORD	ID4:1;
			__LWORD	ID3:1;
			__LWORD	ID2:1;
			__LWORD	ID1:1;
			__LWORD	ID0:1;
#else
			__LWORD	ID0:1;
			__LWORD	ID1:1;
			__LWORD	ID2:1;
			__LWORD	ID3:1;
			__LWORD	ID4:1;
			__LWORD	ID5:1;
			__LWORD	ID6:1;
			__LWORD	ID7:1;
			__LWORD	ID8:1;
			__LWORD	ID9:1;
			__LWORD	ID10:1;
			__LWORD	ID11:1;
			__LWORD	ID12:1;
			__LWORD	ID13:1;
			__LWORD	ID14:1;
			__LWORD	ID15:1;
			__LWORD	ID16:1;
			__LWORD	ID17:1;
			__LWORD	ID18:1;
			__LWORD	ID19:1;
			__LWORD	ID20:1;
			__LWORD	ID21:1;
			__LWORD	ID22:1;
			__LWORD	ID23:1;
			__LWORD	ID24:1;
			__LWORD	ID25:1;
			__LWORD	ID26:1;
			__LWORD	ID27:1;
			__LWORD	ID28:1;
			__LWORD	DIR:1;
			__LWORD	XTD:1;
			__LWORD	MSGVAL:1;
#endif
		} bitc;
	} IF2ARB2;
	union {
		__WORD	word;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	NEWDAT:1;
			__WORD	MSGLST:1;
			__WORD	INTPND:1;
			__WORD	UMASK:1;
			__WORD	TXIE:1;
			__WORD	RXIE:1;
			__WORD	RMTEN:1;
			__WORD	TXRQST:1;
			__WORD	EOB:1;
			__WORD	RESV763:1;
			__WORD	RESV762:1;
			__WORD	RESV761:1;
			__WORD	DLC:4;
#else
			__WORD	DLC:4;
			__WORD	RESV761:1;
			__WORD	RESV762:1;
			__WORD	RESV763:1;
			__WORD	EOB:1;
			__WORD	TXRQST:1;
			__WORD	RMTEN:1;
			__WORD	RXIE:1;
			__WORD	TXIE:1;
			__WORD	UMASK:1;
			__WORD	INTPND:1;
			__WORD	MSGLST:1;
			__WORD	NEWDAT:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	NEWDAT:1;
			__WORD	MSGLST:1;
			__WORD	INTPND:1;
			__WORD	UMASK:1;
			__WORD	TXIE:1;
			__WORD	RXIE:1;
			__WORD	RMTEN:1;
			__WORD	TXRQST:1;
			__WORD	EOB:1;
			__WORD	RESV766:1;
			__WORD	RESV765:1;
			__WORD	RESV764:1;
			__WORD	DLC3:1;
			__WORD	DLC2:1;
			__WORD	DLC1:1;
			__WORD	DLC0:1;
#else
			__WORD	DLC0:1;
			__WORD	DLC1:1;
			__WORD	DLC2:1;
			__WORD	DLC3:1;
			__WORD	RESV764:1;
			__WORD	RESV765:1;
			__WORD	RESV766:1;
			__WORD	EOB:1;
			__WORD	TXRQST:1;
			__WORD	RMTEN:1;
			__WORD	RXIE:1;
			__WORD	TXIE:1;
			__WORD	UMASK:1;
			__WORD	INTPND:1;
			__WORD	MSGLST:1;
			__WORD	NEWDAT:1;
#endif
		} bitc;
	} IF2MCTR2;
	__WORD	IF2DTA12;
	__WORD	IF2DTA22;
	__WORD	IF2DTB12;
	__WORD	IF2DTB22;
	__BYTE	RESV3[CONSTANT_42];
	const __LWORD	TREQR2;
	__BYTE	RESV4[CONSTANT_12];
	const __LWORD	NEWDT2;
	__BYTE	RESV5[CONSTANT_12];
	const __LWORD	INTPND2;
	__BYTE	RESV6[CONSTANT_12];
	const __LWORD	MSGVAL2;
	__BYTE	RESV7[CONSTANT_12];
	__BYTE	RESV8[CONSTANT_14];
	union {
		__BYTE	byte;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV2067:1;
			__BYTE	RESV2066:1;
			__BYTE	RESV2065:1;
			__BYTE	RESV2064:1;
			__BYTE	RESV2063:1;
			__BYTE	RESV2062:1;
			__BYTE	RESV2061:1;
			__BYTE	OE:1;
#else
			__BYTE	OE:1;
			__BYTE	RESV2061:1;
			__BYTE	RESV2062:1;
			__BYTE	RESV2063:1;
			__BYTE	RESV2064:1;
			__BYTE	RESV2065:1;
			__BYTE	RESV2066:1;
			__BYTE	RESV2067:1;
#endif
		} bit;
		struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV2067:1;
			__BYTE	RESV2066:1;
			__BYTE	RESV2065:1;
			__BYTE	RESV2064:1;
			__BYTE	RESV2063:1;
			__BYTE	RESV2062:1;
			__BYTE	RESV2061:1;
			__BYTE	OE:1;
#else
			__BYTE	OE:1;
			__BYTE	RESV2061:1;
			__BYTE	RESV2062:1;
			__BYTE	RESV2063:1;
			__BYTE	RESV2064:1;
			__BYTE	RESV2065:1;
			__BYTE	RESV2066:1;
			__BYTE	RESV2067:1;
#endif
		} bitc;
	} COER2;
} IO_CAN2;

#define	CAN2_CTRLR2			(IO_CAN2.CTRLR2.word)
#define	CAN2_CTRLR2_INIT    	(IO_CAN2.CTRLR2.bit.INIT)
#define	CAN2_CTRLR2_IE    	(IO_CAN2.CTRLR2.bit.IE)
#define	CAN2_CTRLR2_SIE    	(IO_CAN2.CTRLR2.bit.SIE)
#define	CAN2_CTRLR2_EIE    	(IO_CAN2.CTRLR2.bit.EIE)
#define	CAN2_CTRLR2_DAR    	(IO_CAN2.CTRLR2.bit.DAR)
#define	CAN2_CTRLR2_CCE    	(IO_CAN2.CTRLR2.bit.CCE)
#define	CAN2_CTRLR2_TEST    	(IO_CAN2.CTRLR2.bit.TEST)
#define	CAN2_STATR2			(IO_CAN2.STATR2.word)
#define	CAN2_STATR2_LEC    	(IO_CAN2.STATR2.bit.LEC)
#define	CAN2_STATR2_LEC0    	(IO_CAN2.STATR2.bitc.LEC0)
#define	CAN2_STATR2_LEC1    	(IO_CAN2.STATR2.bitc.LEC1)
#define	CAN2_STATR2_LEC2    	(IO_CAN2.STATR2.bitc.LEC2)
#define	CAN2_STATR2_TXOK    	(IO_CAN2.STATR2.bit.TXOK)
#define	CAN2_STATR2_RXOK    	(IO_CAN2.STATR2.bit.RXOK)
#define	CAN2_STATR2_EPASS    	(IO_CAN2.STATR2.bit.EPASS)
#define	CAN2_STATR2_EWARN    	(IO_CAN2.STATR2.bit.EWARN)
#define	CAN2_STATR2_BOFF    	(IO_CAN2.STATR2.bit.BOFF)
#define	CAN2_ERRCNT2			(IO_CAN2.ERRCNT2.word)
#define	CAN2_ERRCNT2_TEC    	(IO_CAN2.ERRCNT2.bit.TEC)
#define	CAN2_ERRCNT2_TEC0    	(IO_CAN2.ERRCNT2.bitc.TEC0)
#define	CAN2_ERRCNT2_TEC1    	(IO_CAN2.ERRCNT2.bitc.TEC1)
#define	CAN2_ERRCNT2_TEC2    	(IO_CAN2.ERRCNT2.bitc.TEC2)
#define	CAN2_ERRCNT2_TEC3    	(IO_CAN2.ERRCNT2.bitc.TEC3)
#define	CAN2_ERRCNT2_TEC4    	(IO_CAN2.ERRCNT2.bitc.TEC4)
#define	CAN2_ERRCNT2_TEC5    	(IO_CAN2.ERRCNT2.bitc.TEC5)
#define	CAN2_ERRCNT2_TEC6    	(IO_CAN2.ERRCNT2.bitc.TEC6)
#define	CAN2_ERRCNT2_TEC7    	(IO_CAN2.ERRCNT2.bitc.TEC7)
#define	CAN2_ERRCNT2_REC    	(IO_CAN2.ERRCNT2.bit.REC)
#define	CAN2_ERRCNT2_REC0    	(IO_CAN2.ERRCNT2.bitc.REC0)
#define	CAN2_ERRCNT2_REC1    	(IO_CAN2.ERRCNT2.bitc.REC1)
#define	CAN2_ERRCNT2_REC2    	(IO_CAN2.ERRCNT2.bitc.REC2)
#define	CAN2_ERRCNT2_REC3    	(IO_CAN2.ERRCNT2.bitc.REC3)
#define	CAN2_ERRCNT2_REC4    	(IO_CAN2.ERRCNT2.bitc.REC4)
#define	CAN2_ERRCNT2_REC5    	(IO_CAN2.ERRCNT2.bitc.REC5)
#define	CAN2_ERRCNT2_REC6    	(IO_CAN2.ERRCNT2.bitc.REC6)
#define	CAN2_ERRCNT2_RP    	(IO_CAN2.ERRCNT2.bit.RP)
#define	CAN2_BTR2			(IO_CAN2.BTR2.word)
#define	CAN2_BTR2_BRP    	(IO_CAN2.BTR2.bit.BRP)
#define	CAN2_BTR2_BRP0    	(IO_CAN2.BTR2.bitc.BRP0)
#define	CAN2_BTR2_BRP1    	(IO_CAN2.BTR2.bitc.BRP1)
#define	CAN2_BTR2_BRP2    	(IO_CAN2.BTR2.bitc.BRP2)
#define	CAN2_BTR2_BRP3    	(IO_CAN2.BTR2.bitc.BRP3)
#define	CAN2_BTR2_BRP4    	(IO_CAN2.BTR2.bitc.BRP4)
#define	CAN2_BTR2_BRP5    	(IO_CAN2.BTR2.bitc.BRP5)
#define	CAN2_BTR2_SJW    	(IO_CAN2.BTR2.bit.SJW)
#define	CAN2_BTR2_SJW0    	(IO_CAN2.BTR2.bitc.SJW0)
#define	CAN2_BTR2_SJW1    	(IO_CAN2.BTR2.bitc.SJW1)
#define	CAN2_BTR2_TSEG1    	(IO_CAN2.BTR2.bit.TSEG1)
#define	CAN2_BTR2_TSEG10    	(IO_CAN2.BTR2.bitc.TSEG10)
#define	CAN2_BTR2_TSEG11    	(IO_CAN2.BTR2.bitc.TSEG11)
#define	CAN2_BTR2_TSEG12    	(IO_CAN2.BTR2.bitc.TSEG12)
#define	CAN2_BTR2_TSEG13    	(IO_CAN2.BTR2.bitc.TSEG13)
#define	CAN2_BTR2_TSEG2    	(IO_CAN2.BTR2.bit.TSEG2)
#define	CAN2_BTR2_TSEG20    	(IO_CAN2.BTR2.bitc.TSEG20)
#define	CAN2_BTR2_TSEG21    	(IO_CAN2.BTR2.bitc.TSEG21)
#define	CAN2_BTR2_TSEG22    	(IO_CAN2.BTR2.bitc.TSEG22)
#define	CAN2_INTR2	(IO_CAN2.INTR2)
#define	CAN2_TESTR2			(IO_CAN2.TESTR2.word)
#define	CAN2_TESTR2_BASIC    	(IO_CAN2.TESTR2.bit.BASIC)
#define	CAN2_TESTR2_SILENT    	(IO_CAN2.TESTR2.bit.SILENT)
#define	CAN2_TESTR2_LBACK    	(IO_CAN2.TESTR2.bit.LBACK)
#define	CAN2_TESTR2_TX    	(IO_CAN2.TESTR2.bit.TX)
#define	CAN2_TESTR2_TX0    	(IO_CAN2.TESTR2.bitc.TX0)
#define	CAN2_TESTR2_TX1    	(IO_CAN2.TESTR2.bitc.TX1)
#define	CAN2_TESTR2_RX    	(IO_CAN2.TESTR2.bit.RX)
#define	CAN2_BRPER2			(IO_CAN2.BRPER2.word)
#define	CAN2_BRPER2_BRPE    	(IO_CAN2.BRPER2.bit.BRPE)
#define	CAN2_BRPER2_BRPE0    	(IO_CAN2.BRPER2.bitc.BRPE0)
#define	CAN2_BRPER2_BRPE1    	(IO_CAN2.BRPER2.bitc.BRPE1)
#define	CAN2_BRPER2_BRPE2    	(IO_CAN2.BRPER2.bitc.BRPE2)
#define	CAN2_BRPER2_BRPE3    	(IO_CAN2.BRPER2.bitc.BRPE3)
#define	CAN2_IF1CREQ2			(IO_CAN2.IF1CREQ2.word)
#define	CAN2_IF1CREQ2_MSGN    	(IO_CAN2.IF1CREQ2.bit.MSGN)
#define	CAN2_IF1CREQ2_MSGN0    	(IO_CAN2.IF1CREQ2.bitc.MSGN0)
#define	CAN2_IF1CREQ2_MSGN1    	(IO_CAN2.IF1CREQ2.bitc.MSGN1)
#define	CAN2_IF1CREQ2_MSGN2    	(IO_CAN2.IF1CREQ2.bitc.MSGN2)
#define	CAN2_IF1CREQ2_MSGN3    	(IO_CAN2.IF1CREQ2.bitc.MSGN3)
#define	CAN2_IF1CREQ2_MSGN4    	(IO_CAN2.IF1CREQ2.bitc.MSGN4)
#define	CAN2_IF1CREQ2_MSGN5    	(IO_CAN2.IF1CREQ2.bitc.MSGN5)
#define	CAN2_IF1CREQ2_MSGN6    	(IO_CAN2.IF1CREQ2.bitc.MSGN6)
#define	CAN2_IF1CREQ2_MSGN7    	(IO_CAN2.IF1CREQ2.bitc.MSGN7)
#define	CAN2_IF1CREQ2_BUSY    	(IO_CAN2.IF1CREQ2.bit.BUSY)
#define	CAN2_IF1CMSK2			(IO_CAN2.IF1CMSK2.word)
#define	CAN2_IF1CMSK2_DATAB    	(IO_CAN2.IF1CMSK2.bit.DATAB)
#define	CAN2_IF1CMSK2_DATAA    	(IO_CAN2.IF1CMSK2.bit.DATAA)
#define	CAN2_IF1CMSK2_TXREQ    	(IO_CAN2.IF1CMSK2.bit.TXREQ)
#define	CAN2_IF1CMSK2_CIP    	(IO_CAN2.IF1CMSK2.bit.CIP)
#define	CAN2_IF1CMSK2_CONTROL    	(IO_CAN2.IF1CMSK2.bit.CONTROL)
#define	CAN2_IF1CMSK2_ARB    	(IO_CAN2.IF1CMSK2.bit.ARB)
#define	CAN2_IF1CMSK2_MASK    	(IO_CAN2.IF1CMSK2.bit.MASK)
#define	CAN2_IF1CMSK2_WRRD    	(IO_CAN2.IF1CMSK2.bit.WRRD)
#define	CAN2_IF1MSK2			(IO_CAN2.IF1MSK2.lword)
#define	CAN2_IF1MSK2_MSK    	(IO_CAN2.IF1MSK2.bit.MSK)
#define	CAN2_IF1MSK2_MSK0    	(IO_CAN2.IF1MSK2.bitc.MSK0)
#define	CAN2_IF1MSK2_MSK1    	(IO_CAN2.IF1MSK2.bitc.MSK1)
#define	CAN2_IF1MSK2_MSK2    	(IO_CAN2.IF1MSK2.bitc.MSK2)
#define	CAN2_IF1MSK2_MSK3    	(IO_CAN2.IF1MSK2.bitc.MSK3)
#define	CAN2_IF1MSK2_MSK4    	(IO_CAN2.IF1MSK2.bitc.MSK4)
#define	CAN2_IF1MSK2_MSK5    	(IO_CAN2.IF1MSK2.bitc.MSK5)
#define	CAN2_IF1MSK2_MSK6    	(IO_CAN2.IF1MSK2.bitc.MSK6)
#define	CAN2_IF1MSK2_MSK7    	(IO_CAN2.IF1MSK2.bitc.MSK7)
#define	CAN2_IF1MSK2_MSK8    	(IO_CAN2.IF1MSK2.bitc.MSK8)
#define	CAN2_IF1MSK2_MSK9    	(IO_CAN2.IF1MSK2.bitc.MSK9)
#define	CAN2_IF1MSK2_MSK10    	(IO_CAN2.IF1MSK2.bitc.MSK10)
#define	CAN2_IF1MSK2_MSK11    	(IO_CAN2.IF1MSK2.bitc.MSK11)
#define	CAN2_IF1MSK2_MSK12    	(IO_CAN2.IF1MSK2.bitc.MSK12)
#define	CAN2_IF1MSK2_MSK13    	(IO_CAN2.IF1MSK2.bitc.MSK13)
#define	CAN2_IF1MSK2_MSK14    	(IO_CAN2.IF1MSK2.bitc.MSK14)
#define	CAN2_IF1MSK2_MSK15    	(IO_CAN2.IF1MSK2.bitc.MSK15)
#define	CAN2_IF1MSK2_MSK16    	(IO_CAN2.IF1MSK2.bitc.MSK16)
#define	CAN2_IF1MSK2_MSK17    	(IO_CAN2.IF1MSK2.bitc.MSK17)
#define	CAN2_IF1MSK2_MSK18    	(IO_CAN2.IF1MSK2.bitc.MSK18)
#define	CAN2_IF1MSK2_MSK19    	(IO_CAN2.IF1MSK2.bitc.MSK19)
#define	CAN2_IF1MSK2_MSK20    	(IO_CAN2.IF1MSK2.bitc.MSK20)
#define	CAN2_IF1MSK2_MSK21    	(IO_CAN2.IF1MSK2.bitc.MSK21)
#define	CAN2_IF1MSK2_MSK22    	(IO_CAN2.IF1MSK2.bitc.MSK22)
#define	CAN2_IF1MSK2_MSK23    	(IO_CAN2.IF1MSK2.bitc.MSK23)
#define	CAN2_IF1MSK2_MSK24    	(IO_CAN2.IF1MSK2.bitc.MSK24)
#define	CAN2_IF1MSK2_MSK25    	(IO_CAN2.IF1MSK2.bitc.MSK25)
#define	CAN2_IF1MSK2_MSK26    	(IO_CAN2.IF1MSK2.bitc.MSK26)
#define	CAN2_IF1MSK2_MSK27    	(IO_CAN2.IF1MSK2.bitc.MSK27)
#define	CAN2_IF1MSK2_MSK28    	(IO_CAN2.IF1MSK2.bitc.MSK28)
#define	CAN2_IF1MSK2_MDIR    	(IO_CAN2.IF1MSK2.bit.MDIR)
#define	CAN2_IF1MSK2_MXTD    	(IO_CAN2.IF1MSK2.bit.MXTD)
#define	CAN2_IF1ARB2			(IO_CAN2.IF1ARB2.lword)
#define	CAN2_IF1ARB2_ID    	(IO_CAN2.IF1ARB2.bit.ID)
#define	CAN2_IF1ARB2_ID0    	(IO_CAN2.IF1ARB2.bitc.ID0)
#define	CAN2_IF1ARB2_ID1    	(IO_CAN2.IF1ARB2.bitc.ID1)
#define	CAN2_IF1ARB2_ID2    	(IO_CAN2.IF1ARB2.bitc.ID2)
#define	CAN2_IF1ARB2_ID3    	(IO_CAN2.IF1ARB2.bitc.ID3)
#define	CAN2_IF1ARB2_ID4    	(IO_CAN2.IF1ARB2.bitc.ID4)
#define	CAN2_IF1ARB2_ID5    	(IO_CAN2.IF1ARB2.bitc.ID5)
#define	CAN2_IF1ARB2_ID6    	(IO_CAN2.IF1ARB2.bitc.ID6)
#define	CAN2_IF1ARB2_ID7    	(IO_CAN2.IF1ARB2.bitc.ID7)
#define	CAN2_IF1ARB2_ID8    	(IO_CAN2.IF1ARB2.bitc.ID8)
#define	CAN2_IF1ARB2_ID9    	(IO_CAN2.IF1ARB2.bitc.ID9)
#define	CAN2_IF1ARB2_ID10    	(IO_CAN2.IF1ARB2.bitc.ID10)
#define	CAN2_IF1ARB2_ID11    	(IO_CAN2.IF1ARB2.bitc.ID11)
#define	CAN2_IF1ARB2_ID12    	(IO_CAN2.IF1ARB2.bitc.ID12)
#define	CAN2_IF1ARB2_ID13    	(IO_CAN2.IF1ARB2.bitc.ID13)
#define	CAN2_IF1ARB2_ID14    	(IO_CAN2.IF1ARB2.bitc.ID14)
#define	CAN2_IF1ARB2_ID15    	(IO_CAN2.IF1ARB2.bitc.ID15)
#define	CAN2_IF1ARB2_ID16    	(IO_CAN2.IF1ARB2.bitc.ID16)
#define	CAN2_IF1ARB2_ID17    	(IO_CAN2.IF1ARB2.bitc.ID17)
#define	CAN2_IF1ARB2_ID18    	(IO_CAN2.IF1ARB2.bitc.ID18)
#define	CAN2_IF1ARB2_ID19    	(IO_CAN2.IF1ARB2.bitc.ID19)
#define	CAN2_IF1ARB2_ID20    	(IO_CAN2.IF1ARB2.bitc.ID20)
#define	CAN2_IF1ARB2_ID21    	(IO_CAN2.IF1ARB2.bitc.ID21)
#define	CAN2_IF1ARB2_ID22    	(IO_CAN2.IF1ARB2.bitc.ID22)
#define	CAN2_IF1ARB2_ID23    	(IO_CAN2.IF1ARB2.bitc.ID23)
#define	CAN2_IF1ARB2_ID24    	(IO_CAN2.IF1ARB2.bitc.ID24)
#define	CAN2_IF1ARB2_ID25    	(IO_CAN2.IF1ARB2.bitc.ID25)
#define	CAN2_IF1ARB2_ID26    	(IO_CAN2.IF1ARB2.bitc.ID26)
#define	CAN2_IF1ARB2_ID27    	(IO_CAN2.IF1ARB2.bitc.ID27)
#define	CAN2_IF1ARB2_ID28    	(IO_CAN2.IF1ARB2.bitc.ID28)
#define	CAN2_IF1ARB2_DIR    	(IO_CAN2.IF1ARB2.bit.DIR)
#define	CAN2_IF1ARB2_XTD    	(IO_CAN2.IF1ARB2.bit.XTD)
#define	CAN2_IF1ARB2_MSGVAL    	(IO_CAN2.IF1ARB2.bit.MSGVAL)
#define	CAN2_IF1MCTR2			(IO_CAN2.IF1MCTR2.word)
#define	CAN2_IF1MCTR2_DLC    	(IO_CAN2.IF1MCTR2.bit.DLC)
#define	CAN2_IF1MCTR2_DLC0    	(IO_CAN2.IF1MCTR2.bitc.DLC0)
#define	CAN2_IF1MCTR2_DLC1    	(IO_CAN2.IF1MCTR2.bitc.DLC1)
#define	CAN2_IF1MCTR2_DLC2    	(IO_CAN2.IF1MCTR2.bitc.DLC2)
#define	CAN2_IF1MCTR2_DLC3    	(IO_CAN2.IF1MCTR2.bitc.DLC3)
#define	CAN2_IF1MCTR2_EOB    	(IO_CAN2.IF1MCTR2.bit.EOB)
#define	CAN2_IF1MCTR2_TXRQST    	(IO_CAN2.IF1MCTR2.bit.TXRQST)
#define	CAN2_IF1MCTR2_RMTEN    	(IO_CAN2.IF1MCTR2.bit.RMTEN)
#define	CAN2_IF1MCTR2_RXIE    	(IO_CAN2.IF1MCTR2.bit.RXIE)
#define	CAN2_IF1MCTR2_TXIE    	(IO_CAN2.IF1MCTR2.bit.TXIE)
#define	CAN2_IF1MCTR2_UMASK    	(IO_CAN2.IF1MCTR2.bit.UMASK)
#define	CAN2_IF1MCTR2_INTPND    	(IO_CAN2.IF1MCTR2.bit.INTPND)
#define	CAN2_IF1MCTR2_MSGLST    	(IO_CAN2.IF1MCTR2.bit.MSGLST)
#define	CAN2_IF1MCTR2_NEWDAT    	(IO_CAN2.IF1MCTR2.bit.NEWDAT)
#define	CAN2_IF1DTA12	(IO_CAN2.IF1DTA12)
#define	CAN2_IF1DTA22	(IO_CAN2.IF1DTA22)
#define	CAN2_IF1DTB12	(IO_CAN2.IF1DTB12)
#define	CAN2_IF1DTB22	(IO_CAN2.IF1DTB22)
#define	CAN2_RESV2_0  	(IO_CAN2.RESV2[CONSTANT_0])
#define	CAN2_RESV2_1  	(IO_CAN2.RESV2[CONSTANT_1])
#define	CAN2_RESV2_2  	(IO_CAN2.RESV2[CONSTANT_2])
#define	CAN2_RESV2_3  	(IO_CAN2.RESV2[CONSTANT_3])
#define	CAN2_RESV2_4  	(IO_CAN2.RESV2[CONSTANT_4])
#define	CAN2_RESV2_5  	(IO_CAN2.RESV2[CONSTANT_5])
#define	CAN2_RESV2_6  	(IO_CAN2.RESV2[CONSTANT_6])
#define	CAN2_RESV2_7  	(IO_CAN2.RESV2[CONSTANT_7])
#define	CAN2_RESV2_8  	(IO_CAN2.RESV2[CONSTANT_8])
#define	CAN2_RESV2_9  	(IO_CAN2.RESV2[CONSTANT_9])
#define	CAN2_RESV2_10  	(IO_CAN2.RESV2[CONSTANT_10])
#define	CAN2_RESV2_11  	(IO_CAN2.RESV2[CONSTANT_11])
#define	CAN2_RESV2_12  	(IO_CAN2.RESV2[CONSTANT_12])
#define	CAN2_RESV2_13  	(IO_CAN2.RESV2[CONSTANT_13])
#define	CAN2_RESV2_14  	(IO_CAN2.RESV2[CONSTANT_14])
#define	CAN2_RESV2_15  	(IO_CAN2.RESV2[CONSTANT_15])
#define	CAN2_RESV2_16  	(IO_CAN2.RESV2[CONSTANT_16])
#define	CAN2_RESV2_17  	(IO_CAN2.RESV2[CONSTANT_17])
#define	CAN2_RESV2_18  	(IO_CAN2.RESV2[CONSTANT_18])
#define	CAN2_RESV2_19  	(IO_CAN2.RESV2[CONSTANT_19])
#define	CAN2_RESV2_20  	(IO_CAN2.RESV2[CONSTANT_20])
#define	CAN2_RESV2_21  	(IO_CAN2.RESV2[CONSTANT_21])
#define	CAN2_RESV2_22  	(IO_CAN2.RESV2[CONSTANT_22])
#define	CAN2_RESV2_23  	(IO_CAN2.RESV2[CONSTANT_23])
#define	CAN2_RESV2_24  	(IO_CAN2.RESV2[CONSTANT_24])
#define	CAN2_RESV2_25  	(IO_CAN2.RESV2[CONSTANT_25])
#define	CAN2_IF2CREQ2			(IO_CAN2.IF2CREQ2.word)
#define	CAN2_IF2CREQ2_MSGN    	(IO_CAN2.IF2CREQ2.bit.MSGN)
#define	CAN2_IF2CREQ2_MSGN0    	(IO_CAN2.IF2CREQ2.bitc.MSGN0)
#define	CAN2_IF2CREQ2_MSGN1    	(IO_CAN2.IF2CREQ2.bitc.MSGN1)
#define	CAN2_IF2CREQ2_MSGN2    	(IO_CAN2.IF2CREQ2.bitc.MSGN2)
#define	CAN2_IF2CREQ2_MSGN3    	(IO_CAN2.IF2CREQ2.bitc.MSGN3)
#define	CAN2_IF2CREQ2_MSGN4    	(IO_CAN2.IF2CREQ2.bitc.MSGN4)
#define	CAN2_IF2CREQ2_MSGN5    	(IO_CAN2.IF2CREQ2.bitc.MSGN5)
#define	CAN2_IF2CREQ2_MSGN6    	(IO_CAN2.IF2CREQ2.bitc.MSGN6)
#define	CAN2_IF2CREQ2_MSGN7    	(IO_CAN2.IF2CREQ2.bitc.MSGN7)
#define	CAN2_IF2CREQ2_BUSY    	(IO_CAN2.IF2CREQ2.bit.BUSY)
#define	CAN2_IF2CMSK2			(IO_CAN2.IF2CMSK2.word)
#define	CAN2_IF2CMSK2_DATAB    	(IO_CAN2.IF2CMSK2.bit.DATAB)
#define	CAN2_IF2CMSK2_DATAA    	(IO_CAN2.IF2CMSK2.bit.DATAA)
#define	CAN2_IF2CMSK2_TXREQ    	(IO_CAN2.IF2CMSK2.bit.TXREQ)
#define	CAN2_IF2CMSK2_CIP    	(IO_CAN2.IF2CMSK2.bit.CIP)
#define	CAN2_IF2CMSK2_CONTROL    	(IO_CAN2.IF2CMSK2.bit.CONTROL)
#define	CAN2_IF2CMSK2_ARB    	(IO_CAN2.IF2CMSK2.bit.ARB)
#define	CAN2_IF2CMSK2_MASK    	(IO_CAN2.IF2CMSK2.bit.MASK)
#define	CAN2_IF2CMSK2_WRRD    	(IO_CAN2.IF2CMSK2.bit.WRRD)
#define	CAN2_IF2MSK2			(IO_CAN2.IF2MSK2.lword)
#define	CAN2_IF2MSK2_MSK    	(IO_CAN2.IF2MSK2.bit.MSK)
#define	CAN2_IF2MSK2_MSK0    	(IO_CAN2.IF2MSK2.bitc.MSK0)
#define	CAN2_IF2MSK2_MSK1    	(IO_CAN2.IF2MSK2.bitc.MSK1)
#define	CAN2_IF2MSK2_MSK2    	(IO_CAN2.IF2MSK2.bitc.MSK2)
#define	CAN2_IF2MSK2_MSK3    	(IO_CAN2.IF2MSK2.bitc.MSK3)
#define	CAN2_IF2MSK2_MSK4    	(IO_CAN2.IF2MSK2.bitc.MSK4)
#define	CAN2_IF2MSK2_MSK5    	(IO_CAN2.IF2MSK2.bitc.MSK5)
#define	CAN2_IF2MSK2_MSK6    	(IO_CAN2.IF2MSK2.bitc.MSK6)
#define	CAN2_IF2MSK2_MSK7    	(IO_CAN2.IF2MSK2.bitc.MSK7)
#define	CAN2_IF2MSK2_MSK8    	(IO_CAN2.IF2MSK2.bitc.MSK8)
#define	CAN2_IF2MSK2_MSK9    	(IO_CAN2.IF2MSK2.bitc.MSK9)
#define	CAN2_IF2MSK2_MSK10    	(IO_CAN2.IF2MSK2.bitc.MSK10)
#define	CAN2_IF2MSK2_MSK11    	(IO_CAN2.IF2MSK2.bitc.MSK11)
#define	CAN2_IF2MSK2_MSK12    	(IO_CAN2.IF2MSK2.bitc.MSK12)
#define	CAN2_IF2MSK2_MSK13    	(IO_CAN2.IF2MSK2.bitc.MSK13)
#define	CAN2_IF2MSK2_MSK14    	(IO_CAN2.IF2MSK2.bitc.MSK14)
#define	CAN2_IF2MSK2_MSK15    	(IO_CAN2.IF2MSK2.bitc.MSK15)
#define	CAN2_IF2MSK2_MSK16    	(IO_CAN2.IF2MSK2.bitc.MSK16)
#define	CAN2_IF2MSK2_MSK17    	(IO_CAN2.IF2MSK2.bitc.MSK17)
#define	CAN2_IF2MSK2_MSK18    	(IO_CAN2.IF2MSK2.bitc.MSK18)
#define	CAN2_IF2MSK2_MSK19    	(IO_CAN2.IF2MSK2.bitc.MSK19)
#define	CAN2_IF2MSK2_MSK20    	(IO_CAN2.IF2MSK2.bitc.MSK20)
#define	CAN2_IF2MSK2_MSK21    	(IO_CAN2.IF2MSK2.bitc.MSK21)
#define	CAN2_IF2MSK2_MSK22    	(IO_CAN2.IF2MSK2.bitc.MSK22)
#define	CAN2_IF2MSK2_MSK23    	(IO_CAN2.IF2MSK2.bitc.MSK23)
#define	CAN2_IF2MSK2_MSK24    	(IO_CAN2.IF2MSK2.bitc.MSK24)
#define	CAN2_IF2MSK2_MSK25    	(IO_CAN2.IF2MSK2.bitc.MSK25)
#define	CAN2_IF2MSK2_MSK26    	(IO_CAN2.IF2MSK2.bitc.MSK26)
#define	CAN2_IF2MSK2_MSK27    	(IO_CAN2.IF2MSK2.bitc.MSK27)
#define	CAN2_IF2MSK2_MSK28    	(IO_CAN2.IF2MSK2.bitc.MSK28)
#define	CAN2_IF2MSK2_MDIR    	(IO_CAN2.IF2MSK2.bit.MDIR)
#define	CAN2_IF2MSK2_MXTD    	(IO_CAN2.IF2MSK2.bit.MXTD)
#define	CAN2_IF2ARB2			(IO_CAN2.IF2ARB2.lword)
#define	CAN2_IF2ARB2_ID    	(IO_CAN2.IF2ARB2.bit.ID)
#define	CAN2_IF2ARB2_ID0    	(IO_CAN2.IF2ARB2.bitc.ID0)
#define	CAN2_IF2ARB2_ID1    	(IO_CAN2.IF2ARB2.bitc.ID1)
#define	CAN2_IF2ARB2_ID2    	(IO_CAN2.IF2ARB2.bitc.ID2)
#define	CAN2_IF2ARB2_ID3    	(IO_CAN2.IF2ARB2.bitc.ID3)
#define	CAN2_IF2ARB2_ID4    	(IO_CAN2.IF2ARB2.bitc.ID4)
#define	CAN2_IF2ARB2_ID5    	(IO_CAN2.IF2ARB2.bitc.ID5)
#define	CAN2_IF2ARB2_ID6    	(IO_CAN2.IF2ARB2.bitc.ID6)
#define	CAN2_IF2ARB2_ID7    	(IO_CAN2.IF2ARB2.bitc.ID7)
#define	CAN2_IF2ARB2_ID8    	(IO_CAN2.IF2ARB2.bitc.ID8)
#define	CAN2_IF2ARB2_ID9    	(IO_CAN2.IF2ARB2.bitc.ID9)
#define	CAN2_IF2ARB2_ID10    	(IO_CAN2.IF2ARB2.bitc.ID10)
#define	CAN2_IF2ARB2_ID11    	(IO_CAN2.IF2ARB2.bitc.ID11)
#define	CAN2_IF2ARB2_ID12    	(IO_CAN2.IF2ARB2.bitc.ID12)
#define	CAN2_IF2ARB2_ID13    	(IO_CAN2.IF2ARB2.bitc.ID13)
#define	CAN2_IF2ARB2_ID14    	(IO_CAN2.IF2ARB2.bitc.ID14)
#define	CAN2_IF2ARB2_ID15    	(IO_CAN2.IF2ARB2.bitc.ID15)
#define	CAN2_IF2ARB2_ID16    	(IO_CAN2.IF2ARB2.bitc.ID16)
#define	CAN2_IF2ARB2_ID17    	(IO_CAN2.IF2ARB2.bitc.ID17)
#define	CAN2_IF2ARB2_ID18    	(IO_CAN2.IF2ARB2.bitc.ID18)
#define	CAN2_IF2ARB2_ID19    	(IO_CAN2.IF2ARB2.bitc.ID19)
#define	CAN2_IF2ARB2_ID20    	(IO_CAN2.IF2ARB2.bitc.ID20)
#define	CAN2_IF2ARB2_ID21    	(IO_CAN2.IF2ARB2.bitc.ID21)
#define	CAN2_IF2ARB2_ID22    	(IO_CAN2.IF2ARB2.bitc.ID22)
#define	CAN2_IF2ARB2_ID23    	(IO_CAN2.IF2ARB2.bitc.ID23)
#define	CAN2_IF2ARB2_ID24    	(IO_CAN2.IF2ARB2.bitc.ID24)
#define	CAN2_IF2ARB2_ID25    	(IO_CAN2.IF2ARB2.bitc.ID25)
#define	CAN2_IF2ARB2_ID26    	(IO_CAN2.IF2ARB2.bitc.ID26)
#define	CAN2_IF2ARB2_ID27    	(IO_CAN2.IF2ARB2.bitc.ID27)
#define	CAN2_IF2ARB2_ID28    	(IO_CAN2.IF2ARB2.bitc.ID28)
#define	CAN2_IF2ARB2_DIR    	(IO_CAN2.IF2ARB2.bit.DIR)
#define	CAN2_IF2ARB2_XTD    	(IO_CAN2.IF2ARB2.bit.XTD)
#define	CAN2_IF2ARB2_MSGVAL    	(IO_CAN2.IF2ARB2.bit.MSGVAL)
#define	CAN2_IF2MCTR2			(IO_CAN2.IF2MCTR2.word)
#define	CAN2_IF2MCTR2_DLC    	(IO_CAN2.IF2MCTR2.bit.DLC)
#define	CAN2_IF2MCTR2_DLC0    	(IO_CAN2.IF2MCTR2.bitc.DLC0)
#define	CAN2_IF2MCTR2_DLC1    	(IO_CAN2.IF2MCTR2.bitc.DLC1)
#define	CAN2_IF2MCTR2_DLC2    	(IO_CAN2.IF2MCTR2.bitc.DLC2)
#define	CAN2_IF2MCTR2_DLC3    	(IO_CAN2.IF2MCTR2.bitc.DLC3)
#define	CAN2_IF2MCTR2_EOB    	(IO_CAN2.IF2MCTR2.bit.EOB)
#define	CAN2_IF2MCTR2_TXRQST    	(IO_CAN2.IF2MCTR2.bit.TXRQST)
#define	CAN2_IF2MCTR2_RMTEN    	(IO_CAN2.IF2MCTR2.bit.RMTEN)
#define	CAN2_IF2MCTR2_RXIE    	(IO_CAN2.IF2MCTR2.bit.RXIE)
#define	CAN2_IF2MCTR2_TXIE    	(IO_CAN2.IF2MCTR2.bit.TXIE)
#define	CAN2_IF2MCTR2_UMASK    	(IO_CAN2.IF2MCTR2.bit.UMASK)
#define	CAN2_IF2MCTR2_INTPND    	(IO_CAN2.IF2MCTR2.bit.INTPND)
#define	CAN2_IF2MCTR2_MSGLST    	(IO_CAN2.IF2MCTR2.bit.MSGLST)
#define	CAN2_IF2MCTR2_NEWDAT    	(IO_CAN2.IF2MCTR2.bit.NEWDAT)
#define	CAN2_IF2DTA12	(IO_CAN2.IF2DTA12)
#define	CAN2_IF2DTA22	(IO_CAN2.IF2DTA22)
#define	CAN2_IF2DTB12	(IO_CAN2.IF2DTB12)
#define	CAN2_IF2DTB22	(IO_CAN2.IF2DTB22)
#define	CAN2_RESV3_0  	(IO_CAN2.RESV3[CONSTANT_0])
#define	CAN2_RESV3_1  	(IO_CAN2.RESV3[CONSTANT_1])
#define	CAN2_RESV3_2  	(IO_CAN2.RESV3[CONSTANT_2])
#define	CAN2_RESV3_3  	(IO_CAN2.RESV3[CONSTANT_3])
#define	CAN2_RESV3_4  	(IO_CAN2.RESV3[CONSTANT_4])
#define	CAN2_RESV3_5  	(IO_CAN2.RESV3[CONSTANT_5])
#define	CAN2_RESV3_6  	(IO_CAN2.RESV3[CONSTANT_6])
#define	CAN2_RESV3_7  	(IO_CAN2.RESV3[CONSTANT_7])
#define	CAN2_RESV3_8  	(IO_CAN2.RESV3[CONSTANT_8])
#define	CAN2_RESV3_9  	(IO_CAN2.RESV3[CONSTANT_9])
#define	CAN2_RESV3_10  	(IO_CAN2.RESV3[CONSTANT_10])
#define	CAN2_RESV3_11  	(IO_CAN2.RESV3[CONSTANT_11])
#define	CAN2_RESV3_12  	(IO_CAN2.RESV3[CONSTANT_12])
#define	CAN2_RESV3_13  	(IO_CAN2.RESV3[CONSTANT_13])
#define	CAN2_RESV3_14  	(IO_CAN2.RESV3[CONSTANT_14])
#define	CAN2_RESV3_15  	(IO_CAN2.RESV3[CONSTANT_15])
#define	CAN2_RESV3_16  	(IO_CAN2.RESV3[CONSTANT_16])
#define	CAN2_RESV3_17  	(IO_CAN2.RESV3[CONSTANT_17])
#define	CAN2_RESV3_18  	(IO_CAN2.RESV3[CONSTANT_18])
#define	CAN2_RESV3_19  	(IO_CAN2.RESV3[CONSTANT_19])
#define	CAN2_RESV3_20  	(IO_CAN2.RESV3[CONSTANT_20])
#define	CAN2_RESV3_21  	(IO_CAN2.RESV3[CONSTANT_21])
#define	CAN2_RESV3_22  	(IO_CAN2.RESV3[CONSTANT_22])
#define	CAN2_RESV3_23  	(IO_CAN2.RESV3[CONSTANT_23])
#define	CAN2_RESV3_24  	(IO_CAN2.RESV3[CONSTANT_24])
#define	CAN2_RESV3_25  	(IO_CAN2.RESV3[CONSTANT_25])
#define	CAN2_RESV3_26  	(IO_CAN2.RESV3[CONSTANT_26])
#define	CAN2_RESV3_27  	(IO_CAN2.RESV3[CONSTANT_27])
#define	CAN2_RESV3_28  	(IO_CAN2.RESV3[CONSTANT_28])
#define	CAN2_RESV3_29  	(IO_CAN2.RESV3[CONSTANT_29])
#define	CAN2_RESV3_30  	(IO_CAN2.RESV3[CONSTANT_30])
#define	CAN2_RESV3_31  	(IO_CAN2.RESV3[CONSTANT_31])
#define	CAN2_RESV3_32  	(IO_CAN2.RESV3[CONSTANT_32])
#define	CAN2_RESV3_33  	(IO_CAN2.RESV3[CONSTANT_33])
#define	CAN2_RESV3_34  	(IO_CAN2.RESV3[CONSTANT_34])
#define	CAN2_RESV3_35  	(IO_CAN2.RESV3[CONSTANT_35])
#define	CAN2_RESV3_36  	(IO_CAN2.RESV3[CONSTANT_36])
#define	CAN2_RESV3_37  	(IO_CAN2.RESV3[CONSTANT_37])
#define	CAN2_RESV3_38  	(IO_CAN2.RESV3[CONSTANT_38])
#define	CAN2_RESV3_39  	(IO_CAN2.RESV3[CONSTANT_39])
#define	CAN2_RESV3_40  	(IO_CAN2.RESV3[CONSTANT_40])
#define	CAN2_RESV3_41  	(IO_CAN2.RESV3[CONSTANT_41])
#define	CAN2_TREQR2	(IO_CAN2.TREQR2)
#define	CAN2_RESV4_0  	(IO_CAN2.RESV4[CONSTANT_0])
#define	CAN2_RESV4_1  	(IO_CAN2.RESV4[CONSTANT_1])
#define	CAN2_RESV4_2  	(IO_CAN2.RESV4[CONSTANT_2])
#define	CAN2_RESV4_3  	(IO_CAN2.RESV4[CONSTANT_3])
#define	CAN2_RESV4_4  	(IO_CAN2.RESV4[CONSTANT_4])
#define	CAN2_RESV4_5  	(IO_CAN2.RESV4[CONSTANT_5])
#define	CAN2_RESV4_6  	(IO_CAN2.RESV4[CONSTANT_6])
#define	CAN2_RESV4_7  	(IO_CAN2.RESV4[CONSTANT_7])
#define	CAN2_RESV4_8  	(IO_CAN2.RESV4[CONSTANT_8])
#define	CAN2_RESV4_9  	(IO_CAN2.RESV4[CONSTANT_9])
#define	CAN2_RESV4_10  	(IO_CAN2.RESV4[CONSTANT_10])
#define	CAN2_RESV4_11  	(IO_CAN2.RESV4[CONSTANT_11])
#define	CAN2_NEWDT2	(IO_CAN2.NEWDT2)
#define	CAN2_RESV5_0  	(IO_CAN2.RESV5[CONSTANT_0])
#define	CAN2_RESV5_1  	(IO_CAN2.RESV5[CONSTANT_1])
#define	CAN2_RESV5_2  	(IO_CAN2.RESV5[CONSTANT_2])
#define	CAN2_RESV5_3  	(IO_CAN2.RESV5[CONSTANT_3])
#define	CAN2_RESV5_4  	(IO_CAN2.RESV5[CONSTANT_4])
#define	CAN2_RESV5_5  	(IO_CAN2.RESV5[CONSTANT_5])
#define	CAN2_RESV5_6  	(IO_CAN2.RESV5[CONSTANT_6])
#define	CAN2_RESV5_7  	(IO_CAN2.RESV5[CONSTANT_7])
#define	CAN2_RESV5_8  	(IO_CAN2.RESV5[CONSTANT_8])
#define	CAN2_RESV5_9  	(IO_CAN2.RESV5[CONSTANT_9])
#define	CAN2_RESV5_10  	(IO_CAN2.RESV5[CONSTANT_10])
#define	CAN2_RESV5_11  	(IO_CAN2.RESV5[CONSTANT_11])
#define	CAN2_INTPND2	(IO_CAN2.INTPND2)
#define	CAN2_RESV6_0  	(IO_CAN2.RESV6[CONSTANT_0])
#define	CAN2_RESV6_1  	(IO_CAN2.RESV6[CONSTANT_1])
#define	CAN2_RESV6_2  	(IO_CAN2.RESV6[CONSTANT_2])
#define	CAN2_RESV6_3  	(IO_CAN2.RESV6[CONSTANT_3])
#define	CAN2_RESV6_4  	(IO_CAN2.RESV6[CONSTANT_4])
#define	CAN2_RESV6_5  	(IO_CAN2.RESV6[CONSTANT_5])
#define	CAN2_RESV6_6  	(IO_CAN2.RESV6[CONSTANT_6])
#define	CAN2_RESV6_7  	(IO_CAN2.RESV6[CONSTANT_7])
#define	CAN2_RESV6_8  	(IO_CAN2.RESV6[CONSTANT_8])
#define	CAN2_RESV6_9  	(IO_CAN2.RESV6[CONSTANT_9])
#define	CAN2_RESV6_10  	(IO_CAN2.RESV6[CONSTANT_10])
#define	CAN2_RESV6_11  	(IO_CAN2.RESV6[CONSTANT_11])
#define	CAN2_MSGVAL2	(IO_CAN2.MSGVAL2)
#define	CAN2_RESV7_0  	(IO_CAN2.RESV7[CONSTANT_0])
#define	CAN2_RESV7_1  	(IO_CAN2.RESV7[CONSTANT_1])
#define	CAN2_RESV7_2  	(IO_CAN2.RESV7[CONSTANT_2])
#define	CAN2_RESV7_3  	(IO_CAN2.RESV7[CONSTANT_3])
#define	CAN2_RESV7_4  	(IO_CAN2.RESV7[CONSTANT_4])
#define	CAN2_RESV7_5  	(IO_CAN2.RESV7[CONSTANT_5])
#define	CAN2_RESV7_6  	(IO_CAN2.RESV7[CONSTANT_6])
#define	CAN2_RESV7_7  	(IO_CAN2.RESV7[CONSTANT_7])
#define	CAN2_RESV7_8  	(IO_CAN2.RESV7[CONSTANT_8])
#define	CAN2_RESV7_9  	(IO_CAN2.RESV7[CONSTANT_9])
#define	CAN2_RESV7_10  	(IO_CAN2.RESV7[CONSTANT_10])
#define	CAN2_RESV7_11  	(IO_CAN2.RESV7[CONSTANT_11])
#define	CAN2_RESV8_0  	(IO_CAN2.RESV8[CONSTANT_0])
#define	CAN2_RESV8_1  	(IO_CAN2.RESV8[CONSTANT_1])
#define	CAN2_RESV8_2  	(IO_CAN2.RESV8[CONSTANT_2])
#define	CAN2_RESV8_3  	(IO_CAN2.RESV8[CONSTANT_3])
#define	CAN2_RESV8_4  	(IO_CAN2.RESV8[CONSTANT_4])
#define	CAN2_RESV8_5  	(IO_CAN2.RESV8[CONSTANT_5])
#define	CAN2_RESV8_6  	(IO_CAN2.RESV8[CONSTANT_6])
#define	CAN2_RESV8_7  	(IO_CAN2.RESV8[CONSTANT_7])
#define	CAN2_RESV8_8  	(IO_CAN2.RESV8[CONSTANT_8])
#define	CAN2_RESV8_9  	(IO_CAN2.RESV8[CONSTANT_9])
#define	CAN2_RESV8_10  	(IO_CAN2.RESV8[CONSTANT_10])
#define	CAN2_RESV8_11  	(IO_CAN2.RESV8[CONSTANT_11])
#define	CAN2_RESV8_12  	(IO_CAN2.RESV8[CONSTANT_12])
#define	CAN2_RESV8_13  	(IO_CAN2.RESV8[CONSTANT_13])
#define	CAN2_COER2			(IO_CAN2.COER2.byte)
#define	CAN2_COER2_OE    	(IO_CAN2.COER2.bit.OE)

#endif

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IOABK0,   locate=0xA00
#pragma segment FAR_DATA=IO_IOABK0, locate=0xA00
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BK7:1;
			__BYTE	BK6:1;
			__BYTE	BK5:1;
			__BYTE	BK4:1;
			__BYTE	BK3:1;
			__BYTE	BK2:1;
			__BYTE	BK1:1;
			__BYTE	BK0:1;
#else
			__BYTE	BK0:1;
			__BYTE	BK1:1;
			__BYTE	BK2:1;
			__BYTE	BK3:1;
			__BYTE	BK4:1;
			__BYTE	BK5:1;
			__BYTE	BK6:1;
			__BYTE	BK7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BK7:1;
			__BYTE	BK6:1;
			__BYTE	BK5:1;
			__BYTE	BK4:1;
			__BYTE	BK3:1;
			__BYTE	BK2:1;
			__BYTE	BK1:1;
			__BYTE	BK0:1;
#else
			__BYTE	BK0:1;
			__BYTE	BK1:1;
			__BYTE	BK2:1;
			__BYTE	BK3:1;
			__BYTE	BK4:1;
			__BYTE	BK5:1;
			__BYTE	BK6:1;
			__BYTE	BK7:1;
#endif
	} bitc;
} IOABK0STR;

__IO_EXTENDED	  IOABK0STR	IO_IOABK0;
#define	_ioabk0		(IO_IOABK0)
#define	IOABK0		(IO_IOABK0.byte)
#define	IOABK0_BK0  	(IO_IOABK0.bit.BK0)
#define	IOABK0_BK1  	(IO_IOABK0.bit.BK1)
#define	IOABK0_BK2  	(IO_IOABK0.bit.BK2)
#define	IOABK0_BK3  	(IO_IOABK0.bit.BK3)
#define	IOABK0_BK4  	(IO_IOABK0.bit.BK4)
#define	IOABK0_BK5  	(IO_IOABK0.bit.BK5)
#define	IOABK0_BK6  	(IO_IOABK0.bit.BK6)
#define	IOABK0_BK7  	(IO_IOABK0.bit.BK7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IOABK1,   locate=0xA01
#pragma segment FAR_DATA=IO_IOABK1, locate=0xA01
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BK7:1;
			__BYTE	BK6:1;
			__BYTE	BK5:1;
			__BYTE	BK4:1;
			__BYTE	BK3:1;
			__BYTE	BK2:1;
			__BYTE	BK1:1;
			__BYTE	BK0:1;
#else
			__BYTE	BK0:1;
			__BYTE	BK1:1;
			__BYTE	BK2:1;
			__BYTE	BK3:1;
			__BYTE	BK4:1;
			__BYTE	BK5:1;
			__BYTE	BK6:1;
			__BYTE	BK7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	BK7:1;
			__BYTE	BK6:1;
			__BYTE	BK5:1;
			__BYTE	BK4:1;
			__BYTE	BK3:1;
			__BYTE	BK2:1;
			__BYTE	BK1:1;
			__BYTE	BK0:1;
#else
			__BYTE	BK0:1;
			__BYTE	BK1:1;
			__BYTE	BK2:1;
			__BYTE	BK3:1;
			__BYTE	BK4:1;
			__BYTE	BK5:1;
			__BYTE	BK6:1;
			__BYTE	BK7:1;
#endif
	} bitc;
} IOABK1STR;

__IO_EXTENDED	  IOABK1STR	IO_IOABK1;
#define	_ioabk1		(IO_IOABK1)
#define	IOABK1		(IO_IOABK1.byte)
#define	IOABK1_BK0  	(IO_IOABK1.bit.BK0)
#define	IOABK1_BK1  	(IO_IOABK1.bit.BK1)
#define	IOABK1_BK2  	(IO_IOABK1.bit.BK2)
#define	IOABK1_BK3  	(IO_IOABK1.bit.BK3)
#define	IOABK1_BK4  	(IO_IOABK1.bit.BK4)
#define	IOABK1_BK5  	(IO_IOABK1.bit.BK5)
#define	IOABK1_BK6  	(IO_IOABK1.bit.BK6)
#define	IOABK1_BK7  	(IO_IOABK1.bit.BK7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN10,   locate=0xA80
#pragma segment FAR_DATA=IO_EPCN10, locate=0xA80
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN10STR;

__IO_EXTENDED	  EPCN10STR	IO_EPCN10;
#define	_epcn10		(IO_EPCN10)
#define	EPCN10		(IO_EPCN10.word)
#define	EPCN10_STRD  	(IO_EPCN10.bit.STRD)
#define	EPCN10_TPCL  	(IO_EPCN10.bit.TPCL)
#define	EPCN10_TPCH  	(IO_EPCN10.bit.TPCH)
#define	EPCN10_RAMPL  	(IO_EPCN10.bit.RAMPL)
#define	EPCN10_RAMPH  	(IO_EPCN10.bit.RAMPH)
#define	EPCN10_RIDL  	(IO_EPCN10.bit.RIDL)
#define	EPCN10_RIDH  	(IO_EPCN10.bit.RIDH)
#define	EPCN10_OSEL2  	(IO_EPCN10.bit.OSEL2)
#define	EPCN10_FRML  	(IO_EPCN10.bit.FRML)
#define	EPCN10_FRMH  	(IO_EPCN10.bit.FRMH)
#define	EPCN10_OE2  	(IO_EPCN10.bit.OE2)
#define	EPCN10_IRS2  	(IO_EPCN10.bit.IRS2)
#define	EPCN10_TRIG  	(IO_EPCN10.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN11,   locate=0xA82
#pragma segment FAR_DATA=IO_EPCN11, locate=0xA82
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN11STR;

__IO_EXTENDED	  EPCN11STR	IO_EPCN11;
#define	_epcn11		(IO_EPCN11)
#define	EPCN11		(IO_EPCN11.word)
#define	EPCN11_STRD  	(IO_EPCN11.bit.STRD)
#define	EPCN11_TPCL  	(IO_EPCN11.bit.TPCL)
#define	EPCN11_TPCH  	(IO_EPCN11.bit.TPCH)
#define	EPCN11_RAMPL  	(IO_EPCN11.bit.RAMPL)
#define	EPCN11_RAMPH  	(IO_EPCN11.bit.RAMPH)
#define	EPCN11_RIDL  	(IO_EPCN11.bit.RIDL)
#define	EPCN11_RIDH  	(IO_EPCN11.bit.RIDH)
#define	EPCN11_OSEL2  	(IO_EPCN11.bit.OSEL2)
#define	EPCN11_FRML  	(IO_EPCN11.bit.FRML)
#define	EPCN11_FRMH  	(IO_EPCN11.bit.FRMH)
#define	EPCN11_OE2  	(IO_EPCN11.bit.OE2)
#define	EPCN11_IRS2  	(IO_EPCN11.bit.IRS2)
#define	EPCN11_TRIG  	(IO_EPCN11.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN13,   locate=0xA86
#pragma segment FAR_DATA=IO_EPCN13, locate=0xA86
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN13STR;

__IO_EXTENDED	  EPCN13STR	IO_EPCN13;
#define	_epcn13		(IO_EPCN13)
#define	EPCN13		(IO_EPCN13.word)
#define	EPCN13_STRD  	(IO_EPCN13.bit.STRD)
#define	EPCN13_TPCL  	(IO_EPCN13.bit.TPCL)
#define	EPCN13_TPCH  	(IO_EPCN13.bit.TPCH)
#define	EPCN13_RAMPL  	(IO_EPCN13.bit.RAMPL)
#define	EPCN13_RAMPH  	(IO_EPCN13.bit.RAMPH)
#define	EPCN13_RIDL  	(IO_EPCN13.bit.RIDL)
#define	EPCN13_RIDH  	(IO_EPCN13.bit.RIDH)
#define	EPCN13_OSEL2  	(IO_EPCN13.bit.OSEL2)
#define	EPCN13_FRML  	(IO_EPCN13.bit.FRML)
#define	EPCN13_FRMH  	(IO_EPCN13.bit.FRMH)
#define	EPCN13_OE2  	(IO_EPCN13.bit.OE2)
#define	EPCN13_IRS2  	(IO_EPCN13.bit.IRS2)
#define	EPCN13_TRIG  	(IO_EPCN13.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN14,   locate=0xA88
#pragma segment FAR_DATA=IO_EPCN14, locate=0xA88
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN14STR;

__IO_EXTENDED	  EPCN14STR	IO_EPCN14;
#define	_epcn14		(IO_EPCN14)
#define	EPCN14		(IO_EPCN14.word)
#define	EPCN14_STRD  	(IO_EPCN14.bit.STRD)
#define	EPCN14_TPCL  	(IO_EPCN14.bit.TPCL)
#define	EPCN14_TPCH  	(IO_EPCN14.bit.TPCH)
#define	EPCN14_RAMPL  	(IO_EPCN14.bit.RAMPL)
#define	EPCN14_RAMPH  	(IO_EPCN14.bit.RAMPH)
#define	EPCN14_RIDL  	(IO_EPCN14.bit.RIDL)
#define	EPCN14_RIDH  	(IO_EPCN14.bit.RIDH)
#define	EPCN14_OSEL2  	(IO_EPCN14.bit.OSEL2)
#define	EPCN14_FRML  	(IO_EPCN14.bit.FRML)
#define	EPCN14_FRMH  	(IO_EPCN14.bit.FRMH)
#define	EPCN14_OE2  	(IO_EPCN14.bit.OE2)
#define	EPCN14_IRS2  	(IO_EPCN14.bit.IRS2)
#define	EPCN14_TRIG  	(IO_EPCN14.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN16,   locate=0xA8C
#pragma segment FAR_DATA=IO_EPCN16, locate=0xA8C
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN16STR;

__IO_EXTENDED	  EPCN16STR	IO_EPCN16;
#define	_epcn16		(IO_EPCN16)
#define	EPCN16		(IO_EPCN16.word)
#define	EPCN16_STRD  	(IO_EPCN16.bit.STRD)
#define	EPCN16_TPCL  	(IO_EPCN16.bit.TPCL)
#define	EPCN16_TPCH  	(IO_EPCN16.bit.TPCH)
#define	EPCN16_RAMPL  	(IO_EPCN16.bit.RAMPL)
#define	EPCN16_RAMPH  	(IO_EPCN16.bit.RAMPH)
#define	EPCN16_RIDL  	(IO_EPCN16.bit.RIDL)
#define	EPCN16_RIDH  	(IO_EPCN16.bit.RIDH)
#define	EPCN16_OSEL2  	(IO_EPCN16.bit.OSEL2)
#define	EPCN16_FRML  	(IO_EPCN16.bit.FRML)
#define	EPCN16_FRMH  	(IO_EPCN16.bit.FRMH)
#define	EPCN16_OE2  	(IO_EPCN16.bit.OE2)
#define	EPCN16_IRS2  	(IO_EPCN16.bit.IRS2)
#define	EPCN16_TRIG  	(IO_EPCN16.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN17,   locate=0xA8E
#pragma segment FAR_DATA=IO_EPCN17, locate=0xA8E
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN17STR;

__IO_EXTENDED	  EPCN17STR	IO_EPCN17;
#define	_epcn17		(IO_EPCN17)
#define	EPCN17		(IO_EPCN17.word)
#define	EPCN17_STRD  	(IO_EPCN17.bit.STRD)
#define	EPCN17_TPCL  	(IO_EPCN17.bit.TPCL)
#define	EPCN17_TPCH  	(IO_EPCN17.bit.TPCH)
#define	EPCN17_RAMPL  	(IO_EPCN17.bit.RAMPL)
#define	EPCN17_RAMPH  	(IO_EPCN17.bit.RAMPH)
#define	EPCN17_RIDL  	(IO_EPCN17.bit.RIDL)
#define	EPCN17_RIDH  	(IO_EPCN17.bit.RIDH)
#define	EPCN17_OSEL2  	(IO_EPCN17.bit.OSEL2)
#define	EPCN17_FRML  	(IO_EPCN17.bit.FRML)
#define	EPCN17_FRMH  	(IO_EPCN17.bit.FRMH)
#define	EPCN17_OE2  	(IO_EPCN17.bit.OE2)
#define	EPCN17_IRS2  	(IO_EPCN17.bit.IRS2)
#define	EPCN17_TRIG  	(IO_EPCN17.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN112,   locate=0xA98
#pragma segment FAR_DATA=IO_EPCN112, locate=0xA98
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN112STR;

__IO_EXTENDED	  EPCN112STR	IO_EPCN112;
#define	_epcn112		(IO_EPCN112)
#define	EPCN112		(IO_EPCN112.word)
#define	EPCN112_STRD  	(IO_EPCN112.bit.STRD)
#define	EPCN112_TPCL  	(IO_EPCN112.bit.TPCL)
#define	EPCN112_TPCH  	(IO_EPCN112.bit.TPCH)
#define	EPCN112_RAMPL  	(IO_EPCN112.bit.RAMPL)
#define	EPCN112_RAMPH  	(IO_EPCN112.bit.RAMPH)
#define	EPCN112_RIDL  	(IO_EPCN112.bit.RIDL)
#define	EPCN112_RIDH  	(IO_EPCN112.bit.RIDH)
#define	EPCN112_OSEL2  	(IO_EPCN112.bit.OSEL2)
#define	EPCN112_FRML  	(IO_EPCN112.bit.FRML)
#define	EPCN112_FRMH  	(IO_EPCN112.bit.FRMH)
#define	EPCN112_OE2  	(IO_EPCN112.bit.OE2)
#define	EPCN112_IRS2  	(IO_EPCN112.bit.IRS2)
#define	EPCN112_TRIG  	(IO_EPCN112.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_EPCN114,   locate=0xA9C
#pragma segment FAR_DATA=IO_EPCN114, locate=0xA9C
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	TRIG:1;
			__WORD	IRS2:1;
			__WORD	OE2:1;
			__WORD	FRMH:1;
			__WORD	FRML:1;
			__WORD	OSEL2:1;
			__WORD	RIDH:1;
			__WORD	RIDL:1;
			__WORD	RAMPH:1;
			__WORD	RAMPL:1;
			__WORD	TPCH:1;
			__WORD	TPCL:1;
			__WORD	STRD:1;
#else
			__WORD	STRD:1;
			__WORD	TPCL:1;
			__WORD	TPCH:1;
			__WORD	RAMPL:1;
			__WORD	RAMPH:1;
			__WORD	RIDL:1;
			__WORD	RIDH:1;
			__WORD	OSEL2:1;
			__WORD	FRML:1;
			__WORD	FRMH:1;
			__WORD	OE2:1;
			__WORD	IRS2:1;
			__WORD	TRIG:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EPCN114STR;

__IO_EXTENDED	  EPCN114STR	IO_EPCN114;
#define	_epcn114		(IO_EPCN114)
#define	EPCN114		(IO_EPCN114.word)
#define	EPCN114_STRD  	(IO_EPCN114.bit.STRD)
#define	EPCN114_TPCL  	(IO_EPCN114.bit.TPCL)
#define	EPCN114_TPCH  	(IO_EPCN114.bit.TPCH)
#define	EPCN114_RAMPL  	(IO_EPCN114.bit.RAMPL)
#define	EPCN114_RAMPH  	(IO_EPCN114.bit.RAMPH)
#define	EPCN114_RIDL  	(IO_EPCN114.bit.RIDL)
#define	EPCN114_RIDH  	(IO_EPCN114.bit.RIDH)
#define	EPCN114_OSEL2  	(IO_EPCN114.bit.OSEL2)
#define	EPCN114_FRML  	(IO_EPCN114.bit.FRML)
#define	EPCN114_FRMH  	(IO_EPCN114.bit.FRMH)
#define	EPCN114_OE2  	(IO_EPCN114.bit.OE2)
#define	EPCN114_IRS2  	(IO_EPCN114.bit.IRS2)
#define	EPCN114_TRIG  	(IO_EPCN114.bit.TRIG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QPCR0,   locate=0xAF0
#pragma segment FAR_DATA=IO_QPCR0, locate=0xAF0
#endif

__IO_EXTENDED	__WORD	IO_QPCR0;
#define	_qpcr0		(IO_QPCR0)
#define	QPCR0	(_qpcr0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QRCR0,   locate=0xAF2
#pragma segment FAR_DATA=IO_QRCR0, locate=0xAF2
#endif

__IO_EXTENDED	__WORD	IO_QRCR0;
#define	_qrcr0		(IO_QRCR0)
#define	QRCR0	(_qrcr0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QICR0,   locate=0xAF4
#pragma segment FAR_DATA=IO_QICR0, locate=0xAF4
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	QPCNRCMF:1;
			__WORD	QPCNRCMIE:1;
			__WORD	DIROU:1;
			__WORD	DIRPC:1;
			__WORD	CDCF:1;
			__WORD	CDCIE:1;
			__WORD	ZIIF:1;
			__WORD	OFDF:1;
			__WORD	UFDF:1;
			__WORD	OUZIE:1;
			__WORD	QPRCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPCMIE:1;
#else
			__WORD	QPCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPRCMF:1;
			__WORD	OUZIE:1;
			__WORD	UFDF:1;
			__WORD	OFDF:1;
			__WORD	ZIIF:1;
			__WORD	CDCIE:1;
			__WORD	CDCF:1;
			__WORD	DIRPC:1;
			__WORD	DIROU:1;
			__WORD	QPCNRCMIE:1;
			__WORD	QPCNRCMF:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	QPCNRCMF:1;
			__WORD	QPCNRCMIE:1;
			__WORD	DIROU:1;
			__WORD	DIRPC:1;
			__WORD	CDCF:1;
			__WORD	CDCIE:1;
			__WORD	ZIIF:1;
			__WORD	OFDF:1;
			__WORD	UFDF:1;
			__WORD	OUZIE:1;
			__WORD	QPRCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPCMIE:1;
#else
			__WORD	QPCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPRCMF:1;
			__WORD	OUZIE:1;
			__WORD	UFDF:1;
			__WORD	OFDF:1;
			__WORD	ZIIF:1;
			__WORD	CDCIE:1;
			__WORD	CDCF:1;
			__WORD	DIRPC:1;
			__WORD	DIROU:1;
			__WORD	QPCNRCMIE:1;
			__WORD	QPCNRCMF:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} QICR0STR;

__IO_EXTENDED	  QICR0STR	IO_QICR0;
#define	_qicr0		(IO_QICR0)
#define	QICR0		(IO_QICR0.word)
#define	QICR0_QPCMIE  	(IO_QICR0.bit.QPCMIE)
#define	QICR0_QPCMF  	(IO_QICR0.bit.QPCMF)
#define	QICR0_QPRCMIE  	(IO_QICR0.bit.QPRCMIE)
#define	QICR0_QPRCMF  	(IO_QICR0.bit.QPRCMF)
#define	QICR0_OUZIE  	(IO_QICR0.bit.OUZIE)
#define	QICR0_UFDF  	(IO_QICR0.bit.UFDF)
#define	QICR0_OFDF  	(IO_QICR0.bit.OFDF)
#define	QICR0_ZIIF  	(IO_QICR0.bit.ZIIF)
#define	QICR0_CDCIE  	(IO_QICR0.bit.CDCIE)
#define	QICR0_CDCF  	(IO_QICR0.bit.CDCF)
#define	QICR0_DIRPC  	(IO_QICR0.bit.DIRPC)
#define	QICR0_DIROU  	(IO_QICR0.bit.DIROU)
#define	QICR0_QPCNRCMIE  	(IO_QICR0.bit.QPCNRCMIE)
#define	QICR0_QPCNRCMF  	(IO_QICR0.bit.QPCNRCMF)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QECR0,   locate=0xAF6
#pragma segment FAR_DATA=IO_QECR0, locate=0xAF6
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	ORNGIE:1;
			__WORD	ORNGF:1;
			__WORD	ORNGMD:1;
#else
			__WORD	ORNGMD:1;
			__WORD	ORNGF:1;
			__WORD	ORNGIE:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	ORNGIE:1;
			__WORD	ORNGF:1;
			__WORD	ORNGMD:1;
#else
			__WORD	ORNGMD:1;
			__WORD	ORNGF:1;
			__WORD	ORNGIE:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} QECR0STR;

__IO_EXTENDED	  QECR0STR	IO_QECR0;
#define	_qecr0		(IO_QECR0)
#define	QECR0		(IO_QECR0.word)
#define	QECR0_ORNGMD  	(IO_QECR0.bit.ORNGMD)
#define	QECR0_ORNGF  	(IO_QECR0.bit.ORNGF)
#define	QECR0_ORNGIE  	(IO_QECR0.bit.ORNGIE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QPCR1,   locate=0xAF8
#pragma segment FAR_DATA=IO_QPCR1, locate=0xAF8
#endif

__IO_EXTENDED	__WORD	IO_QPCR1;
#define	_qpcr1		(IO_QPCR1)
#define	QPCR1	(_qpcr1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QRCR1,   locate=0xAFA
#pragma segment FAR_DATA=IO_QRCR1, locate=0xAFA
#endif

__IO_EXTENDED	__WORD	IO_QRCR1;
#define	_qrcr1		(IO_QRCR1)
#define	QRCR1	(_qrcr1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QICR1,   locate=0xAFC
#pragma segment FAR_DATA=IO_QICR1, locate=0xAFC
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	QPCNRCMF:1;
			__WORD	QPCNRCMIE:1;
			__WORD	DIROU:1;
			__WORD	DIRPC:1;
			__WORD	CDCF:1;
			__WORD	CDCIE:1;
			__WORD	ZIIF:1;
			__WORD	OFDF:1;
			__WORD	UFDF:1;
			__WORD	OUZIE:1;
			__WORD	QPRCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPCMIE:1;
#else
			__WORD	QPCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPRCMF:1;
			__WORD	OUZIE:1;
			__WORD	UFDF:1;
			__WORD	OFDF:1;
			__WORD	ZIIF:1;
			__WORD	CDCIE:1;
			__WORD	CDCF:1;
			__WORD	DIRPC:1;
			__WORD	DIROU:1;
			__WORD	QPCNRCMIE:1;
			__WORD	QPCNRCMF:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	QPCNRCMF:1;
			__WORD	QPCNRCMIE:1;
			__WORD	DIROU:1;
			__WORD	DIRPC:1;
			__WORD	CDCF:1;
			__WORD	CDCIE:1;
			__WORD	ZIIF:1;
			__WORD	OFDF:1;
			__WORD	UFDF:1;
			__WORD	OUZIE:1;
			__WORD	QPRCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPCMIE:1;
#else
			__WORD	QPCMIE:1;
			__WORD	QPCMF:1;
			__WORD	QPRCMIE:1;
			__WORD	QPRCMF:1;
			__WORD	OUZIE:1;
			__WORD	UFDF:1;
			__WORD	OFDF:1;
			__WORD	ZIIF:1;
			__WORD	CDCIE:1;
			__WORD	CDCF:1;
			__WORD	DIRPC:1;
			__WORD	DIROU:1;
			__WORD	QPCNRCMIE:1;
			__WORD	QPCNRCMF:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} QICR1STR;

__IO_EXTENDED	  QICR1STR	IO_QICR1;
#define	_qicr1		(IO_QICR1)
#define	QICR1		(IO_QICR1.word)
#define	QICR1_QPCMIE  	(IO_QICR1.bit.QPCMIE)
#define	QICR1_QPCMF  	(IO_QICR1.bit.QPCMF)
#define	QICR1_QPRCMIE  	(IO_QICR1.bit.QPRCMIE)
#define	QICR1_QPRCMF  	(IO_QICR1.bit.QPRCMF)
#define	QICR1_OUZIE  	(IO_QICR1.bit.OUZIE)
#define	QICR1_UFDF  	(IO_QICR1.bit.UFDF)
#define	QICR1_OFDF  	(IO_QICR1.bit.OFDF)
#define	QICR1_ZIIF  	(IO_QICR1.bit.ZIIF)
#define	QICR1_CDCIE  	(IO_QICR1.bit.CDCIE)
#define	QICR1_CDCF  	(IO_QICR1.bit.CDCF)
#define	QICR1_DIRPC  	(IO_QICR1.bit.DIRPC)
#define	QICR1_DIROU  	(IO_QICR1.bit.DIROU)
#define	QICR1_QPCNRCMIE  	(IO_QICR1.bit.QPCNRCMIE)
#define	QICR1_QPCNRCMF  	(IO_QICR1.bit.QPCNRCMF)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_QECR1,   locate=0xAFE
#pragma segment FAR_DATA=IO_QECR1, locate=0xAFE
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	ORNGIE:1;
			__WORD	ORNGF:1;
			__WORD	ORNGMD:1;
#else
			__WORD	ORNGMD:1;
			__WORD	ORNGF:1;
			__WORD	ORNGIE:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	ORNGIE:1;
			__WORD	ORNGF:1;
			__WORD	ORNGMD:1;
#else
			__WORD	ORNGMD:1;
			__WORD	ORNGF:1;
			__WORD	ORNGIE:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} QECR1STR;

__IO_EXTENDED	  QECR1STR	IO_QECR1;
#define	_qecr1		(IO_QECR1)
#define	QECR1		(IO_QECR1.word)
#define	QECR1_ORNGMD  	(IO_QECR1.bit.ORNGMD)
#define	QECR1_ORNGF  	(IO_QECR1.bit.ORNGF)
#define	QECR1_ORNGIE  	(IO_QECR1.bit.ORNGIE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOOF00,   locate=0xB54
#pragma segment FAR_DATA=IO_ADRCOOF00, locate=0xB54
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOOF7:1;
			__BYTE	RCOOF6:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF4:1;
			__BYTE	RCOOF3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOOF1:1;
			__BYTE	RCOOF0:1;
#else
			__BYTE	RCOOF0:1;
			__BYTE	RCOOF1:1;
			__BYTE	RESV2:1;
			__BYTE	RCOOF3:1;
			__BYTE	RCOOF4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF6:1;
			__BYTE	RCOOF7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOOF7:1;
			__BYTE	RCOOF6:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF4:1;
			__BYTE	RCOOF3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOOF1:1;
			__BYTE	RCOOF0:1;
#else
			__BYTE	RCOOF0:1;
			__BYTE	RCOOF1:1;
			__BYTE	RESV2:1;
			__BYTE	RCOOF3:1;
			__BYTE	RCOOF4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF6:1;
			__BYTE	RCOOF7:1;
#endif
	} bitc;
} ADRCOOF00STR;

__IO_EXTENDED	 const  ADRCOOF00STR	IO_ADRCOOF00;
#define	_adrcoof00		(IO_ADRCOOF00)
#define	ADRCOOF00		(IO_ADRCOOF00.byte)
#define	ADRCOOF00_RCOOF0  	(IO_ADRCOOF00.bit.RCOOF0)
#define	ADRCOOF00_RCOOF1  	(IO_ADRCOOF00.bit.RCOOF1)
#define	ADRCOOF00_RCOOF3  	(IO_ADRCOOF00.bit.RCOOF3)
#define	ADRCOOF00_RCOOF4  	(IO_ADRCOOF00.bit.RCOOF4)
#define	ADRCOOF00_RCOOF6  	(IO_ADRCOOF00.bit.RCOOF6)
#define	ADRCOOF00_RCOOF7  	(IO_ADRCOOF00.bit.RCOOF7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOOF10,   locate=0xB55
#pragma segment FAR_DATA=IO_ADRCOOF10, locate=0xB55
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCOOF14:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF12:1;
			__BYTE	RESV3:1;
			__BYTE	RCOOF10:1;
			__BYTE	RCOOF9:1;
			__BYTE	RCOOF8:1;
#else
			__BYTE	RCOOF8:1;
			__BYTE	RCOOF9:1;
			__BYTE	RCOOF10:1;
			__BYTE	RESV3:1;
			__BYTE	RCOOF12:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF14:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCOOF14:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF12:1;
			__BYTE	RESV3:1;
			__BYTE	RCOOF10:1;
			__BYTE	RCOOF9:1;
			__BYTE	RCOOF8:1;
#else
			__BYTE	RCOOF8:1;
			__BYTE	RCOOF9:1;
			__BYTE	RCOOF10:1;
			__BYTE	RESV3:1;
			__BYTE	RCOOF12:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF14:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADRCOOF10STR;

__IO_EXTENDED	 const  ADRCOOF10STR	IO_ADRCOOF10;
#define	_adrcoof10		(IO_ADRCOOF10)
#define	ADRCOOF10		(IO_ADRCOOF10.byte)
#define	ADRCOOF10_RCOOF8  	(IO_ADRCOOF10.bit.RCOOF8)
#define	ADRCOOF10_RCOOF9  	(IO_ADRCOOF10.bit.RCOOF9)
#define	ADRCOOF10_RCOOF10  	(IO_ADRCOOF10.bit.RCOOF10)
#define	ADRCOOF10_RCOOF12  	(IO_ADRCOOF10.bit.RCOOF12)
#define	ADRCOOF10_RCOOF14  	(IO_ADRCOOF10.bit.RCOOF14)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOOF20,   locate=0xB56
#pragma segment FAR_DATA=IO_ADRCOOF20, locate=0xB56
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RCOOF16:1;
#else
			__BYTE	RCOOF16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RCOOF16:1;
#else
			__BYTE	RCOOF16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADRCOOF20STR;

__IO_EXTENDED	 const  ADRCOOF20STR	IO_ADRCOOF20;
#define	_adrcoof20		(IO_ADRCOOF20)
#define	ADRCOOF20		(IO_ADRCOOF20.byte)
#define	ADRCOOF20_RCOOF16  	(IO_ADRCOOF20.bit.RCOOF16)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOOF30,   locate=0xB57
#pragma segment FAR_DATA=IO_ADRCOOF30, locate=0xB57
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOOF31:1;
			__BYTE	RCOOF30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOOF25:1;
			__BYTE	RCOOF24:1;
#else
			__BYTE	RCOOF24:1;
			__BYTE	RCOOF25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF30:1;
			__BYTE	RCOOF31:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOOF31:1;
			__BYTE	RCOOF30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOOF25:1;
			__BYTE	RCOOF24:1;
#else
			__BYTE	RCOOF24:1;
			__BYTE	RCOOF25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOOF30:1;
			__BYTE	RCOOF31:1;
#endif
	} bitc;
} ADRCOOF30STR;

__IO_EXTENDED	 const  ADRCOOF30STR	IO_ADRCOOF30;
#define	_adrcoof30		(IO_ADRCOOF30)
#define	ADRCOOF30		(IO_ADRCOOF30.byte)
#define	ADRCOOF30_RCOOF24  	(IO_ADRCOOF30.bit.RCOOF24)
#define	ADRCOOF30_RCOOF25  	(IO_ADRCOOF30.bit.RCOOF25)
#define	ADRCOOF30_RCOOF30  	(IO_ADRCOOF30.bit.RCOOF30)
#define	ADRCOOF30_RCOOF31  	(IO_ADRCOOF30.bit.RCOOF31)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOINTF00,   locate=0xB5C
#pragma segment FAR_DATA=IO_ADRCOINTF00, locate=0xB5C
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOINT7:1;
			__BYTE	RCOINT6:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT4:1;
			__BYTE	RCOINT3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOINT1:1;
			__BYTE	RCOINT0:1;
#else
			__BYTE	RCOINT0:1;
			__BYTE	RCOINT1:1;
			__BYTE	RESV2:1;
			__BYTE	RCOINT3:1;
			__BYTE	RCOINT4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT6:1;
			__BYTE	RCOINT7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOINT7:1;
			__BYTE	RCOINT6:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT4:1;
			__BYTE	RCOINT3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOINT1:1;
			__BYTE	RCOINT0:1;
#else
			__BYTE	RCOINT0:1;
			__BYTE	RCOINT1:1;
			__BYTE	RESV2:1;
			__BYTE	RCOINT3:1;
			__BYTE	RCOINT4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT6:1;
			__BYTE	RCOINT7:1;
#endif
	} bitc;
} ADRCOINTF00STR;

__IO_EXTENDED	  ADRCOINTF00STR	IO_ADRCOINTF00;
#define	_adrcointf00		(IO_ADRCOINTF00)
#define	ADRCOINTF00		(IO_ADRCOINTF00.byte)
#define	ADRCOINTF00_RCOINT0  	(IO_ADRCOINTF00.bit.RCOINT0)
#define	ADRCOINTF00_RCOINT1  	(IO_ADRCOINTF00.bit.RCOINT1)
#define	ADRCOINTF00_RCOINT3  	(IO_ADRCOINTF00.bit.RCOINT3)
#define	ADRCOINTF00_RCOINT4  	(IO_ADRCOINTF00.bit.RCOINT4)
#define	ADRCOINTF00_RCOINT6  	(IO_ADRCOINTF00.bit.RCOINT6)
#define	ADRCOINTF00_RCOINT7  	(IO_ADRCOINTF00.bit.RCOINT7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOINTF10,   locate=0xB5D
#pragma segment FAR_DATA=IO_ADRCOINTF10, locate=0xB5D
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCOINT14:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT12:1;
			__BYTE	RESV3:1;
			__BYTE	RCOINT10:1;
			__BYTE	RCOINT9:1;
			__BYTE	RCOINT8:1;
#else
			__BYTE	RCOINT8:1;
			__BYTE	RCOINT9:1;
			__BYTE	RCOINT10:1;
			__BYTE	RESV3:1;
			__BYTE	RCOINT12:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT14:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCOINT14:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT12:1;
			__BYTE	RESV3:1;
			__BYTE	RCOINT10:1;
			__BYTE	RCOINT9:1;
			__BYTE	RCOINT8:1;
#else
			__BYTE	RCOINT8:1;
			__BYTE	RCOINT9:1;
			__BYTE	RCOINT10:1;
			__BYTE	RESV3:1;
			__BYTE	RCOINT12:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT14:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADRCOINTF10STR;

__IO_EXTENDED	  ADRCOINTF10STR	IO_ADRCOINTF10;
#define	_adrcointf10		(IO_ADRCOINTF10)
#define	ADRCOINTF10		(IO_ADRCOINTF10.byte)
#define	ADRCOINTF10_RCOINT8  	(IO_ADRCOINTF10.bit.RCOINT8)
#define	ADRCOINTF10_RCOINT9  	(IO_ADRCOINTF10.bit.RCOINT9)
#define	ADRCOINTF10_RCOINT10  	(IO_ADRCOINTF10.bit.RCOINT10)
#define	ADRCOINTF10_RCOINT12  	(IO_ADRCOINTF10.bit.RCOINT12)
#define	ADRCOINTF10_RCOINT14  	(IO_ADRCOINTF10.bit.RCOINT14)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOINTF20,   locate=0xB5E
#pragma segment FAR_DATA=IO_ADRCOINTF20, locate=0xB5E
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RCOINT16:1;
#else
			__BYTE	RCOINT16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RCOINT16:1;
#else
			__BYTE	RCOINT16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADRCOINTF20STR;

__IO_EXTENDED	  ADRCOINTF20STR	IO_ADRCOINTF20;
#define	_adrcointf20		(IO_ADRCOINTF20)
#define	ADRCOINTF20		(IO_ADRCOINTF20.byte)
#define	ADRCOINTF20_RCOINT16  	(IO_ADRCOINTF20.bit.RCOINT16)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ADRCOINTF30,   locate=0xB5F
#pragma segment FAR_DATA=IO_ADRCOINTF30, locate=0xB5F
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOINT31:1;
			__BYTE	RCOINT30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOINT25:1;
			__BYTE	RCOINT24:1;
#else
			__BYTE	RCOINT24:1;
			__BYTE	RCOINT25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT30:1;
			__BYTE	RCOINT31:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOINT31:1;
			__BYTE	RCOINT30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOINT25:1;
			__BYTE	RCOINT24:1;
#else
			__BYTE	RCOINT24:1;
			__BYTE	RCOINT25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOINT30:1;
			__BYTE	RCOINT31:1;
#endif
	} bitc;
} ADRCOINTF30STR;

__IO_EXTENDED	  ADRCOINTF30STR	IO_ADRCOINTF30;
#define	_adrcointf30		(IO_ADRCOINTF30)
#define	ADRCOINTF30		(IO_ADRCOINTF30.byte)
#define	ADRCOINTF30_RCOINT24  	(IO_ADRCOINTF30.bit.RCOINT24)
#define	ADRCOINTF30_RCOINT25  	(IO_ADRCOINTF30.bit.RCOINT25)
#define	ADRCOINTF30_RCOINT30  	(IO_ADRCOINTF30.bit.RCOINT30)
#define	ADRCOINTF30_RCOINT31  	(IO_ADRCOINTF30.bit.RCOINT31)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CSCR2,   locate=0xBAE
#pragma segment FAR_DATA=IO_CSCR2, locate=0xBAE
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CRCERRIE:1;
			__BYTE	CRCERR:1;
			__BYTE	CRCTYPE:1;
			__BYTE	CRCCHECK:1;
			__BYTE	CRCGEN:1;
			__BYTE	DL:3;
#else
			__BYTE	DL:3;
			__BYTE	CRCGEN:1;
			__BYTE	CRCCHECK:1;
			__BYTE	CRCTYPE:1;
			__BYTE	CRCERR:1;
			__BYTE	CRCERRIE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CRCERRIE:1;
			__BYTE	CRCERR:1;
			__BYTE	CRCTYPE:1;
			__BYTE	CRCCHECK:1;
			__BYTE	CRCGEN:1;
			__BYTE	DL2:1;
			__BYTE	DL1:1;
			__BYTE	DL0:1;
#else
			__BYTE	DL0:1;
			__BYTE	DL1:1;
			__BYTE	DL2:1;
			__BYTE	CRCGEN:1;
			__BYTE	CRCCHECK:1;
			__BYTE	CRCTYPE:1;
			__BYTE	CRCERR:1;
			__BYTE	CRCERRIE:1;
#endif
	} bitc;
} CSCR2STR;

__IO_EXTENDED	  CSCR2STR	IO_CSCR2;
#define	_cscr2		(IO_CSCR2)
#define	CSCR2		(IO_CSCR2.byte)
#define	CSCR2_DL  	(IO_CSCR2.bit.DL)
#define	CSCR2_DL0  	(IO_CSCR2.bitc.DL0)
#define	CSCR2_DL1  	(IO_CSCR2.bitc.DL1)
#define	CSCR2_DL2  	(IO_CSCR2.bitc.DL2)
#define	CSCR2_CRCGEN  	(IO_CSCR2.bit.CRCGEN)
#define	CSCR2_CRCCHECK  	(IO_CSCR2.bit.CRCCHECK)
#define	CSCR2_CRCTYPE  	(IO_CSCR2.bit.CRCTYPE)
#define	CSCR2_CRCERR  	(IO_CSCR2.bit.CRCERR)
#define	CSCR2_CRCERRIE  	(IO_CSCR2.bit.CRCERRIE)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ESR2,   locate=0xBAF
#pragma segment FAR_DATA=IO_ESR2, locate=0xBAF
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TXHRI:1;
			__BYTE	RXHRI:1;
			__BYTE	LBSOF:1;
			__BYTE	BUSERR:1;
			__BYTE	PEFRD:1;
			__BYTE	SYNFE:1;
#else
			__BYTE	SYNFE:1;
			__BYTE	PEFRD:1;
			__BYTE	BUSERR:1;
			__BYTE	LBSOF:1;
			__BYTE	RXHRI:1;
			__BYTE	TXHRI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TXHRI:1;
			__BYTE	RXHRI:1;
			__BYTE	LBSOF:1;
			__BYTE	BUSERR:1;
			__BYTE	PEFRD:1;
			__BYTE	SYNFE:1;
#else
			__BYTE	SYNFE:1;
			__BYTE	PEFRD:1;
			__BYTE	BUSERR:1;
			__BYTE	LBSOF:1;
			__BYTE	RXHRI:1;
			__BYTE	TXHRI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ESR2STR;

__IO_EXTENDED	  ESR2STR	IO_ESR2;
#define	_esr2		(IO_ESR2)
#define	ESR2		(IO_ESR2.byte)
#define	ESR2_SYNFE  	(IO_ESR2.bit.SYNFE)
#define	ESR2_PEFRD  	(IO_ESR2.bit.PEFRD)
#define	ESR2_BUSERR  	(IO_ESR2.bit.BUSERR)
#define	ESR2_LBSOF  	(IO_ESR2.bit.LBSOF)
#define	ESR2_RXHRI  	(IO_ESR2.bit.RXHRI)
#define	ESR2_TXHRI  	(IO_ESR2.bit.TXHRI)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ESR7,   locate=0xBB9
#pragma segment FAR_DATA=IO_ESR7, locate=0xBB9
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TXHRI:1;
			__BYTE	RXHRI:1;
			__BYTE	LBSOF:1;
			__BYTE	BUSERR:1;
			__BYTE	PEFRD:1;
			__BYTE	SYNFE:1;
#else
			__BYTE	SYNFE:1;
			__BYTE	PEFRD:1;
			__BYTE	BUSERR:1;
			__BYTE	LBSOF:1;
			__BYTE	RXHRI:1;
			__BYTE	TXHRI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TXHRI:1;
			__BYTE	RXHRI:1;
			__BYTE	LBSOF:1;
			__BYTE	BUSERR:1;
			__BYTE	PEFRD:1;
			__BYTE	SYNFE:1;
#else
			__BYTE	SYNFE:1;
			__BYTE	PEFRD:1;
			__BYTE	BUSERR:1;
			__BYTE	LBSOF:1;
			__BYTE	RXHRI:1;
			__BYTE	TXHRI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ESR7STR;

__IO_EXTENDED	  ESR7STR	IO_ESR7;
#define	_esr7		(IO_ESR7)
#define	ESR7		(IO_ESR7.byte)
#define	ESR7_SYNFE  	(IO_ESR7.bit.SYNFE)
#define	ESR7_PEFRD  	(IO_ESR7.bit.PEFRD)
#define	ESR7_BUSERR  	(IO_ESR7.bit.BUSERR)
#define	ESR7_LBSOF  	(IO_ESR7.bit.LBSOF)
#define	ESR7_RXHRI  	(IO_ESR7.bit.RXHRI)
#define	ESR7_TXHRI  	(IO_ESR7.bit.TXHRI)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ESR8,   locate=0xBBB
#pragma segment FAR_DATA=IO_ESR8, locate=0xBBB
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TXHRI:1;
			__BYTE	RXHRI:1;
			__BYTE	LBSOF:1;
			__BYTE	BUSERR:1;
			__BYTE	PEFRD:1;
			__BYTE	SYNFE:1;
#else
			__BYTE	SYNFE:1;
			__BYTE	PEFRD:1;
			__BYTE	BUSERR:1;
			__BYTE	LBSOF:1;
			__BYTE	RXHRI:1;
			__BYTE	TXHRI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	TXHRI:1;
			__BYTE	RXHRI:1;
			__BYTE	LBSOF:1;
			__BYTE	BUSERR:1;
			__BYTE	PEFRD:1;
			__BYTE	SYNFE:1;
#else
			__BYTE	SYNFE:1;
			__BYTE	PEFRD:1;
			__BYTE	BUSERR:1;
			__BYTE	LBSOF:1;
			__BYTE	RXHRI:1;
			__BYTE	TXHRI:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ESR8STR;

__IO_EXTENDED	  ESR8STR	IO_ESR8;
#define	_esr8		(IO_ESR8)
#define	ESR8		(IO_ESR8.byte)
#define	ESR8_SYNFE  	(IO_ESR8.bit.SYNFE)
#define	ESR8_PEFRD  	(IO_ESR8.bit.PEFRD)
#define	ESR8_BUSERR  	(IO_ESR8.bit.BUSERR)
#define	ESR8_LBSOF  	(IO_ESR8.bit.LBSOF)
#define	ESR8_RXHRI  	(IO_ESR8.bit.RXHRI)
#define	ESR8_TXHRI  	(IO_ESR8.bit.TXHRI)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DSUCR,   locate=0xBF0
#pragma segment FAR_DATA=IO_DSUCR, locate=0xBF0
#endif

__IO_EXTENDED	union {
	__WORD	word;
	struct {
		__BYTE	IO_DSUCRL;
		__BYTE	IO_DSUCRH;
	} byte;
} IO_DSUCR;

#define	DSUCR		(IO_DSUCR.word)
#define	DSUCRL	(IO_DSUCR.byte.IO_DSUCRL)
#define	DSUCRH	(IO_DSUCR.byte.IO_DSUCRH)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_UER,   locate=0xBF4
#pragma segment FAR_DATA=IO_UER, locate=0xBF4
#endif

__IO_EXTENDED	union {
	__WORD	word;
	struct {
		__BYTE	IO_UERL;
		__BYTE	IO_UERH;
	} byte;
} IO_UER;

#define	UER		(IO_UER.word)
#define	UERL	(IO_UER.byte.IO_UERL)
#define	UERH	(IO_UER.byte.IO_UERH)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_MBR,   locate=0xBF6
#pragma segment FAR_DATA=IO_MBR, locate=0xBF6
#endif

__IO_EXTENDED	union {
	__WORD	word;
	struct {
		__BYTE	IO_MBRL;
		__BYTE	IO_MBRH;
	} byte;
} IO_MBR;

#define	MBR		(IO_MBR.word)
#define	MBRL	(IO_MBR.byte.IO_MBRL)
#define	MBRH	(IO_MBR.byte.IO_MBRH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN30, locate=0xE9300
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV7:1;
			__WORD	RTG3:3;
			__WORD	RESV5:1;
			__WORD	RTG2:3;
			__WORD	RESV3:1;
			__WORD	RTG1:3;
			__WORD	RESV1:1;
			__WORD	RTG0:3;
#else
			__WORD	RTG0:3;
			__WORD	RESV1:1;
			__WORD	RTG1:3;
			__WORD	RESV3:1;
			__WORD	RTG2:3;
			__WORD	RESV5:1;
			__WORD	RTG3:3;
			__WORD	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RTG32:1;
			__WORD	RTG31:1;
			__WORD	RTG30:1;
			__WORD	RESV11:1;
			__WORD	RTG22:1;
			__WORD	RTG21:1;
			__WORD	RTG20:1;
			__WORD	RESV7:1;
			__WORD	RTG12:1;
			__WORD	RTG11:1;
			__WORD	RTG10:1;
			__WORD	RESV3:1;
			__WORD	RTG02:1;
			__WORD	RTG01:1;
			__WORD	RTG00:1;
#else
			__WORD	RTG00:1;
			__WORD	RTG01:1;
			__WORD	RTG02:1;
			__WORD	RESV3:1;
			__WORD	RTG10:1;
			__WORD	RTG11:1;
			__WORD	RTG12:1;
			__WORD	RESV7:1;
			__WORD	RTG20:1;
			__WORD	RTG21:1;
			__WORD	RTG22:1;
			__WORD	RESV11:1;
			__WORD	RTG30:1;
			__WORD	RTG31:1;
			__WORD	RTG32:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN30STR;

__IO_EXTENDED __far	  GCN30STR	IO_GCN30;
#define	_gcn30		(IO_GCN30)
#define	GCN30		(IO_GCN30.word)
#define	GCN30_RTG0  	(IO_GCN30.bit.RTG0)
#define	GCN30_RTG00  	(IO_GCN30.bitc.RTG00)
#define	GCN30_RTG01  	(IO_GCN30.bitc.RTG01)
#define	GCN30_RTG02  	(IO_GCN30.bitc.RTG02)
#define	GCN30_RTG1  	(IO_GCN30.bit.RTG1)
#define	GCN30_RTG10  	(IO_GCN30.bitc.RTG10)
#define	GCN30_RTG11  	(IO_GCN30.bitc.RTG11)
#define	GCN30_RTG12  	(IO_GCN30.bitc.RTG12)
#define	GCN30_RTG2  	(IO_GCN30.bit.RTG2)
#define	GCN30_RTG20  	(IO_GCN30.bitc.RTG20)
#define	GCN30_RTG21  	(IO_GCN30.bitc.RTG21)
#define	GCN30_RTG22  	(IO_GCN30.bitc.RTG22)
#define	GCN30_RTG3  	(IO_GCN30.bit.RTG3)
#define	GCN30_RTG30  	(IO_GCN30.bitc.RTG30)
#define	GCN30_RTG31  	(IO_GCN30.bitc.RTG31)
#define	GCN30_RTG32  	(IO_GCN30.bitc.RTG32)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN40, locate=0xE9302
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV7:1;
			__WORD	RCK3:3;
			__WORD	RESV5:1;
			__WORD	RCK2:3;
			__WORD	RESV3:1;
			__WORD	RCK1:3;
			__WORD	RESV1:1;
			__WORD	RCK0:3;
#else
			__WORD	RCK0:3;
			__WORD	RESV1:1;
			__WORD	RCK1:3;
			__WORD	RESV3:1;
			__WORD	RCK2:3;
			__WORD	RESV5:1;
			__WORD	RCK3:3;
			__WORD	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RCK32:1;
			__WORD	RCK31:1;
			__WORD	RCK30:1;
			__WORD	RESV11:1;
			__WORD	RCK22:1;
			__WORD	RCK21:1;
			__WORD	RCK20:1;
			__WORD	RESV7:1;
			__WORD	RCK12:1;
			__WORD	RCK11:1;
			__WORD	RCK10:1;
			__WORD	RESV3:1;
			__WORD	RCK02:1;
			__WORD	RCK01:1;
			__WORD	RCK00:1;
#else
			__WORD	RCK00:1;
			__WORD	RCK01:1;
			__WORD	RCK02:1;
			__WORD	RESV3:1;
			__WORD	RCK10:1;
			__WORD	RCK11:1;
			__WORD	RCK12:1;
			__WORD	RESV7:1;
			__WORD	RCK20:1;
			__WORD	RCK21:1;
			__WORD	RCK22:1;
			__WORD	RESV11:1;
			__WORD	RCK30:1;
			__WORD	RCK31:1;
			__WORD	RCK32:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN40STR;

__IO_EXTENDED __far	  GCN40STR	IO_GCN40;
#define	_gcn40		(IO_GCN40)
#define	GCN40		(IO_GCN40.word)
#define	GCN40_RCK0  	(IO_GCN40.bit.RCK0)
#define	GCN40_RCK00  	(IO_GCN40.bitc.RCK00)
#define	GCN40_RCK01  	(IO_GCN40.bitc.RCK01)
#define	GCN40_RCK02  	(IO_GCN40.bitc.RCK02)
#define	GCN40_RCK1  	(IO_GCN40.bit.RCK1)
#define	GCN40_RCK10  	(IO_GCN40.bitc.RCK10)
#define	GCN40_RCK11  	(IO_GCN40.bitc.RCK11)
#define	GCN40_RCK12  	(IO_GCN40.bitc.RCK12)
#define	GCN40_RCK2  	(IO_GCN40.bit.RCK2)
#define	GCN40_RCK20  	(IO_GCN40.bitc.RCK20)
#define	GCN40_RCK21  	(IO_GCN40.bitc.RCK21)
#define	GCN40_RCK22  	(IO_GCN40.bitc.RCK22)
#define	GCN40_RCK3  	(IO_GCN40.bit.RCK3)
#define	GCN40_RCK30  	(IO_GCN40.bitc.RCK30)
#define	GCN40_RCK31  	(IO_GCN40.bitc.RCK31)
#define	GCN40_RCK32  	(IO_GCN40.bitc.RCK32)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN5L0, locate=0xE9304
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RSH3:2;
			__BYTE	RSH2:2;
			__BYTE	RSH1:2;
			__BYTE	RSH0:2;
#else
			__BYTE	RSH0:2;
			__BYTE	RSH1:2;
			__BYTE	RSH2:2;
			__BYTE	RSH3:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RSH31:1;
			__BYTE	RSH30:1;
			__BYTE	RSH21:1;
			__BYTE	RSH20:1;
			__BYTE	RSH11:1;
			__BYTE	RSH10:1;
			__BYTE	RSH01:1;
			__BYTE	RSH00:1;
#else
			__BYTE	RSH00:1;
			__BYTE	RSH01:1;
			__BYTE	RSH10:1;
			__BYTE	RSH11:1;
			__BYTE	RSH20:1;
			__BYTE	RSH21:1;
			__BYTE	RSH30:1;
			__BYTE	RSH31:1;
#endif
	} bitc;
} GCN5L0STR;

__IO_EXTENDED __far	  GCN5L0STR	IO_GCN5L0;
#define	_gcn5l0		(IO_GCN5L0)
#define	GCN5L0		(IO_GCN5L0.byte)
#define	GCN5L0_RSH0  	(IO_GCN5L0.bit.RSH0)
#define	GCN5L0_RSH00  	(IO_GCN5L0.bitc.RSH00)
#define	GCN5L0_RSH01  	(IO_GCN5L0.bitc.RSH01)
#define	GCN5L0_RSH1  	(IO_GCN5L0.bit.RSH1)
#define	GCN5L0_RSH10  	(IO_GCN5L0.bitc.RSH10)
#define	GCN5L0_RSH11  	(IO_GCN5L0.bitc.RSH11)
#define	GCN5L0_RSH2  	(IO_GCN5L0.bit.RSH2)
#define	GCN5L0_RSH20  	(IO_GCN5L0.bitc.RSH20)
#define	GCN5L0_RSH21  	(IO_GCN5L0.bitc.RSH21)
#define	GCN5L0_RSH3  	(IO_GCN5L0.bit.RSH3)
#define	GCN5L0_RSH30  	(IO_GCN5L0.bitc.RSH30)
#define	GCN5L0_RSH31  	(IO_GCN5L0.bitc.RSH31)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L0, locate=0xE9310
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L0STR;

__IO_EXTENDED __far	  EPCN2L0STR	IO_EPCN2L0;
#define	_epcn2l0		(IO_EPCN2L0)
#define	EPCN2L0		(IO_EPCN2L0.byte)
#define	EPCN2L0_PRDL  	(IO_EPCN2L0.bit.PRDL)
#define	EPCN2L0_PRDH  	(IO_EPCN2L0.bit.PRDH)
#define	EPCN2L0_DTL  	(IO_EPCN2L0.bit.DTL)
#define	EPCN2L0_DTH  	(IO_EPCN2L0.bit.DTH)
#define	EPCN2L0_EDML  	(IO_EPCN2L0.bit.EDML)
#define	EPCN2L0_EDMH  	(IO_EPCN2L0.bit.EDMH)
#define	EPCN2L0_TCL  	(IO_EPCN2L0.bit.TCL)
#define	EPCN2L0_TCH  	(IO_EPCN2L0.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC0, locate=0xE9314
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC0;
#define	_ptpc0		(IO_PTPC0)
#define	PTPC0	(_ptpc0)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L1, locate=0xE9320
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L1STR;

__IO_EXTENDED __far	  EPCN2L1STR	IO_EPCN2L1;
#define	_epcn2l1		(IO_EPCN2L1)
#define	EPCN2L1		(IO_EPCN2L1.byte)
#define	EPCN2L1_PRDL  	(IO_EPCN2L1.bit.PRDL)
#define	EPCN2L1_PRDH  	(IO_EPCN2L1.bit.PRDH)
#define	EPCN2L1_DTL  	(IO_EPCN2L1.bit.DTL)
#define	EPCN2L1_DTH  	(IO_EPCN2L1.bit.DTH)
#define	EPCN2L1_EDML  	(IO_EPCN2L1.bit.EDML)
#define	EPCN2L1_EDMH  	(IO_EPCN2L1.bit.EDMH)
#define	EPCN2L1_TCL  	(IO_EPCN2L1.bit.TCL)
#define	EPCN2L1_TCH  	(IO_EPCN2L1.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC1, locate=0xE9324
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC1;
#define	_ptpc1		(IO_PTPC1)
#define	PTPC1	(_ptpc1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L3, locate=0xE9340
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L3STR;

__IO_EXTENDED __far	  EPCN2L3STR	IO_EPCN2L3;
#define	_epcn2l3		(IO_EPCN2L3)
#define	EPCN2L3		(IO_EPCN2L3.byte)
#define	EPCN2L3_PRDL  	(IO_EPCN2L3.bit.PRDL)
#define	EPCN2L3_PRDH  	(IO_EPCN2L3.bit.PRDH)
#define	EPCN2L3_DTL  	(IO_EPCN2L3.bit.DTL)
#define	EPCN2L3_DTH  	(IO_EPCN2L3.bit.DTH)
#define	EPCN2L3_EDML  	(IO_EPCN2L3.bit.EDML)
#define	EPCN2L3_EDMH  	(IO_EPCN2L3.bit.EDMH)
#define	EPCN2L3_TCL  	(IO_EPCN2L3.bit.TCL)
#define	EPCN2L3_TCH  	(IO_EPCN2L3.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC3, locate=0xE9344
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC3;
#define	_ptpc3		(IO_PTPC3)
#define	PTPC3	(_ptpc3)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN31, locate=0xE9350
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV7:1;
			__WORD	RTG3:3;
			__WORD	RESV5:1;
			__WORD	RTG2:3;
			__WORD	RESV3:1;
			__WORD	RTG1:3;
			__WORD	RESV1:1;
			__WORD	RTG0:3;
#else
			__WORD	RTG0:3;
			__WORD	RESV1:1;
			__WORD	RTG1:3;
			__WORD	RESV3:1;
			__WORD	RTG2:3;
			__WORD	RESV5:1;
			__WORD	RTG3:3;
			__WORD	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RTG32:1;
			__WORD	RTG31:1;
			__WORD	RTG30:1;
			__WORD	RESV11:1;
			__WORD	RTG22:1;
			__WORD	RTG21:1;
			__WORD	RTG20:1;
			__WORD	RESV7:1;
			__WORD	RTG12:1;
			__WORD	RTG11:1;
			__WORD	RTG10:1;
			__WORD	RESV3:1;
			__WORD	RTG02:1;
			__WORD	RTG01:1;
			__WORD	RTG00:1;
#else
			__WORD	RTG00:1;
			__WORD	RTG01:1;
			__WORD	RTG02:1;
			__WORD	RESV3:1;
			__WORD	RTG10:1;
			__WORD	RTG11:1;
			__WORD	RTG12:1;
			__WORD	RESV7:1;
			__WORD	RTG20:1;
			__WORD	RTG21:1;
			__WORD	RTG22:1;
			__WORD	RESV11:1;
			__WORD	RTG30:1;
			__WORD	RTG31:1;
			__WORD	RTG32:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN31STR;

__IO_EXTENDED __far	  GCN31STR	IO_GCN31;
#define	_gcn31		(IO_GCN31)
#define	GCN31		(IO_GCN31.word)
#define	GCN31_RTG0  	(IO_GCN31.bit.RTG0)
#define	GCN31_RTG00  	(IO_GCN31.bitc.RTG00)
#define	GCN31_RTG01  	(IO_GCN31.bitc.RTG01)
#define	GCN31_RTG02  	(IO_GCN31.bitc.RTG02)
#define	GCN31_RTG1  	(IO_GCN31.bit.RTG1)
#define	GCN31_RTG10  	(IO_GCN31.bitc.RTG10)
#define	GCN31_RTG11  	(IO_GCN31.bitc.RTG11)
#define	GCN31_RTG12  	(IO_GCN31.bitc.RTG12)
#define	GCN31_RTG2  	(IO_GCN31.bit.RTG2)
#define	GCN31_RTG20  	(IO_GCN31.bitc.RTG20)
#define	GCN31_RTG21  	(IO_GCN31.bitc.RTG21)
#define	GCN31_RTG22  	(IO_GCN31.bitc.RTG22)
#define	GCN31_RTG3  	(IO_GCN31.bit.RTG3)
#define	GCN31_RTG30  	(IO_GCN31.bitc.RTG30)
#define	GCN31_RTG31  	(IO_GCN31.bitc.RTG31)
#define	GCN31_RTG32  	(IO_GCN31.bitc.RTG32)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN41, locate=0xE9352
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV7:1;
			__WORD	RCK3:3;
			__WORD	RESV5:1;
			__WORD	RCK2:3;
			__WORD	RESV3:1;
			__WORD	RCK1:3;
			__WORD	RESV1:1;
			__WORD	RCK0:3;
#else
			__WORD	RCK0:3;
			__WORD	RESV1:1;
			__WORD	RCK1:3;
			__WORD	RESV3:1;
			__WORD	RCK2:3;
			__WORD	RESV5:1;
			__WORD	RCK3:3;
			__WORD	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RCK32:1;
			__WORD	RCK31:1;
			__WORD	RCK30:1;
			__WORD	RESV11:1;
			__WORD	RCK22:1;
			__WORD	RCK21:1;
			__WORD	RCK20:1;
			__WORD	RESV7:1;
			__WORD	RCK12:1;
			__WORD	RCK11:1;
			__WORD	RCK10:1;
			__WORD	RESV3:1;
			__WORD	RCK02:1;
			__WORD	RCK01:1;
			__WORD	RCK00:1;
#else
			__WORD	RCK00:1;
			__WORD	RCK01:1;
			__WORD	RCK02:1;
			__WORD	RESV3:1;
			__WORD	RCK10:1;
			__WORD	RCK11:1;
			__WORD	RCK12:1;
			__WORD	RESV7:1;
			__WORD	RCK20:1;
			__WORD	RCK21:1;
			__WORD	RCK22:1;
			__WORD	RESV11:1;
			__WORD	RCK30:1;
			__WORD	RCK31:1;
			__WORD	RCK32:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN41STR;

__IO_EXTENDED __far	  GCN41STR	IO_GCN41;
#define	_gcn41		(IO_GCN41)
#define	GCN41		(IO_GCN41.word)
#define	GCN41_RCK0  	(IO_GCN41.bit.RCK0)
#define	GCN41_RCK00  	(IO_GCN41.bitc.RCK00)
#define	GCN41_RCK01  	(IO_GCN41.bitc.RCK01)
#define	GCN41_RCK02  	(IO_GCN41.bitc.RCK02)
#define	GCN41_RCK1  	(IO_GCN41.bit.RCK1)
#define	GCN41_RCK10  	(IO_GCN41.bitc.RCK10)
#define	GCN41_RCK11  	(IO_GCN41.bitc.RCK11)
#define	GCN41_RCK12  	(IO_GCN41.bitc.RCK12)
#define	GCN41_RCK2  	(IO_GCN41.bit.RCK2)
#define	GCN41_RCK20  	(IO_GCN41.bitc.RCK20)
#define	GCN41_RCK21  	(IO_GCN41.bitc.RCK21)
#define	GCN41_RCK22  	(IO_GCN41.bitc.RCK22)
#define	GCN41_RCK3  	(IO_GCN41.bit.RCK3)
#define	GCN41_RCK30  	(IO_GCN41.bitc.RCK30)
#define	GCN41_RCK31  	(IO_GCN41.bitc.RCK31)
#define	GCN41_RCK32  	(IO_GCN41.bitc.RCK32)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN5L1, locate=0xE9354
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RSH3:2;
			__BYTE	RSH2:2;
			__BYTE	RSH1:2;
			__BYTE	RSH0:2;
#else
			__BYTE	RSH0:2;
			__BYTE	RSH1:2;
			__BYTE	RSH2:2;
			__BYTE	RSH3:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RSH31:1;
			__BYTE	RSH30:1;
			__BYTE	RSH21:1;
			__BYTE	RSH20:1;
			__BYTE	RSH11:1;
			__BYTE	RSH10:1;
			__BYTE	RSH01:1;
			__BYTE	RSH00:1;
#else
			__BYTE	RSH00:1;
			__BYTE	RSH01:1;
			__BYTE	RSH10:1;
			__BYTE	RSH11:1;
			__BYTE	RSH20:1;
			__BYTE	RSH21:1;
			__BYTE	RSH30:1;
			__BYTE	RSH31:1;
#endif
	} bitc;
} GCN5L1STR;

__IO_EXTENDED __far	  GCN5L1STR	IO_GCN5L1;
#define	_gcn5l1		(IO_GCN5L1)
#define	GCN5L1		(IO_GCN5L1.byte)
#define	GCN5L1_RSH0  	(IO_GCN5L1.bit.RSH0)
#define	GCN5L1_RSH00  	(IO_GCN5L1.bitc.RSH00)
#define	GCN5L1_RSH01  	(IO_GCN5L1.bitc.RSH01)
#define	GCN5L1_RSH1  	(IO_GCN5L1.bit.RSH1)
#define	GCN5L1_RSH10  	(IO_GCN5L1.bitc.RSH10)
#define	GCN5L1_RSH11  	(IO_GCN5L1.bitc.RSH11)
#define	GCN5L1_RSH2  	(IO_GCN5L1.bit.RSH2)
#define	GCN5L1_RSH20  	(IO_GCN5L1.bitc.RSH20)
#define	GCN5L1_RSH21  	(IO_GCN5L1.bitc.RSH21)
#define	GCN5L1_RSH3  	(IO_GCN5L1.bit.RSH3)
#define	GCN5L1_RSH30  	(IO_GCN5L1.bitc.RSH30)
#define	GCN5L1_RSH31  	(IO_GCN5L1.bitc.RSH31)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L4, locate=0xE9360
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L4STR;

__IO_EXTENDED __far	  EPCN2L4STR	IO_EPCN2L4;
#define	_epcn2l4		(IO_EPCN2L4)
#define	EPCN2L4		(IO_EPCN2L4.byte)
#define	EPCN2L4_PRDL  	(IO_EPCN2L4.bit.PRDL)
#define	EPCN2L4_PRDH  	(IO_EPCN2L4.bit.PRDH)
#define	EPCN2L4_DTL  	(IO_EPCN2L4.bit.DTL)
#define	EPCN2L4_DTH  	(IO_EPCN2L4.bit.DTH)
#define	EPCN2L4_EDML  	(IO_EPCN2L4.bit.EDML)
#define	EPCN2L4_EDMH  	(IO_EPCN2L4.bit.EDMH)
#define	EPCN2L4_TCL  	(IO_EPCN2L4.bit.TCL)
#define	EPCN2L4_TCH  	(IO_EPCN2L4.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC4, locate=0xE9364
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC4;
#define	_ptpc4		(IO_PTPC4)
#define	PTPC4	(_ptpc4)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L6, locate=0xE9380
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L6STR;

__IO_EXTENDED __far	  EPCN2L6STR	IO_EPCN2L6;
#define	_epcn2l6		(IO_EPCN2L6)
#define	EPCN2L6		(IO_EPCN2L6.byte)
#define	EPCN2L6_PRDL  	(IO_EPCN2L6.bit.PRDL)
#define	EPCN2L6_PRDH  	(IO_EPCN2L6.bit.PRDH)
#define	EPCN2L6_DTL  	(IO_EPCN2L6.bit.DTL)
#define	EPCN2L6_DTH  	(IO_EPCN2L6.bit.DTH)
#define	EPCN2L6_EDML  	(IO_EPCN2L6.bit.EDML)
#define	EPCN2L6_EDMH  	(IO_EPCN2L6.bit.EDMH)
#define	EPCN2L6_TCL  	(IO_EPCN2L6.bit.TCL)
#define	EPCN2L6_TCH  	(IO_EPCN2L6.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC6, locate=0xE9384
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC6;
#define	_ptpc6		(IO_PTPC6)
#define	PTPC6	(_ptpc6)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L7, locate=0xE9390
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L7STR;

__IO_EXTENDED __far	  EPCN2L7STR	IO_EPCN2L7;
#define	_epcn2l7		(IO_EPCN2L7)
#define	EPCN2L7		(IO_EPCN2L7.byte)
#define	EPCN2L7_PRDL  	(IO_EPCN2L7.bit.PRDL)
#define	EPCN2L7_PRDH  	(IO_EPCN2L7.bit.PRDH)
#define	EPCN2L7_DTL  	(IO_EPCN2L7.bit.DTL)
#define	EPCN2L7_DTH  	(IO_EPCN2L7.bit.DTH)
#define	EPCN2L7_EDML  	(IO_EPCN2L7.bit.EDML)
#define	EPCN2L7_EDMH  	(IO_EPCN2L7.bit.EDMH)
#define	EPCN2L7_TCL  	(IO_EPCN2L7.bit.TCL)
#define	EPCN2L7_TCH  	(IO_EPCN2L7.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC7, locate=0xE9394
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC7;
#define	_ptpc7		(IO_PTPC7)
#define	PTPC7	(_ptpc7)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN33, locate=0xE9400
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV7:1;
			__WORD	RTG3:3;
			__WORD	RESV5:1;
			__WORD	RTG2:3;
			__WORD	RESV3:1;
			__WORD	RTG1:3;
			__WORD	RESV1:1;
			__WORD	RTG0:3;
#else
			__WORD	RTG0:3;
			__WORD	RESV1:1;
			__WORD	RTG1:3;
			__WORD	RESV3:1;
			__WORD	RTG2:3;
			__WORD	RESV5:1;
			__WORD	RTG3:3;
			__WORD	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RTG32:1;
			__WORD	RTG31:1;
			__WORD	RTG30:1;
			__WORD	RESV11:1;
			__WORD	RTG22:1;
			__WORD	RTG21:1;
			__WORD	RTG20:1;
			__WORD	RESV7:1;
			__WORD	RTG12:1;
			__WORD	RTG11:1;
			__WORD	RTG10:1;
			__WORD	RESV3:1;
			__WORD	RTG02:1;
			__WORD	RTG01:1;
			__WORD	RTG00:1;
#else
			__WORD	RTG00:1;
			__WORD	RTG01:1;
			__WORD	RTG02:1;
			__WORD	RESV3:1;
			__WORD	RTG10:1;
			__WORD	RTG11:1;
			__WORD	RTG12:1;
			__WORD	RESV7:1;
			__WORD	RTG20:1;
			__WORD	RTG21:1;
			__WORD	RTG22:1;
			__WORD	RESV11:1;
			__WORD	RTG30:1;
			__WORD	RTG31:1;
			__WORD	RTG32:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN33STR;

__IO_EXTENDED __far	  GCN33STR	IO_GCN33;
#define	_gcn33		(IO_GCN33)
#define	GCN33		(IO_GCN33.word)
#define	GCN33_RTG0  	(IO_GCN33.bit.RTG0)
#define	GCN33_RTG00  	(IO_GCN33.bitc.RTG00)
#define	GCN33_RTG01  	(IO_GCN33.bitc.RTG01)
#define	GCN33_RTG02  	(IO_GCN33.bitc.RTG02)
#define	GCN33_RTG1  	(IO_GCN33.bit.RTG1)
#define	GCN33_RTG10  	(IO_GCN33.bitc.RTG10)
#define	GCN33_RTG11  	(IO_GCN33.bitc.RTG11)
#define	GCN33_RTG12  	(IO_GCN33.bitc.RTG12)
#define	GCN33_RTG2  	(IO_GCN33.bit.RTG2)
#define	GCN33_RTG20  	(IO_GCN33.bitc.RTG20)
#define	GCN33_RTG21  	(IO_GCN33.bitc.RTG21)
#define	GCN33_RTG22  	(IO_GCN33.bitc.RTG22)
#define	GCN33_RTG3  	(IO_GCN33.bit.RTG3)
#define	GCN33_RTG30  	(IO_GCN33.bitc.RTG30)
#define	GCN33_RTG31  	(IO_GCN33.bitc.RTG31)
#define	GCN33_RTG32  	(IO_GCN33.bitc.RTG32)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN43, locate=0xE9402
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV7:1;
			__WORD	RCK3:3;
			__WORD	RESV5:1;
			__WORD	RCK2:3;
			__WORD	RESV3:1;
			__WORD	RCK1:3;
			__WORD	RESV1:1;
			__WORD	RCK0:3;
#else
			__WORD	RCK0:3;
			__WORD	RESV1:1;
			__WORD	RCK1:3;
			__WORD	RESV3:1;
			__WORD	RCK2:3;
			__WORD	RESV5:1;
			__WORD	RCK3:3;
			__WORD	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RCK32:1;
			__WORD	RCK31:1;
			__WORD	RCK30:1;
			__WORD	RESV11:1;
			__WORD	RCK22:1;
			__WORD	RCK21:1;
			__WORD	RCK20:1;
			__WORD	RESV7:1;
			__WORD	RCK12:1;
			__WORD	RCK11:1;
			__WORD	RCK10:1;
			__WORD	RESV3:1;
			__WORD	RCK02:1;
			__WORD	RCK01:1;
			__WORD	RCK00:1;
#else
			__WORD	RCK00:1;
			__WORD	RCK01:1;
			__WORD	RCK02:1;
			__WORD	RESV3:1;
			__WORD	RCK10:1;
			__WORD	RCK11:1;
			__WORD	RCK12:1;
			__WORD	RESV7:1;
			__WORD	RCK20:1;
			__WORD	RCK21:1;
			__WORD	RCK22:1;
			__WORD	RESV11:1;
			__WORD	RCK30:1;
			__WORD	RCK31:1;
			__WORD	RCK32:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} GCN43STR;

__IO_EXTENDED __far	  GCN43STR	IO_GCN43;
#define	_gcn43		(IO_GCN43)
#define	GCN43		(IO_GCN43.word)
#define	GCN43_RCK0  	(IO_GCN43.bit.RCK0)
#define	GCN43_RCK00  	(IO_GCN43.bitc.RCK00)
#define	GCN43_RCK01  	(IO_GCN43.bitc.RCK01)
#define	GCN43_RCK02  	(IO_GCN43.bitc.RCK02)
#define	GCN43_RCK1  	(IO_GCN43.bit.RCK1)
#define	GCN43_RCK10  	(IO_GCN43.bitc.RCK10)
#define	GCN43_RCK11  	(IO_GCN43.bitc.RCK11)
#define	GCN43_RCK12  	(IO_GCN43.bitc.RCK12)
#define	GCN43_RCK2  	(IO_GCN43.bit.RCK2)
#define	GCN43_RCK20  	(IO_GCN43.bitc.RCK20)
#define	GCN43_RCK21  	(IO_GCN43.bitc.RCK21)
#define	GCN43_RCK22  	(IO_GCN43.bitc.RCK22)
#define	GCN43_RCK3  	(IO_GCN43.bit.RCK3)
#define	GCN43_RCK30  	(IO_GCN43.bitc.RCK30)
#define	GCN43_RCK31  	(IO_GCN43.bitc.RCK31)
#define	GCN43_RCK32  	(IO_GCN43.bitc.RCK32)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_GCN5L3, locate=0xE9404
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RSH3:2;
			__BYTE	RSH2:2;
			__BYTE	RSH1:2;
			__BYTE	RSH0:2;
#else
			__BYTE	RSH0:2;
			__BYTE	RSH1:2;
			__BYTE	RSH2:2;
			__BYTE	RSH3:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RSH31:1;
			__BYTE	RSH30:1;
			__BYTE	RSH21:1;
			__BYTE	RSH20:1;
			__BYTE	RSH11:1;
			__BYTE	RSH10:1;
			__BYTE	RSH01:1;
			__BYTE	RSH00:1;
#else
			__BYTE	RSH00:1;
			__BYTE	RSH01:1;
			__BYTE	RSH10:1;
			__BYTE	RSH11:1;
			__BYTE	RSH20:1;
			__BYTE	RSH21:1;
			__BYTE	RSH30:1;
			__BYTE	RSH31:1;
#endif
	} bitc;
} GCN5L3STR;

__IO_EXTENDED __far	  GCN5L3STR	IO_GCN5L3;
#define	_gcn5l3		(IO_GCN5L3)
#define	GCN5L3		(IO_GCN5L3.byte)
#define	GCN5L3_RSH0  	(IO_GCN5L3.bit.RSH0)
#define	GCN5L3_RSH00  	(IO_GCN5L3.bitc.RSH00)
#define	GCN5L3_RSH01  	(IO_GCN5L3.bitc.RSH01)
#define	GCN5L3_RSH1  	(IO_GCN5L3.bit.RSH1)
#define	GCN5L3_RSH10  	(IO_GCN5L3.bitc.RSH10)
#define	GCN5L3_RSH11  	(IO_GCN5L3.bitc.RSH11)
#define	GCN5L3_RSH2  	(IO_GCN5L3.bit.RSH2)
#define	GCN5L3_RSH20  	(IO_GCN5L3.bitc.RSH20)
#define	GCN5L3_RSH21  	(IO_GCN5L3.bitc.RSH21)
#define	GCN5L3_RSH3  	(IO_GCN5L3.bit.RSH3)
#define	GCN5L3_RSH30  	(IO_GCN5L3.bitc.RSH30)
#define	GCN5L3_RSH31  	(IO_GCN5L3.bitc.RSH31)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L12, locate=0xE9410
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L12STR;

__IO_EXTENDED __far	  EPCN2L12STR	IO_EPCN2L12;
#define	_epcn2l12		(IO_EPCN2L12)
#define	EPCN2L12		(IO_EPCN2L12.byte)
#define	EPCN2L12_PRDL  	(IO_EPCN2L12.bit.PRDL)
#define	EPCN2L12_PRDH  	(IO_EPCN2L12.bit.PRDH)
#define	EPCN2L12_DTL  	(IO_EPCN2L12.bit.DTL)
#define	EPCN2L12_DTH  	(IO_EPCN2L12.bit.DTH)
#define	EPCN2L12_EDML  	(IO_EPCN2L12.bit.EDML)
#define	EPCN2L12_EDMH  	(IO_EPCN2L12.bit.EDMH)
#define	EPCN2L12_TCL  	(IO_EPCN2L12.bit.TCL)
#define	EPCN2L12_TCH  	(IO_EPCN2L12.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC12, locate=0xE9414
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC12;
#define	_ptpc12		(IO_PTPC12)
#define	PTPC12	(_ptpc12)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EPCN2L14, locate=0xE9430
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TCH:1;
			__BYTE	TCL:1;
			__BYTE	EDMH:1;
			__BYTE	EDML:1;
			__BYTE	DTH:1;
			__BYTE	DTL:1;
			__BYTE	PRDH:1;
			__BYTE	PRDL:1;
#else
			__BYTE	PRDL:1;
			__BYTE	PRDH:1;
			__BYTE	DTL:1;
			__BYTE	DTH:1;
			__BYTE	EDML:1;
			__BYTE	EDMH:1;
			__BYTE	TCL:1;
			__BYTE	TCH:1;
#endif
	} bitc;
} EPCN2L14STR;

__IO_EXTENDED __far	  EPCN2L14STR	IO_EPCN2L14;
#define	_epcn2l14		(IO_EPCN2L14)
#define	EPCN2L14		(IO_EPCN2L14.byte)
#define	EPCN2L14_PRDL  	(IO_EPCN2L14.bit.PRDL)
#define	EPCN2L14_PRDH  	(IO_EPCN2L14.bit.PRDH)
#define	EPCN2L14_DTL  	(IO_EPCN2L14.bit.DTL)
#define	EPCN2L14_DTH  	(IO_EPCN2L14.bit.DTH)
#define	EPCN2L14_EDML  	(IO_EPCN2L14.bit.EDML)
#define	EPCN2L14_EDMH  	(IO_EPCN2L14.bit.EDMH)
#define	EPCN2L14_TCL  	(IO_EPCN2L14.bit.TCL)
#define	EPCN2L14_TCH  	(IO_EPCN2L14.bit.TCH)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_PTPC14, locate=0xE9434
#endif

__IO_EXTENDED __far	__WORD	IO_PTPC14;
#define	_ptpc14		(IO_PTPC14)
#define	PTPC14	(_ptpc14)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADTGCRH0, locate=0xE94A1
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RLTE:1;
#else
			__BYTE	RLTE:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RLTE:1;
#else
			__BYTE	RLTE:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADTGCRH0STR;

__IO_EXTENDED __far	  ADTGCRH0STR	IO_ADTGCRH0;
#define	_adtgcrh0		(IO_ADTGCRH0)
#define	ADTGCRH0		(IO_ADTGCRH0.byte)
#define	ADTGCRH0_RLTE  	(IO_ADTGCRH0.bit.RLTE)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADTGISEL0, locate=0xE94A2
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV9:1;
			__WORD	RESV8:1;
			__WORD	RESV7:1;
			__WORD	PP:5;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	RLT:3;
#else
			__WORD	RLT:3;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	PP:5;
			__WORD	RESV7:1;
			__WORD	RESV8:1;
			__WORD	RESV9:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	PP4:1;
			__WORD	PP3:1;
			__WORD	PP2:1;
			__WORD	PP1:1;
			__WORD	PP0:1;
			__WORD	RESV7:1;
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RLT2:1;
			__WORD	RLT1:1;
			__WORD	RLT0:1;
#else
			__WORD	RLT0:1;
			__WORD	RLT1:1;
			__WORD	RLT2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
			__WORD	RESV7:1;
			__WORD	PP0:1;
			__WORD	PP1:1;
			__WORD	PP2:1;
			__WORD	PP3:1;
			__WORD	PP4:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADTGISEL0STR;

__IO_EXTENDED __far	  ADTGISEL0STR	IO_ADTGISEL0;
#define	_adtgisel0		(IO_ADTGISEL0)
#define	ADTGISEL0		(IO_ADTGISEL0.word)
#define	ADTGISEL0_RLT  	(IO_ADTGISEL0.bit.RLT)
#define	ADTGISEL0_RLT0  	(IO_ADTGISEL0.bitc.RLT0)
#define	ADTGISEL0_RLT1  	(IO_ADTGISEL0.bitc.RLT1)
#define	ADTGISEL0_RLT2  	(IO_ADTGISEL0.bitc.RLT2)
#define	ADTGISEL0_PP  	(IO_ADTGISEL0.bit.PP)
#define	ADTGISEL0_PP0  	(IO_ADTGISEL0.bitc.PP0)
#define	ADTGISEL0_PP1  	(IO_ADTGISEL0.bitc.PP1)
#define	ADTGISEL0_PP2  	(IO_ADTGISEL0.bitc.PP2)
#define	ADTGISEL0_PP3  	(IO_ADTGISEL0.bitc.PP3)
#define	ADTGISEL0_PP4  	(IO_ADTGISEL0.bitc.PP4)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOL00, locate=0xE9520
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOL00STR;

__IO_EXTENDED __far	  ADRCOL00STR	IO_ADRCOL00;
#define	_adrcol00		(IO_ADRCOL00)
#define	ADRCOL00		(IO_ADRCOL00.word)
#define	ADRCOL00_C  	(IO_ADRCOL00.bit.C)
#define	ADRCOL00_C0  	(IO_ADRCOL00.bitc.C0)
#define	ADRCOL00_C1  	(IO_ADRCOL00.bitc.C1)
#define	ADRCOL00_C2  	(IO_ADRCOL00.bitc.C2)
#define	ADRCOL00_C3  	(IO_ADRCOL00.bitc.C3)
#define	ADRCOL00_C4  	(IO_ADRCOL00.bitc.C4)
#define	ADRCOL00_C5  	(IO_ADRCOL00.bitc.C5)
#define	ADRCOL00_C6  	(IO_ADRCOL00.bitc.C6)
#define	ADRCOL00_C7  	(IO_ADRCOL00.bitc.C7)
#define	ADRCOL00_C8  	(IO_ADRCOL00.bitc.C8)
#define	ADRCOL00_C9  	(IO_ADRCOL00.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOH00, locate=0xE9522
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOH00STR;

__IO_EXTENDED __far	  ADRCOH00STR	IO_ADRCOH00;
#define	_adrcoh00		(IO_ADRCOH00)
#define	ADRCOH00		(IO_ADRCOH00.word)
#define	ADRCOH00_C  	(IO_ADRCOH00.bit.C)
#define	ADRCOH00_C0  	(IO_ADRCOH00.bitc.C0)
#define	ADRCOH00_C1  	(IO_ADRCOH00.bitc.C1)
#define	ADRCOH00_C2  	(IO_ADRCOH00.bitc.C2)
#define	ADRCOH00_C3  	(IO_ADRCOH00.bitc.C3)
#define	ADRCOH00_C4  	(IO_ADRCOH00.bitc.C4)
#define	ADRCOH00_C5  	(IO_ADRCOH00.bitc.C5)
#define	ADRCOH00_C6  	(IO_ADRCOH00.bitc.C6)
#define	ADRCOH00_C7  	(IO_ADRCOH00.bitc.C7)
#define	ADRCOH00_C8  	(IO_ADRCOH00.bitc.C8)
#define	ADRCOH00_C9  	(IO_ADRCOH00.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOL10, locate=0xE9524
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOL10STR;

__IO_EXTENDED __far	  ADRCOL10STR	IO_ADRCOL10;
#define	_adrcol10		(IO_ADRCOL10)
#define	ADRCOL10		(IO_ADRCOL10.word)
#define	ADRCOL10_C  	(IO_ADRCOL10.bit.C)
#define	ADRCOL10_C0  	(IO_ADRCOL10.bitc.C0)
#define	ADRCOL10_C1  	(IO_ADRCOL10.bitc.C1)
#define	ADRCOL10_C2  	(IO_ADRCOL10.bitc.C2)
#define	ADRCOL10_C3  	(IO_ADRCOL10.bitc.C3)
#define	ADRCOL10_C4  	(IO_ADRCOL10.bitc.C4)
#define	ADRCOL10_C5  	(IO_ADRCOL10.bitc.C5)
#define	ADRCOL10_C6  	(IO_ADRCOL10.bitc.C6)
#define	ADRCOL10_C7  	(IO_ADRCOL10.bitc.C7)
#define	ADRCOL10_C8  	(IO_ADRCOL10.bitc.C8)
#define	ADRCOL10_C9  	(IO_ADRCOL10.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOH10, locate=0xE9526
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOH10STR;

__IO_EXTENDED __far	  ADRCOH10STR	IO_ADRCOH10;
#define	_adrcoh10		(IO_ADRCOH10)
#define	ADRCOH10		(IO_ADRCOH10.word)
#define	ADRCOH10_C  	(IO_ADRCOH10.bit.C)
#define	ADRCOH10_C0  	(IO_ADRCOH10.bitc.C0)
#define	ADRCOH10_C1  	(IO_ADRCOH10.bitc.C1)
#define	ADRCOH10_C2  	(IO_ADRCOH10.bitc.C2)
#define	ADRCOH10_C3  	(IO_ADRCOH10.bitc.C3)
#define	ADRCOH10_C4  	(IO_ADRCOH10.bitc.C4)
#define	ADRCOH10_C5  	(IO_ADRCOH10.bitc.C5)
#define	ADRCOH10_C6  	(IO_ADRCOH10.bitc.C6)
#define	ADRCOH10_C7  	(IO_ADRCOH10.bitc.C7)
#define	ADRCOH10_C8  	(IO_ADRCOH10.bitc.C8)
#define	ADRCOH10_C9  	(IO_ADRCOH10.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOL20, locate=0xE9528
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOL20STR;

__IO_EXTENDED __far	  ADRCOL20STR	IO_ADRCOL20;
#define	_adrcol20		(IO_ADRCOL20)
#define	ADRCOL20		(IO_ADRCOL20.word)
#define	ADRCOL20_C  	(IO_ADRCOL20.bit.C)
#define	ADRCOL20_C0  	(IO_ADRCOL20.bitc.C0)
#define	ADRCOL20_C1  	(IO_ADRCOL20.bitc.C1)
#define	ADRCOL20_C2  	(IO_ADRCOL20.bitc.C2)
#define	ADRCOL20_C3  	(IO_ADRCOL20.bitc.C3)
#define	ADRCOL20_C4  	(IO_ADRCOL20.bitc.C4)
#define	ADRCOL20_C5  	(IO_ADRCOL20.bitc.C5)
#define	ADRCOL20_C6  	(IO_ADRCOL20.bitc.C6)
#define	ADRCOL20_C7  	(IO_ADRCOL20.bitc.C7)
#define	ADRCOL20_C8  	(IO_ADRCOL20.bitc.C8)
#define	ADRCOL20_C9  	(IO_ADRCOL20.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOH20, locate=0xE952A
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOH20STR;

__IO_EXTENDED __far	  ADRCOH20STR	IO_ADRCOH20;
#define	_adrcoh20		(IO_ADRCOH20)
#define	ADRCOH20		(IO_ADRCOH20.word)
#define	ADRCOH20_C  	(IO_ADRCOH20.bit.C)
#define	ADRCOH20_C0  	(IO_ADRCOH20.bitc.C0)
#define	ADRCOH20_C1  	(IO_ADRCOH20.bitc.C1)
#define	ADRCOH20_C2  	(IO_ADRCOH20.bitc.C2)
#define	ADRCOH20_C3  	(IO_ADRCOH20.bitc.C3)
#define	ADRCOH20_C4  	(IO_ADRCOH20.bitc.C4)
#define	ADRCOH20_C5  	(IO_ADRCOH20.bitc.C5)
#define	ADRCOH20_C6  	(IO_ADRCOH20.bitc.C6)
#define	ADRCOH20_C7  	(IO_ADRCOH20.bitc.C7)
#define	ADRCOH20_C8  	(IO_ADRCOH20.bitc.C8)
#define	ADRCOH20_C9  	(IO_ADRCOH20.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOL30, locate=0xE952C
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOL30STR;

__IO_EXTENDED __far	  ADRCOL30STR	IO_ADRCOL30;
#define	_adrcol30		(IO_ADRCOL30)
#define	ADRCOL30		(IO_ADRCOL30.word)
#define	ADRCOL30_C  	(IO_ADRCOL30.bit.C)
#define	ADRCOL30_C0  	(IO_ADRCOL30.bitc.C0)
#define	ADRCOL30_C1  	(IO_ADRCOL30.bitc.C1)
#define	ADRCOL30_C2  	(IO_ADRCOL30.bitc.C2)
#define	ADRCOL30_C3  	(IO_ADRCOL30.bitc.C3)
#define	ADRCOL30_C4  	(IO_ADRCOL30.bitc.C4)
#define	ADRCOL30_C5  	(IO_ADRCOL30.bitc.C5)
#define	ADRCOL30_C6  	(IO_ADRCOL30.bitc.C6)
#define	ADRCOL30_C7  	(IO_ADRCOL30.bitc.C7)
#define	ADRCOL30_C8  	(IO_ADRCOL30.bitc.C8)
#define	ADRCOL30_C9  	(IO_ADRCOL30.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOH30, locate=0xE952E
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV6:1;
			__WORD	RESV5:1;
			__WORD	RESV4:1;
			__WORD	RESV3:1;
			__WORD	RESV2:1;
			__WORD	RESV1:1;
			__WORD	C:10;
#else
			__WORD	C:10;
			__WORD	RESV1:1;
			__WORD	RESV2:1;
			__WORD	RESV3:1;
			__WORD	RESV4:1;
			__WORD	RESV5:1;
			__WORD	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	RESV13:1;
			__WORD	RESV12:1;
			__WORD	RESV11:1;
			__WORD	RESV10:1;
			__WORD	C9:1;
			__WORD	C8:1;
			__WORD	C7:1;
			__WORD	C6:1;
			__WORD	C5:1;
			__WORD	C4:1;
			__WORD	C3:1;
			__WORD	C2:1;
			__WORD	C1:1;
			__WORD	C0:1;
#else
			__WORD	C0:1;
			__WORD	C1:1;
			__WORD	C2:1;
			__WORD	C3:1;
			__WORD	C4:1;
			__WORD	C5:1;
			__WORD	C6:1;
			__WORD	C7:1;
			__WORD	C8:1;
			__WORD	C9:1;
			__WORD	RESV10:1;
			__WORD	RESV11:1;
			__WORD	RESV12:1;
			__WORD	RESV13:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} ADRCOH30STR;

__IO_EXTENDED __far	  ADRCOH30STR	IO_ADRCOH30;
#define	_adrcoh30		(IO_ADRCOH30)
#define	ADRCOH30		(IO_ADRCOH30.word)
#define	ADRCOH30_C  	(IO_ADRCOH30.bit.C)
#define	ADRCOH30_C0  	(IO_ADRCOH30.bitc.C0)
#define	ADRCOH30_C1  	(IO_ADRCOH30.bitc.C1)
#define	ADRCOH30_C2  	(IO_ADRCOH30.bitc.C2)
#define	ADRCOH30_C3  	(IO_ADRCOH30.bitc.C3)
#define	ADRCOH30_C4  	(IO_ADRCOH30.bitc.C4)
#define	ADRCOH30_C5  	(IO_ADRCOH30.bitc.C5)
#define	ADRCOH30_C6  	(IO_ADRCOH30.bitc.C6)
#define	ADRCOH30_C7  	(IO_ADRCOH30.bitc.C7)
#define	ADRCOH30_C8  	(IO_ADRCOH30.bitc.C8)
#define	ADRCOH30_C9  	(IO_ADRCOH30.bitc.C9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOIRS00, locate=0xE9540
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIRS7:1;
			__BYTE	RCOIRS6:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS4:1;
			__BYTE	RCOIRS3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOIRS1:1;
			__BYTE	RCOIRS0:1;
#else
			__BYTE	RCOIRS0:1;
			__BYTE	RCOIRS1:1;
			__BYTE	RESV2:1;
			__BYTE	RCOIRS3:1;
			__BYTE	RCOIRS4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS6:1;
			__BYTE	RCOIRS7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIRS7:1;
			__BYTE	RCOIRS6:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS4:1;
			__BYTE	RCOIRS3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOIRS1:1;
			__BYTE	RCOIRS0:1;
#else
			__BYTE	RCOIRS0:1;
			__BYTE	RCOIRS1:1;
			__BYTE	RESV2:1;
			__BYTE	RCOIRS3:1;
			__BYTE	RCOIRS4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS6:1;
			__BYTE	RCOIRS7:1;
#endif
	} bitc;
} ADRCOIRS00STR;

__IO_EXTENDED __far	  ADRCOIRS00STR	IO_ADRCOIRS00;
#define	_adrcoirs00		(IO_ADRCOIRS00)
#define	ADRCOIRS00		(IO_ADRCOIRS00.byte)
#define	ADRCOIRS00_RCOIRS0  	(IO_ADRCOIRS00.bit.RCOIRS0)
#define	ADRCOIRS00_RCOIRS1  	(IO_ADRCOIRS00.bit.RCOIRS1)
#define	ADRCOIRS00_RCOIRS3  	(IO_ADRCOIRS00.bit.RCOIRS3)
#define	ADRCOIRS00_RCOIRS4  	(IO_ADRCOIRS00.bit.RCOIRS4)
#define	ADRCOIRS00_RCOIRS6  	(IO_ADRCOIRS00.bit.RCOIRS6)
#define	ADRCOIRS00_RCOIRS7  	(IO_ADRCOIRS00.bit.RCOIRS7)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOIRS10, locate=0xE9541
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCOIRS14:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS12:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIRS10:1;
			__BYTE	RCOIRS9:1;
			__BYTE	RCOIRS8:1;
#else
			__BYTE	RCOIRS8:1;
			__BYTE	RCOIRS9:1;
			__BYTE	RCOIRS10:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIRS12:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS14:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RCOIRS14:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS12:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIRS10:1;
			__BYTE	RCOIRS9:1;
			__BYTE	RCOIRS8:1;
#else
			__BYTE	RCOIRS8:1;
			__BYTE	RCOIRS9:1;
			__BYTE	RCOIRS10:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIRS12:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS14:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADRCOIRS10STR;

__IO_EXTENDED __far	  ADRCOIRS10STR	IO_ADRCOIRS10;
#define	_adrcoirs10		(IO_ADRCOIRS10)
#define	ADRCOIRS10		(IO_ADRCOIRS10.byte)
#define	ADRCOIRS10_RCOIRS8  	(IO_ADRCOIRS10.bit.RCOIRS8)
#define	ADRCOIRS10_RCOIRS9  	(IO_ADRCOIRS10.bit.RCOIRS9)
#define	ADRCOIRS10_RCOIRS10  	(IO_ADRCOIRS10.bit.RCOIRS10)
#define	ADRCOIRS10_RCOIRS12  	(IO_ADRCOIRS10.bit.RCOIRS12)
#define	ADRCOIRS10_RCOIRS14  	(IO_ADRCOIRS10.bit.RCOIRS14)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOIRS20, locate=0xE9542
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RCOIRS16:1;
#else
			__BYTE	RCOIRS16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RCOIRS16:1;
#else
			__BYTE	RCOIRS16:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADRCOIRS20STR;

__IO_EXTENDED __far	  ADRCOIRS20STR	IO_ADRCOIRS20;
#define	_adrcoirs20		(IO_ADRCOIRS20)
#define	ADRCOIRS20		(IO_ADRCOIRS20.byte)
#define	ADRCOIRS20_RCOIRS16  	(IO_ADRCOIRS20.bit.RCOIRS16)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADRCOIRS30, locate=0xE9543
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIRS31:1;
			__BYTE	RCOIRS30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOIRS25:1;
			__BYTE	RCOIRS24:1;
#else
			__BYTE	RCOIRS24:1;
			__BYTE	RCOIRS25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS30:1;
			__BYTE	RCOIRS31:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIRS31:1;
			__BYTE	RCOIRS30:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RCOIRS25:1;
			__BYTE	RCOIRS24:1;
#else
			__BYTE	RCOIRS24:1;
			__BYTE	RCOIRS25:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RCOIRS30:1;
			__BYTE	RCOIRS31:1;
#endif
	} bitc;
} ADRCOIRS30STR;

__IO_EXTENDED __far	  ADRCOIRS30STR	IO_ADRCOIRS30;
#define	_adrcoirs30		(IO_ADRCOIRS30)
#define	ADRCOIRS30		(IO_ADRCOIRS30.byte)
#define	ADRCOIRS30_RCOIRS24  	(IO_ADRCOIRS30.bit.RCOIRS24)
#define	ADRCOIRS30_RCOIRS25  	(IO_ADRCOIRS30.bit.RCOIRS25)
#define	ADRCOIRS30_RCOIRS30  	(IO_ADRCOIRS30.bit.RCOIRS30)
#define	ADRCOIRS30_RCOIRS31  	(IO_ADRCOIRS30.bit.RCOIRS31)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC000, locate=0xE9550
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE1:1;
			__BYTE	RCOE1:1;
			__BYTE	RCOS1:2;
			__BYTE	RCOIE0:1;
			__BYTE	RCOE0:1;
			__BYTE	RCOS0:2;
#else
			__BYTE	RCOS0:2;
			__BYTE	RCOE0:1;
			__BYTE	RCOIE0:1;
			__BYTE	RCOS1:2;
			__BYTE	RCOE1:1;
			__BYTE	RCOIE1:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE1:1;
			__BYTE	RCOE1:1;
			__BYTE	RCOS11:1;
			__BYTE	RCOS10:1;
			__BYTE	RCOIE0:1;
			__BYTE	RCOE0:1;
			__BYTE	RCOS01:1;
			__BYTE	RCOS00:1;
#else
			__BYTE	RCOS00:1;
			__BYTE	RCOS01:1;
			__BYTE	RCOE0:1;
			__BYTE	RCOIE0:1;
			__BYTE	RCOS10:1;
			__BYTE	RCOS11:1;
			__BYTE	RCOE1:1;
			__BYTE	RCOIE1:1;
#endif
	} bitc;
} ADCC000STR;

__IO_EXTENDED __far	  ADCC000STR	IO_ADCC000;
#define	_adcc000		(IO_ADCC000)
#define	ADCC000		(IO_ADCC000.byte)
#define	ADCC000_RCOS0  	(IO_ADCC000.bit.RCOS0)
#define	ADCC000_RCOS00  	(IO_ADCC000.bitc.RCOS00)
#define	ADCC000_RCOS01  	(IO_ADCC000.bitc.RCOS01)
#define	ADCC000_RCOE0  	(IO_ADCC000.bit.RCOE0)
#define	ADCC000_RCOIE0  	(IO_ADCC000.bit.RCOIE0)
#define	ADCC000_RCOS1  	(IO_ADCC000.bit.RCOS1)
#define	ADCC000_RCOS10  	(IO_ADCC000.bitc.RCOS10)
#define	ADCC000_RCOS11  	(IO_ADCC000.bitc.RCOS11)
#define	ADCC000_RCOE1  	(IO_ADCC000.bit.RCOE1)
#define	ADCC000_RCOIE1  	(IO_ADCC000.bit.RCOIE1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC010, locate=0xE9551
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE3:1;
			__BYTE	RCOE3:1;
			__BYTE	RCOS3:2;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RCOS3:2;
			__BYTE	RCOE3:1;
			__BYTE	RCOIE3:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE3:1;
			__BYTE	RCOE3:1;
			__BYTE	RCOS31:1;
			__BYTE	RCOS30:1;
			__BYTE	RESV3:1;
			__BYTE	RESV2:1;
			__BYTE	RESV1:1;
			__BYTE	RESV0:1;
#else
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RCOS30:1;
			__BYTE	RCOS31:1;
			__BYTE	RCOE3:1;
			__BYTE	RCOIE3:1;
#endif
	} bitc;
} ADCC010STR;

__IO_EXTENDED __far	  ADCC010STR	IO_ADCC010;
#define	_adcc010		(IO_ADCC010)
#define	ADCC010		(IO_ADCC010.byte)
#define	ADCC010_RCOS3  	(IO_ADCC010.bit.RCOS3)
#define	ADCC010_RCOS30  	(IO_ADCC010.bitc.RCOS30)
#define	ADCC010_RCOS31  	(IO_ADCC010.bitc.RCOS31)
#define	ADCC010_RCOE3  	(IO_ADCC010.bit.RCOE3)
#define	ADCC010_RCOIE3  	(IO_ADCC010.bit.RCOIE3)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC020, locate=0xE9552
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIE4:1;
			__BYTE	RCOE4:1;
			__BYTE	RCOS4:2;
#else
			__BYTE	RCOS4:2;
			__BYTE	RCOE4:1;
			__BYTE	RCOIE4:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RCOIE4:1;
			__BYTE	RCOE4:1;
			__BYTE	RCOS41:1;
			__BYTE	RCOS40:1;
#else
			__BYTE	RCOS40:1;
			__BYTE	RCOS41:1;
			__BYTE	RCOE4:1;
			__BYTE	RCOIE4:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADCC020STR;

__IO_EXTENDED __far	  ADCC020STR	IO_ADCC020;
#define	_adcc020		(IO_ADCC020)
#define	ADCC020		(IO_ADCC020.byte)
#define	ADCC020_RCOS4  	(IO_ADCC020.bit.RCOS4)
#define	ADCC020_RCOS40  	(IO_ADCC020.bitc.RCOS40)
#define	ADCC020_RCOS41  	(IO_ADCC020.bitc.RCOS41)
#define	ADCC020_RCOE4  	(IO_ADCC020.bit.RCOE4)
#define	ADCC020_RCOIE4  	(IO_ADCC020.bit.RCOIE4)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC030, locate=0xE9553
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE7:1;
			__BYTE	RCOE7:1;
			__BYTE	RCOS7:2;
			__BYTE	RCOIE6:1;
			__BYTE	RCOE6:1;
			__BYTE	RCOS6:2;
#else
			__BYTE	RCOS6:2;
			__BYTE	RCOE6:1;
			__BYTE	RCOIE6:1;
			__BYTE	RCOS7:2;
			__BYTE	RCOE7:1;
			__BYTE	RCOIE7:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE7:1;
			__BYTE	RCOE7:1;
			__BYTE	RCOS71:1;
			__BYTE	RCOS70:1;
			__BYTE	RCOIE6:1;
			__BYTE	RCOE6:1;
			__BYTE	RCOS61:1;
			__BYTE	RCOS60:1;
#else
			__BYTE	RCOS60:1;
			__BYTE	RCOS61:1;
			__BYTE	RCOE6:1;
			__BYTE	RCOIE6:1;
			__BYTE	RCOS70:1;
			__BYTE	RCOS71:1;
			__BYTE	RCOE7:1;
			__BYTE	RCOIE7:1;
#endif
	} bitc;
} ADCC030STR;

__IO_EXTENDED __far	  ADCC030STR	IO_ADCC030;
#define	_adcc030		(IO_ADCC030)
#define	ADCC030		(IO_ADCC030.byte)
#define	ADCC030_RCOS6  	(IO_ADCC030.bit.RCOS6)
#define	ADCC030_RCOS60  	(IO_ADCC030.bitc.RCOS60)
#define	ADCC030_RCOS61  	(IO_ADCC030.bitc.RCOS61)
#define	ADCC030_RCOE6  	(IO_ADCC030.bit.RCOE6)
#define	ADCC030_RCOIE6  	(IO_ADCC030.bit.RCOIE6)
#define	ADCC030_RCOS7  	(IO_ADCC030.bit.RCOS7)
#define	ADCC030_RCOS70  	(IO_ADCC030.bitc.RCOS70)
#define	ADCC030_RCOS71  	(IO_ADCC030.bitc.RCOS71)
#define	ADCC030_RCOE7  	(IO_ADCC030.bit.RCOE7)
#define	ADCC030_RCOIE7  	(IO_ADCC030.bit.RCOIE7)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC040, locate=0xE9554
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE9:1;
			__BYTE	RCOE9:1;
			__BYTE	RCOS9:2;
			__BYTE	RCOIE8:1;
			__BYTE	RCOE8:1;
			__BYTE	RCOS8:2;
#else
			__BYTE	RCOS8:2;
			__BYTE	RCOE8:1;
			__BYTE	RCOIE8:1;
			__BYTE	RCOS9:2;
			__BYTE	RCOE9:1;
			__BYTE	RCOIE9:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE9:1;
			__BYTE	RCOE9:1;
			__BYTE	RCOS91:1;
			__BYTE	RCOS90:1;
			__BYTE	RCOIE8:1;
			__BYTE	RCOE8:1;
			__BYTE	RCOS81:1;
			__BYTE	RCOS80:1;
#else
			__BYTE	RCOS80:1;
			__BYTE	RCOS81:1;
			__BYTE	RCOE8:1;
			__BYTE	RCOIE8:1;
			__BYTE	RCOS90:1;
			__BYTE	RCOS91:1;
			__BYTE	RCOE9:1;
			__BYTE	RCOIE9:1;
#endif
	} bitc;
} ADCC040STR;

__IO_EXTENDED __far	  ADCC040STR	IO_ADCC040;
#define	_adcc040		(IO_ADCC040)
#define	ADCC040		(IO_ADCC040.byte)
#define	ADCC040_RCOS8  	(IO_ADCC040.bit.RCOS8)
#define	ADCC040_RCOS80  	(IO_ADCC040.bitc.RCOS80)
#define	ADCC040_RCOS81  	(IO_ADCC040.bitc.RCOS81)
#define	ADCC040_RCOE8  	(IO_ADCC040.bit.RCOE8)
#define	ADCC040_RCOIE8  	(IO_ADCC040.bit.RCOIE8)
#define	ADCC040_RCOS9  	(IO_ADCC040.bit.RCOS9)
#define	ADCC040_RCOS90  	(IO_ADCC040.bitc.RCOS90)
#define	ADCC040_RCOS91  	(IO_ADCC040.bitc.RCOS91)
#define	ADCC040_RCOE9  	(IO_ADCC040.bit.RCOE9)
#define	ADCC040_RCOIE9  	(IO_ADCC040.bit.RCOIE9)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC050, locate=0xE9555
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIE10:1;
			__BYTE	RCOE10:1;
			__BYTE	RCOS10:2;
#else
			__BYTE	RCOS10:2;
			__BYTE	RCOE10:1;
			__BYTE	RCOIE10:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RCOIE10:1;
			__BYTE	RCOE10:1;
			__BYTE	RCOS101:1;
			__BYTE	RCOS100:1;
#else
			__BYTE	RCOS100:1;
			__BYTE	RCOS101:1;
			__BYTE	RCOE10:1;
			__BYTE	RCOIE10:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADCC050STR;

__IO_EXTENDED __far	  ADCC050STR	IO_ADCC050;
#define	_adcc050		(IO_ADCC050)
#define	ADCC050		(IO_ADCC050.byte)
#define	ADCC050_RCOS10  	(IO_ADCC050.bit.RCOS10)
#define	ADCC050_RCOS100  	(IO_ADCC050.bitc.RCOS100)
#define	ADCC050_RCOS101  	(IO_ADCC050.bitc.RCOS101)
#define	ADCC050_RCOE10  	(IO_ADCC050.bit.RCOE10)
#define	ADCC050_RCOIE10  	(IO_ADCC050.bit.RCOIE10)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC060, locate=0xE9556
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIE12:1;
			__BYTE	RCOE12:1;
			__BYTE	RCOS12:2;
#else
			__BYTE	RCOS12:2;
			__BYTE	RCOE12:1;
			__BYTE	RCOIE12:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RCOIE12:1;
			__BYTE	RCOE12:1;
			__BYTE	RCOS121:1;
			__BYTE	RCOS120:1;
#else
			__BYTE	RCOS120:1;
			__BYTE	RCOS121:1;
			__BYTE	RCOE12:1;
			__BYTE	RCOIE12:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADCC060STR;

__IO_EXTENDED __far	  ADCC060STR	IO_ADCC060;
#define	_adcc060		(IO_ADCC060)
#define	ADCC060		(IO_ADCC060.byte)
#define	ADCC060_RCOS12  	(IO_ADCC060.bit.RCOS12)
#define	ADCC060_RCOS120  	(IO_ADCC060.bitc.RCOS120)
#define	ADCC060_RCOS121  	(IO_ADCC060.bitc.RCOS121)
#define	ADCC060_RCOE12  	(IO_ADCC060.bit.RCOE12)
#define	ADCC060_RCOIE12  	(IO_ADCC060.bit.RCOIE12)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC070, locate=0xE9557
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIE14:1;
			__BYTE	RCOE14:1;
			__BYTE	RCOS14:2;
#else
			__BYTE	RCOS14:2;
			__BYTE	RCOE14:1;
			__BYTE	RCOIE14:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RCOIE14:1;
			__BYTE	RCOE14:1;
			__BYTE	RCOS141:1;
			__BYTE	RCOS140:1;
#else
			__BYTE	RCOS140:1;
			__BYTE	RCOS141:1;
			__BYTE	RCOE14:1;
			__BYTE	RCOIE14:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADCC070STR;

__IO_EXTENDED __far	  ADCC070STR	IO_ADCC070;
#define	_adcc070		(IO_ADCC070)
#define	ADCC070		(IO_ADCC070.byte)
#define	ADCC070_RCOS14  	(IO_ADCC070.bit.RCOS14)
#define	ADCC070_RCOS140  	(IO_ADCC070.bitc.RCOS140)
#define	ADCC070_RCOS141  	(IO_ADCC070.bitc.RCOS141)
#define	ADCC070_RCOE14  	(IO_ADCC070.bit.RCOE14)
#define	ADCC070_RCOIE14  	(IO_ADCC070.bit.RCOIE14)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC080, locate=0xE9558
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RESV3:1;
			__BYTE	RCOIE16:1;
			__BYTE	RCOE16:1;
			__BYTE	RCOS16:2;
#else
			__BYTE	RCOS16:2;
			__BYTE	RCOE16:1;
			__BYTE	RCOIE16:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RESV7:1;
			__BYTE	RESV6:1;
			__BYTE	RESV5:1;
			__BYTE	RESV4:1;
			__BYTE	RCOIE16:1;
			__BYTE	RCOE16:1;
			__BYTE	RCOS161:1;
			__BYTE	RCOS160:1;
#else
			__BYTE	RCOS160:1;
			__BYTE	RCOS161:1;
			__BYTE	RCOE16:1;
			__BYTE	RCOIE16:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
#endif
	} bitc;
} ADCC080STR;

__IO_EXTENDED __far	  ADCC080STR	IO_ADCC080;
#define	_adcc080		(IO_ADCC080)
#define	ADCC080		(IO_ADCC080.byte)
#define	ADCC080_RCOS16  	(IO_ADCC080.bit.RCOS16)
#define	ADCC080_RCOS160  	(IO_ADCC080.bitc.RCOS160)
#define	ADCC080_RCOS161  	(IO_ADCC080.bitc.RCOS161)
#define	ADCC080_RCOE16  	(IO_ADCC080.bit.RCOE16)
#define	ADCC080_RCOIE16  	(IO_ADCC080.bit.RCOIE16)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC120, locate=0xE955C
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE25:1;
			__BYTE	RCOE25:1;
			__BYTE	RCOS25:2;
			__BYTE	RCOIE24:1;
			__BYTE	RCOE24:1;
			__BYTE	RCOS24:2;
#else
			__BYTE	RCOS24:2;
			__BYTE	RCOE24:1;
			__BYTE	RCOIE24:1;
			__BYTE	RCOS25:2;
			__BYTE	RCOE25:1;
			__BYTE	RCOIE25:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE25:1;
			__BYTE	RCOE25:1;
			__BYTE	RCOS251:1;
			__BYTE	RCOS250:1;
			__BYTE	RCOIE24:1;
			__BYTE	RCOE24:1;
			__BYTE	RCOS241:1;
			__BYTE	RCOS240:1;
#else
			__BYTE	RCOS240:1;
			__BYTE	RCOS241:1;
			__BYTE	RCOE24:1;
			__BYTE	RCOIE24:1;
			__BYTE	RCOS250:1;
			__BYTE	RCOS251:1;
			__BYTE	RCOE25:1;
			__BYTE	RCOIE25:1;
#endif
	} bitc;
} ADCC120STR;

__IO_EXTENDED __far	  ADCC120STR	IO_ADCC120;
#define	_adcc120		(IO_ADCC120)
#define	ADCC120		(IO_ADCC120.byte)
#define	ADCC120_RCOS24  	(IO_ADCC120.bit.RCOS24)
#define	ADCC120_RCOS240  	(IO_ADCC120.bitc.RCOS240)
#define	ADCC120_RCOS241  	(IO_ADCC120.bitc.RCOS241)
#define	ADCC120_RCOE24  	(IO_ADCC120.bit.RCOE24)
#define	ADCC120_RCOIE24  	(IO_ADCC120.bit.RCOIE24)
#define	ADCC120_RCOS25  	(IO_ADCC120.bit.RCOS25)
#define	ADCC120_RCOS250  	(IO_ADCC120.bitc.RCOS250)
#define	ADCC120_RCOS251  	(IO_ADCC120.bitc.RCOS251)
#define	ADCC120_RCOE25  	(IO_ADCC120.bit.RCOE25)
#define	ADCC120_RCOIE25  	(IO_ADCC120.bit.RCOIE25)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_ADCC150, locate=0xE955F
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE31:1;
			__BYTE	RCOE31:1;
			__BYTE	RCOS31:2;
			__BYTE	RCOIE30:1;
			__BYTE	RCOE30:1;
			__BYTE	RCOS30:2;
#else
			__BYTE	RCOS30:2;
			__BYTE	RCOE30:1;
			__BYTE	RCOIE30:1;
			__BYTE	RCOS31:2;
			__BYTE	RCOE31:1;
			__BYTE	RCOIE31:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	RCOIE31:1;
			__BYTE	RCOE31:1;
			__BYTE	RCOS311:1;
			__BYTE	RCOS310:1;
			__BYTE	RCOIE30:1;
			__BYTE	RCOE30:1;
			__BYTE	RCOS301:1;
			__BYTE	RCOS300:1;
#else
			__BYTE	RCOS300:1;
			__BYTE	RCOS301:1;
			__BYTE	RCOE30:1;
			__BYTE	RCOIE30:1;
			__BYTE	RCOS310:1;
			__BYTE	RCOS311:1;
			__BYTE	RCOE31:1;
			__BYTE	RCOIE31:1;
#endif
	} bitc;
} ADCC150STR;

__IO_EXTENDED __far	  ADCC150STR	IO_ADCC150;
#define	_adcc150		(IO_ADCC150)
#define	ADCC150		(IO_ADCC150.byte)
#define	ADCC150_RCOS30  	(IO_ADCC150.bit.RCOS30)
#define	ADCC150_RCOS300  	(IO_ADCC150.bitc.RCOS300)
#define	ADCC150_RCOS301  	(IO_ADCC150.bitc.RCOS301)
#define	ADCC150_RCOE30  	(IO_ADCC150.bit.RCOE30)
#define	ADCC150_RCOIE30  	(IO_ADCC150.bit.RCOIE30)
#define	ADCC150_RCOS31  	(IO_ADCC150.bit.RCOS31)
#define	ADCC150_RCOS310  	(IO_ADCC150.bitc.RCOS310)
#define	ADCC150_RCOS311  	(IO_ADCC150.bitc.RCOS311)
#define	ADCC150_RCOE31  	(IO_ADCC150.bit.RCOE31)
#define	ADCC150_RCOIE31  	(IO_ADCC150.bit.RCOIE31)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QPCCR0, locate=0xE9780
#endif

__IO_EXTENDED __far	__WORD	IO_QPCCR0;
#define	_qpccr0		(IO_QPCCR0)
#define	QPCCR0	(_qpccr0)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QPRCR0, locate=0xE9782
#endif

__IO_EXTENDED __far	__WORD	IO_QPRCR0;
#define	_qprcr0		(IO_QPRCR0)
#define	QPRCR0	(_qprcr0)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QMPR0, locate=0xE9784
#endif

__IO_EXTENDED __far	__WORD	IO_QMPR0;
#define	_qmpr0		(IO_QMPR0)
#define	QMPR0	(_qmpr0)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QCRL0, locate=0xE9786
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SWAP:1;
			__BYTE	RSEL:1;
			__BYTE	CGSC:1;
			__BYTE	PSTP:1;
			__BYTE	RCM:2;
			__BYTE	PCM:2;
#else
			__BYTE	PCM:2;
			__BYTE	RCM:2;
			__BYTE	PSTP:1;
			__BYTE	CGSC:1;
			__BYTE	RSEL:1;
			__BYTE	SWAP:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SWAP:1;
			__BYTE	RSEL:1;
			__BYTE	CGSC:1;
			__BYTE	PSTP:1;
			__BYTE	RCM1:1;
			__BYTE	RCM0:1;
			__BYTE	PCM1:1;
			__BYTE	PCM0:1;
#else
			__BYTE	PCM0:1;
			__BYTE	PCM1:1;
			__BYTE	RCM0:1;
			__BYTE	RCM1:1;
			__BYTE	PSTP:1;
			__BYTE	CGSC:1;
			__BYTE	RSEL:1;
			__BYTE	SWAP:1;
#endif
	} bitc;
} QCRL0STR;

__IO_EXTENDED __far	  QCRL0STR	IO_QCRL0;
#define	_qcrl0		(IO_QCRL0)
#define	QCRL0		(IO_QCRL0.byte)
#define	QCRL0_PCM  	(IO_QCRL0.bit.PCM)
#define	QCRL0_PCM0  	(IO_QCRL0.bitc.PCM0)
#define	QCRL0_PCM1  	(IO_QCRL0.bitc.PCM1)
#define	QCRL0_RCM  	(IO_QCRL0.bit.RCM)
#define	QCRL0_RCM0  	(IO_QCRL0.bitc.RCM0)
#define	QCRL0_RCM1  	(IO_QCRL0.bitc.RCM1)
#define	QCRL0_PSTP  	(IO_QCRL0.bit.PSTP)
#define	QCRL0_CGSC  	(IO_QCRL0.bit.CGSC)
#define	QCRL0_RSEL  	(IO_QCRL0.bit.RSEL)
#define	QCRL0_SWAP  	(IO_QCRL0.bit.SWAP)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QCRH0, locate=0xE9787
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CGE:2;
			__BYTE	BES:2;
			__BYTE	AWS:2;
			__BYTE	PCRM:2;
#else
			__BYTE	PCRM:2;
			__BYTE	AWS:2;
			__BYTE	BES:2;
			__BYTE	CGE:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CGE1:1;
			__BYTE	CGE0:1;
			__BYTE	BES1:1;
			__BYTE	BES0:1;
			__BYTE	AWS1:1;
			__BYTE	AES0:1;
			__BYTE	PCRM1:1;
			__BYTE	PCRM0:1;
#else
			__BYTE	PCRM0:1;
			__BYTE	PCRM1:1;
			__BYTE	AES0:1;
			__BYTE	AWS1:1;
			__BYTE	BES0:1;
			__BYTE	BES1:1;
			__BYTE	CGE0:1;
			__BYTE	CGE1:1;
#endif
	} bitc;
} QCRH0STR;

__IO_EXTENDED __far	  QCRH0STR	IO_QCRH0;
#define	_qcrh0		(IO_QCRH0)
#define	QCRH0		(IO_QCRH0.byte)
#define	QCRH0_PCRM  	(IO_QCRH0.bit.PCRM)
#define	QCRH0_PCRM0  	(IO_QCRH0.bitc.PCRM0)
#define	QCRH0_PCRM1  	(IO_QCRH0.bitc.PCRM1)
#define	QCRH0_AWS  	(IO_QCRH0.bit.AWS)
#define	QCRH0_AES0  	(IO_QCRH0.bitc.AES0)
#define	QCRH0_AWS1  	(IO_QCRH0.bitc.AWS1)
#define	QCRH0_BES  	(IO_QCRH0.bit.BES)
#define	QCRH0_BES0  	(IO_QCRH0.bitc.BES0)
#define	QCRH0_BES1  	(IO_QCRH0.bitc.BES1)
#define	QCRH0_CGE  	(IO_QCRH0.bit.CGE)
#define	QCRH0_CGE0  	(IO_QCRH0.bitc.CGE0)
#define	QCRH0_CGE1  	(IO_QCRH0.bitc.CGE1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QPCCR1, locate=0xE9790
#endif

__IO_EXTENDED __far	__WORD	IO_QPCCR1;
#define	_qpccr1		(IO_QPCCR1)
#define	QPCCR1	(_qpccr1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QPRCR1, locate=0xE9792
#endif

__IO_EXTENDED __far	__WORD	IO_QPRCR1;
#define	_qprcr1		(IO_QPRCR1)
#define	QPRCR1	(_qprcr1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QMPR1, locate=0xE9794
#endif

__IO_EXTENDED __far	__WORD	IO_QMPR1;
#define	_qmpr1		(IO_QMPR1)
#define	QMPR1	(_qmpr1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QCRL1, locate=0xE9796
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SWAP:1;
			__BYTE	RSEL:1;
			__BYTE	CGSC:1;
			__BYTE	PSTP:1;
			__BYTE	RCM:2;
			__BYTE	PCM:2;
#else
			__BYTE	PCM:2;
			__BYTE	RCM:2;
			__BYTE	PSTP:1;
			__BYTE	CGSC:1;
			__BYTE	RSEL:1;
			__BYTE	SWAP:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	SWAP:1;
			__BYTE	RSEL:1;
			__BYTE	CGSC:1;
			__BYTE	PSTP:1;
			__BYTE	RCM1:1;
			__BYTE	RCM0:1;
			__BYTE	PCM1:1;
			__BYTE	PCM0:1;
#else
			__BYTE	PCM0:1;
			__BYTE	PCM1:1;
			__BYTE	RCM0:1;
			__BYTE	RCM1:1;
			__BYTE	PSTP:1;
			__BYTE	CGSC:1;
			__BYTE	RSEL:1;
			__BYTE	SWAP:1;
#endif
	} bitc;
} QCRL1STR;

__IO_EXTENDED __far	  QCRL1STR	IO_QCRL1;
#define	_qcrl1		(IO_QCRL1)
#define	QCRL1		(IO_QCRL1.byte)
#define	QCRL1_PCM  	(IO_QCRL1.bit.PCM)
#define	QCRL1_PCM0  	(IO_QCRL1.bitc.PCM0)
#define	QCRL1_PCM1  	(IO_QCRL1.bitc.PCM1)
#define	QCRL1_RCM  	(IO_QCRL1.bit.RCM)
#define	QCRL1_RCM0  	(IO_QCRL1.bitc.RCM0)
#define	QCRL1_RCM1  	(IO_QCRL1.bitc.RCM1)
#define	QCRL1_PSTP  	(IO_QCRL1.bit.PSTP)
#define	QCRL1_CGSC  	(IO_QCRL1.bit.CGSC)
#define	QCRL1_RSEL  	(IO_QCRL1.bit.RSEL)
#define	QCRL1_SWAP  	(IO_QCRL1.bit.SWAP)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_QCRH1, locate=0xE9797
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CGE:2;
			__BYTE	BES:2;
			__BYTE	AWS:2;
			__BYTE	PCRM:2;
#else
			__BYTE	PCRM:2;
			__BYTE	AWS:2;
			__BYTE	BES:2;
			__BYTE	CGE:2;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	CGE1:1;
			__BYTE	CGE0:1;
			__BYTE	BES1:1;
			__BYTE	BES0:1;
			__BYTE	AWS1:1;
			__BYTE	AES0:1;
			__BYTE	PCRM1:1;
			__BYTE	PCRM0:1;
#else
			__BYTE	PCRM0:1;
			__BYTE	PCRM1:1;
			__BYTE	AES0:1;
			__BYTE	AWS1:1;
			__BYTE	BES0:1;
			__BYTE	BES1:1;
			__BYTE	CGE0:1;
			__BYTE	CGE1:1;
#endif
	} bitc;
} QCRH1STR;

__IO_EXTENDED __far	  QCRH1STR	IO_QCRH1;
#define	_qcrh1		(IO_QCRH1)
#define	QCRH1		(IO_QCRH1.byte)
#define	QCRH1_PCRM  	(IO_QCRH1.bit.PCRM)
#define	QCRH1_PCRM0  	(IO_QCRH1.bitc.PCRM0)
#define	QCRH1_PCRM1  	(IO_QCRH1.bitc.PCRM1)
#define	QCRH1_AWS  	(IO_QCRH1.bit.AWS)
#define	QCRH1_AES0  	(IO_QCRH1.bitc.AES0)
#define	QCRH1_AWS1  	(IO_QCRH1.bitc.AWS1)
#define	QCRH1_BES  	(IO_QCRH1.bit.BES)
#define	QCRH1_BES0  	(IO_QCRH1.bitc.BES0)
#define	QCRH1_BES1  	(IO_QCRH1.bitc.BES1)
#define	QCRH1_CGE  	(IO_QCRH1.bit.CGE)
#define	QCRH1_CGE0  	(IO_QCRH1.bitc.CGE0)
#define	QCRH1_CGE1  	(IO_QCRH1.bitc.CGE1)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EFER2, locate=0xE97E0
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	INTLBEN:1;
			__WORD	BRGR:1;
			__WORD	FIDPE:1;
			__WORD	DBE:1;
			__WORD	FIDE:1;
			__WORD	LBL2:1;
			__WORD	LBDSF:1;
			__WORD	OSDE:1;
			__WORD	DTSTART:1;
			__WORD	RSTRFM:1;
			__WORD	LBEDGE:1;
			__WORD	ABRE:1;
			__WORD	ENRXHR:1;
			__WORD	ENTXHR:1;
#else
			__WORD	ENTXHR:1;
			__WORD	ENRXHR:1;
			__WORD	ABRE:1;
			__WORD	LBEDGE:1;
			__WORD	RSTRFM:1;
			__WORD	DTSTART:1;
			__WORD	OSDE:1;
			__WORD	LBDSF:1;
			__WORD	LBL2:1;
			__WORD	FIDE:1;
			__WORD	DBE:1;
			__WORD	FIDPE:1;
			__WORD	BRGR:1;
			__WORD	INTLBEN:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	INTLBEN:1;
			__WORD	BRGR:1;
			__WORD	FIDPE:1;
			__WORD	DBE:1;
			__WORD	FIDE:1;
			__WORD	LBL2:1;
			__WORD	LBDSF:1;
			__WORD	OSDE:1;
			__WORD	DTSTART:1;
			__WORD	RSTRFM:1;
			__WORD	LBEDGE:1;
			__WORD	ABRE:1;
			__WORD	ENRXHR:1;
			__WORD	ENTXHR:1;
#else
			__WORD	ENTXHR:1;
			__WORD	ENRXHR:1;
			__WORD	ABRE:1;
			__WORD	LBEDGE:1;
			__WORD	RSTRFM:1;
			__WORD	DTSTART:1;
			__WORD	OSDE:1;
			__WORD	LBDSF:1;
			__WORD	LBL2:1;
			__WORD	FIDE:1;
			__WORD	DBE:1;
			__WORD	FIDPE:1;
			__WORD	BRGR:1;
			__WORD	INTLBEN:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EFER2STR;

__IO_EXTENDED __far	  EFER2STR	IO_EFER2;
#define	_efer2		(IO_EFER2)
#define	EFER2		(IO_EFER2.word)
#define	EFER2_ENTXHR  	(IO_EFER2.bit.ENTXHR)
#define	EFER2_ENRXHR  	(IO_EFER2.bit.ENRXHR)
#define	EFER2_ABRE  	(IO_EFER2.bit.ABRE)
#define	EFER2_LBEDGE  	(IO_EFER2.bit.LBEDGE)
#define	EFER2_RSTRFM  	(IO_EFER2.bit.RSTRFM)
#define	EFER2_DTSTART  	(IO_EFER2.bit.DTSTART)
#define	EFER2_OSDE  	(IO_EFER2.bit.OSDE)
#define	EFER2_LBDSF  	(IO_EFER2.bit.LBDSF)
#define	EFER2_LBL2  	(IO_EFER2.bit.LBL2)
#define	EFER2_FIDE  	(IO_EFER2.bit.FIDE)
#define	EFER2_DBE  	(IO_EFER2.bit.DBE)
#define	EFER2_FIDPE  	(IO_EFER2.bit.FIDPE)
#define	EFER2_BRGR  	(IO_EFER2.bit.BRGR)
#define	EFER2_INTLBEN  	(IO_EFER2.bit.INTLBEN)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_SFTR2, locate=0xE97E6
#endif

__IO_EXTENDED __far	__WORD	IO_SFTR2;
#define	_sftr2		(IO_SFTR2)
#define	SFTR2	(_sftr2)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EIER2, locate=0xE97E8
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TXFIE:1;
			__BYTE	RXFIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	LBSOIE:1;
#else
			__BYTE	LBSOIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXFIE:1;
			__BYTE	TXFIE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TXFIE:1;
			__BYTE	RXFIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	LBSOIE:1;
#else
			__BYTE	LBSOIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXFIE:1;
			__BYTE	TXFIE:1;
#endif
	} bitc;
} EIER2STR;

__IO_EXTENDED __far	  EIER2STR	IO_EIER2;
#define	_eier2		(IO_EIER2)
#define	EIER2		(IO_EIER2.byte)
#define	EIER2_LBSOIE  	(IO_EIER2.bit.LBSOIE)
#define	EIER2_BUSERRIE  	(IO_EIER2.bit.BUSERRIE)
#define	EIER2_PEFRDIE  	(IO_EIER2.bit.PEFRDIE)
#define	EIER2_TXHDIE  	(IO_EIER2.bit.TXHDIE)
#define	EIER2_RXHDIE  	(IO_EIER2.bit.RXHDIE)
#define	EIER2_SYNFEIE  	(IO_EIER2.bit.SYNFEIE)
#define	EIER2_RXFIE  	(IO_EIER2.bit.RXFIE)
#define	EIER2_TXFIE  	(IO_EIER2.bit.TXFIE)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EFER7, locate=0xE9830
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	INTLBEN:1;
			__WORD	BRGR:1;
			__WORD	FIDPE:1;
			__WORD	DBE:1;
			__WORD	FIDE:1;
			__WORD	LBL2:1;
			__WORD	LBDSF:1;
			__WORD	OSDE:1;
			__WORD	DTSTART:1;
			__WORD	RSTRFM:1;
			__WORD	LBEDGE:1;
			__WORD	ABRE:1;
			__WORD	ENRXHR:1;
			__WORD	ENTXHR:1;
#else
			__WORD	ENTXHR:1;
			__WORD	ENRXHR:1;
			__WORD	ABRE:1;
			__WORD	LBEDGE:1;
			__WORD	RSTRFM:1;
			__WORD	DTSTART:1;
			__WORD	OSDE:1;
			__WORD	LBDSF:1;
			__WORD	LBL2:1;
			__WORD	FIDE:1;
			__WORD	DBE:1;
			__WORD	FIDPE:1;
			__WORD	BRGR:1;
			__WORD	INTLBEN:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	INTLBEN:1;
			__WORD	BRGR:1;
			__WORD	FIDPE:1;
			__WORD	DBE:1;
			__WORD	FIDE:1;
			__WORD	LBL2:1;
			__WORD	LBDSF:1;
			__WORD	OSDE:1;
			__WORD	DTSTART:1;
			__WORD	RSTRFM:1;
			__WORD	LBEDGE:1;
			__WORD	ABRE:1;
			__WORD	ENRXHR:1;
			__WORD	ENTXHR:1;
#else
			__WORD	ENTXHR:1;
			__WORD	ENRXHR:1;
			__WORD	ABRE:1;
			__WORD	LBEDGE:1;
			__WORD	RSTRFM:1;
			__WORD	DTSTART:1;
			__WORD	OSDE:1;
			__WORD	LBDSF:1;
			__WORD	LBL2:1;
			__WORD	FIDE:1;
			__WORD	DBE:1;
			__WORD	FIDPE:1;
			__WORD	BRGR:1;
			__WORD	INTLBEN:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EFER7STR;

__IO_EXTENDED __far	  EFER7STR	IO_EFER7;
#define	_efer7		(IO_EFER7)
#define	EFER7		(IO_EFER7.word)
#define	EFER7_ENTXHR  	(IO_EFER7.bit.ENTXHR)
#define	EFER7_ENRXHR  	(IO_EFER7.bit.ENRXHR)
#define	EFER7_ABRE  	(IO_EFER7.bit.ABRE)
#define	EFER7_LBEDGE  	(IO_EFER7.bit.LBEDGE)
#define	EFER7_RSTRFM  	(IO_EFER7.bit.RSTRFM)
#define	EFER7_DTSTART  	(IO_EFER7.bit.DTSTART)
#define	EFER7_OSDE  	(IO_EFER7.bit.OSDE)
#define	EFER7_LBDSF  	(IO_EFER7.bit.LBDSF)
#define	EFER7_LBL2  	(IO_EFER7.bit.LBL2)
#define	EFER7_FIDE  	(IO_EFER7.bit.FIDE)
#define	EFER7_DBE  	(IO_EFER7.bit.DBE)
#define	EFER7_FIDPE  	(IO_EFER7.bit.FIDPE)
#define	EFER7_BRGR  	(IO_EFER7.bit.BRGR)
#define	EFER7_INTLBEN  	(IO_EFER7.bit.INTLBEN)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EIER7, locate=0xE9838
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TXFIE:1;
			__BYTE	RXFIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	LBSOIE:1;
#else
			__BYTE	LBSOIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXFIE:1;
			__BYTE	TXFIE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TXFIE:1;
			__BYTE	RXFIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	LBSOIE:1;
#else
			__BYTE	LBSOIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXFIE:1;
			__BYTE	TXFIE:1;
#endif
	} bitc;
} EIER7STR;

__IO_EXTENDED __far	  EIER7STR	IO_EIER7;
#define	_eier7		(IO_EIER7)
#define	EIER7		(IO_EIER7.byte)
#define	EIER7_LBSOIE  	(IO_EIER7.bit.LBSOIE)
#define	EIER7_BUSERRIE  	(IO_EIER7.bit.BUSERRIE)
#define	EIER7_PEFRDIE  	(IO_EIER7.bit.PEFRDIE)
#define	EIER7_TXHDIE  	(IO_EIER7.bit.TXHDIE)
#define	EIER7_RXHDIE  	(IO_EIER7.bit.RXHDIE)
#define	EIER7_SYNFEIE  	(IO_EIER7.bit.SYNFEIE)
#define	EIER7_RXFIE  	(IO_EIER7.bit.RXFIE)
#define	EIER7_TXFIE  	(IO_EIER7.bit.TXFIE)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EFER8, locate=0xE9840
#endif

typedef union {
	__WORD	word;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	INTLBEN:1;
			__WORD	BRGR:1;
			__WORD	FIDPE:1;
			__WORD	DBE:1;
			__WORD	FIDE:1;
			__WORD	LBL2:1;
			__WORD	LBDSF:1;
			__WORD	OSDE:1;
			__WORD	DTSTART:1;
			__WORD	RSTRFM:1;
			__WORD	LBEDGE:1;
			__WORD	ABRE:1;
			__WORD	ENRXHR:1;
			__WORD	ENTXHR:1;
#else
			__WORD	ENTXHR:1;
			__WORD	ENRXHR:1;
			__WORD	ABRE:1;
			__WORD	LBEDGE:1;
			__WORD	RSTRFM:1;
			__WORD	DTSTART:1;
			__WORD	OSDE:1;
			__WORD	LBDSF:1;
			__WORD	LBL2:1;
			__WORD	FIDE:1;
			__WORD	DBE:1;
			__WORD	FIDPE:1;
			__WORD	BRGR:1;
			__WORD	INTLBEN:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__WORD	RESV15:1;
			__WORD	RESV14:1;
			__WORD	INTLBEN:1;
			__WORD	BRGR:1;
			__WORD	FIDPE:1;
			__WORD	DBE:1;
			__WORD	FIDE:1;
			__WORD	LBL2:1;
			__WORD	LBDSF:1;
			__WORD	OSDE:1;
			__WORD	DTSTART:1;
			__WORD	RSTRFM:1;
			__WORD	LBEDGE:1;
			__WORD	ABRE:1;
			__WORD	ENRXHR:1;
			__WORD	ENTXHR:1;
#else
			__WORD	ENTXHR:1;
			__WORD	ENRXHR:1;
			__WORD	ABRE:1;
			__WORD	LBEDGE:1;
			__WORD	RSTRFM:1;
			__WORD	DTSTART:1;
			__WORD	OSDE:1;
			__WORD	LBDSF:1;
			__WORD	LBL2:1;
			__WORD	FIDE:1;
			__WORD	DBE:1;
			__WORD	FIDPE:1;
			__WORD	BRGR:1;
			__WORD	INTLBEN:1;
			__WORD	RESV14:1;
			__WORD	RESV15:1;
#endif
	} bitc;
} EFER8STR;

__IO_EXTENDED __far	  EFER8STR	IO_EFER8;
#define	_efer8		(IO_EFER8)
#define	EFER8		(IO_EFER8.word)
#define	EFER8_ENTXHR  	(IO_EFER8.bit.ENTXHR)
#define	EFER8_ENRXHR  	(IO_EFER8.bit.ENRXHR)
#define	EFER8_ABRE  	(IO_EFER8.bit.ABRE)
#define	EFER8_LBEDGE  	(IO_EFER8.bit.LBEDGE)
#define	EFER8_RSTRFM  	(IO_EFER8.bit.RSTRFM)
#define	EFER8_DTSTART  	(IO_EFER8.bit.DTSTART)
#define	EFER8_OSDE  	(IO_EFER8.bit.OSDE)
#define	EFER8_LBDSF  	(IO_EFER8.bit.LBDSF)
#define	EFER8_LBL2  	(IO_EFER8.bit.LBL2)
#define	EFER8_FIDE  	(IO_EFER8.bit.FIDE)
#define	EFER8_DBE  	(IO_EFER8.bit.DBE)
#define	EFER8_FIDPE  	(IO_EFER8.bit.FIDPE)
#define	EFER8_BRGR  	(IO_EFER8.bit.BRGR)
#define	EFER8_INTLBEN  	(IO_EFER8.bit.INTLBEN)

#ifdef __IO_DEFINE
#pragma segment FAR_DATA=IO_EIER8, locate=0xE9848
#endif

typedef union {
	__BYTE	byte;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TXFIE:1;
			__BYTE	RXFIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	LBSOIE:1;
#else
			__BYTE	LBSOIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXFIE:1;
			__BYTE	TXFIE:1;
#endif
	} bit;
	struct {
#ifdef __BITFIELD_ORDER_MSB__
			__BYTE	TXFIE:1;
			__BYTE	RXFIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	LBSOIE:1;
#else
			__BYTE	LBSOIE:1;
			__BYTE	BUSERRIE:1;
			__BYTE	PEFRDIE:1;
			__BYTE	TXHDIE:1;
			__BYTE	RXHDIE:1;
			__BYTE	SYNFEIE:1;
			__BYTE	RXFIE:1;
			__BYTE	TXFIE:1;
#endif
	} bitc;
} EIER8STR;

__IO_EXTENDED __far	  EIER8STR	IO_EIER8;
#define	_eier8		(IO_EIER8)
#define	EIER8		(IO_EIER8.byte)
#define	EIER8_LBSOIE  	(IO_EIER8.bit.LBSOIE)
#define	EIER8_BUSERRIE  	(IO_EIER8.bit.BUSERRIE)
#define	EIER8_PEFRDIE  	(IO_EIER8.bit.PEFRDIE)
#define	EIER8_TXHDIE  	(IO_EIER8.bit.TXHDIE)
#define	EIER8_RXHDIE  	(IO_EIER8.bit.RXHDIE)
#define	EIER8_SYNFEIE  	(IO_EIER8.bit.SYNFEIE)
#define	EIER8_RXFIE  	(IO_EIER8.bit.RXFIE)
#define	EIER8_TXFIE  	(IO_EIER8.bit.TXFIE)

#endif