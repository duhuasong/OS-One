/*
*	2014年12月29日18:33:49
*	V1.0 	By Breaker
*
*	文件名：Global.h
*    	保存全局变量
*	
*/
#ifndef _GLOBAL_H 
#define _GLOBAL_H

#include "timer.h"
#include "stdtype.h"
#include "task.h"
#include "Graphic.h"
#include "fifo.h"
#include "input.h"

/*Graphic.c*/
extern unsigned int GpuInfoAddr;  			/*GPU信息首地址*/
extern volatile unsigned char *GpuBufAddr;  	/*GPU缓存首地址*/
extern unsigned char font[256];				/*字体首地址*/

extern s32 os_top ;					//全局位置指针（屏幕显示）
extern s32 os_left ;

extern RGB_24Bit colorF;
extern RGB_24Bit colorB;

/*timer.c*/
extern int TimerCounter;					//ArmTimer首地址
extern os_timer_ctrl_st os_timer_ctrl;		//timer ctrl
extern arm_timer_t *ArmTimer;

/*debug.c*/

/*task.c*/

extern TASK_GLOBAL task_global;

/*UART.c*/
//extern char input_buf_p[input_size];
extern char * input_buf ;
extern FIFO8  input_p;
extern FIFO8  * input;

#endif
