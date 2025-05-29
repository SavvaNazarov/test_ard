/*******************************************************************************
 * @file:    variant.h
 * @author   NIIET
 * @version: V1.0
 * @date:    07.03.2025
 * @brief:   File containing pin use configuration for a single board
 *******************************************************************************
 *
 *
 * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
 * TIME. AS A RESULT, NIIET NOT BE HELD LIABLE FOR ANY DIRECT,
 * INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
 * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
 * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 *
 * COPYRIGHT 2025 NIIET 
 *******************************************************************************
 * FILE variant.h
 */
 
 /*
 * The decimal number corresponds to the pin number in the pins_description_map table,
 * in the file variant.cpp
 */

#ifndef VARIANT_H
#define VARIANT_H

#include <WVariant.h>

#ifdef __cplusplus
	#include "Uart.h"
	extern "C"{
#endif
/*****************************************************************************/
/*
 * General about pins
 */
#define PINS_COUNT           	(27u) //The maximum index in the pins_description_map table
#define NUM_DIGITAL_PINS     	(24u) //Number of digital pins
#define NUM_ANALOG_INPUTS    	(4u)  //Number of analog pins
/*****************************************************************************/
/*
 * Led pins
 */
#define PIN_LED_13  			(13u) 		// GPIOB Pin_5
#define PIN_LED     			PIN_LED_13
#define LED_BUILTIN 			PIN_LED
/*****************************************************************************/
/*
 * Analog pins
 */
#define PIN_A0          		(14u)		// GPIOB Pin_0			
#define PIN_A1          		(PIN_A0 + 1)// GPIOB Pin_1
#define PIN_A2          		(PIN_A0 + 2)// GPIOB Pin_2
#define PIN_A3          		(PIN_A0 + 3)// GPIOB Pin_3
#define PIN_A4          		(PIN_A0 + 4)// GPIOA Pin_1
#define PIN_A5          		(PIN_A0 + 5)// GPIOA Pin_0

#define MAX_ADC_RESOLUTION   	12
/*****************************************************************************/
/*
 * Arduino ADC pin info
 */
static const uint8_t A0  = PIN_A0;
static const uint8_t A1  = PIN_A1;
static const uint8_t A2  = PIN_A2;
static const uint8_t A3  = PIN_A3;
static const uint8_t A4  = PIN_A4;
static const uint8_t A5  = PIN_A5;
/*****************************************************************************/
/* 
 * Level shifter control pins
 */ 
#define PIN_LS_0    			(21u)		// GPIOA Pin_14
#define PIN_LS_1    			(PIN_LS_0+1)// GPIOA Pin_15
#define PIN_LS_2    			(PIN_LS_0+2)// GPIOB Pin_14
#define PIN_LS_3    			(PIN_LS_0+3)// GPIOB Pin_15
/*****************************************************************************/
/*
 * User Button
 */
#define PIN_USER_BTN 			(20u)		// GPIOA Pin_3
/*****************************************************************************/
/*
 * Arduino Button pin info
 */
static const uint8_t USER_BTN  = PIN_USER_BTN;
/*****************************************************************************/
/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 	1
#define PERIPH_SPI 				SPI0
#define PIN_SPI_MISO         	(12u)	// GPIOB Pin_6
#define PIN_SPI_SCK          	(13u)	// GPIOB Pin_5
#define PIN_SPI_MOSI         	(11u)	// GPIOB Pin_7
#define PIN_SPI_SS           	(10u)	// GPIOB Pin_4
/*****************************************************************************/
/*
 * Arduino SPI pin info
 */
static const uint8_t SS	  = PIN_SPI_SS;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
/*****************************************************************************/
/*
 * Wire Interfaces(I2C)
 */
#define WIRE_INTERFACES_COUNT 	1
#define PERIPH_WIRE 			I2C
#define PIN_WIRE_SDA         	(PIN_A4)
#define PIN_WIRE_SCL         	(PIN_A5)
#define WIRE_IT_HANDLER 		I2C_IRQHandler
/*****************************************************************************/
/*
 * Arduino I2C pin info
 */
static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;
/*****************************************************************************/
/*
* I2S Interfaces
*/
#define I2S_INTERFACES_COUNT 0
/*****************************************************************************/
/*
* Serial ports
*/ 
#define PIN_UART_TX0 	(0u)
#define PIN_UART_RX0 	(1u)
#define PIN_UART_TX1 	(7u)
#define PIN_UART_RX1 	(2u)
#ifdef __cplusplus
  extern arduino::UartSerial Serial;
  extern arduino::UartSerial Serial1;
#endif
/*****************************************************************************/
/*
* About mixing
*/ 
#define PIN_MUX_NO 			0xFE
#define PIN_MUX_WITH		(pinNum) (pinNum)
/*****************************************************************************/
/*
* PWM
*/ 
extern const pin_size_t pins_mux_map[];			// key - arduino pin num
pin_size_t pin_get_description_with_pwm(pin_size_t pin_num);
#undef PIN_GET_DESCRIPTION_WITH_PWM
#define PIN_GET_DESCRIPTION_WITH_PWM(pinNum) PIN_GET_DESCRIPTION(pin_get_description_with_pwm(pinNum))
/*****************************************************************************/
#ifdef __cplusplus
}
#endif
#endif//VARIANT_H