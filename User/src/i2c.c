/******************************************************************************/
#include "global.H"

#define MODE_4_13	0x00
#define MODE_5_12	0x01
#define MODE_6_11	0x02
#define MODE_7_10	0x03

#define SET_WRITE	0x44		// 0100 0100	????,????,?

#define	SET_ADDR	0xC0		// 1100 0000	????4?,??:00~0D

#define	DISP_CTL_ON		0x8A  //调节亮度
#define	DISP_CTL_OFF	0x80	

extern void delayms(INT16U time);
/******************************************************************************/
//10us延时
void DelayClk(void)
{
    INT16U i;
    for (i = 0; i < 500; i++);
}

//100ns延时
void Delay_100ns(void)
{
    INT8U i;
    for(i = 0; i < 5; i++);
}
 void wait(void)
{
	INT8U i = 10;
	while(i--);
}
/* Private variables ---------------------------------------------------------*/


/* Private function prototypes -----------------------------------------------*/
void CS1628_Disp_All(void);
void CS1628_Clear_All(void);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Writes data to the specified GPIO data port.
  * @param  GPIOx: where x can be (A, B, C, D, E or F) to select the GPIO peripheral.
  * @note   GPIOE is available only for STM32F072.
  * @note   GPIOD is not available for STM32F031.  
  * @param  PortVal: specifies the value to be written to the port output data register.
  * @retval None
  */


/**
  * @brief  Writes data to the specified GPIO data port.
  * @param  GPIOx: where x can be (A, B, C, D, E or F) to select the GPIO peripheral.
  * @note   GPIOE is available only for STM32F072.
  * @note   GPIOD is not available for STM32F031.  
  * @param  PortVal: specifies the value to be written to the port output data register.
  * @retval None
  */
 void CS1_Write_Data(unsigned char data)
{
	INT8U i;

	STB1_H;
	CLK1_H;	wait();
	STB1_L;	wait();

	for(i=0;i<8;i++)
	{
		CLK1_L;

		if(data&0x01)	DIO1_H;
		else 			DIO1_L;
		data>>=1;

		wait();
		CLK1_H;		wait();
	}
}

/**
  * @brief  Writes data to the specified GPIO data port.
  * @param  GPIOx: where x can be (A, B, C, D, E or F) to select the GPIO peripheral.
  * @note   GPIOE is available only for STM32F072.
  * @note   GPIOD is not available for STM32F031.  
  * @param  PortVal: specifies the value to be written to the port output data register.
  * @retval None
  */
 /***************************************************************************************
* 名称：Write_Data
* 功能：数据读写的底层函数
* 测试说明：1）、对于wait()函数的时间问题：当将i=1000时，测得时间为170us；当将i=10时，测得
时间为2us，可得出时间范围为1.7us-2us；理论计算时间1个时钟周期为21ns，1个指令周期为若干个
机器周期，1个机器周期又有若干个时钟周期，可知1个指令周期至少为21ns，wait()函数有10条指令，
可知至少需210ns时间，与测试的时间相差8-10倍，是由于不知道1个指令周期需要多少个时钟周期；2）、
对于write_Data(0xff)的运行时间问题：测得时间为43us，理论计算为18个wait()函数的时间+42条
指令的时间，大致得出为37.4us-44us，与测试时间相符；3）、对于wait()函数的时间到底为多少合适
的问题：在write_Data()函数中有4个wait()，通过AIP1668的时序图得知，该4个wait()是必不可少的，
只不过是所需要的时间不同；当将wait()放大20倍以内，显示无异常；而将wait()放大50-100倍时，可
明显的看出显示异常；4）、对于write_Data（）中的wait()到底是否需要或哪个不需要的问题：将
write_Data（）中的4个wait()都注释掉，发现显示无异常，对此只能解释为每条指令运行需要时间，
刚好该时间满足时序所需时间要求；5）、该测试仅在常温下进行，若在高低温环境条件下，不管是正
偏差还是负偏差，该wait()的时间应当满足要求，具体以高低温测试为准（目前未收到显示异常的反馈）。
* 测试人：唐国明
* 日期：2018.03.20
***************************************************************************************/ 
 void CS2_Write_Data(unsigned char data)
{
	INT8U i;

	STB2_H;
	CLK2_H;	wait();
	STB2_L;	wait();

	for(i=0;i<8;i++)
	{
		CLK2_L;

		if(data&0x01)	DIO2_H;
		else 			DIO2_L;
		data>>=1;

		wait();
		CLK2_H;		wait();
	}
}


void CS1628_Display(void)
{
	CS1_Write_Data(DISP_CTL_ON);  
	CS2_Write_Data(DISP_CTL_ON);  
}


void CS1628_NO_Display(void)
{
	CS1_Write_Data(DISP_CTL_OFF);  
	CS2_Write_Data(DISP_CTL_OFF);  
}



void CS1628_CP1_Write(unsigned char addr, unsigned char data)
{
	INT8U i;
	CS1_Write_Data(MODE_7_10);      
	CS1_Write_Data(SET_WRITE);
	CS1_Write_Data(SET_ADDR+addr);

	for(i=0; i<8; i++)
	{
		CLK1_L;//CLK1=0;
		if(data & 0x01)	DIO1_H;//DAT1=1;
		else 			DIO1_L;//DAT1=0;
		data >>= 1;
		wait();
		CLK1_H;//CLK1=1;
		wait();
	}
	STB1_H;//STB1=1; 
}

void CS1628_CP2_Write(unsigned char addr, unsigned char data)
{
	INT8U i;
	CS2_Write_Data(MODE_7_10);      
	CS2_Write_Data(SET_WRITE);
	CS2_Write_Data(SET_ADDR+addr);

	for(i=0; i<8; i++)
	{
		CLK2_L;//CLK1=0;
		if(data & 0x01)	DIO2_H;//DAT1=1;
		else 			DIO2_L;//DAT1=0;
		data >>= 1;
		wait();
		CLK2_H;//CLK1=1;
		wait();
	}
	STB2_H;//STB1=1; 
}



void CS1628_Disp_All(void)
{
	INT8U i;
	for(i=0; i<0x0E; i++)
	{
		CS1628_CP1_Write(i, 0xFF);  
	}
	CS1_Write_Data(DISP_CTL_ON); 
	for(i=0; i<0x0E; i++)
	{
		CS1628_CP2_Write(i, 0xFF);  
	}
	CS2_Write_Data(DISP_CTL_ON); 
}


void CS1628_Clear_All(void)
{
	INT8U i;
	for(i=0; i<0x0E; i++)
	{
		CS1628_CP1_Write(i, 0x00);  
	}
	CS1_Write_Data(DISP_CTL_OFF); 
	for(i=0; i<0x0E; i++)
	{
		CS1628_CP2_Write(i, 0x00);  
	}
	CS2_Write_Data(DISP_CTL_OFF);  
}
/******************************************************************************/
void ht1621_init()
{
    CS1628_Disp_All();
    delayms(2000);
    CS1628_Clear_All();
    delayms(400);		
}

/******************************************************************************/
