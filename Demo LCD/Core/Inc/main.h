/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED0_Pin GPIO_PIN_5
#define LED0_GPIO_Port GPIOE
#define LED1_Pin GPIO_PIN_6
#define LED1_GPIO_Port GPIOE
#define Key1_Pin GPIO_PIN_0
#define Key1_GPIO_Port GPIOC
#define Key1_EXTI_IRQn EXTI0_IRQn
#define Key2_Pin GPIO_PIN_1
#define Key2_GPIO_Port GPIOC
#define Key2_EXTI_IRQn EXTI1_IRQn
#define Key3_Pin GPIO_PIN_2
#define Key3_GPIO_Port GPIOC
#define Key3_EXTI_IRQn EXTI2_IRQn
#define Key4_Pin GPIO_PIN_3
#define Key4_GPIO_Port GPIOC
#define Key4_EXTI_IRQn EXTI3_IRQn
#define LCD_BL_Pin GPIO_PIN_1
#define LCD_BL_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
