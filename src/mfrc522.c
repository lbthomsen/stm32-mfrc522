/*
 * mfrc522.c
 *
 *  Created on: Feb 21, 2025
 *      Author: lth
 */

#include "main.h"

#include <stdio.h>

#include "mfrc522.h"

/*
 * Private functions
 */

inline void mfrc533_cs_on(mfrc522_handle_t *mfrc522) {
    HAL_GPIO_WritePin(mfrc522->cs_port, mfrc522->cs_pin, GPIO_PIN_RESET);
}

inline void mfrc533_cs_on(mfrc522_handle_t *mfrc522) {
    HAL_GPIO_WritePin(mfrc522->cs_port, mfrc522->cs_pin, GPIO_PIN_SET);
}

mfrc522_result_t mfrc522_write(mfrc522_handle_t *mfrc522, uint8_t address, uint8_t *data, uint16_t len) {
    mfrc522_result_t res = OK;



    return res;
}

/*
 * Public functions
 */

mfrc522_result_t mfrc522_init(mfrc522_handle_t *mfrc522, SPI_HandleTypeDef *spi, GPIO_TypeDef *cs_port, uint16_t cs_pin, GPIO_TypeDef *rst_port, uint16_t rst_pin) {
    mfrc522_result_t res = OK;

    printf("mfrc522_init\n");

    mfrc522->spi = spi;
    mfrc522->cs_port = cs_port;
    mfrc522->cs_pin = cs_pin;
    mfrc522->rst_port = rst_port;
    mfrc522->rst_pin = rst_pin;

    HAL_GPIO_WritePin(rst_port, rst_pin, GPIO_PIN_SET);

    // Wait a few ms to wake up
    HAL_Delay(50);

    return res;
}
