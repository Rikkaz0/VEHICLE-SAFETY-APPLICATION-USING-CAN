#ifndef __AHT10_H
#define __AHT10_H

#include "stm32f1xx_hal.h"

// Địa chỉ I2C của AHT10
#define AHT10_ADDRESS 0x38

// Khai báo các hàm để sử dụng trong mã nguồn
HAL_StatusTypeDef AHT10_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef AHT10_ReadData(I2C_HandleTypeDef *hi2c, uint8_t *temperature, uint8_t *humidity);

#endif /* __AHT10_H */
