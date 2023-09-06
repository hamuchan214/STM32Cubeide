/*
 * printx.h
 *
 *  Created on: Aug 21, 2023
 *      Author: hamuc
 */

#ifndef INC_PRINTX_H_
#define INC_PRINTX_H_


#include "stm32f3xx_hal.h"
#include <string.h>

	extern UART_HandleTypeDef huart2;

	void printx(char *str) {
	  HAL_UART_Transmit(&huart2, (uint8_t *)str, strlen(str), HAL_MAX_DELAY);
	}
#endif /* INC_PRINTX_H_ */
