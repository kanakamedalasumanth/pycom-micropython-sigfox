/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
  (C)2013 Semtech-Cycleo

Description:
    Functions used to handle FPGA register access for LoRa concentrator.
    Registers are addressed by name.
    Multi-bytes registers are handled automatically.
    Read-modify-write is handled automatically.

License: Revised BSD License, see LICENSE.TXT file include in the project
Maintainer: Michael Coracin
*/

#ifndef _LORAGW_FPGA_REG_H
#define _LORAGW_FPGA_REG_H

/* -------------------------------------------------------------------------- */
/* --- DEPENDANCIES --------------------------------------------------------- */

#include <stdint.h>     /* C99 types */
#include <stdbool.h>    /* bool type */

/* -------------------------------------------------------------------------- */
/* --- PUBLIC CONSTANTS ----------------------------------------------------- */

#define LGW_REG_SUCCESS 0
#define LGW_REG_ERROR -1

/*
auto generated register mapping for C code
this file contains autogenerated C struct used to access the FPGA registers
this file is autogenerated from registers description
*/
#define LGW_FPGA_SOFT_RESET 0
#define LGW_FPGA_FPGA_FEATURE 1
#define LGW_FPGA_VERSION 2
#define LGW_FPGA_FPGA_STATUS 3
#define LGW_FPGA_CTRL_FEATURE_START 4
#define LGW_FPGA_CTRL_RADIO_RESET 5
#define LGW_FPGA_CTRL_INPUT_SYNC_I 6
#define LGW_FPGA_CTRL_INPUT_SYNC_Q 7
#define LGW_FPGA_CTRL_OUTPUT_SYNC 8
#define LGW_FPGA_CTRL_INVERT_IQ 9
#define LGW_FPGA_HISTO_RAM_ADDR 10
#define LGW_FPGA_HISTO_RAM_DATA 11
#define LGW_FPGA_HISTO_TEMPO 12
#define LGW_FPGA_HISTO_NB_READ 13
#define LGW_FPGA_RSSI_TARGET 14
#define LGW_FPGA_LBT_TIMESTAMP_CH 15
#define LGW_FPGA_LBT_TIMESTAMP_SELECT_CH 16
#define LGW_FPGA_LBT_TIMESTAMP_NB_CH 17
#define LGW_FPGA_LBT_CH0_FREQ_OFFSET 18
#define LGW_FPGA_LBT_CH1_FREQ_OFFSET 19
#define LGW_FPGA_LBT_CH2_FREQ_OFFSET 20
#define LGW_FPGA_LBT_CH3_FREQ_OFFSET 21
#define LGW_FPGA_LBT_CH4_FREQ_OFFSET 22
#define LGW_FPGA_LBT_CH5_FREQ_OFFSET 23
#define LGW_FPGA_LBT_CH6_FREQ_OFFSET 24
#define LGW_FPGA_LBT_CH7_FREQ_OFFSET 25
#define LGW_FPGA_LBT_CH8_FREQ_OFFSET 26
#define LGW_FPGA_LBT_CH9_FREQ_OFFSET 27
#define LGW_FPGA_LBT_SCAN_TIME_CH0 28
#define LGW_FPGA_LBT_SCAN_TIME_CH1 29
#define LGW_FPGA_LBT_SCAN_TIME_CH2 30
#define LGW_FPGA_LBT_SCAN_TIME_CH3 31
#define LGW_FPGA_LBT_SCAN_TIME_CH4 32
#define LGW_FPGA_LBT_SCAN_TIME_CH5 33
#define LGW_FPGA_LBT_SCAN_TIME_CH6 34
#define LGW_FPGA_LBT_SCAN_TIME_CH7 35
#define LGW_FPGA_LBT_SCAN_TIME_CH8 36
#define LGW_FPGA_LBT_SCAN_TIME_CH9 37
#define LGW_FPGA_SPI_MUX_CTRL 38
#define LGW_FPGA_TOTALREGS 39

/* -------------------------------------------------------------------------- */
/* --- PUBLIC FUNCTIONS PROTOTYPES ------------------------------------------ */

int lgw_fpga_configure(void);

/**
@brief LoRa concentrator FPGA register write
@param register_id register number in the data structure describing registers
@param reg_value signed value to write to the register (for u32, use cast)
@return status of register operation (LGW_REG_SUCCESS/LGW_REG_ERROR)
*/
int lgw_fpga_reg_w(uint16_t register_id, int32_t reg_value);

/**
@brief LoRa concentrator FPGA register read
@param register_id register number in the data structure describing registers
@param reg_value pointer to a variable where to write register read value
@return status of register operation (LGW_REG_SUCCESS/LGW_REG_ERROR)
*/
int lgw_fpga_reg_r(uint16_t register_id, int32_t *reg_value);

/**
@brief LoRa concentrator FPGA register burst write
@param register_id register number in the data structure describing registers
@param data pointer to byte array that will be sent to the LoRa concentrator
@param size size of the transfer, in byte(s)
@return status of register operation (LGW_REG_SUCCESS/LGW_REG_ERROR)
*/
int lgw_fpga_reg_wb(uint16_t register_id, uint8_t *data, uint16_t size);

/**
@brief LoRa concentrator FPGA register burst read
@param register_id register number in the data structure describing registers
@param data pointer to byte array that will be written from the LoRa concentrator
@param size size of the transfer, in byte(s)
@return status of register operation (LGW_REG_SUCCESS/LGW_REG_ERROR)
*/
int lgw_fpga_reg_rb(uint16_t register_id, uint8_t *data, uint16_t size);

#endif
/* --- EOF ------------------------------------------------------------------ */
