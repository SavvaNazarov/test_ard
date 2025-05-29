/*******************************************************************************
 * @file:    variant.cpp
 * @author   NIIET
 * @version: V0.1
 * @date:    07.03.2025
 * @brief:   
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
 * FILE variant.cpp
 */
#include "variant.h"
#include "api/Common.h"
/*
 * Pins descriptions
 */
const PinDescription pins_description_map[]=
{  //Main pins on board
  /*PORT*/  /*PIN*/		 /*Attribute*/					/*ADC*/				/*PWM*/				//	¹  /name /ports/ AltFunk
  { GPIOB,  GPIO_Pin_11, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  0  / D0  / B11 / UART0 RX
  { GPIOB,  GPIO_Pin_10, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  1  / D1  / B10 / UART0 TX
  { GPIOB,  GPIO_Pin_9,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  2  / D2  / B9  / UART1 RX
  { GPIOA,  GPIO_Pin_11, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_CH_NUM(3)},	//  3  / D3  / A11 / PWM_1_B
  { GPIOB,  GPIO_Pin_12, (PIN_ATTR_TIMER_IN), 			PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  4  / D4  / A14 / CAN_RX
  { GPIOA,  GPIO_Pin_4,  (PIN_ATTR_TIMER_IN), 			PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  5  / D5  / A15 / TMR_1_IN  
  { GPIOA,  GPIO_Pin_13, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_CH_NUM(5)}, //  6  / D6  / A13 / PWM_2_B
  { GPIOB,  GPIO_Pin_8,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  7  / D7  / B8  / UART1 TX
  { GPIOB,  GPIO_Pin_13, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  8  / D8  / A4  / CAN_TX 
  { GPIOA,  GPIO_Pin_8,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_CH_NUM(0)}, //  9  / D9  / A8  / PWM_0_A
  { GPIOB,  GPIO_Pin_4,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  10 / D10 / B4  / SPI_CS
  { GPIOB,  GPIO_Pin_7,  (PIN_ATTR_NONE),				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  11 / D11 / B7  / SPI_MOSI
  { GPIOB,  GPIO_Pin_6,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  12 / D12 / B6  / SPI_MISO
  { GPIOB,  GPIO_Pin_5,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  13 / D13 / B5  / SPI_SCK / LED
  { GPIOB,  GPIO_Pin_0,  (PIN_ATTR_NEED_LS_CTRL), 		PIN_ADC_CH_NUM(0), 	PIN_PWM_NONE}, 		//  14 / A0  / B0  / ADC_0
  { GPIOB,  GPIO_Pin_1,  (PIN_ATTR_NEED_LS_CTRL), 		PIN_ADC_CH_NUM(1), 	PIN_PWM_NONE}, 		//  15 / A1  / B1  / ADC_1
  { GPIOB,  GPIO_Pin_2,  (PIN_ATTR_NEED_LS_CTRL), 		PIN_ADC_CH_NUM(2), 	PIN_PWM_NONE}, 		//  16 / A2  / B2  / ADC_2
  { GPIOB,  GPIO_Pin_3,  (PIN_ATTR_NEED_LS_CTRL), 		PIN_ADC_CH_NUM(3), 	PIN_PWM_NONE}, 		//  17 / A3  / B3  / ADC_3
  { GPIOA,  GPIO_Pin_1,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  18 / A4  / A1  / I2C_SDA
  { GPIOA,  GPIO_Pin_0,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  19 / A5  / A0  / I2C_SCL
  { GPIOA,  GPIO_Pin_3,  (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  20 / USER_BTN  / A6 
  //Pins for level shifters
  { GPIOA,  GPIO_Pin_14, (PIN_ATTR_LVL_SHIFTER_CTRL), 	PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  21 / LS_0 / B12 
  { GPIOA,  GPIO_Pin_15, (PIN_ATTR_LVL_SHIFTER_CTRL), 	PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  22 / LS_1 / B13 
  { GPIOB,  GPIO_Pin_14, (PIN_ATTR_LVL_SHIFTER_CTRL), 	PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  23 / LS_2 / B14 
  { GPIOB,  GPIO_Pin_15, (PIN_ATTR_LVL_SHIFTER_CTRL),	PIN_ADC_NONE, 		PIN_PWM_NONE}, 		//  24 / LS_3 / B15 
  //Mux pins
  { GPIOA,  GPIO_Pin_9,  (PIN_ATTR_NONE), 				PIN_ADC_NONE,		PIN_PWM_CH_NUM(1)}, // 	25 / mux with D11 / A9 /PWM_0_B
  { GPIOA,  GPIO_Pin_10, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_CH_NUM(2)}, // 	26 / mux with D10 / A10 /PWM_1_A
  { GPIOA,  GPIO_Pin_12, (PIN_ATTR_NONE), 				PIN_ADC_NONE, 		PIN_PWM_CH_NUM(4)}, // 	27 / mux with D5 / A12 /PWM_2_A
} ;
/*****************************************************************************/
const pin_size_t pins_mux_map[] = {
  PIN_MUX_NO,		// D0
  PIN_MUX_NO,		// D1
  PIN_MUX_NO,		// D2
  PIN_MUX_NO,		// D3
  PIN_MUX_NO,		// D4
  PIN_MUX_WITH(27),	// D5
  PIN_MUX_NO,		// D6
  PIN_MUX_NO,		// D7
  PIN_MUX_NO,		// D8
  PIN_MUX_NO,		// D9
  PIN_MUX_WITH(26),	// D10
  PIN_MUX_WITH(25),	// D11
  PIN_MUX_NO,		// D12
  PIN_MUX_NO,		// D13
  PIN_MUX_NO,		// D14
  PIN_MUX_NO,		// D15
  PIN_MUX_NO,		// D16
  PIN_MUX_NO,		// D17
  PIN_MUX_NO,		// D18
  PIN_MUX_NO,		// D19
  PIN_MUX_NO,		// D20
  PIN_MUX_NO,		// D21
  PIN_MUX_NO,		// D22
  PIN_MUX_NO,		// D23
  PIN_MUX_NO,		// D24
  PIN_MUX_NO,		// D25
  PIN_MUX_NO,		// D26
  PIN_MUX_NO,		// D27
  PIN_MUX_NO,		// D28

};
/*****************************************************************************/
const pin_size_t adc_ls_ctrl_map[] = 
{
    PIN_LS_0,
    PIN_LS_1,
    PIN_LS_2,
    PIN_LS_3
};
/*****************************************************************************/
arduino::UartSerial Serial(UART0,PIN_UART_TX0,PIN_UART_RX0);
arduino::UartSerial Serial1(UART1,PIN_UART_TX1,PIN_UART_RX1);
extern "C" 
{
	void UART0_RX_IRQHandler()
	{
		Serial.IrqHandlerRx();
	}
	void UART0_TX_IRQHandler()
	{
		Serial.IrqHandlerTx();
	}
	void UART0_E_RT_IRQHandler()
	{
		Serial.IrqHandlerRxTimeout();
	}
	void UART1_RX_IRQHandler()
	{
		Serial1.IrqHandlerRx();
	}
	void UART1_TX_IRQHandler()
	{
		Serial1.IrqHandlerTx();
	}
	void UART1_E_RT_IRQHandler()
	{
		Serial1.IrqHandlerRxTimeout();
	}
	pin_size_t pin_get_description_with_pwm(pin_size_t pin_num)
	{
		pin_size_t  pwm_pin = pin_num;
		if (pins_description_map[pin_num].pwm_ch != PIN_PWM_NONE)
		{
			return pin_num;
		}
		while(pins_mux_map[pin_num] != PIN_MUX_NO)
		{
			pinMode(pin_num,INPUT);
			pin_num  = pins_mux_map[pin_num];
			if (pins_description_map[pin_num].pwm_ch != PIN_PWM_NONE)
			{
				pwm_pin = pin_num;
				break;
			}
		} 
		return pwm_pin;
	}

	void initVariant()
	{
		GPIO_LockKeyCmd(GPIOA,ENABLE);
		WRITE_REG(GPIOA->LOCKCLR, GPIO_Pin_4 | GPIO_Pin_6); // DISABLE LOCK at JTAG_TRST and JTAG_TDI, need wait 2 CLK periods for unlock
		WRITE_REG(GPIOA->LOCKCLR, GPIO_Pin_4 | GPIO_Pin_6); // DISABLE LOCK at JTAG_TRST and JTAG_TDI
		WRITE_REG(GPIOA->LOCKCLR, GPIO_Pin_4 | GPIO_Pin_6); // DISABLE LOCK at JTAG_TRST and JTAG_TDI 
		GPIO_LockKeyCmd(GPIOA,DISABLE);
	}
}
/*****************************************************************************/
void digital_pin_use_hook(pin_size_t pin_num)
{
	const PinDescription *pin_description = PIN_GET_DESCRIPTION(pin_num);

	if (pins_mux_map[pin_num] != PIN_MUX_NO)
	{
		pinMode(pins_mux_map[pin_num],INPUT);
	}

	if((pin_description->pin_attribute & PIN_ATTR_NEED_LS_CTRL) == PIN_ATTR_NEED_LS_CTRL)
	{
		pinMode(adc_ls_ctrl_map[pin_description->adc_ch], OUTPUT);
		digitalWrite(adc_ls_ctrl_map[pin_description->adc_ch], HIGH); 
	}
}
/*****************************************************************************/
void analog_pin_use_hook(pin_size_t pin_num)
{
	const PinDescription *pin_description = PIN_GET_DESCRIPTION(pin_num);

	if (pins_mux_map[pin_num] != PIN_MUX_NO)
	{
		pinMode(pins_mux_map[pin_num], INPUT);
	}

	if((pin_description->pin_attribute & PIN_ATTR_NEED_LS_CTRL) == PIN_ATTR_NEED_LS_CTRL)
	{
		pinMode(adc_ls_ctrl_map[pin_description->adc_ch], OUTPUT);	  // OUTPUT_OPENDRAIN
		digitalWrite(adc_ls_ctrl_map[pin_description->adc_ch], LOW);
	}
}
/*****************************************************************************/
