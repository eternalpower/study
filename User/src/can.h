/**************************************************************************************************
* can.h
*
* �汾��ʷ
*
* �汾��      ����       �޸���            ����
* 1.00     2006.12.05   ���ƽ     	ģ�黯�ĵ�һ�ΰ汾
*                                   �ʺ�SmartCom II CAN Bus Protocol V4ͨѶЭ��
*								    ��׼���������������ƣ��������ư��ա��淶���޸ģ�
*                                   ������һ�����޸ģ�
**************************************************************************************************/

#ifndef __can_h__
#define __can_h__




//CAN���ݷ��ͻ��������
extern INT8U	GUC_CANTxBuf2;  //�ֽ�0
extern INT8U	GUC_CANTxBuf3;  //�ֽ�1
extern INT8U	GUC_CANTxBuf4;  //�ֽ�2
extern INT8U	GUC_CANTxBuf5;  //�ֽ�3
extern INT8U	GUC_CANTxBuf6;  //�ֽ�4
extern INT8U	GUC_CANTxBuf7;  //�ֽ�5
extern INT8U	GUC_CANTxBuf8;  //�ֽ�6
extern INT8U	GUC_CANTxBuf9;  //�ֽ�7

extern INT8U 	GUC_CANTxReq;      //CAN���ݷ��������־,0-�޷�������;1-�з�������

extern INT8U 	GUC_CurDir;        //��ʾ����,0-�޷���;1-����,δ����;2-����,������;3-����,������;4-����,δ����;
extern INT8U 	GUC_DispFlr;       //��ʾ¥��
extern INT8U 	GUC_CurFlr;        //ʵ��¥��
extern INT8U 	GUC_UpLight;       //���ٵ�״̬,0-��;1-��;
extern INT8U 	GUC_DownLight;     //���ٵ�״̬,0-��;1-��;

extern INT8U 	GUC_EleNo;         //ͨ��canͨѶ�õ��ı��ݺ�
extern INT8U 	GUC_YearHi;        //ͨ��canͨѶ�õ��ĵ�ǰ��ݸ�λ
extern INT8U 	GUC_YearLo;        //ͨ��canͨѶ�õ��ĵ�ǰ��ݵ�λ
extern INT8U 	GUC_Month;         //ͨ��canͨѶ�õ��ĵ�ǰ�·�
extern INT8U 	GUC_Day;           //ͨ��canͨѶ�õ��ĵ�ǰ��
extern INT8U 	GUC_UpDownSelect;  //ͨ��canͨѶ�õ���ѡ��ʽ:1-�ϼ�ѡ,0-�¼�ѡ

extern INT8U HallLrnStat;
extern INT8U XDoor;

extern INT8U    Errcode;
extern INT8U    SafeLoop;
extern INT8U 	GUC_TestFlg;       //�������״̬��־,0-�ǲ���״̬;1-����״̬;

typedef union                   //����״̬�ṹ����,����ʵ�ֶԵ�������״̬��λ����
{
    INT8U byte;

    struct
    {
        INT8U  OutOfService  :1;  //��ͣ
        INT8U  FullLoad      :1;  //����
        INT8U  Fireman       :1;  //����
        INT8U  OverLoad      :1;  //����
        INT8U  Inspection    :1;  //����
        INT8U  Fault         :1;  //����
        INT8U  Park          :1;  //����
        INT8U  Independent   :1;  //����
    } bit;
} STATUS_DATA;

extern STATUS_DATA G_EleStat;    //�ṹ�����,�洢����״̬

extern void init_CAN_2(void);       //CAN��������ʼ��
extern void CANTranMng(void);    //������CAN���ݴ���
extern void CANTran(void);       //CAN���ݷ���
#endif