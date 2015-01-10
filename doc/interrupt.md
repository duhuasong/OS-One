###树莓派 interrupt

>ARM 共有两种中断源  
>>1.来自GPU外设的中断  
>>2.来自ARM控制外设  

>ARM有三种中断  
>>1.来自ARM特殊外设  
>>2.来自GPU外设的中断  
>>3.特殊事件中断

>ARM特殊事件中断:  
>>1.一个定时器   
>>2.一个邮箱（GPU）  
>>3.两个门铃  
>>4.两个GPU空闲中断   
>>5.两个地址/访问错误中断  
>邮箱和门铃寄存器不是通用的

>每一个中断源(GPU/ARM)都有一个使能位(R/W)和未决位(RO)  

>默认门铃中断0,1和邮箱0只可被GPU写，ARM读。门铃中断2,3和邮箱中断1相反。

