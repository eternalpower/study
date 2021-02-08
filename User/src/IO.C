#include "global.H"
#include "stm32f0xx_flash.h"
#include "stm32f0xx_iwdg.h"

INT8U GUC_UpCallReq   = 0;    //上召标志
INT8U GUC_DownCallReq = 0;    //下召标志
INT8U GUC_UnparkReq   = 0;    //解锁标志
INT8U GUC_VisitorReq  = 0;    //访客标志
INT8U GUC_LightReq    = 0;    //亮灯标志

INT8U GUC_UpBtnBuf   = 1;     //上召按钮缓存
INT8U GUC_DownBtnBuf = 1;     //下召按钮缓存
INT8U GUC_ParkBtnBuf = 0;     //锁梯按钮缓存
INT8U GUC_VisitorBuf = 1;     //访客按钮缓存
INT8U GUC_S1Buf = 1;          //S1跳线缓存,用于修改显示板的地址
//INT8U GUC_S2Buf = 1;          //S2跳线缓存,用于修改显示板的地址
INT8U GUC_TestInput = 0;
INT8U GUC_MasterAddr = 0 ;    //显示板地址,0表示该显示板放在轿内,非0数字表示显示板所放置的楼层

//通过以下2个变量确定哪个召唤灯亮/灭
INT8U GUC_MainAddr = 0 ;      //召唤灯字地址(CAN数据的字位置)
INT8U GUC_AuxAddr  = 0;       //召唤灯位地址(CAN数据某字节中的位位置)

INT16U  GUI_MasterTxID = 0;   //显示板发送CAN数据时的标识符,即帧ID
INT8U S1Jumpbuf;
INT16U XFireCnt = 0;
INT32U  GucOutWorkTimer = 180000;
static  INT8U  enResult = 0;         //用于设置地址

