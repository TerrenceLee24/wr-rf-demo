/*
  Register definitions for slave core: DDS RF distribution WB Slave

  * File           : dds_regs.h
  * Author         : auto-generated by wbgen2 from dds_wb_slave.wb
  * Created        : Fri May 10 01:11:43 2013
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE dds_wb_slave.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_DDS_WB_SLAVE_WB
#define __WBGEN2_REGDEFS_DDS_WB_SLAVE_WB

#include <inttypes.h>

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif


/* definitions for register: Control Register */

/* definitions for field: Enable DDS test mode in reg: Control Register */
#define DDS_CR_TEST                           WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Enable DDS RF slave mode in reg: Control Register */
#define DDS_CR_SLAVE                          WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Enable DDS RF master mode in reg: Control Register */
#define DDS_CR_MASTER                         WBGEN2_GEN_MASK(2, 1)

/* definitions for field: ADC Bitbanged Access Enable in reg: Control Register */
#define DDS_CR_ADC_BB_ENABLE                  WBGEN2_GEN_MASK(3, 1)

/* definitions for field: Broadcast Clock ID in reg: Control Register */
#define DDS_CR_CLK_ID_MASK                    WBGEN2_GEN_MASK(4, 16)
#define DDS_CR_CLK_ID_SHIFT                   4
#define DDS_CR_CLK_ID_W(value)                WBGEN2_GEN_WRITE(value, 4, 16)
#define DDS_CR_CLK_ID_R(reg)                  WBGEN2_GEN_READ(reg, 4, 16)

/* definitions for register: GPIO register */

/* definitions for field: System PLL CS in reg: GPIO register */
#define DDS_GPIOR_PLL_SYS_CS_N                WBGEN2_GEN_MASK(0, 1)

/* definitions for field: System Reset in reg: GPIO register */
#define DDS_GPIOR_PLL_SYS_RESET_N             WBGEN2_GEN_MASK(1, 1)

/* definitions for field: PLL SCLK (shared) in reg: GPIO register */
#define DDS_GPIOR_PLL_SCLK                    WBGEN2_GEN_MASK(2, 1)

/* definitions for field: PLL SDIO (shared) in reg: GPIO register */
#define DDS_GPIOR_PLL_SDIO                    WBGEN2_GEN_MASK(3, 1)

/* definitions for field: PLL SDIO direction (shared) in reg: GPIO register */
#define DDS_GPIOR_PLL_SDIO_DIR                WBGEN2_GEN_MASK(4, 1)

/* definitions for field: VCXO PLL Reset in reg: GPIO register */
#define DDS_GPIOR_PLL_VCXO_RESET_N            WBGEN2_GEN_MASK(5, 1)

/* definitions for field: VCXO PLL Chip Select in reg: GPIO register */
#define DDS_GPIOR_PLL_VCXO_CS_N               WBGEN2_GEN_MASK(6, 1)

/* definitions for field: VCXO PLL Function in reg: GPIO register */
#define DDS_GPIOR_PLL_VCXO_FUNCTION           WBGEN2_GEN_MASK(7, 1)

/* definitions for field: VCXO PLL SDO in reg: GPIO register */
#define DDS_GPIOR_PLL_VCXO_SDO                WBGEN2_GEN_MASK(8, 1)

/* definitions for field: ADF4002 Chip Enable in reg: GPIO register */
#define DDS_GPIOR_ADF_CE                      WBGEN2_GEN_MASK(9, 1)

/* definitions for field: ADF4002 Clock in reg: GPIO register */
#define DDS_GPIOR_ADF_CLK                     WBGEN2_GEN_MASK(10, 1)

/* definitions for field: ADF4002 Latch Enable in reg: GPIO register */
#define DDS_GPIOR_ADF_LE                      WBGEN2_GEN_MASK(11, 1)

/* definitions for field: ADF4002 Data in reg: GPIO register */
#define DDS_GPIOR_ADF_DATA                    WBGEN2_GEN_MASK(12, 1)

/* definitions for field: AD7980 Bitbanged Data Out in reg: GPIO register */
#define DDS_GPIOR_ADC_SDI                     WBGEN2_GEN_MASK(13, 1)

/* definitions for field: AD7980 Bitbanged Convert Strobe in reg: GPIO register */
#define DDS_GPIOR_ADC_CNV                     WBGEN2_GEN_MASK(14, 1)

/* definitions for field: AD7980 Bitbanged Serial Clock in reg: GPIO register */
#define DDS_GPIOR_ADC_SCK                     WBGEN2_GEN_MASK(15, 1)

/* definitions for field: AD7980 Bitbanged Data In in reg: GPIO register */
#define DDS_GPIOR_ADC_SDO                     WBGEN2_GEN_MASK(16, 1)

/* definitions for register: DDS Center frequency hi */

/* definitions for register: DDS Center frequency lo */

/* definitions for register: DDS Gain */

/* definitions for register: Reset Register */

/* definitions for field: FPGA REF/Serdes PLL Reset in reg: Reset Register */
#define DDS_RSTR_PLL_RST                      WBGEN2_GEN_MASK(0, 1)

/* definitions for field: FPGA DDS Logic software reset in reg: Reset Register */
#define DDS_RSTR_SW_RST                       WBGEN2_GEN_MASK(1, 1)

/* definitions for register: I2C bitbanged IO register */

