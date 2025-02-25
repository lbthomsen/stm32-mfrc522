/*
 * mfrc522.h
 *
 *  Created on: Feb 21, 2025
 *      Author: lth
 */

#ifndef MFRC522_H_
#define MFRC522_H_

typedef enum {
    OK,
    Error
} mfrc522_result_t;

typedef struct {
    SPI_HandleTypeDef *spi;
    GPIO_TypeDef *cs_port;
    uint16_t cs_pin;
    GPIO_TypeDef *rst_port;
    uint16_t rst_pin;
} mfrc522_handle_t;

mfrc522_result_t mfrc522_init(mfrc522_handle_t *mfrc522, SPI_HandleTypeDef *spi, GPIO_TypeDef *cs_port, uint16_t cs_pin, GPIO_TypeDef *rst_port, uint16_t rst_pin);

#endif /* MFRC522_H_ */
