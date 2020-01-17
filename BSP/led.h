#ifndef _LED_H
#define _LED_H
#include "stm8s.h"

#define LED1_PIN  GPIO_PIN_0
#define LED2_PIN  GPIO_PIN_1
#define LED3_PIN  GPIO_PIN_2
#define LED4_PIN  GPIO_PIN_3

#define LED1_PORT  GPIOI
#define LED2_PORT  GPIOI
#define LED3_PORT  GPIOI
#define LED4_PORT  GPIOI

#define LED1_L  GPIO_WriteLow(LED1_PORT,LED1_PIN)
#define LED1_H  GPIO_WriteHigh(LED1_PORT,LED1_PIN)
#define LED1_R  GPIO_WriteReverse(LED1_PORT,LED1_PIN)

#define LED2_L  GPIO_WriteLow(LED2_PORT,LED2_PIN)
#define LED2_H  GPIO_WriteHigh(LED2_PORT,LED2_PIN)
#define LED2_R  GPIO_WriteReverse(LED2_PORT,LED2_PIN)

#define LED3_L  GPIO_WriteLow(LED3_PORT,LED3_PIN)
#define LED3_H  GPIO_WriteHigh(LED3_PORT,LED3_PIN)
#define LED3_R  GPIO_WriteReverse(LED3_PORT,LED3_PIN)

#define LED4_L  GPIO_WriteLow(LED4_PORT,LED4_PIN)
#define LED4_H  GPIO_WriteHigh(LED4_PORT,LED4_PIN)
#define LED4_R  GPIO_WriteReverse(LED4_PORT,LED4_PIN)


#endif