/****************************************************************************************
* 名称：PointInput
* 功能：按键扫描(判断按键是否按下;显示板地址修改),2ms执行1次
* 输入: 全局变量:
*               上召按扭In0
*               下召按扭In1
*               锁梯按扭In2
*               访客拨码SW1-1
*
* 输出: 影响全局变量:
*               上召按扭请求GUC_UpCallReq
*               下召按扭请求GUC_DownCallReq
*               锁梯GUC_UnparkReq
*               访客请求GUC_VisitorReq
*               显示板地址修改GUC_MasterAddr
* 返回：无
****************************************************************************************/
void PointInput(void)                         //2ms执行一次
{
    static INT8U count[8] = {0};
    INT8U  upb_temp = 0;
    INT8U downb_temp = 0;
    //上召按钮
    if(GUC_S1Buf == 0)                        //S1跳线跳上
    {
        upb_temp = In0 | Outl0;               // 解决三线按钮S1短接时，输入给输出导致无法设地址的问题
        if(GUC_UpBtnBuf != upb_temp)         //上召按扭发生变化
        {
            count[0]++;
            if(count[0] > 75)              //软件滤波150ms,起到去抖作用
            {
                count[0] = 0 ;
                GUC_UpBtnBuf = upb_temp;                
                if(!GUC_UpBtnBuf)           //拨码开关SW12设置为ON时上召按钮起到增加主机地址的作用
                {
                    GUC_MasterAddr++;                
                    if(GUC_MasterAddr > 96) GUC_MasterAddr = 0;            				
                }
            }
        }
        else
        count[0] = 0;
    }
    else                                    //拨码开关SW12设置为OFF
    {
        upb_temp = In0 | GUC_UpLight;   //将上召灯信号与上召按扭相或，实现当按扭灯输出时，按扭失效，减少CAN信息量
        if(GUC_UpBtnBuf != upb_temp)
        {
            count[0]++;
            if(count[0] > 15)
            {
                count[0] = 0;
                if(In0 == 0)
                {
                    GUC_UpBtnBuf = In0;
                }
                else
                {
                    count[5]++;
                    if(count[5] == 5)
                    {
                        count[5] = 0;
                        GUC_UpBtnBuf = In0;
                    }
                }
            }
        }
        else
        {
            count[0] = 0;
            count[5] = 0;
        }        
        GUC_UpCallReq = (ptimes(UP_CALL,!GUC_UpBtnBuf,1) | ptimes(UP_CALL_RELEASE1,GUC_UpBtnBuf,1) | ptimes(UP_CALL_RELEASE2,GUC_UpBtnBuf,150));
        //GUC_UpBtnBuf有变化及按钮释放信号发送后的300ms，GUC_UpCallReq置1
    }    
    //下召按钮
    if(GUC_S1Buf == 0)
    {
        downb_temp = In1 | Outl1;
        if(GUC_DownBtnBuf != downb_temp)       //下召按扭发生变化
        {
            count[1]++;
            if(count[1] > 75)
            {
                count[1] = 0 ;
                GUC_DownBtnBuf = downb_temp;                
                if(!GUC_DownBtnBuf)
                {
                    GUC_MasterAddr--;                
                    if (GUC_MasterAddr > 150)//取值150,是为了保证当GUC_MasterAddr=0时,执行GUC_MasterAddr自减1
                    //的结果不超过96,在此前提下,此条件判断的边界也可以取其它值
                    GUC_MasterAddr = 96;
                }
            }
        }
        else
        count[1] = 0;
    }
    else
    {
        downb_temp = In1 | GUC_DownLight;  //将下召灯信号与下召按扭相或，实现当按扭灯输出时，按扭失效，减少CAN信息量
        if(GUC_DownBtnBuf != downb_temp)
        {
            count[1]++;
            if (count[1] > 15)             //按键防抖动
            {
                count[1] = 0;
                if (In1 == 0)
                {
                    GUC_DownBtnBuf = In1;
                }
                else
                {
                    count[6]++;
                    if (count[6] == 5)
                    {
                        count[6] = 0;
                        GUC_DownBtnBuf = In1;
                    }
                }
            }
        }
        else
        {
            count[1] = 0;
            count[6] = 0;
        }        
        GUC_DownCallReq = (ptimes(DN_CALL,!GUC_DownBtnBuf,1) | ptimes(DN_CALL_RELEASE1,GUC_DownBtnBuf,1) | ptimes(DN_CALL_RELEASE2,GUC_DownBtnBuf,150));
        //GUC_DownBtnBuf有变化及按钮释放信号发送后的300ms，GUC_DownCallReq置1
    }    
    //锁梯按扭    
    if(GUC_ParkBtnBuf != In2)               //锁梯按扭
    {
        count[2]++;
        if(count[2] > 45) //软件滤波90ms：当群控时，群控继电器转换板转换时，如果防抖时间太短，会导致锁梯信号发出，主板处于锁梯状态                  
        {
            count[2] = 0;
            if(In2) 
            {
                count[7] ++;
                if(count[7] == 15)
                {
                    count[7] = 0;
                    GUC_ParkBtnBuf = In2;
                }
            }
            else GUC_ParkBtnBuf = In2;
            //if (!GUC_ParkBtnBuf)GUC_UnparkReq = 3;  	
            if (!GUC_ParkBtnBuf)GUC_UnparkReq = 10;  
        }
    }
    else
    {
        count[2] = 0;
        count[7] = 0;
    }
    
    if(GUC_VisitorBuf != In3)                //访客按扭
    {
        count[3]++;
        if(count[3] > 15)
        {
            count[3] = 0;
            GUC_VisitorBuf = In3;
//            if(GUC_VisitorBuf)              //高电平有效
//            {
//                GUC_VisitorReq = 1;
//            }
        }
    }
    else count[3] = 0;
    GUC_VisitorReq  = ((ptimes(6,!GUC_VisitorBuf,1) | ptimes(7,!GUC_VisitorBuf,150) | ptimes(8,GUC_VisitorBuf,1) | ptimes(9,GUC_VisitorBuf,150)) );

	
    if (GUC_S1Buf != S1)
    {
        count[4]++;
        if(count[4] > 15)
        {
            count[4] = 0;
            GUC_S1Buf = S1;
        }
    }
    else count[4] = 0;
    
    if (GUC_S1Buf == 0)                       //设置本机地址
    {       
        if(GUC_MasterAddr > 96) GUC_MasterAddr = 0;
        GUI_MasterTxID = ((((30 + GUC_MasterAddr) << 13) & 0xffff) | ((30 + GUC_MasterAddr) >> 3)); 
        if(GUC_MasterAddr>=1 && GUC_MasterAddr <= 48)      //前门(1-48层)
        {
            GUC_MainAddr = ((GUC_MasterAddr-1)  >> 4) + 1; //召唤灯的字地址
            GUC_AuxAddr  = ((GUC_MasterAddr-1) & 0x0f);     //召唤灯的位地址
        }        
        if(GUC_MasterAddr>=49 && GUC_MasterAddr<=96)       //后门(1-48层)
        {
            GUC_MainAddr = ((GUC_MasterAddr - 49) >> 4) + 1;
            GUC_AuxAddr  = (GUC_MasterAddr - 49) & 0x0f;
        }
    }
    
    if(S1Jumpbuf && !GUC_S1Buf)
    {
        IWDG_ReloadCounter();    
        FLASH_Unlock();
        FLASH_ErasePage(PAGE_ADDR);
        enResult = 1;
    }
    
    if(!S1Jumpbuf && GUC_S1Buf)
    {
        if(enResult)
        {
            enResult = 0;
            FLASH_ProgramHalfWord(PAGE_ADDR, GUC_MasterAddr);
            FLASH_Lock();
        }
    }
    S1Jumpbuf = GUC_S1Buf;    
}
/*************************************************
* 名称：PointOut
* 功能：按钮灯输出
* 输入：无
* 输出: 上召灯,下召灯，轿外显示OutOfService灯，满载灯；
*       轿内显示超载灯，消防员灯
* 返回：无
**************************************************/
#pragma inline PointOut
void PointOut(void)
{    
    if(ovl == 0)              //过流时,所有的输出都清除
    {
        GUC_LightReq = 0;
        Outl0_0;
        Outl1_0;        
    }
    else
    {
        if(GUC_TestFlg)//
        {
            if(In0 == 0)//端口0输入 上召
            {
                GUC_TestInput = 1;
            }
            if(In1 == 0)//端口1输入 下召
            {
                GUC_TestInput = 2;
            }
            if(In2 == 1)//端口2输入 锁梯
            {
                GUC_TestInput = 4;
            }
            if(In3 == 1)//端口2输入 访客
            {
                GUC_TestInput = 3;
            }            
            if(In0 && In1 && !In2 && !In3)
            {
                GUC_TestInput = 0;
            }
            if((!GUC_UpBtnBuf) && GUC_LightReq) Outl0_1;
            else Outl0_0;
            if((!GUC_DownBtnBuf) && GUC_LightReq) Outl1_1;
            else Outl1_0;            
        }
        else
        {            
            if(!GUC_S1Buf)                       //当S1短接时，按钮灯本来输出的不输出
            {
                if((!GUC_UpBtnBuf) && GUC_LightReq) Outl0_1;
                else Outl0_0;
                if((!GUC_DownBtnBuf) && GUC_LightReq) Outl1_1;
                else Outl1_0;
                //Outl2 = (!GUC_ParkBtnBuf) && GUC_LightReq;
                //Outl3 = (!In3) && GUC_LightReq;
            }
            else            
            {
                if(GUC_UpLight&& GUC_LightReq) Outl0_1;
                else Outl0_0;
                if(GUC_DownLight&& GUC_LightReq) Outl1_1;
                else Outl1_0;            
            }
        }        
    }
}
/****************************************************************************************
END OF FILE
****************************************************************************************/