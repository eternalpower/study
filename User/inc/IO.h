

#ifndef _IO_H
#define _IO_H



#include "global.h"

//typedef unsigned   char 	INT8U; 
//typedef unsigned   short  INT16U;

extern INT8U  GUC_UpCallReq;     //上召标志
extern INT8U  GUC_DownCallReq;   //下召标志
extern INT8U  GUC_VisitorReq;    //访客标志
extern INT8U  GUC_UnparkReq;     //解锁标志
extern INT8U  GUC_LightReq;      //亮灯标志

extern INT8U  GUC_UpBtnBuf;      //上召按钮缓存
extern INT8U  GUC_DownBtnBuf;    //下召按钮缓存
extern INT8U  GUC_ParkBtnBuf;    //锁梯按钮缓存
extern INT8U  GUC_VisitorBuf;    //访客按钮缓存

extern INT8U  GUC_S1Buf;       
extern INT8U  GUC_S2Buf; 
extern INT8U GUC_TestInput;     
extern INT32U  GucOutWorkTimer;
extern INT8U  GUC_MasterAddr;    //显示板地址,0--轿内,非0--厅外
extern INT8U  GUC_MainAddr;      //召唤灯字地址(CAN数据的字位置)
extern INT8U  GUC_AuxAddr;       //召唤灯位地址(CAN数据某字节中的位位置)
extern INT16U GUI_MasterTxID;    //显示板发送CAN数据时的标识符,即帧ID

extern void PointInput(void);    //按键扫描
extern void PointOut(void);      //按钮灯和其他状态灯输出
extern void  RunLEDMng(void);


#endif

/****************************************************************************************
END OF FILE
****************************************************************************************/

