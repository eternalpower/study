/******************************************************************************/
#include "global.H"

#define MODE_4_13	0x00
#define MODE_5_12	0x01
#define MODE_6_11	0x02
#define MODE_7_10	0x03

#define SET_WRITE	0x44		// 0100 0100	????,????,?

#define	SET_ADDR	0xC0		// 1100 0000	????4?,??:00~0D

#define	DISP_CTL_ON		0x8A  //��������
#define	DISP_CTL_OFF	0x80	

extern void delayms(INT16U time);
/******************************************************************************/
//10us��ʱ
void DelayClk(void)
{
    INT16U i;
    for (i = 0; i < 500; i++);
}

//100ns��ʱ
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
* ���ƣ�Write_Data
* ���ܣ����ݶ�д�ĵײ㺯��
* ����˵����1��������wait()������ʱ�����⣺����i=1000ʱ�����ʱ��Ϊ170us������i=10ʱ�����
ʱ��Ϊ2us���ɵó�ʱ�䷶ΧΪ1.7us-2us�����ۼ���ʱ��1��ʱ������Ϊ21ns��1��ָ������Ϊ���ɸ�
�������ڣ�1�����������������ɸ�ʱ�����ڣ���֪1��ָ����������Ϊ21ns��wait()������10��ָ�
��֪������210nsʱ�䣬����Ե�ʱ�����8-10���������ڲ�֪��1��ָ��������Ҫ���ٸ�ʱ�����ڣ�2����
����write_Data(0xff)������ʱ�����⣺���ʱ��Ϊ43us�����ۼ���Ϊ18��wait()������ʱ��+42��
ָ���ʱ�䣬���µó�Ϊ37.4us-44us�������ʱ�������3��������wait()������ʱ�䵽��Ϊ���ٺ���
�����⣺��write_Data()��������4��wait()��ͨ��AIP1668��ʱ��ͼ��֪����4��wait()�Ǳز����ٵģ�
ֻ����������Ҫ��ʱ�䲻ͬ������wait()�Ŵ�20�����ڣ���ʾ���쳣������wait()�Ŵ�50-100��ʱ����
���ԵĿ�����ʾ�쳣��4��������write_Data�����е�wait()�����Ƿ���Ҫ���ĸ�����Ҫ�����⣺��
write_Data�����е�4��wait()��ע�͵���������ʾ���쳣���Դ�ֻ�ܽ���Ϊÿ��ָ��������Ҫʱ�䣬
�պø�ʱ������ʱ������ʱ��Ҫ��5�����ò��Խ��ڳ����½��У����ڸߵ��»��������£���������
ƫ��Ǹ�ƫ���wait()��ʱ��Ӧ������Ҫ�󣬾����Ըߵ��²���Ϊ׼��Ŀǰδ�յ���ʾ�쳣�ķ�������
* �����ˣ��ƹ���
* ���ڣ�2018.03.20
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
