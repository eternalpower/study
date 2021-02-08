/* display.h */


#ifndef DISPLAY_H
#define DISPLAY_H
#include "global.h"

extern INT8U Dispchg;//改变标志
extern INT8U  move;
extern void DisplayManager(void);
extern INT8U GUC_DispFlrH;
extern INT8U GUC_DispFlrM;       
extern INT8U GUC_DispFlrL; 
extern  void  DispDriver3(INT8U ch);
extern  void  DispalyOut(void);
extern  void  DispDriver4(INT8U ch);

//extern INT8S GUC_DirY;
  
#endif

   