/* definitions for field: SCL Line out in reg: I2C bitbanged IO register */
#define DDS_I2CR_SCL_OUT                      WBGEN2_GEN_MASK(0, 1)

/* definitions for field: SDA Line out in reg: I2C bitbanged IO register */
#define DDS_I2CR_SDA_OUT                      WBGEN2_GEN_MASK(1, 1)

/* definitions for field: SCL Line in in reg: I2C bitbanged IO register */
#define DDS_I2CR_SCL_IN                       WBGEN2_GEN_MASK(2, 1)

/* definitions for field: SDA Line in in reg: I2C bitbanged IO register */
#define DDS_I2CR_SDA_IN                       WBGEN2_GEN_MASK(3, 1)

/* definitions for register: PI register */

/* definitions for field: KP in reg: PI register */
#define DDS_PIR_KP_MASK                       WBGEN2_GEN_MASK(0, 16)
#define DDS_PIR_KP_SHIFT                      0
#define DDS_PIR_KP_W(value)                   WBGEN2_GEN_WRITE(value, 0, 16)
#define DDS_PIR_KP_R(reg)                     WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: KI in reg: PI register */
#define DDS_PIR_KI_MASK                       WBGEN2_GEN_MASK(16, 16)
#define DDS_PIR_KI_SHIFT                      16
#define DDS_PIR_KI_W(value)                   WBGEN2_GEN_WRITE(value, 16, 16)
#define DDS_PIR_KI_R(reg)                     WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: FIFO 'PD ADC Test FIFO (test mode)' data output register 0 */

/* definitions for field: ADC data in reg: FIFO 'PD ADC Test FIFO (test mode)' data output register 0 */
#define DDS_PD_FIFO_R0_DATA_MASK              WBGEN2_GEN_MASK(0, 16)
#define DDS_PD_FIFO_R0_DATA_SHIFT             0
#define DDS_PD_FIFO_R0_DATA_W(value)          WBGEN2_GEN_WRITE(value, 0, 16)
#define DDS_PD_FIFO_R0_DATA_R(reg)            WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: FIFO 'PD ADC Test FIFO (test mode)' control/status register */

/* definitions for field: FIFO full flag in reg: FIFO 'PD ADC Test FIFO (test mode)' control/status register */
#define DDS_PD_FIFO_CSR_FULL                  WBGEN2_GEN_MASK(16, 1)

/* definitions for field: FIFO empty flag in reg: FIFO 'PD ADC Test FIFO (test mode)' control/status register */
#define DDS_PD_FIFO_CSR_EMPTY                 WBGEN2_GEN_MASK(17, 1)

/* definitions for register: FIFO 'DDS Tuning FIFO (test mode)' data input register 0 */

/* definitions for field: DDS tune word in reg: FIFO 'DDS Tuning FIFO (test mode)' data input register 0 */
#define DDS_TUNE_FIFO_R0_DATA_MASK            WBGEN2_GEN_MASK(0, 32)
#define DDS_TUNE_FIFO_R0_DATA_SHIFT           0
#define DDS_TUNE_FIFO_R0_DATA_W(value)        WBGEN2_GEN_WRITE(value, 0, 32)
#define DDS_TUNE_FIFO_R0_DATA_R(reg)          WBGEN2_GEN_READ(reg, 0, 32)

/* definitions for register: FIFO 'DDS Tuning FIFO (test mode)' control/status register */

/* definitions for field: FIFO full flag in reg: FIFO 'DDS Tuning FIFO (test mode)' control/status register */
#define DDS_TUNE_FIFO_CSR_FULL                WBGEN2_GEN_MASK(16, 1)

/* definitions for field: FIFO empty flag in reg: FIFO 'DDS Tuning FIFO (test mode)' control/status register */
#define DDS_TUNE_FIFO_CSR_EMPTY               WBGEN2_GEN_MASK(17, 1)
/* [0x0]: REG Control Register */
#define DDS_REG_CR 0x00000000
/* [0x4]: REG GPIO register */
#define DDS_REG_GPIOR 0x00000004
/* [0x8]: REG DDS Center frequency hi */
#define DDS_REG_FREQ_HI 0x00000008
/* [0xc]: REG DDS Center frequency lo */
#define DDS_REG_FREQ_LO 0x0000000c
/* [0x10]: REG DDS Gain */
#define DDS_REG_GAIN 0x00000010
/* [0x14]: REG Reset Register */
#define DDS_REG_RSTR 0x00000014
/* [0x18]: REG I2C bitbanged IO register */
#define DDS_REG_I2CR 0x00000018
/* [0x1c]: REG PI register */
#define DDS_REG_PIR 0x0000001c
/* [0x20]: REG FIFO 'PD ADC Test FIFO (test mode)' data output register 0 */
#define DDS_REG_PD_FIFO_R0 0x00000020
/* [0x24]: REG FIFO 'PD ADC Test FIFO (test mode)' control/status register */
#define DDS_REG_PD_FIFO_CSR 0x00000024
/* [0x28]: REG FIFO 'DDS Tuning FIFO (test mode)' data input register 0 */
#define DDS_REG_TUNE_FIFO_R0 0x00000028
/* [0x2c]: REG FIFO 'DDS Tuning FIFO (test mode)' control/status register */
#define DDS_REG_TUNE_FIFO_CSR 0x0000002c
#endif
