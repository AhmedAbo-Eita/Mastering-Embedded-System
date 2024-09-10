/*
 * STM32F103xx_GPIO.h
 *
 *  Created on: Sep 10, 2024
 *      Author: Ahmed_Aboeita
 */

#ifndef INCLIDE_STM32F103XX_H_
#define INCLIDE_STM32F103XX_H_

//--------------------------------------
//----------includes--------------------
//--------------------------------------

#include "stdlib.h"
#include <stdint.h>

//--------------------------------------
//-Base Address for memory-
//--------------------------------------

#define FLASH_MEMORY_BASE					0x08000000UL
#define SYSTEM_MEMORY_BASE					0x1FFFF800UL
#define SRAM_MEMORY_BASE					0x20000000UL

#define PERIPHERALS_BASE					0x40000000UL
#define CORTEX_M3_INTERNAL_PERIPHERALS		0xE0000000UL


//========================================================

//--------------------------------------
//-Base Address for AHB peripherals-
//--------------------------------------
#define RCC_BASE							0x40021000UL

//--------------------------------------
//-Base Address for APB2 peripherals-
//--------------------------------------

// in out package GPIO A,B is fully included
#define GPIOA_BASE							0x40010800UL
#define GPIOB_BASE							0x40010C00UL

// C,D is parthailly included
#define GPIOC_BASE							0x40011000UL
#define GPIOD_BASE							0x40011400UL

// E is not included
#define GPIOE_BASE							0x40011800UL

//External Interupt
#define EXTI_BASE							0x40010400UL

//Alternative Function I/O
#define AFIO_BASE							0x40010000UL

//=========================================================

//--------------------------------------
//-Peripheral Registers-
//--------------------------------------

//--------------------------------------
//-RCC Peripheral Registers-
//--------------------------------------

typedef struct{
	volatile uint32_t  CR;
	volatile uint32_t  CFGR;
	volatile uint32_t  CIR;
	volatile uint32_t  APB2RSTR;
	volatile uint32_t  AHBENR;
	volatile uint32_t  APB2ENR;
	volatile uint32_t  APB1ENR;
	volatile uint32_t  BDCR;
	volatile uint32_t  CSR;
}RCC_TypeDef;

//--------------------------------------
//-GPIOx Peripheral Registers-
//--------------------------------------
typedef struct
{
	volatile uint32_t  CRL;
	volatile uint32_t  CRH;
	volatile uint32_t  IDR;
	volatile uint32_t  ODR;
	volatile uint32_t  BSRR;
	volatile uint32_t  BRR;
	volatile uint32_t  LCKR;
}GPIO_TypeDef;


//--------------------------------------
//-EXTI Peripheral Registers-
//--------------------------------------
typedef struct
{
	volatile uint32_t  IMR;
	volatile uint32_t  EMR;
	volatile uint32_t  RTSR;
	volatile uint32_t  FTSR;
	volatile uint32_t  SWIER;
	volatile uint32_t  PR;
}EXTI_TypeDef;

//--------------------------------------
//-AFIO Peripheral Registers-
//--------------------------------------
typedef struct
{
	volatile uint32_t  EVCR;
	volatile uint32_t  MAPR;
	volatile uint32_t  EXTICR1;
	volatile uint32_t  EXTICR2;
	volatile uint32_t  EXTICR3;
	volatile uint32_t  EXTICR4;
	volatile uint32_t  RESERVED;
	volatile uint32_t  MAPR2;

}AFIO_TypeDef;

//=========================================================

//--------------------------------------
//-Peripheral Instance-
//--------------------------------------


#define GPIOA				((GPIO_TypeDef*)GPIOA_BASE)
#define GPIOB				((GPIO_TypeDef*)GPIOB_BASE)
#define GPIOC				((GPIO_TypeDef*)GPIOC_BASE)
#define GPIOD				((GPIO_TypeDef*)GPIOD_BASE)
#define GPIOE				((GPIO_TypeDef*)GPIOE_BASE)


#define RCC					((RCC_TypeDef*)RCC_BASE)

#define EXTI				((EXTI_TypeDef*)EXTI_BASE)

#define AFIO				((AFIO_TypeDef*)AFIO_BASE)




//=========================================================

//--------------------------------------
//-Clock Enable Macros-
//--------------------------------------

#define RCC_GPIOA_CLK_EN()	(RCC->APB2ENR |= (1<<2))
#define RCC_GPIOB_CLK_EN()	(RCC->APB2ENR |= (1<<3))
#define RCC_GPIOC_CLK_EN()	(RCC->APB2ENR |= (1<<4))
#define RCC_GPIOD_CLK_EN()	(RCC->APB2ENR |= (1<<5))
#define RCC_GPIOE_CLK_EN()	(RCC->APB2ENR |= (1<<6))

#define RCC_AFIO_CLK_EN()	(RCC->APB2ENR |= (1<<0))


#endif /* INCLIDE_STM32F103XX_H_ */
