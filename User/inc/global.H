/* global.h */

#ifndef  _GLOBAL_H
#define  _GLOBAL_H

//¶¨ÒåÍ¨ÓÃÊı¾İÀàĞÍ
typedef signed   char 	INT8S; 
typedef signed   short  INT16S;
typedef signed   long   INT32S;
typedef float          	FP32;
typedef double         	FP64;
typedef unsigned char 	INT8U;
typedef unsigned int 	  INT16U;
typedef unsigned long 	ulong;
typedef unsigned long 	INT32U;

#include "math.h"
#include "stdio.h"
#include "string.h"

#include "timer.h"
#include "can.h"
#include "display.h"
#include "IO.h"
#include "i2c.h"

#define	SlaveAddress	0x7E		//
#define	ModeSet		0x8D 	//80Hz,turn on sys and LCD bias,1/3 bias
#define	VlcdAdjust	0x72	//Vlcd=0.6VDD,Seg Pin,enable internal voltage
#define	Blink		0xC0	//blink off
//#define PAGE_ADDR (0x0805FC00)
#define PAGE_ADDR (0x08006030)

//ÉèÖÃCPU¶Ë¿Ú  
// LED320SCH_V1.0.0
#define	CLK1_H	GPIOB->ODR |= (1UL<<0)//(GPIO_WriteBit(GPIOB, GPIO_Pin_1, BitAction 1))
#define	CLK1_L	GPIOB->ODR &= ~(1UL<<0)//(GPIO_WriteBit(GPIOB, GPIO_Pin_1, BitAction 0))

#define	DIO1_H	GPIOB->ODR |= (1UL<<1)//(GPIO_WriteBit(GPIOB, GPIO_Pin_0, BitAction 1))
#define	DIO1_L	GPIOB->ODR &= ~(1UL<<1)//(GPIO_WriteBit(GPIOB, GPIO_Pin_0, BitAction 0))

#define	STB1_H	GPIOA->ODR |= (1UL<<7)//((GPIO_WriteBit(GPIOA, GPIO_Pin_7, BitAction 1));)
#define	STB1_L	GPIOA->ODR &= ~(1UL<<7)//(GPIO_WriteBit(GPIOA, GPIO_Pin_7, BitAction 0))

#define	CLK2_H	GPIOA->ODR |= (1UL<<1)//(GPIO_WriteBit(GPIOA, GPIO_Pin_1, BitAction 1))
#define	CLK2_L	GPIOA->ODR &= ~(1UL<<1)//(GPIO_WriteBit(GPIOA, GPIO_Pin_1, BitAction 0))

#define	DIO2_H	GPIOA->ODR |= (1UL<<0)//(GPIO_WriteBit(GPIOA, GPIO_Pin_0, BitAction 1))
#define	DIO2_L	GPIOA->ODR &= ~(1UL<<0)//(GPIO_WriteBit(GPIOA, GPIO_Pin_0, BitAction 0))

#define	STB2_H	GPIOA->ODR |= (1UL<<2)//((GPIO_WriteBit(GPIOA, GPIO_Pin_2, BitAction 1));)
#define	STB2_L	GPIOA->ODR &= ~(1UL<<2)//(GPIO_WriteBit(GPIOA, GPIO_Pin_2, BitAction 0))


#define	CAN_LED	GPIOA->ODR ^= 0x40

#define ADD_MAX	14

 
//#define RunLEDON   (PDR04_P0 = 0,DDR04_D0 = 1)//Êä³ö0
//#define RunLEDOFF  (PDR04_P0 = 1,DDR04_D0 = 1)//Êä³ö1
#define CanLedON   GPIOB->BRR  = GPIO_Pin_4        //Êä³ö0
#define CanLedOFF  GPIOB->BSRR = GPIO_Pin_4        //Êä³ö1
#define BGCONTROL_1  GPIOB->BSRR = GPIO_Pin_3       //±³¹â
#define BGCONTROL_0  GPIOB->BRR = GPIO_Pin_3        //±³¹â

