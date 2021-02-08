/**
  ******************************************************************************
  * @file    iso_can.c 
  * @author  Fengchi  Technology Team
  * @version V1.3.0
  * @date    15-December-2014
  * @brief   led
  ******************************************************************************
  */
#include "global.H"
#include "stm32f0xx.h"
#include "stm32f0xx_can.h"
#include "stm32f0xx_misc.h"

//#define USER_ID_CODE 'b'
#ifdef USER_ID_CODE 
INT8U ID_code;
#endif

INT8U   GUC_CANTxBuf2 = 0;  //??0
INT8U   GUC_CANTxBuf3 = 0;  //??1
INT8U   GUC_CANTxBuf4 = 0;  //??2
INT8U   GUC_CANTxBuf5 = 0;  //??3
INT8U   GUC_CANTxBuf6 = 0;  //??4
INT8U   GUC_CANTxBuf7 = 0;  //??5
INT8U   GUC_CANTxBuf8 = 0;  //??6
INT8U   GUC_CANTxBuf9 = 0;  //??7

INT8U GUC_CANTxReq  = 0;    //CAN发送标志位,0-?????;1-?????

INT8U GUC_CurDir    = 0;    //显示方向,0-???;1-??,???;2-??,???;3-??,???;4-??,???;
INT8U GUC_DispFlr   = 0;    //显示楼层
INT8U GUC_CurFlr    = 0;    //实际楼层
INT8U GUC_UpLight   = 0;    //上召灯,0-?;1-?;
INT8U GUC_DownLight = 0;    //下召灯,0-?;1-?;

STATUS_DATA G_EleStat;      //特殊状态,??????:??,??,??,??,??,??,??,??

INT8U GUC_EleNo = 0;         //??can????????
INT8U GUC_YearHi = 0;        //??can???????????
INT8U GUC_YearLo = 0;        //??can???????????
INT8U GUC_Month = 0;         //??can?????????
INT8U GUC_Day = 0;           //??can????????
INT8U GUC_UpDownSelect = 0;  //??can????????:1-???,0-???

INT8U GUC_DispFlrH = 0;       //三位显示高位
INT8U GUC_DispFlrM = 0;       //三位显示中位
INT8U GUC_DispFlrL = 0;       //三位显示低位
INT8U GUC_MasterAddr1 = 0;

INT8U GUC_TestFlg = 0;       //测试标志位,0-?????;1-????;
INT8U Errcode = 0;           //故障代码
void CANTran(void);

INT8U GUC_RespondTest = 0;   //测试回应
INT8U SUC_BoardScan = 0;     //04板扫描
INT8U HallLrnStat = 0;
INT8U XDoor = 0;
INT8U SafeLoop = 0;
extern INT16U GUC_InitCANTimer;

CanRxMsg  RxMessage[2];
CanTxMsg  TxMessage;

char * const GetVersion()    //?????????,???????????
{
   return "04V16AEB01.02";
}
INT8U VerSendReq = 0;        //??????

