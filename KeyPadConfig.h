#ifndef	_KEYPADCONFIG_H
#define	_KEYPADCONFIG_H

#include "gpio.h"

#define						_KEYPAD_DEBOUNCE_TIME_MS				20
#define						_KEYPAD_USE_FREERTOS						1

const GPIO_TypeDef* _KEYPAD_COLUMN_GPIO_PORT[] =
{
															KEY_C0_GPIO_Port,
															KEY_C1_GPIO_Port,
															KEY_C2_GPIO_Port,
															KEY_C3_GPIO_Port
};
  
const uint16_t _KEYPAD_COLUMN_GPIO_PIN[] =
{
															KEY_C0_Pin,
															KEY_C1_Pin,
															KEY_C2_Pin,
															KEY_C3_Pin
};

const GPIO_TypeDef* _KEYPAD_ROW_GPIO_PORT[] =
{
															KEY_R0_GPIO_Port,
															KEY_R1_GPIO_Port,
															KEY_R2_GPIO_Port,
															KEY_R3_GPIO_Port
};
  
const uint16_t _KEYPAD_ROW_GPIO_PIN[] =
{
															KEY_R0_Pin,
															KEY_R1_Pin,
															KEY_R2_Pin,
															KEY_R3_Pin
};


#endif
