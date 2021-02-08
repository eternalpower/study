

#ifndef _IO_H
#define _IO_H



#include "global.h"

//typedef unsigned   char 	INT8U; 
//typedef unsigned   short  INT16U;

extern INT8U  GUC_UpCallReq;     //���ٱ�־
extern INT8U  GUC_DownCallReq;   //���ٱ�־
extern INT8U  GUC_VisitorReq;    //�ÿͱ�־
extern INT8U  GUC_UnparkReq;     //������־
extern INT8U  GUC_LightReq;      //���Ʊ�־

extern INT8U  GUC_UpBtnBuf;      //���ٰ�ť����
extern INT8U  GUC_DownBtnBuf;    //���ٰ�ť����
extern INT8U  GUC_ParkBtnBuf;    //���ݰ�ť����
extern INT8U  GUC_VisitorBuf;    //�ÿͰ�ť����

extern INT8U  GUC_S1Buf;       
extern INT8U  GUC_S2Buf; 
extern INT8U GUC_TestInput;     
extern INT32U  GucOutWorkTimer;
extern INT8U  GUC_MasterAddr;    //��ʾ���ַ,0--����,��0--����
extern INT8U  GUC_MainAddr;      //�ٻ����ֵ�ַ(CAN���ݵ���λ��)
extern INT8U  GUC_AuxAddr;       //�ٻ���λ��ַ(CAN����ĳ�ֽ��е�λλ��)
extern INT16U GUI_MasterTxID;    //��ʾ�巢��CAN����ʱ�ı�ʶ��,��֡ID

extern void PointInput(void);    //����ɨ��
extern void PointOut(void);      //��ť�ƺ�����״̬�����
extern void  RunLEDMng(void);


#endif

/****************************************************************************************
END OF FILE
****************************************************************************************/