void CAN_Config(void)
 {
		GPIO_InitTypeDef  			GPIO_InitStructure;
		NVIC_InitTypeDef  			NVIC_InitStructure;
		CAN_InitTypeDef   			CAN_InitStructure;
		CAN_FilterInitTypeDef   CAN_FilterInitStructure;
	 
		/* CAN NVIC  configuration **************************************************/  
		NVIC_InitStructure.NVIC_IRQChannel = CEC_CAN_IRQn;
		NVIC_InitStructure.NVIC_IRQChannelPriority = 0;
		NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
		NVIC_Init(&NVIC_InitStructure);

		/* Enable clock */
	  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
	  RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN, ENABLE);
	  
		/* Connect CAN pins to AF7 */
		GPIO_PinAFConfig(GPIOA, GPIO_PinSource11, GPIO_AF_4);
		GPIO_PinAFConfig(GPIOA, GPIO_PinSource12, GPIO_AF_4); 

		/* Configure CAN RX pin */
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
		GPIO_Init(GPIOA, &GPIO_InitStructure);
		
		/* Configure CAN TX pin */
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
		GPIO_InitStructure.GPIO_OType  = GPIO_OType_PP;
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
		GPIO_Init(GPIOA, &GPIO_InitStructure);

		/* CAN register init */
		CAN_DeInit(CAN);
		CAN_StructInit(&CAN_InitStructure);
		
		/* CAN cell init */
		CAN_InitStructure.CAN_TTCM = DISABLE;
		CAN_InitStructure.CAN_ABOM = DISABLE;
		CAN_InitStructure.CAN_AWUM = DISABLE;
		CAN_InitStructure.CAN_NART = DISABLE;
		CAN_InitStructure.CAN_RFLM = DISABLE;
		CAN_InitStructure.CAN_TXFP = DISABLE;
		CAN_InitStructure.CAN_Mode = CAN_Mode_Normal;
		CAN_InitStructure.CAN_SJW = CAN_SJW_2tq;
		/* CAN Baudrate = 25KHZ (CAN clocked at 48 MHz) */
		CAN_InitStructure.CAN_BS1 =CAN_BS1_8tq;
		CAN_InitStructure.CAN_BS2 = CAN_BS2_7tq;
		CAN_InitStructure.CAN_Prescaler = 120;
		CAN_Init(CAN, &CAN_InitStructure);

		/* CAN filter init "FIFO0" */
		CAN_FilterInitStructure.CAN_FilterNumber = 0;
		CAN_FilterInitStructure.CAN_FilterMode = CAN_FilterMode_IdMask;
		CAN_FilterInitStructure.CAN_FilterScale = CAN_FilterScale_32bit;
		CAN_FilterInitStructure.CAN_FilterIdHigh = 0x0000;
		CAN_FilterInitStructure.CAN_FilterIdLow = 0x0000;
		CAN_FilterInitStructure.CAN_FilterMaskIdHigh =0x0000;
		CAN_FilterInitStructure.CAN_FilterMaskIdLow = 0x0000;
		CAN_FilterInitStructure.CAN_FilterFIFOAssignment = 0;
		CAN_FilterInitStructure.CAN_FilterActivation = ENABLE;
		CAN_FilterInit(&CAN_FilterInitStructure);
		
//		/* CAN filter init "FIFO1" */
//		CAN_FilterInitStructure.CAN_FilterNumber = 1;
//		CAN_FilterInitStructure.CAN_FilterMode = CAN_FilterMode_IdList;
//		CAN_FilterInitStructure.CAN_FilterScale = CAN_FilterScale_32bit;
//		CAN_FilterInitStructure.CAN_FilterIdHigh = 0x0000;
//		CAN_FilterInitStructure.CAN_FilterIdLow = 0x0000;
//		CAN_FilterInitStructure.CAN_FilterMaskIdHigh = 0x0000;
//		CAN_FilterInitStructure.CAN_FilterMaskIdLow = 0x0000;
//		CAN_FilterInitStructure.CAN_FilterFIFOAssignment = 1;
//		CAN_FilterInitStructure.CAN_FilterActivation = ENABLE;
//		CAN_FilterInit(&CAN_FilterInitStructure);

 
//		/* Transmit Structure preparation */
//		TxMessage.StdId = 0x321;
//		TxMessage.ExtId = 0x00;
//		TxMessage.RTR = CAN_RTR_DATA;
//		TxMessage.IDE = CAN_ID_STD;
//		TxMessage.DLC = 1;
		
		//CANTran();
		CAN_ITConfig(CAN, CAN_IT_FMP0, ENABLE);

//		CAN_ClearITPendingBit(CAN, CAN_IT_FF0);
//		CAN_ITConfig(CAN, CAN_IT_TME, ENABLE);
//		CAN_ITConfig(CAN, CAN_IT_FF0, ENABLE);
		
