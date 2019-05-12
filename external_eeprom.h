/**********************************************************************************
 *
 * Module: External EEPROM
 *
 * File Name: external_eeprom.h
 *
 * Description: Header file for the External EEPROM driver
 *
 * Author: Mahmoud Ahmed
 *
 *********************************************************************************/

#ifndef EXTERNAL_EEPROM_H_
#define EXTERNAL_EEPROM_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

/*-----------------------------------------------------------------------------
 *                                 DEFINES
 -----------------------------------------------------------------------------*/
#define ERROR 0
#define SUCCESS 1

/*-----------------------------------------------------------------------------
 *                           FUNCTIONS PROTOTYPES
 -----------------------------------------------------------------------------*/
void EEPROM_init(void);
uint8 EEPROM_writeByte(uint16 u16address, uint8 u8data);
uint8 EEPROM_readByte(uint16 u16address, uint8 *u8data);

#endif /* EXTERNAL_EEPROM_H_ */
