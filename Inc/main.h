/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * Copyright (c) 2016 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define FLASH_PWR_Pin GPIO_PIN_0
#define FLASH_PWR_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_1
#define SPI1_CS_GPIO_Port GPIOA
#define SPI1_WP_Pin GPIO_PIN_2
#define SPI1_WP_GPIO_Port GPIOA
#define RTC_INT_Pin GPIO_PIN_5
#define RTC_INT_GPIO_Port GPIOC
#define CHRG_LOWFULL_Pin GPIO_PIN_0
#define CHRG_LOWFULL_GPIO_Port GPIOB
#define PWRKEY_STATE_Pin GPIO_PIN_2
#define PWRKEY_STATE_GPIO_Port GPIOB
#define A375_INT2_Pin GPIO_PIN_6
#define A375_INT2_GPIO_Port GPIOC
#define A375_INT1_Pin GPIO_PIN_7
#define A375_INT1_GPIO_Port GPIOC
#define A375_CS_Pin GPIO_PIN_8
#define A375_CS_GPIO_Port GPIOC
#define MPU9250_INT3_Pin GPIO_PIN_9
#define MPU9250_INT3_GPIO_Port GPIOC
#define MPU9250_PWR_Pin GPIO_PIN_8
#define MPU9250_PWR_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_15
#define LED3_GPIO_Port GPIOA
#define K1_Pin GPIO_PIN_10
#define K1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_11
#define LED2_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_12
#define LED4_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