//		/* Enable FIFO 1 full Interrupt */
//		CAN_ITConfig(CAN, CAN_IT_FF1, ENABLE);
}

void CANRecvMng(CanRxMsg RecvMessage)
{
    INT8U cmd=0;              
    INT8U subcmd=0;           
    INT8U scanbuf = 0;
    static INT8U UpLightBuf1   = 0;  
    static INT8U UpLightBuf2   = 0;  
    static INT8U DownLightBuf1 = 0;  
    static INT8U DownLightBuf2 = 0;  
	
    const static INT16U CallLight [] =   
    {
    	1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768
    };

    cmd    = RecvMessage.Data[1];
    subcmd = RecvMessage.Data[0];
		
    GucOutWorkTimer = 180000;      

    switch(cmd)
    {
        case 1:
            GUC_InitCANTimer = 0; 
            GUC_DispFlr = RecvMessage.Data[2];        
            GUC_CurFlr  = RecvMessage.Data[5];         
            GUC_CurDir  = (RecvMessage.Data[3] & 0x07);	
            G_EleStat.bit.OutOfService = ((RecvMessage.Data[3] & 0x80) != 0 );//??
            G_EleStat.bit.Fault        = ((RecvMessage.Data[4] & 0x02) != 0 );//??
            G_EleStat.bit.OverLoad     = ((RecvMessage.Data[4] & 0x04) != 0 );//??
            G_EleStat.bit.FullLoad     = ((RecvMessage.Data[4] & 0x20) != 0 );//??
            G_EleStat.bit.Park         = ((RecvMessage.Data[3] & 0x20) != 0 );//??
            G_EleStat.bit.Inspection   = ((RecvMessage.Data[4] & 0x01) != 0 );//??
            G_EleStat.bit.Fireman      = ((RecvMessage.Data[4] & 0x08) != 0 );//??
            G_EleStat.bit.Independent  = ((RecvMessage.Data[4] & 0x40) != 0 );//??						
            break;
        case 10:
            GUC_InitCANTimer = 0;   	 
            if(GUC_MasterAddr>=1 && GUC_MasterAddr<= 48) 
            {
                #ifdef USER_ID_CODE                 
                if((subcmd == 1) && (GUC_S1Buf)&&(ID_code == USER_ID_CODE))    
                {
                    GUC_UpLight  =(((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 2) && (GUC_S1Buf)&&(ID_code == USER_ID_CODE))    
                {
                    GUC_DownLight = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                #else
                
                if((subcmd == 1) && (GUC_S1Buf))   
                {
                    GUC_UpLight  =(((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 2) && (GUC_S1Buf))   
                {	
                    GUC_DownLight = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                #endif
            }
           
            if(GUC_MasterAddr >= 49 && GUC_MasterAddr <= 96)
            {
                #ifdef USER_ID_CODE                 
                if((subcmd == 5) && (GUC_S1Buf)&&(ID_code == USER_ID_CODE))    
                {
                    UpLightBuf1 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 6) && (GUC_S1Buf)&&(ID_code == USER_ID_CODE))    
                {
                    DownLightBuf1 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 13) && (GUC_S1Buf) && (ID_code == USER_ID_CODE)) 
                {
                    UpLightBuf2 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 14) && (GUC_S1Buf) && (ID_code == USER_ID_CODE)) 
                {
                    DownLightBuf2 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                #else
                
                if((subcmd == 5) && (GUC_S1Buf))    
                {
                    UpLightBuf1 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 6) && (GUC_S1Buf))    
                {
                    DownLightBuf1 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 13) && (GUC_S1Buf))  
                {
                    UpLightBuf2 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                if((subcmd == 14) && (GUC_S1Buf))  
                {
                    DownLightBuf2 = (((((INT16U)RecvMessage.Data[GUC_MainAddr*2 + 1] << 8) | RecvMessage.Data[GUC_MainAddr*2]) 
                    & CallLight[GUC_AuxAddr]) != 0);
                }
                #endif
                
                GUC_UpLight   = UpLightBuf1 || UpLightBuf2;      
                GUC_DownLight = DownLightBuf1 || DownLightBuf2;  
            }
            
            #ifdef USER_ID_CODE           
            
            if((subcmd == 4) && (GUC_S1Buf))
            {
                ID_code = RecvMessage.Data[4];
            }
            #endif
            if(subcmd == 4)
            {
                Errcode = RecvMessage.Data[7]; 
            }
            break;
        case 133:
            GUC_InitCANTimer = 0;
            GUC_DispFlrH = (RecvMessage.Data[5]);
            GUC_DispFlrM = (RecvMessage.Data[6]);
            GUC_DispFlrL = (RecvMessage.Data[7]);
            break;
        case 134:   
            GUC_InitCANTimer = 0;  
            HallLrnStat = ((RecvMessage.Data[4] & 0x01) == 0x01);
            XDoor = ((RecvMessage.Data[7] & 0x05) != 0);
            break;
        case 170:
            GUC_InitCANTimer = 0;  
            scanbuf = GUC_MasterAddr > 48 ? (GUC_MasterAddr - 48) : GUC_MasterAddr;
            if(subcmd == scanbuf)
            {
                SUC_BoardScan = 0xff;
            }
            break;
        case 220: 
            GUC_InitCANTimer = 0; 
            if((subcmd == 220) && (RecvMessage.Data[2] == 1))
            {
                GUC_TestFlg     = 1;                    
                GUC_RespondTest = 1;                    
            }
            if((subcmd == 220) && (RecvMessage.Data[2] == 0))
            {
                GUC_TestFlg     = 0;                   
                GUC_RespondTest = 1;                  
            }
            if((subcmd == 221) && GUC_TestFlg)
            {
                GUC_DispFlr = RecvMessage.Data[2];          
                GUC_CurDir = GUC_DispFlr % 5;            
            }
            break;        
        case 241: 
            GUC_InitCANTimer = 0;
            if(subcmd == GUC_MasterAddr)
            {                                            
                VerSendReq = 1;                          
            }			
            break;
        default:
        break;
    }
}

void CEC_CAN_IRQHandler()
{
//			if (CAN_GetITStatus(CAN, CAN_IT_TME) != 0) 
//			{ 
//						CAN_ClearITPendingBit(CAN, CAN_IT_TME);
//			}
//			
//			if (CAN_GetITStatus(CAN, CAN_IT_FMP0) != 0) 
//			{
//						CAN_ClearITPendingBit(CAN, CAN_IT_FMP0);
//			}
			
		if(CAN_GetITStatus(CAN, CAN_IT_FMP0) != 0) 
		{
				CAN_ClearITPendingBit(CAN, CAN_IT_FMP0);
				CAN_Receive(CAN, CAN_FIFO0, &RxMessage[0]);
				CANRecvMng(RxMessage[0]);	
		}
		
//		if(CAN_GetITStatus(CAN, CAN_IT_FF1) != 0) 
//		{
//				CAN_ClearITPendingBit(CAN, CAN_FLAG_FMP1);
//			  CAN_Receive(CAN, CAN_FIFO1, &RxMessage[1]);
//				CANRecvMng(RxMessage[1]);
//		}		
			
//			if (CAN_GetITStatus(CAN, CAN_IT_FOV0) != 0) 
//			{
//						CAN_ClearITPendingBit(CAN, CAN_IT_FOV0);
//			}	
}

/**************************************************************************************************
* ??:CANTran
* ??:??CAN??
* ??:?
* ??: CAN??????
* ??:?
***************************************************************************************************/
void CANTran(void)//CAN ?????
{
    INT8U mailbox; //??????
    INT8U transStaut;//??????
    /* transmit */
    TxMessage.StdId   = GUC_MasterAddr+30;				// 设定标准标识符（11位，扩展的为29位）
    TxMessage.RTR = CAN_RTR_DATA;
    TxMessage.IDE = CAN_ID_STD;
    TxMessage.DLC = 8;
    TxMessage.Data[0] = GUC_CANTxBuf2;
    TxMessage.Data[1] = GUC_CANTxBuf3;
    TxMessage.Data[2] = GUC_CANTxBuf4;
    TxMessage.Data[3] = GUC_CANTxBuf5;
    TxMessage.Data[4] = GUC_CANTxBuf6;
    TxMessage.Data[5] = GUC_CANTxBuf7;
    TxMessage.Data[6] = GUC_CANTxBuf8;
    TxMessage.Data[7] = GUC_CANTxBuf9;
    
    mailbox    = CAN_Transmit(CAN, &TxMessage);//??????? ??????????
    if(mailbox == CAN_TxStatus_NoMailBox) //0 1 2 ????
    {
        CAN_Config();
    }
    GUC_CANTxBuf2 = 0;
    GUC_CANTxBuf3 = 0;
    GUC_CANTxBuf4 = 0;
    GUC_CANTxBuf5 = 0;
    GUC_CANTxBuf6 = 0;
    GUC_CANTxBuf7 = 0;
    GUC_CANTxBuf8 = 0;
    GUC_CANTxBuf9 = 0;
}

void CANTranMng(void)
{
	if(GUC_MasterAddr>48)
		GUC_MasterAddr1 = GUC_MasterAddr - 48;
    else 
		GUC_MasterAddr1 = GUC_MasterAddr; 
    if(GUC_RespondTest)                               //??????????????
    {
        GUC_CANTxBuf2   = 220;
        GUC_CANTxBuf3   = 220;
        GUC_CANTxBuf4   = 2;                           //2-??????
        GUC_CANTxReq    = 1;                           //??CAN????????
        GUC_RespondTest = 0;                           //???????
    }
    
    if(GUC_S1Buf && GUC_MasterAddr && !GUC_TestFlg)   //??S1?????,???????(MasterAddr>0),???????
    {
        if(GUC_UpCallReq)                             //????????????
        {
            GUC_CANTxBuf2 = GUC_MasterAddr;            //?????
            GUC_CANTxBuf3 = 150;                       //150???????/????
            
            if (!GUC_UpBtnBuf)                          //?????????
            {
                GUC_CANTxBuf4 = 1;                     //1-????
            }
            else                                       //??????
            {
                GUC_CANTxBuf4 = 0;                     //0-????
            }
            
            #ifdef USER_ID_CODE                        //?????????,?????
            if (ID_code == USER_ID_CODE)           //?????????????????????
            {
                GUC_CANTxBuf5 = USER_ID_CODE;      //?????
                GUC_CANTxReq  = 1;                 //??CAN????????
            }
            #else                                      //??????????,?????
                GUC_CANTxReq  = 1;                     //??CAN????????
            #endif
            
            GUC_UpCallReq = 0;                         //????????
        }
        
        if (GUC_DownCallReq)                           //????????????
        {
            GUC_CANTxBuf2 = GUC_MasterAddr;            //?????
            GUC_CANTxBuf3 = 151;                       //151???????/????
            
            if (!GUC_DownBtnBuf)                        //?????????
            {
                GUC_CANTxBuf4 = 1;                     //1-????
            }
            else                                       //??????
            {
                GUC_CANTxBuf4 = 0;                     //0-????
            }
            
            #ifdef USER_ID_CODE                        //?????????
            if (ID_code == USER_ID_CODE)
            {
                GUC_CANTxBuf5 = USER_ID_CODE;      //?????
                GUC_CANTxReq  = 1;                 //??CAN????????
            }
            #else                                      //??????????
                GUC_CANTxReq  = 1;                     //??CAN????????
            #endif
            
            GUC_DownCallReq = 0;                       //???????
        }
        
        if(SUC_BoardScan)                              //??????????????
        {
            if(!GUC_UpBtnBuf)                          //???????
            {
                GUC_CANTxBuf2 |= 0x01;
            }
            if(!GUC_DownBtnBuf)                        //???????
            {
                GUC_CANTxBuf2 |= 0x02;
            }
            if(!GUC_VisitorBuf)			
            {
                GUC_CANTxBuf2 |= 0x08;
            }			    			
                GUC_CANTxBuf3 = 171;                       //???
                GUC_CANTxBuf4 = GUC_MasterAddr;            //???
                SUC_BoardScan = 0;
            
            #ifdef USER_ID_CODE                        //?????????
            if (ID_code == USER_ID_CODE)
            {
                GUC_CANTxBuf5 = USER_ID_CODE;      //?????
                GUC_CANTxReq  = 1;                 //??CAN????????
            }
            #else                                      //??????????
                GUC_CANTxReq  = 1;                     //??CAN????????
            #endif
        }
        
        if (GUC_ParkBtnBuf && (!G_EleStat.bit.Park))     //??????????????????????
        {
            GUC_CANTxBuf2 = GUC_MasterAddr;            //?????????
            GUC_CANTxBuf3 = 153;                       //153?????
            GUC_CANTxBuf4 = 1;                         //1-??(0-??)        
            GUC_CANTxReq  = 1;                         //??CAN????????
        }
        
        if(GUC_UnparkReq)                             //???????????????????
        {
            GUC_UnparkReq --;
            GUC_CANTxBuf2 = GUC_MasterAddr;            //?????????
            GUC_CANTxBuf3 = 153;                       //153?????
            GUC_CANTxBuf4 = 0;                         //0-??(1-??)            
            GUC_CANTxReq  = 1;                         //??CAN????????
        }        
        if (GUC_VisitorReq && (GUC_CurFlr != GUC_MasterAddr1)) //?????                            
        {            
            GUC_VisitorReq = 0;                   
            GUC_CANTxBuf2  = GUC_MasterAddr;                     
            GUC_CANTxBuf3  = 231;                   
            if(!GUC_VisitorBuf)
				GUC_CANTxBuf4 = 0;
			else               
				GUC_CANTxBuf4 = 1;          
            GUC_CANTxReq   = 1;                      
        }
    }
}

void CANTranVer(void)
{
    if(VerSendReq)                   //??????????
    {
    	INT8U i,k;
    	INT8U version[5] = {0};      //????????????
    	static INT8U j = 0,fraNum = 1;
    	char *p;
    	p = GetVersion();            //p?????????????
    	
    	GUC_CANTxBuf2 = GUC_MasterAddr;
    	GUC_CANTxBuf3 = 242;
    	
    	
    	for(i = 0; i < 5; i++)       //???????
    	{
    		if(p[j] != '\0')         //'\0'?C???,'\0'??????????
    		{	
    			version[i] = p[j];   //??????????
    			j++;
    		}
    		else                    //??????
    		{
    			VerSendReq = 0;     //VerSendReq?0
    			for(k = i; k < 5; k++)//??????????
	 			{
	 				version[k] = 0x03;//?ASCII??,0x03????
	 			}
	 			break;
	    	}
    	}
    	    	
    	GUC_CANTxBuf4 = fraNum++;        //??
    	GUC_CANTxBuf5 = version[0];
    	GUC_CANTxBuf6 = version[1];
    	GUC_CANTxBuf7 = version[2];
    	GUC_CANTxBuf8 = version[3];
    	GUC_CANTxBuf9 = version[4];
    	GUC_CANTxReq  = 1;
    	
    	if(version[4] == 0x03) 
    	{
    		j = 0;
    		fraNum = 1;
    	}
    }
}
/*----------------------------------------END OF FILE---------------------------------------------------*/