//#define  S1         £¨GPIOA->IDR & GPIO_Pin_4£©       								//ÌøÏßÃ±
//#define  In0        £¨GPIOA->IDR & GPIO_Pin_3£©                       //ÉÏÕÙÊäÈë
//#define  In1        £¨GPIOA->IDR & GPIO_Pin_2£©                       //ÏÂÕÙÊäÈë
//#define  In2        £¨GPIOA->IDR & GPIO_Pin_1£©                       //ËøÌİÊäÈë
//#define  In3        £¨GPIOA->IDR & GPIO_Pin_0£©                       //·Ã¿ÍÊäÈë

#define  ovl        GPIO_ReadInputDataBit(GPIOA,  GPIO_Pin_6)   	             //¹ıÁ÷±£»¤
#define  S1         GPIO_ReadInputDataBit(GPIOA,  GPIO_Pin_5)   	             //ÌøÏßÃ±
#define  In0        GPIO_ReadInputDataBit(GPIOA,  GPIO_Pin_4)                  //ÉÏÕÙÊäÈë
#define  In1        GPIO_ReadInputDataBit(GPIOB,  GPIO_Pin_5)                  //ÏÂÕÙÊäÈë
//#define  In2        GPIO_ReadInputDataBit(GPIOA,  GPIO_Pin_1)                //ËøÌİÊäÈë
#define  In2        GPIO_ReadInputDataBit(GPIOB,  GPIO_Pin_3)                  //·Ã¿ÍÊäÈë£¬¸ßµçÆ½ÓĞĞ§
#define  In3        GPIO_ReadInputDataBit(GPIOB,  GPIO_Pin_4)                  //ËøÌİÊäÈë£¬¸ßµçÆ½ÓĞĞ§

#define  Outl0_1    GPIOA->BSRR = GPIO_Pin_3          //ÉÏÕÙµãµÆ   
#define  Outl0_0    GPIOA->BRR = GPIO_Pin_3          //ÉÏÕÙµãµÆÆ 
#define  Outl1_1    GPIOB->BSRR = GPIO_Pin_6          //ÏÂÕÙµãµÆ
#define  Outl1_0    GPIOB->BRR = GPIO_Pin_6          //ÏÂÕÙµãµÆ
//#define  Outl2_1    GPIOB->BSRR = GPIO_Pin_0          //STµÆ
//#define  Outl2_0    GPIOB->BRR = GPIO_Pin_0          //STµÆ
//#define  Outl3_1    GPIOA->BSRR & GPIO_Pin_7         //JNµÆ
//#define  Outl3_0    GPIOA->BRR & GPIO_Pin_7          //JNµÆ

#define  Outl0    GPIO_ReadOutputDataBit(GPIOA,  GPIO_Pin_3)
#define  Outl1		GPIO_ReadOutputDataBit(GPIOB,  GPIO_Pin_6)
//#define  Outl2		GPIO_ReadOutputDataBit(GPIOB,  GPIO_Pin_0)
//#define  Outl3		GPIO_ReadOutputDataBit(GPIOA,  GPIO_Pin_7)

//#define  ovl         PDR06_P1

//ÉèÖÃ¶¨Ê±Æ÷±àºÅ
#define  UP_CALL              0     //ÉÏÕÙĞÅºÅ·¢³öÑÓÊ±¼ÆÊıÆ÷
#define  UP_CALL_RELEASE1     1     //ÉÏÕÙËÉ¿ªĞÅºÅÑÓÊ±¼ÆÊıÆ÷
#define  UP_CALL_RELEASE2     2     //ÔÙ´Î·¢ÉÏÕÙËÉ¿ªĞÅºÅÑÓÊ±¼ÆÊıÆ÷
#define  DN_CALL              3     //ÏÂÕÙĞÅºÅ·¢³öÑÓÊ±¼ÆÊıÆ÷
#define  DN_CALL_RELEASE1     4     //ÏÂÕÙËÉ¿ªĞÅºÅÑÓÊ±¼ÆÊıÆ÷
#define  DN_CALL_RELEASE2     5     //ÔÙ´Î·¢ÏÂÕÙËÉ¿ªĞÅºÅÑÓÊ±¼ÆÊıÆ÷

extern INT16U GUC_SoftTimer;
extern INT16U GUC_InitCANTimer;     //can¸´Î»¶¨Ê±Æ÷

#endif
