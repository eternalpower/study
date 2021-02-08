/******************************************************************************/
#ifndef _i2c_H_
#define _i2c_H_

#include "global.H"

extern INT8U	I2CStep,I2CWriteStep;
extern INT8U ReadAck,I2CData,AddressPointer;
extern INT8U 	DisplayTemp[20];
extern void CS1628_Init(void);
extern void CS1628_Display(void);
extern void CS1628_CP1_Write(unsigned char addr, unsigned char data);
extern void CS1628_CP2_Write(unsigned char addr, unsigned char data);
extern void CS1628_Disp_All(void);
extern void CS1628_Clear_All(void);
#endif
/******************************************************************************/

