/**
  ******************************************************************************
  * @file    main.c 
  * @author  Fengchi  Technology Team
  * @version V1.0.0
  * @date    15-December-2014
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "global.H"
#include "iso_led.h"
#include <stm32f0xx.h>
#include "stm32f0xx_flash.h"
#include "stm32f0xx_iwdg.h"

INT16U GUC_SoftTimer = 0;            //?????
INT16U GUC_InitCANTimer = 0;         //can?????
static INT16U GUC_OVLTimer = 0;      // ???????
extern INT8U SUC_DispVRam[2][3];      //?????????

static INT8U SUC_InitCANFlg = 0;     //????1?,??InitCAN()??
static INT8U SUC_PointInputFlg = 0;  //????1?,??PointInput()??
static INT8U SUC_DispMngFlg = 0;     //????1?,??DisplayManager()??
static INT8U GUC_PointInputOff;
INT8U DisplayIndex = 0;
static INT16U  FaultDispTimer = 0;    //???????
extern void ht1621_init(void);
extern INT8U  GUC_FaultDispFlg ;
INT16U Flash_Read(uint32_t Address)                                
{
		return *(uint16_t *)Address;                                                                                                        
}
void WDG_Config(void)
{
		IWDG_WriteAccessCmd(IWDG_WriteAccess_Enable);
		IWDG_SetPrescaler(IWDG_Prescaler_32);
		IWDG_SetReload(40000/64);
		IWDG_ReloadCounter();
		IWDG_Enable();
}
/***************************************************************************************
* 名称：delayus（）
* 功能：延时函数
* 备注：delayus(1)延时1us，delayus(1000)延时1000us，即1ms
***************************************************************************************/
void delayus(INT16U time)    
{
    INT16U   i,j;
    for (i = 0; i < time; i++)
    {
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();            
        __nop();
        __nop();
        __nop();            
        __nop();
        
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();            
        __nop();
        __nop();
        __nop();            
        __nop();  
        
        __nop();
    }    
}
/***************************************************************************************
* 名称：delayms（）
* 功能：延时函数
* 备注：delayms(1)延时1ms，delayms(1000)延时1000ms，即1s
***************************************************************************************/
void delayms(INT16U time)
{
    INT16U   i;
    for (i = 0; i < time; i++)
    {
        delayus(1000);
    }        
}
void InitCPU()
{
    GUC_MasterAddr = Flash_Read(PAGE_ADDR);
    if(GUC_MasterAddr > 96)GUC_MasterAddr = 0;//???FF
    GUI_MasterTxID = ((((30 + GUC_MasterAddr) << 13) & 0xffff) | ((30 + GUC_MasterAddr) >> 3));
    if (GUC_MasterAddr>=1 && GUC_MasterAddr <= 48)      //??(1-48?)
    {
        GUC_MainAddr = ((GUC_MasterAddr-1)  >> 4) + 1; //???????
        GUC_AuxAddr  = ((GUC_MasterAddr-1) & 0x0f);     //???????
    }

    if (GUC_MasterAddr>=49 && GUC_MasterAddr<=96)       //??(1-48?)
    {
        GUC_MainAddr = ((GUC_MasterAddr - 49) >> 4) + 1;
        GUC_AuxAddr  = (GUC_MasterAddr - 49) & 0x0f;
    }
	}
  
//1ms定时器中断
void SysTick_Handler(void)
{
    PointOut();
    GUC_SoftTimer++;       
    
    if((GUC_SoftTimer%20)==0)
    {
        if (CAN->ESR & 0x06) //????  ???CAN
        {
            CAN_Config();
        }
        CANTranVer();    
    }
    
    if ((GUC_SoftTimer%100)== 0)
    {
        SUC_DispMngFlg = 1;
    }    
    
    if (GUC_LightReq == 0)  GUC_OVLTimer++;
    if (GUC_OVLTimer == 2000) 
    {
        GUC_LightReq = 1;
        GUC_OVLTimer = 0;
    }
    GUC_InitCANTimer++;
    if (GUC_InitCANTimer >= 3000)
    {
        GUC_InitCANTimer = 0;
        SUC_InitCANFlg = 1;
    }  
    GUC_PointInputOff = !GUC_PointInputOff;
    if(GUC_PointInputOff)
    {
        SUC_PointInputFlg = 1;
    } 
    
    if(GucOutWorkTimer)
    {
        GucOutWorkTimer--;
    }  
    if(G_EleStat.bit.Fault)
    {
        FaultDispTimer++;
        if (FaultDispTimer == 1000)
        {
            GUC_FaultDispFlg = !GUC_FaultDispFlg;
            FaultDispTimer = 0;
        }
    }
    else GUC_FaultDispFlg = 1;
}

int main(void)
{
    if (FLASH_OB_GetRDP() != SET)
    {
        FLASH_Unlock();
        FLASH_OB_Unlock();
        FLASH_OB_RDPConfig(OB_RDP_Level_1);
        FLASH_OB_Launch();
        FLASH_OB_Lock();
        FLASH_Lock();
    }
    SystemInit ();
    SysTick_Config(SystemCoreClock / 1000);
    CAN_Config();
    
    LED_GPIO_Config();	
    ht1621_init();
    InitCPU();
    WDG_Config();
    
    while (1)
    {
        IWDG_ReloadCounter();
        
        if(SUC_InitCANFlg)		
        {
            CAN_Config();
            SUC_InitCANFlg = 0;
        }
        if(SUC_DispMngFlg)
        {
            DisplayManager();
            SUC_DispMngFlg = 0;
        }
        if(GUC_CANTxReq)      
        {
            CANTran();
            GUC_CANTxReq = 0;
        }
        if(SUC_PointInputFlg)
        {
            PointInput();
            CANTranMng();
            SUC_PointInputFlg = 0;
        }
    }
}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
