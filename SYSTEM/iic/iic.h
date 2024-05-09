#ifndef __IIC_H
#define __IIC_H

//SDA��GPIO_Pin_11
//SCL��GPIO_Pin_10

#include "stm32f10x.h"

#define SDA_DATA(a)	if (a)	\
							GPIO_SetBits(GPIOB,GPIO_Pin_6);\
							else		\
							GPIO_ResetBits(GPIOB,GPIO_Pin_6)
							
#define SCL_OUT(a)	if (a)	\
							GPIO_SetBits(GPIOB,GPIO_Pin_7);\
							else		\
							GPIO_ResetBits(GPIOB,GPIO_Pin_7)														
							
#define SDA_IO_IN      GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6)


//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��	
void SDA_OUT(void);
void SDA_IN(void);			 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);			//IIC����һ���ֽ�
u16 IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
u8 IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�
void IIC_Write_One_Byte(u8 daddr,u8 addr,u8 data);
u8 IIC_Read_One_Byte(u8 daddr,u8 addr);	 

 
#endif

