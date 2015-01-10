/*
*	2014年12月29日18:36:49
*	V1.0 	By Breaker
*
*	文件名：Global.c
*    	保存全局变量
*	
*/

#include "Global.h"
#include "timer.h"

/*Graphic.c*/
unsigned int GpuInfoAddr;  		/*GPU信息首地址*/
volatile unsigned char *GpuBufAddr;  	/*GPU缓存首地址*/

/*timer.c*/
arm_timer_t *ArmTimer = (arm_timer_t *)ARMTIMER_BASE;		/*ArmTimer首地址*/