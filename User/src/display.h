/* display.h */


#ifndef DISPLAY_H
#define DISPLAY_H
#include "global.H"

extern INT8U Dispchg;//改变标志
extern INT8U  move;
extern void DisplayManager(void);
extern INT8U GUC_DispFlrH;
extern INT8U GUC_DispFlrM;       
extern INT8U GUC_DispFlrL;  
extern void  DispDriver3(INT8U hi, INT8U lo); 

//extern INT8S GUC_DirY;
  
#endif
   