/**
 * Invensense MPU-9250, C header.
 *
 * THIS SOFTWARE IS PROVIDED BY FEMTO.IO "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <stdint.h>
#ifndef MPU9250_H_INCLUDED
#define MPU9250_H_INCLUDED


#ifdef __cplusplus
extern "C" {
#endif

//
void mpu9250_init(void);

void mpu9250_configure_spi(void);
void mpu9250_configure_i2c(void);
void mpu9250_configure_intn(void);

/**
 * Registers 0 to 2
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bits XG_ST_DATA[7:0]
 *
 * The value in this register indicates the self test output generated
 * during manufacturing tests. This value is to be used to check
 * against subsequent self test outputs performed by the end user. (Page 10)
 */
uint8_t mpu9250_self_test_x_gyro_get(void);
void mpu9250_self_test_x_gyro_set(uint8_t value);

/**
 * Registers 0 to 2
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bits YG_ST_DATA[7:0]
 *
 * The value in this register indicates the self test output generated
 * during manufacturing tests. This value is to be used to check
 * against subsequent self test outputs performed by the end user. (Page 10)
 */
uint8_t mpu9250_self_test_y_gyro_get(void);
void mpu9250_self_test_y_gyro_set(uint8_t value);
/**
 * Registers 0 to 2
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bits ZG_ST_DATA[7:0]
 *
 * The value in this register indicates the self test output generated
 * during manufacturing tests. This value is to be used to check
 * against subsequent self test outputs performed by the end user. (Page 10)
 */
uint8_t mpu9250_self_test_z_gyro_get(void);
void mpu9250_self_test_z_gyro_set(uint8_t value);


/**
 * Registers 13 to 15
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bits XA_ST_DATA[7:0]
 *
 * The value in this register indicates the self test output generated
 * during manufacturing tests. This value is to be used to check
 * against subsequent self test outputs performed by the end user. (Page 10)
 */
uint8_t mpu9250_self_test_x_accel_get(void);
void mpu9250_self_test_x_accel_set(uint8_t value);
/**
 * Registers 13 to 15
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bits YA_ST_DATA[7:0]
 *
 * The value in this register indicates the self test output generated
 * during manufacturing tests. This value is to be used to check
 * against subsequent self test outputs performed by the end user. (Page 10)
 */
uint8_t mpu9250_self_test_y_accel_get(void);
void mpu9250_self_test_y_accel_set(uint8_t value);
/**
 * Registers 13 to 15
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bits ZA_ST_DATA[7:0]
 *
 * The value in this register indicates the self test output generated
 * during manufacturing tests. This value is to be used to check
 * against subsequent self test outputs performed by the end user. (Page 10)
 */
uint8_t mpu9250_self_test_z_accel_get(void);
void mpu9250_self_test_z_accel_set(uint8_t value);


/**
 * Registers 19 to 24
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * --------
 * Bit [7:0]
 * Name X_OFFS_USR[15:8]
 *
 * High byte, Low byte in USR register (14h)
 * OffsetLSB= X_OFFS_USR * 4 / 2^FS_SEL
 * OffsetDPS= X_OFFS_USR * 4 / 2^FS_SEL / Gyro_Sensitivity
 * Nominal FS_SEL = 0
 * Conditions Gyro_Sensitivity = 2^16 LSB / 500dps
 * Max 999.969 dps
 * Min -1000 dps
 * Step 0.0305 dps
 *
 * --------
 * Bit [7:0]
 * Name X_OFFS_USR[7:0]
 *
 * Low byte, High byte in USR register (13h)
 * (Page 11)
 */
uint8_t mpu9250_gyro_offset_registers_x_get(void);
void mpu9250_gyro_offset_registers_x_set(uint8_t value);
/**
 * Registers 19 to 24
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * --------
 * Bit [7:0]
 * Name Y_OFFS_USR[15:8]
 *
 * High byte, Low byte in USR register (16h)
 * OffsetLSB= Y_OFFS_USR * 4 / 2^FS_SEL
 * OffsetDPS= Y_OFFS_USR * 4 / 2^FS_SEL / Gyro_Sensitivity
 * Nominal FS_SEL = 0
 * Conditions Gyro_Sensitivity = 2^16 LSB / 500dps
 * Max 999.969 dps
 * Min -1000 dps
 * Step 0.0305 dps
 *
 * --------
 * Bit [7:0]
 * Name Y_OFFS_USR[7:0]
 *
 * Low byte, High byte in USR register (15h)
 * (Page 11)
 */
uint8_t mpu9250_gyro_offset_registers_y_get(void);
void mpu9250_gyro_offset_registers_y_set(uint8_t value);
/**
 * Registers 19 to 24
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * --------
 * Bit [7:0]
 * Name Z_OFFS_USR[15:8]
 *
 * High byte, Low byte in USR register (18h)
 * OffsetLSB= Z_OFFS_USR * 4 / 2^FS_SEL
 * OffsetDPS= Z_OFFS_USR * 4 / 2^FS_SEL / Gyro_Sensitivity
 * Nominal FS_SEL = 0
 * Conditions Gyro_Sensitivity = 2^16 LSB / 500dps
 * Max 999.969 dps
 * Min -1000 dps
 * Step 0.0305 dps
 *
 * --------
 * Bit [7:0]
 * Name Y_OFFS_USR[7:0]
 *
 * Low byte, High byte in USR register (17h)
 * (Page 11)
 */
uint8_t mpu9250_gyro_offset_registers_z_get(void);
void mpu9250_gyro_offset_registers_z_set(uint8_t value);

/**
 * These registers are used to remove DC bias from the gyro sensor data output
 * for X, Y and Z axes.
 * The values in these registers are subtracted from the gyro sensor values
 * before going into the sensor registers. Please refer to registers 67 to
 * 72 for units.
 */
/**
 * Register 25 - Sample Rate Divider
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]
 * Name SMPLRT_DIV[7:0]
 *
 * Divides the internal sample rate (see register CONFIG) to generate the
 * sample rate that controls sensor data output rate, FIFO sample rate.
 * NOTE: This register is only effective when Fchoice = 2'b11 (fchoice_b
 * register bits are 2'b00), and (0 < dlpf_cfg < 7), such that the average
 * filter's output is selected (see chart below).
 *
 * This is the update rate of sensor register.
 * SAMPLE_RATE = Internal_Sample_Rate / (1 + SMPLRT_DIV)
 *
 * Data should be sampled at or above sample rate; SMPLRT_DIV is only used for
 * 1kHz internal sampling.
 */
uint8_t mpu9250_sample_rate_divider_get(void);
void mpu9250_sample_rate_divider_set(uint8_t value);

/**
 * Register 26 - Configuration
 *
 * Bit [7] -            Reserved
 * Bit [6] FIFO_MODE    When set to '1', when the fifo is full, additional
 *                      writes will not be written to fifo.
 *
 *                      When set to '0', when the fifo is full, additional
 *                      writes will be written to the fifo, replacing the
 *                      oldest data.
 *
 * Bit [5:3] EXT_SYNC_SET[2:0]    Enables FSYNC pin data to be sampled.
 *
 *                                EXT_SYNC_SET    |    FSYNC bit location
 *                                ---------------------------------------
 *                                    0           |    function disabled
 *                                    1           |    TEMP_OUT_L[0]
 *                                    2           |    GYRO_XOUT_L[0]
 *                                    3           |    GYRO_YOUT_L[0]
 *                                    4           |    GYRO_ZOUT_L[0]
 *                                    5           |    ACCEL_XOUT_L[0]
 *                                    6           |    ACCEL_YOUT_L[0]
 *                                    7           |    ACCEL_ZOUT_L[0]
 *
 * Fsync will be latched to capture short strobes. This will be done such that
 * if Fsync toggles, the latched value toggles, but won't toggle again until
 * the new latched value is captured by the sample rate strobe. This is a
 * requirement for working with some 3 party devices that have fsync strobes
 * shorter than our sample rate.
 *
 *
 * Bit [2:0] DLPF_CFG[2:0]  For the DLPF to be used, fchoice[1:0] must be set
 * to 2'b11, fchoice_b[1:0] is 2'b00.
 *
 * FCHOICE  |  DLFP_CFG  |              Gyroscope           | Temperature Sensor
 * -----------------------------------------------------------------------------
 * <1> <0>  |            |  Bandwidth |  Delay |  Fs (kHz)  | Bandwidth | Delay
 *          |            |  (Hz)      | (ms)   |            | (Hz)      | (ms)
 * -----------------------------------------------------------------------------
 * x    0   |     x      | 8800       | 0.064  | 32         | 4000      | 0.04
 * -----------------------------------------------------------------------------
 * 0    1   |     x      | 3600       | 0.11   | 32         | 4000      | 0.04
 * -----------------------------------------------------------------------------
 * 1    1   |     0      | 250        | 0.97   | 8          | 4000      | 0.04
 * -----------------------------------------------------------------------------
 * 1    1   |     1      | 184        | 2.9    | 1          | 188       | 1.9
 * -----------------------------------------------------------------------------
 * 1    1   |     2      | 92         | 3.9    | 1          | 98        | 2.8
 * -----------------------------------------------------------------------------
 * 1    1   |     3      | 41         | 5.9    | 1          | 42        | 4.8
 * -----------------------------------------------------------------------------
 * 1    1   |     4      | 20         | 9.9    | 1          | 20        | 8.3
 * -----------------------------------------------------------------------------
 * 1    1   |     5      | 10         | 17.85  | 1          | 10        | 13.4
 * -----------------------------------------------------------------------------
 * 1    1   |     6      | 5          | 33.48  | 1          | 5         | 18.6
 * -----------------------------------------------------------------------------
 * 1    1   |     7      | 3600       | 0.17   | 8          | 4000      | 0.04
 *
 * (See table 3 of page 13)
 */
uint8_t mpu9250_config_get(void);
void mpu9250_config_set(uint8_t value);

/**
 * Register 27 - Gyroscope Configuration
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]    XGYRO_Cten        X Gyro self-test
 * Bit [6]    YGYRO_Cten        Y Gyro self-test
 * Bit [5]    ZGYRO_Cten        Z Gyro self-test
 *
 * Bit [4:3]  GYRO_FS_SEL[1:0]  Gyro Full Scale Select:
 *                              00 = +250dps
 *                              01 = +500dps
 *                              10 = +1000dps
 *                              11 = +2000dps
 *
 * Bit [2]    -                 Reserved
 * Bit [1:0]  Fchoice_b[1:0]    Used to bypass DLPF as shown in table 1 above.
 *                              NOTE: Register is Fchoice_b (inverted version of
 *                              Fchoice), table 1 uses Fchoice (which is the
 *                              inverted version of this register).
 */
uint8_t mpu9250_gyroscope_config_get(void);
void mpu9250_gyroscope_config_set(uint8_t value);

/**
 * Register 28 - Accelerometer Configuration
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]    ax_st_en           X Accel self-test
 * Bit [6]    ay_st_en           Y Accel self-test
 * Bit [5]    az_st_en           Z Accel self-test
 *
 * Bit [4:3]  ACCEL_FS_SEL[1:0]  Accel Full Scale Select:
 *                               ±2g (00), ±4g (01), ±8g (10), ±16g (11)
 *
 * Bit [2:0]  -                  Reserved
 *
 * (See page 14)
 */
uint8_t mpu9250_accelerometer_config_get(void);
void mpu9250_accelerometer_config_set(uint8_t value);

/**
 * Register 29 - Accelerometer Configuration 2
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:6]    Reserved
 * Bit [5:4]    Reserved
 * Bit [3]      accel_fchoice_b    Used to bypass DLPF as shown in table 2
 *                                 below. NOTE: This register contains
 *                                 accel_fchoice_b (the inverted version of
 *                                 accel_fchoice as described in the table
 *                                 below).
 *
 * Bit [2:0]    A_DLPFCFG          Accelerometer low pass filter setting as
 *                                 shown in table 2 below.
 *
 * Accelerometer Data Rates and Bandwidths (Normal Mode)
 *
 * ACCEL_FCHOICE  | A_DLPF_CFG  |                 Output
 *                |             |-----------------------------------------------
 *                |             | Bandwidth |  Delay |  Noise     | Rate
 *                |             |   (Hz)    |   (ms) |  Density   | (kHz)
 *                |             |           |        |  (ug/rtHz) |
 * -----------------------------------------------------------------------------
 *   0            |  X          |  1.13 K   |  0.75  |  250       |  4
 * -----------------------------------------------------------------------------
 *   1            |  0          |  460      |  1.94  |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  1          |  184      |  5.80  |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  2          |  92       |  7.8   |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  3          |  41       |  11.80 |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  4          |  20       |  19.80 |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  5          |  10       |  35.70 |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  6          |  5        |  66.96 |  250       |  1
 * -----------------------------------------------------------------------------
 *   1            |  7          |  460      |  1.94  |  250       |  1
 *
 * The data output rate of the DLPF filter block can be further reduced by a
 * factor of 1/(1+SMPLRT_DIV), where SMPLRT_DIV is an 8-bit integer. The
 * following is a small subset of ODRs that are configurable for the
 * accelerometer in the normal mode in this manner
 * (Hz): 3.91, 7.81, 15.63, 31.25, 62.50, 125, 250, 500, 1K
 *
 * The following table lists the approximate accelerometer filter bandwidths
 * available in the low-power mode of operation. In the low-power mode of
 * operation, the accelerometer is duty-cycled. Fchoice=0 for all options.
 *
 * Accelerometer Data Rates and Bandwidths (Low-Power Mode)
 *
 * ACCEL_FCHOICE  |  ODR (Hz)   |                  Output
 *                |             |-----------------------------------------------
 *                |             |  Bandwidth (Hz)    |  Delay (ms)
 * -----------------------------------------------------------------------------
 *   0            |  0.24       |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  0.49       |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  0.98       |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  1.95       |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  3.91       |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  7.81       |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  15.63      |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  31.25      |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  62.50      |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  125        |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  250        |  1.1k              |  1
 * -----------------------------------------------------------------------------
 *   0            |  500        |  1.1k              |  1
 *
 * As you can see from the tables above, some of the ODRs can be configured in
 * the normal accelerometer mode as well as low power mode. For further details
 * on how to configure the individual ODRs, please refer to register 30 Low
 * Power Accelerometer ODR Control.
 * (See page 14 - 16)
 */
uint8_t mpu9250_accelerometer_config2_get(void);
void mpu9250_accelerometer_config2_set(uint8_t value);

/**
 * Register 30 - Low Power Accelerometer ODR Control
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:4]    Reserved
 * Bit [3:0]    lposc_clksel[3:0]    Sets the frequency of waking up the chip
 *                                   to take a sample of accel data - the low
 *                                   power accel Output Data Rate.
 *
 *                                   Lposc_clksel  |  Output Frequency (Hz)
 *                                   -------------------------------------------
 *                                     0           |   0.24
 *                                     1           |   0.49
 *                                     2           |   0.98
 *                                     3           |   1.95
 *                                     4           |   3.91
 *                                     5           |   7.81
 *                                     6           |  15.63
 *                                     7           |  31.25
 *                                     8           |  62.50
 *                                     9           |    125
 *                                     10          |    250
 *                                     11          |    500
 *                                     12-15       |  RESERVED
 */
uint8_t mpu9250_low_power_accelerometer_odr_control_get(void);
void mpu9250_low_power_accelerometer_odr_control_set(uint8_t value);

/**
 * Register 31 - Wake-on Motion Threshold
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    WOM_Threshold    This register holds the threshold value for
 *                               the Wake on Motion Interrupt for accel x/y/z
 *                               axes. LSB = 4mg. Range is 0mg to 1020mg.
 *
 * For more details on how to configure the Wake-on-Motion interrupt, please
 * refer to section 5 in the MPU-9250 Product Specification document.
 */
uint8_t mpu9250_wake_on_motion_threshold_get(void);
void mpu9250_wake_on_motion_threshold_set(uint8_t value);

/**
 * Register 32 - 34, Not documented. (Not used?)
 */

/**
 * Register 35 - FIFO Enable
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]    TEMP_OUT    1 - Write TEMP_OUT_H and TEMP_OUT_L to the FIFO at
 *                        the sample rate; If enabled, buffering of data occurs
 *                        even if data path is in standby.
 *
 *                        0 - function is disabled
 *
 * Bit [6]    GYRO_XOUT   1 - Write GYRO_XOUT_H and GYRO_XOUT_L to the FIFO at
 *                        the sample rate; If enabled, buffering of data occurs
 *                        even if data path is in standby.
 *
 *                        0 - function is disabled
 *
 * Bit [5]    GYRO_YOUT   1 - Write GYRO_YOUT_H and GYRO_YOUT_L to the FIFO at
 *                        the sample rate; If enabled, buffering of data occurs
 *                        even if data path is in standby.
 *
 *                        0 - function is disabled
 *
 * Bit [4]    GYRO_ZOUT   1 - Write GYRO_ZOUT_H and GYRO_ZOUT_L to the FIFO at
 *                        the sample rate; If enabled, buffering of data occurs
 *                        even if data path is in standby.
 *
 *                        0 - function is disabled
 *
 * Bit [3]    ACCEL       1 - Write ACCEL_XOUT_H, ACCEL_XOUT_L, ACCEL_YOUT_H,
 *                        ACCEL_YOUT_L, ACCEL_ZOUT_H, and ACCEL_ZOUT_L to the
 *                        FIFO at the sample rate;
 *
 * Bit [2]    SLV_2       1 - Write EXT_SENS_DATA registers associated to SLV_2
 *                        (as determined by I2C_SLV0_CTRL, I2C_SLV1_CTRL, and
 *                        I2C_SL20_CTRL) to the FIFO at the sample rate;
 *
 *                        0 - function is disabled
 *
 * Bit [1]    SLV_1       1 - Write EXT_SENS_DATA registers associated to SLV_1
 *                        (as determined by I2C_SLV0_CTRL and I2C_SLV1_CTRL) to
 *                        the FIFO at the sample rate;
 *
 *                        0 - function is disabled
 *
 * Bit [0]    SLV_0       1 - EXT_SENS_DATA registers associated to SLV_0 (as
 *                        determined by I2C_SLV0_CTRL) to the FIFO at the
 *                        sample rate;
 *
 *                        0 - function is disabled
 *
 *                        NOTE: See I2C_SLV3_CTRL register to enable this
 *                        feature for SLV_3
 *
 * Note: For further information regarding the association of EXT_SENS_DATA
 * registers to particular slave devices, please refer to Registers 73 to 96.
 */
uint8_t mpu9250_fifo_enable_get(void);
void mpu9250_fifo_enable_set(uint8_t value);

/**
 * Register 36 - I2C Master Control
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]    MULT_MST_EN    Enables multi-master capability. When disabled,
 *                           clocking to the I2C_MST_IF can be disabled when
 *                           not in use and the logic to detect lost
 *                           arbitration is disabled.
 *
 * Bit [6]    WAIT_FOR_ES    Delays the data ready interrupt until external
 *                           sensor data is loaded. If I2C_MST_IF is disabled,
 *                           the interrupt will still occur.
 *
 * Bit [5]    SLV_3_FIFO_EN  1 - Write EXT_SENS_DATA registers associated to
 *                           SLV_3 (as determined by I2C_SLV0_CTRL and
 *                           I2C_SLV1_CTRL and I2C_SLV2_CTRL) to the FIFO at
 *                           the sample rate;
 *
 *                           0 - function is disabled
 *
 * Bit [4]    I2C_MST_P_NSR  This bit controls the I2C Master's transition from
 *                           one slave read to the next slave read. If 0, there
 *                           is a restart between reads. If 1, there is a stop
 *                           between reads.
 *
 * Bit [3:0]  I2C_MST_CLK[3:0]    I2C_MST_CLK is a 4 bit unsigned value which
 *                                configures a divider on the MPU-9250 internal
 *                                8MHz clock. It sets the I C master clock
 *                                speed according to the following table:
 *
 *                                I2C_MST_CLK | I2C Master Clock | 8MHz Clock
 *                                            |   Speed          |   Divider
 *                                ----------------------------------------------
 *                                  0         |  348 kHz         |  23
 *                                  1         |  333 kHz         |  24
 *                                  2         |  320 kHz         |  25
 *                                  3         |  308 kHz         |  26
 *                                  4         |  296 kHz         |  27
 *                                  5         |  286 kHz         |  28
 *                                  6         |  276 kHz         |  29
 *                                  7         |  267 kHz         |  30
 *                                  8         |  258 kHz         |  31
 *                                  9         |  500 kHz         |  16
 *                                 10         |  471 kHz         |  17
 *                                 11         |  444 kHz         |  18
 *                                 12         |  421 kHz         |  19
 *                                 13         |  400 kHz         |  20
 *                                 14         |  381 kHz         |  21
 *                                 15         |  364 kHz         |  22
 *
 * Note: For further information regarding the association of EXT_SENS_DATA
 * registers to particular slave devices, please refer to Registers 73 to 96
 */
uint8_t mpu9250_master_control_get(void);
void mpu9250_master_control_set(uint8_t value);

/**
 * 4.13    Register 37 to 39 - I2C Slave 0 Control (Page 20)
 */
/**
 * Register 37 - I2C_SLV0_ADDR
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]        I2C_SLV0_RNW        1 - Transfer is a read
 *                                    2 - Transfer is a write
 *
 * Bit [6:0]      I2C_ID_0[6:0]       Physical address of I2C slave 0
 */
uint8_t mpu9250_slave0_address_get(void);
void mpu9250_slave0_address_set(uint8_t value);

/**
 * Register 38 - I2C_SLV0_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]      I2C_SLV0_REG[7:0]    I2C slave 0 register address from where
 *                                     to begin data transfer
 */
uint8_t mpu9250_slave0_register_get(void);
void mpu9250_slave0_register_set(uint8_t value);

/**
 * Register 39 - I2C_SLV0_CTRL
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]        I2C_SLV0_EN         1 - Enable reading data from this slave at
 *                                    the sample rate and storing data at the
 *                                    first available EXT_SENS_DATA register,
 *                                    which is always EXT_SENS_DATA_00 for I2C
 *                                    slave 0.
 *
 *                                    0 - function is disabled for this slave
 *
 * Bit [6]        I2C_SLV0_BYTE_SW    1 - Swap bytes when reading both the low
 *                                    and high byte of a word. Note there is
 *                                    nothing to swap after reading the first
 *                                    byte if I2C_SLV0_REG[0] = 1, or if the
 *                                    last byte read has a register address
 *                                    lsb = 0.
 *
 *                                    For example, if I2C_SLV0_REG = 0x1, and
 *                                    I2C_SLV0_LENG = 0x4:
 *
 *                                       1) The first byte read from address 0x1
 *                                          will be stored at EXT_SENS_DATA_00,
 *
 *                                       2) the second and third bytes will be
 *                                          read and swapped, so the data read
 *                                          from address 0x2 will be stored at
 *                                          EXT_SENS_DATA_02, and the data read
 *                                          from address 0x3 will be stored at
 *                                          EXT_SENS_DATA_01,
 *
 *                                       3) The last byte read from address 0x4
 *                                       will be stored at EXT_SENS_DATA_03
 *
 *                                    0 - no swapping occurs, bytes are written
 *                                    in order read.
 *
 * Bit [5]        I2C_SLV0_REG_DIS    When set, the transaction does not write
 *                                    a register value, it will only read data,
 *                                    or write data
 *
 * Bit [4]        I2C_SLV0_GRP        External sensor data typically comes in
 *                                    as groups of two bytes. This bit is used
 *                                    to determine if the groups are from the
 *                                    slave's register address 0 and 1, 2 and
 *                                    3, etc.., or if the groups are address 1
 *                                    and 2, 3 and 4, etc..
 *
 *                                    0 indicates slave register addresses 0
 *                                    and 1 are grouped together (odd numbered
 *                                    register ends the group). 1 indicates
 *                                    slave register addresses 1 and 2 are
 *                                    grouped together (even numbered register
 *                                    ends the group). This allows byte
 *                                    swapping of registers that are grouped
 *                                    starting at any address.
 *
 * Bit [3:0]      I2C_SLV0_LENG[3:0]  Number of bytes to be read from I2C
 *                                    slave 0
 */
uint8_t mpu9250_slave0_control_get(void);
void mpu9250_slave0_control_set(uint8_t value);

/**
 * Register 40 - I2C_SLV1_ADDR
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV1_RNW          1 - Transfer is a read
 *                                    2 - Transfer is a write
 *
 * Bit [6:0]    I2C_ID_1[6:0]         Physical address of I2C slave 1
 */
uint8_t mpu9250_slave1_address_get(void);
void mpu9250_slave1_address_set(uint8_t value);

/**
 * Register 41 - I2C_SLV1_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV1_REG[7:0]     I2C slave 1 register address from where
 *                                    to begin data transfer
 *
 */
uint8_t mpu9250_slave1_register_get(void);
void mpu9250_slave1_register_set(uint8_t value);

/**
 * Register 42 - I2C_SLV1_CTRL
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV1_EN           1 - Enable reading data from this slave
 *                                    at the sample rate and storing data at
 *                                    the first available EXT_SENS_DATA
 *                                    register as determined by I2C_SLV1_EN and
 *                                    I2C_SLV1_LENG.
 *
 *                                    0 - Function is disabled for this slave
 *
 * Bit [6]      I2C_SLV1_BYTE_SW      1 - Swap bytes when reading both the low
 *                                    and high byte of a word. Note there is
 *                                    nothing to swap after reading the first
 *                                    byte if I2C_SLV1_REG[0] = 1, or if the
 *                                    last byte read has a register address
 *                                    lsb = 0.
 *
 *                                    For example, if I2C_SLV1_EN = 0x1, and
 *                                    I2C_SLV1_LENG = 0x3 (to show swap has to
 *                                    do with I2C slave address not
 *                                    EXT_SENS_DATA address), and if
 *                                    I2C_SLV1_REG = 0x1, and
 *                                    I2C_SLV1_LENG = 0x4:
 *
 *                                      1) The first byte read from address 0x1
 *                                      will be stored at EXT_SENS_DATA_03
 *                                      (slave 0's data will be in
 *                                      EXT_SENS_DATA_00, EXT_SENS_DATA_01, and
 *                                      EXT_SENS_DATA_02),
 *
 *                                      2) the second and third bytes will be
 *                                      read and swapped, so the data read from
 *                                      address 0x2 will be stored at
 *                                      EXT_SENS_DATA_04, and the data read from
 *                                      address 0x3 will be stored at
 *                                      EXT_SENS_DATA_05,
 *
 *                                      3) The last byte read from address 0x4
 *                                      will be stored at EXT_SENS_DATA_06
 *
 *                                    0 - no swapping occurs, bytes are written
 *                                    in order read.
 *
 * Bit [5]      I2C_SLV1_REG_DIS      When set, the transaction does not write
 *                                    a register value, it will only read data,
 *                                    or write data
 *
 * Bit [4]      I2C_SLV1_GRP          External sensor data typically comes in
 *                                    as groups of two bytes. This bit is used
 *                                    to determine if the groups are from the
 *                                    slave's register address 0 and 1, 2 and
 *                                    3, etc.., or if the groups are address 1
 *                                    and 2, 3 and 4, etc.. 0 indicates slave
 *                                    register addresses 0 and 1 are grouped
 *                                    together (odd numbered register ends the
 *                                    group). 1 indicates slave register
 *                                    addresses 1 and 2 are grouped together
 *                                    (even numbered register ends the group).
 *                                    This allows byte swapping of registers
 *                                    that are grouped starting at any address.
 *
 * Bit [3:0]    I2C_SLV1_LENG[3:0]    Number of bytes to be read from I2C
 *                                    slave 1
 */
uint8_t mpu9250_slave1_control_get(void);
void mpu9250_slave1_control_set(uint8_t value);

/**
 * Registers 43 to 45 - I2C Slave 2 Control
 */
/**
 * Register 43 - I2C_SLV2_ADDR
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV2_RNW          1 - Transfer is a read
 *                                    2 - Transfer is a write
 *
 * Bit [6:0]    I2C_ID_2[6:0]         Physical address of I2C slave 2
 */
uint8_t mpu9250_slave2_address_get(void);
void mpu9250_slave2_address_set(uint8_t value);

/**
 * Register 44 - I2C_SLV2_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV2_REG[7:0]     I2C slave 2 register address from where
 *                                    to begin data transfer
 */
uint8_t mpu9250_slave2_register_get(void);
void mpu9250_slave2_register_set(uint8_t value);

/**
 * Register 45 - I2C_SLV2_CTRL
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV2_EN           1 - Enable reading data from this slave
 *                                    at the sample rate and storing data at
 *                                    the first available EXT_SENS_DATA
 *                                    register as determined by I2C_SLV0_EN,
 *                                    I2C_SLV0_LENG, I2C_SLV1_EN and
 *                                    I2C_SLV1_LENG.
 *
 *                                    0 - function is disabled for this slave
 *
 * Bit [6]      I2C_SLV2_BYTE_SW      1 - Swap bytes when reading both the low
 *                                    and high byte of a word. Note there is
 *                                    nothing to swap after reading the first
 *                                    byte if I2C_SLV2_REG[0] = 1, or if the
 *                                    last byte read has a register address
 *                                    lsb = 0. See I2C_SLV1_CTRL for an example.
 *
 *                                    0 - no swapping occurs, bytes are written
 *                                    in order read.
 *
 * Bit [5]      I2C_SLV2_REG_DIS      When set, the transaction does not write
 *                                    a register value, it will only read data,
 *                                    or write data
 *
 * Bit [4]      I2C_SLV2_GRP          External sensor data typically comes in
 *                                    as groups of two bytes. This bit is used
 *                                    to determine if the groups are from the
 *                                    slave's register address 0 and 1, 2 and
 *                                    3, etc.., or if the groups are address 1
 *                                    and 2, 3 and 4, etc..
 *
 * Bit [3:0]    I2C_SLV2_LENG[3:0]    Number of bytes to be read from I2C
 *                                    slave 2
 */
uint8_t mpu9250_slave2_control_get(void);
void mpu9250_slave2_control_set(uint8_t value);

/**
 * Register 46 - I2C_SLV3_ADDR
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV3_RNW          1 - Transfer is a read.
 *                                    0 - Transfer is a write.
 *
 * Bit [6:0]    I2C_ID_3[6:0]         Physical address of I2C slave 3
 */
uint8_t mpu9250_slave3_address_get(void);
void mpu9250_slave3_address_set(uint8_t value);

/**
 * Register 47 - I2C_SLV3_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV3_REG[7:0]     I2C slave 3 register address from where
 *                                    to begin data transfer
 */
uint8_t mpu9250_slave3_register_get(void);
void mpu9250_slave3_register_set(uint8_t value);

/**
 * Register 48 - I2C_SLV3_CTRL
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV3_EN            1 - Enable reading data from this slave
 *                                     at the sample rate and storing data at
 *                                     the first available EXT_SENS_DATA
 *                                     register as determined by I2C_SLV0_EN,
 *                                     I2C_SLV0_LENG, I2C_SLV1_EN,
 *                                     I2C_SLV1_LENG, I2C_SLV2_EN and
 *                                     I2C_SLV2_LENG.
 *
 *                                     0 - function is disabled for this slave
 *
 * Bit [6]      I2C_SLV3_BYTE_SW       1 - Swap bytes when reading both the low
 *                                     and high byte of a word. Note there is
 *                                     nothing to swap after reading the first
 *                                     byte if I2C_SLV3_REG[0] = 1, or if the
 *                                     last byte read has a register address
 *                                     lsb = 0. See I2C_SLV1_CTRL for an
 *                                     example.
 *
 *                                     0 - no swapping occurs, bytes are
 *                                     written in order read.
 *
 * Bit [5]      I2C_SLV0_REG_DIS       When set, the transaction does not write
 *                                     a register value, it will only read
 *                                     data, or write data
 *
 * Bit [4]      I2C_SLV3_GRP           External sensor data typically comes in
 *                                     as groups of two bytes. This bit is used
 *                                     to determine if the groups are from the
 *                                     slave's register address 0 and 1, 2 and
 *                                     3, etc.., or if the groups are address
 *                                     1 and 2, 3 and 4, etc..
 *
 *                                     0 indicates slave register addresses 0
 *                                     and 1 are grouped together (odd numbered
 *                                     register ends the group). 1 indicates
 *                                     slave register addresses 1 and 2 are
 *                                     grouped together (even numbered register
 *                                     ends the group). This allows byte
 *                                     swapping of registers that are grouped
 *                                     starting at any address.
 *
 * Bit [3:0]    I2C_SLV3_LENG[3:0]     Number of bytes to be read from I2C
 *                                     slave 3
 */
uint8_t mpu9250_slave3_control_get(void);
void mpu9250_slave3_control_set(uint8_t value);

/**
 * Register 49 - I2C_SLV4_ADDR
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV4_RNW           1 - Transfer is a read
 *                                     0 - Transfer is a write
 *
 * Bit [6:0]    I2C_ID_4[6:0]          Physical address of I2C slave 4
 */
uint8_t mpu9250_slave4_address_get(void);
void mpu9250_slave4_address_set(uint8_t value);

/**
 * Register 50 - I2C_SLV4_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV4_REG[7:0]      I2C slave 4 register address from where
 *                                     to begin data transfer
 */
uint8_t mpu9250_slave4_register_get(void);
void mpu9250_slave4_register_set(uint8_t value);

/**
 * Register 51 - I2C_SLV4_DO
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV4_DO[7:0]       Data to be written to I2C Slave 4 if
 *                                     enabled.
 */
uint8_t mpu9250_slave4_data_get(void);
void mpu9250_slave4_data_set(uint8_t value);

/**
 * Register 52 - I2C_SLV4_CTRL
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      I2C_SLV4_EN            1 - Enable data transfer with this slave
 *                                     at the sample rate. If read command,
 *                                     store data in I2C_SLV4_DI register, if
 *                                     write command, write data stored in
 *                                     I2C_SLV4_DO register. Bit is cleared
 *                                     when a single transfer is complete.
 *                                     Be sure to write I2C_SLV4_DO first
 *
 *                                     0 - function is disabled for this slave
 *
 * Bit [6]      SLV4_DONE_INT_EN       1 - Enables the completion of the I2C
 *                                     slave 4 data transfer to cause an
 *                                     interrupt.
 *
 *                                     0 - Completion of the I2C slave 4 data
 *                                     transfer will not cause an interrupt.
 *
 * Bit [5]      I2C_SLV4_REG_DIS       When set, the transaction does not write
 *                                     a register value, it will only read
 *                                     data, or write data
 *
 * Bit [4:0]    I2C_MST_DLY            When enabled via the I2C_MST_DELAY_CTRL,
 *                                     those slaves will only be enabled every
 *                                     (1+I2C_MST_DLY) samples (as determined
 *                                     by the SMPLRT_DIV and DLPF_CFG registers.
 */
uint8_t mpu9250_slave4_control_get(void);
void mpu9250_slave4_control_set(uint8_t value);

/**
 * Register 53 - I2C_SLV4_DI
 * Serial IF: R
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV4_DI[7:0]       Data read from I2C Slave 4.
 */
uint8_t mpu9250_slave4_data_get(void);
// No setter for I2C_SLV4_DI (Read-only)
// void mpu9250_slave4_data_set(uint8_t value);

/**
 * 4.18
 */
/**
 * Register 54 - I2C Master Status (I2C_MST_STATUS)
 * Serial IF: R/C (Read)
 * Reset Value: 0x00
 *
 * Bit [7]      PASS_THROUGH           Status of FSYNC interrupt – used as a
 *                                     way to pass an external interrupt
 *                                     through this chip to the host. If
 *                                     enabled in the INT_PIN_CFG register by
 *                                     asserting bit FSYNC_INT_EN and if the
 *                                     FSYNC signal transitions from low to
 *                                     high, this will cause an interrupt. A
 *                                     read of this register clears all status
 *                                     bits in this register.
 *
 * Bit [6]      I2C_SLV4_DONE          Asserted when I2C slave 4's transfer is
 *                                     complete, will cause an interrupt if bit
 *                                     I2C_MST_INT_EN in the INT_ENABLE
 *                                     register is asserted, and if the
 *                                     SLV4_DONE_INT_EN bit is asserted in the
 *                                     I2C_SLV4_CTRL register.
 *
 * Bit [5]      I2C_LOST_ARB           Asserted when I2C slave looses
 *                                     arbitration of the I2C bus, will cause
 *                                     an interrupt if bit I2C_MST_INT_EN in
 *                                     the INT_ENABLE register is asserted.
 *
 * Bit [4]      I2C_SLV4_NACK          Asserted when slave 4 receives a nack,
 *                                     will cause an interrupt if bit
 *                                     I2C_MST_INT_EN in the INT_ENABLE
 *                                     register is asserted.
 *
 * Bit [3]      I2C_SLV3_NACK          Asserted when slave 3 receives a nack,
 *                                     will cause an interrupt if bit
 *                                     I2C_MST_INT_EN in the INT_ENABLE
 *                                     register is asserted.
 *
 * Bit [2]      I2C_SLV2_NACK          Asserted when slave 2 receives a nack,
 *                                     will cause an interrupt if bit
 *                                     I2C_MST_INT_EN in the INT_ENABLE
 *                                     register is asserted.
 *
 * Bit [1]      I2C_SLV1_NACK          Asserted when slave 1 receives a nack,
 *                                     will cause an interrupt if bit
 *                                     I2C_MST_INT_EN in the INT_ENABLE
 *                                     register is asserted.
 *
 * Bit [0]      I2C_SLV0_NACK          Asserted when slave 0 receives a nack,
 *                                     will cause an interrupt if bit
 *                                     I2C_MST_INT_EN in the INT_ENABLE
 *                                     register is asserted.
 */
uint8_t mpu9250_master_status_get(void);
// No setter for I2C_MST_STATUS (Read-only)
// void mpu9250_master_status_set(uint8_t value);

/**
 * Register 55 - INT Pin / Bypass Enable Configuration (INT_PIN_CFG)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]      ACTL                   1 - The logic level for INT pin is
 *                                     active low.
 *
 *                                     0 - The logic level for INT pin is
 *                                     active high.
 *
 *
 *
 * Bit [6]      OPEN                   1 - INT pin is configured as open drain.
 *                                     0 - INT pin is configured as push-pull.
 *
 *
 *
 * Bit [5]      LATCH_INT_EN           1 - INT pin level held until interrupt
 *                                     status is cleared.
 *
 *                                     0 - INT pin indicates interrupt pulse's
 *                                     is width 50us.
 *
 *
 *
 * Bit [4]      INT_ANYRD_2CLEAR       1 - Interrupt status is cleared if any
 *                                     read operation is performed.
 *
 *                                     0 - Interrupt status is cleared only by
 *                                     reading INT_STATUS register
 *
 *
 *
 * Bit [3]      ACTL_FSYNC             1 - The logic level for the FSYNC pin as
 *                                     an interrupt is active low.
 *
 *                                     0 - The logic level for the FSYNC pin as
 *                                     an interrupt is active high.
 *
 *
 *
 * Bit [2]      FSYNC_INT_MODE_EN      1 - This enables the FSYNC pin to be
 *                                     used as an interrupt. A transition to
 *                                     the active level described by the
 *                                     ACTL_FSYNC bit will cause an interrupt.
 *                                     The status of the interrupt is read in
 *                                     the I2C Master Status register
 *                                     PASS_THROUGH bit.
 *
 *                                     0 - This disables the FSYNC pin from
 *                                     causing an interrupt.
 *
 *
 *
 * Bit [1]      BYPASS_EN              When asserted, the i2c_master interface
 *                                     pins(ES_CL and ES_DA) will go into
 *                                     'bypass mode' when the i2c master
 *                                     interface is disabled. The pins will
 *                                     float high due to the internal pull-up
 *                                     if not enabled and the i2c master
 *                                     interface is disabled.
 *
 *
 * Bit [0]     RESERVED
 */
uint8_t mpu9250_int_pin_config_get(void);
void mpu9250_int_pin_config_set(uint8_t value);


/**
 * Register 56 - Interrupt Enable (INT_ENABLE)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]     RESERVED
 *
 * Bit [6]     WOM_EN                  1 - Enable interrupt for wake on motion
 *                                     to propagate to interrupt pin.
 *
 *                                     0 - function is disabled.
 *
 *
 *
 *
 * Bit [5]     RESERVED
 *
 * Bit [4]     FIFO_OVERFLOW_EN        1 - Enable interrupt for FIFO overflow
 *                                     to propagate to interrupt pin.
 *
 *                                     0 - function is disabled.
 *
 *
 *
 * Bit [3]     FSYNC_INT_EN            1 - Enable Fsync interrupt to propagate
 *                                     to interrupt pin.
 *
 *                                     0 - function is disabled.
 *
 *
 * Bit [2]     RESERVED
 *
 * Bit [1]     RESERVED
 *
 * Bit [0]     RAW_RDY_EN              1 - Enable Raw Sensor Data Ready
 *                                     interrupt to propagate to interrupt pin.
 *                                     The timing of the interrupt can vary
 *                                     depending on the setting in register 36
 *                                     I2C_MST_CTRL, bit [6] WAIT_FOR_ES.
 *
 *                                     0 - function is disabled.
 */
uint8_t mpu9250_interrupt_enable_get(void);
void mpu9250_interrupt_enable_set(uint8_t value);

/**
 * Register 58 - Interrupt Status (INT_STATUS)
 * Serial IF: R/C  (Read-Only)
 * Reset Value: 0x00
 *
 * Bit [7]     RESERVED
 *
 * Bit [6]     WOM_INT                 1 - Wake on motion interrupt occurred.
 *
 * Bit [5]     RESERVED
 *
 * Bit [4]     FIFO_OVERFLOW_INT       1 - FIFO Overflow interrupt occurred.
 *                                     Note that the oldest data is has been
 *                                     dropped from the FIFO.
 *
 * Bit [3]     FSYNC_INT               1 - FSYNC interrupt occurred.
 *
 * Bit [2]     RESERVED
 *
 * Bit [1]     RESERVED
 *
 * Bit [0]     RAW_DATA_RDY_INT        1 - Sensor Register Raw Data sensors are
 *                                     updated and Ready to be read. The timing
 *                                     of the interrupt can vary depending on
 *                                     the setting in register 36 I2C_MST_CTRL,
 *                                     bit [6] WAIT_FOR_ES.
 */
uint8_t mpu9250_interrupt_status_get(void);
// No setter for INT_STATUS (Read-only)
// void mpu9250_interrupt_status_set(uint8_t value);

/**
 * Register 59 to 64 - Accelerometer Measurements
 */
/**
 * Register 59 - ACCEL_XOUT_H
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of accelerometer x-axis data.
 */
uint8_t mpu9250_accel_xout_h(void);

/**
 * Register 60 - ACCEL_XOUT_L
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of accelerometer x-axis data.
 */
uint8_t mpu9250_accel_xout_l(void);

/**
 * Register 61 - ACCEL_YOUT_H
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of accelerometer y-axis data.
 */
uint8_t mpu9250_accel_yout_h(void);

/**
 * Register 62 - ACCEL_YOUT_L
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of accelerometer y-axis data.
 */
uint8_t mpu9250_accel_yout_l(void);

/**
 * Register 63 - ACCEL_ZOUT_H
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of accelerometer z-axis data.
 */
uint8_t mpu9250_accel_zout_h(void);

/**
 * Register 64 - ACCEL_ZOUT_L
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of accelerometer z-axis data.
 */
uint8_t mpu9250_accel_zout_l(void);

/**
 * Register 65 and 66 - Temperature Measurement
 */
/**
 * Register 65 - TEMP_OUT_H
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of the temperature sensor
 *                                     output
 */
uint8_t mpu9250_temp_out_h(void);
/**
 * Register 66 - TEMP_OUT_L
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of the temperature sensor
 *                                     output:
 *
 *                                     -----------------------------------------
 *                                     | TEMP_degC =                           |
 *                                     | ((TEMP_OUT - RoomTemp_OFFSET) /       |
 *                                     | Temp_Sensitivity) + 21degC            |
 *                                     -----------------------------------------
 *                                     Where Temp_degC is the temperature in
 *                                     degrees C measured by the temperature
 *                                     sensor. TEMP_OUT is the actual output of
 *                                     the temperature sensor.
 */
uint8_t mpu9250_temp_out_l(void);

/**
 * Register 67 to 72 - Gyroscope Measurements
 */
/**
 * Register 67 - GYRO_XOUT_H
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of the X-Axis gyroscope output
 */
uint8_t mpu9250_gyro_xout_h(void);
/**
 * Register 68 - GYRO_XOUT_L
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of the X-Axis gyroscope output
 *
 *                                     GYRO_XOUT = Gyro_Sensitivity *
 *                                                 X_angular_rate
 *
 *                                     Nominal     FS_SEL = 0
 *                                     Conditions  Gyro_Sensitivity = 131 LSB/
 *                                                                        (o/s)
 */
uint8_t mpu9250_gyro_xout_l(void);

/**
 * Register 69 - GYRO_YOUT_H
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of the Y-Axis gyroscope output
 */
uint8_t mpu9250_gyro_yout_h(void);
/**
 * Register 70 - GYRO_YOUT_L
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of the Y-Axis gyroscope output
 *
 *                                     GYRO_YOUT = Gyro_Sensitivity *
 *                                                 Y_angular_rate
 *
 *                                     Nominal     FS_SEL = 0
 *                                     Conditions  Gyro_Sensitivity = 131 LSB/
 *                                                                        (o/s)
 */
uint8_t mpu9250_gyro_yout_l(void);

/**
 * Register 71 - GYRO_ZOUT_H
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of the Z-Axis gyroscope output
 */
uint8_t mpu9250_gyro_zout_h(void);
/**
 * Register 72 - GYRO_ZOUT_L
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of the Z-Axis gyroscope output
 *
 *                                     GYRO_ZOUT = Gyro_Sensitivity *
 *                                                 Z_angular_rate
 *
 *                                     Nominal     FS_SEL = 0
 *                                     Conditions  Gyro_Sensitivity = 131 LSB/
 *                                                                        (o/s)
 */
uint8_t mpu9250_gyro_zout_l(void);

/**
 * 4.25 Register 73 to  96 - External Sensor Data
 */
/**
 * Register 73 - EXT_SENS_DATA_00 - 23
 * Serial IF: SyncR
 * Reset Value: 0x00
 *
 * 24 registers with the same description as below:
 *
 * Bit [7:0]   D[7:0]                  Sensor data read from external I2C
 *                                     devices via the I2C master interface.
 *                                     The data stored is controlled by the
 *                                     I2C_SLV(0-4)_ADDR, I2C_SLV(0-4)_REG,
 *                                     and I2C_SLV(0-4)_CTRL registers
 *
 * (See description on page 35 of register map PDF)
 */
uint8_t mpu9250_ext_sensor_data_get(int registerNumber);

/**
 * Register 99 - I2C Slave 0 Data Out (I2C_SLV0_DO)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   I2C_SLV0_DO             Data out when slave 0 is set to write
 */
uint8_t mpu9250_slave0_data_out_get(void);
void mpu9250_slave0_data_out_set(uint8_t value);

/**
 * Register 100 - I2C Slave 1 Data Out (I2C_SLV1_DO)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   I2C_SLV1_DO             Data out when slave 1 is set to write
 */
uint8_t mpu9250_slave1_data_out_get(void);
void mpu9250_slave1_data_out_set(uint8_t value);

/**
 * Register 101 - I2C Slave 2 Data Out (I2C_SLV2_DO)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   I2C_SLV2_DO             Data out when slave 2 is set to write
 */
uint8_t mpu9250_slave2_data_out_get(void);
void mpu9250_slave2_data_out_set(uint8_t value);

/**
 * Register 102 - I2C Slave 3 Data Out (I2C_SLV3_DO)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   I2C_SLV3_DO             Data out when slave 3 is set to write
 */
uint8_t mpu9250_slave3_data_out_get(void);
void mpu9250_slave3_data_out_set(uint8_t value);

/**
 * Register 103 - I2C Master Delay Control (I2C_MST_DELAY_CTRL)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]     DELAY_ES_SHADOW         Delays shadowing of external sensor data
 *                                     until all data is received
 *
 * Bit [6:5]   RESERVED
 *
 * Bit [4]     I2C_SLV4_DLY_EN         When enabled, slave 4 will only be
 *                                     accessed (1+I2C_MST_DLY) samples as
 *                                     determined by SMPLRT_DIV and DLPF_CFG
 *
 * Bit [3]     I2C_SLV3_DLY_EN         When enabled, slave 3 will only be
 *                                     accessed (1+I2C_MST_DLY) samples as
 *                                     determined by SMPLRT_DIV and DLPF_CFG
 *
 * Bit [2]     I2C_SLV2_DLY_EN         When enabled, slave 2 will only be
 *                                     accessed 1+I2C_MST_DLY) samples as
 *                                     determined by SMPLRT_DIV and DLPF_CFG
 *
 * Bit [1]     I2C_SLV1_DLY_EN         When enabled, slave 1 will only be
 *                                     accessed 1+I2C_MST_DLY) samples as
 *                                     determined by SMPLRT_DIV and DLPF_CFG
 *
 * Bit [0]     I2C_SLV0_DLY_EN         When enabled, slave 0 will only be
 *                                     accessed 1+I2C_MST_DLY) samples as
 *                                     determined by SMPLRT_DIV and DLPF_CFG
 */
uint8_t mpu9250_master_delay_control_get(void);
void mpu9250_master_delay_control_set(uint8_t value);

/**
 * Register 104 - Signal Path Reset
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:3]   RESERVED
 * Bit [2]     GYRO_RST                Reset gyro digital signal path. Note:
 *                                     Sensor registers are not cleared. Use
 *                                     SIG_COND_RST to clear sensor registers.
 *
 * Bit [1]     ACCEL_RST               Reset accel digital signal path. Note:
 *                                     Sensor registers are not cleared. Use
 *                                     SIG_COND_RST to clear sensor registers.
 *
 * Bit [0]     TEMP_RST                Reset temp digital signal path. Note:
 *                                     Sensor registers are not cleared. Use
 *                                     SIG_COND_RST to clear sensor registers.
 */
uint8_t mpu9250_signal_path_reset_get(void);
void mpu9250_signal_path_reset_set(uint8_t value);

/**
 * Register 105 - Accelerometer Interrupt Control (ACCEL_INTEL_CTRL)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]     ACCEL_INTEL_EN          This bit enables the Wake-on-Motion
 *                                     detection logic.
 *
 * Bit [6]     ACCEL_INTEL_MODE        This bit defines:
 *                                        1 = Compare the current sample with
 *                                        the previous sample.
 *
 *                                        0 = Not used.
 *
 * Bit [5:0]   RESERVED
 */
uint8_t mpu9250_accelerometer_interrupt_control_get(void);
void mpu9250_accelerometer_interrupt_control_set(uint8_t value);

/**
 * Register 106 - User Control (USER_CTRL)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7]     RESERVED
 *
 * Bit [6]     FIFO_EN                 1 - Enable FIFO operation mode.
 *
 *                                     0 - Disable FIFO access from serial
 *                                     interface. To disable FIFO writes by
 *                                     DMA, use FIFO_EN register. To disable
 *                                     possible FIFO writes from DMP, disable
 *                                     the DMP.
 *
 * Bit [5]     I2C_MST_EN              1 - Enable the I2C Master I/F module;
 *                                     pins ES_DA and ES_SCL are isolated from
 *                                     pins SDA/SDI and SCL/ SCLK.
 *
 *                                     0 - Disable I2C Master I/F module; pins
 *                                     ES_DA and ES_SCL are logically driven by
 *                                     pins SDA/SDI and SCL/ SCLK.
 *
 * Bit [4]     I2C_IF_DIS              1 - Reset I2C Slave module and put the
 *                                     serial interface in SPI mode only. This
 *                                     bit auto clears after one clock cycle.
 *
 * Bit [3]     RESERVED
 *
 * Bit [2]     FIFO_RST                1 - Reset FIFO module. Reset is
 *                                     asynchronous. This bit auto clears after
 *                                     one clock cycle.
 *
 * Bit [1]     I2C_MST_RST             1 - Reset I2C Master module. Reset is
 *                                     asynchronous. This bit auto clears after
 *                                     one clock cycle.
 *
 *                                     NOTE: This bit should only be set when
 *                                     the I2C master has hung. If this bit is
 *                                     set during an active I2C master
 *                                     transaction, the I2C slave will hang,
 *                                     which will require the host to reset
 *                                     the slave.
 *
 * Bit [0]     SIG_COND_RST            1 - Reset all gyro digital signal path,
 *                                     accel digital signal path, and temp
 *                                     digital signal path. This bit also
 *                                     clears all the sensor registers.
 *                                     SIG_COND_RST is a pulse of one
 *                                     clk8M wide.
 */
uint8_t mpu9250_user_control_get(void);
void mpu9250_user_control_set(uint8_t value);

/**
 * Register 107 - Power Management 1 (PWR_MGMT_1)
 * Serial IF: R/W
 * Reset Value: (Depends on PU_SLEEP_MODE bit, see below)
 *
 * Bit [7]     H_RESET                 1 - Reset the internal registers and
 *                                     restores the default settings. Write a 1
 *                                     to set the reset, the bit will auto
 *                                     clear.
 *
 * Bit [6]     SLEEP                   When set, the chip is set to sleep mode
 *                                     (After OTP loads, the PU_SLEEP_MODE bit
 *                                     will be written here)
 *
 * Bit [5]     CYCLE                   When set, and SLEEP and STANDBY are not
 *                                     set, the chip will cycle between sleep
 *                                     and taking a single sample at a rate
 *                                     determined by LP_ACCEL_ODR register
 *
 *                                     NOTE: When all accelerometer axis are
 *                                     disabled via PWR_MGMT_2 register bits
 *                                     and cycle is enabled, the chip will wake
 *                                     up at the rate determined by the
 *                                     respective registers above, but will not
 *                                     take any samples.
 *
 * Bit [4]     GYRO_STANDBY            When set, the gyro drive and pll
 *                                     circuitry are enabled, but the sense
 *                                     paths are disabled. This is a low power
 *                                     mode that allows quick enabling of the
 *                                     gyros.
 *
 * Bit [3]     PD_PTAT                 Power down internal PTAT voltage
 *                                     generator and PTAT ADC
 *
 * Bit [2:0]   CLKSEL[2:0]             Code  |  Clock Source
 *                                     -----------------------------------------
 *                                     0     |  Internal 20MHz oscillator
 *                                     ------|----------------------------------
 *                                     1 - 5 |  Auto selects the best available
 *                                           |  clock source – PLL if ready,
 *                                           |  else use the Internal oscillator
 *                                     -----------------------------------------
 *                                     6     |  Internal 20MHz oscillator
 *                                     -----------------------------------------
 *                                     7     |  Stops the clock and keeps timing
 *                                           |  generator in reset
 *
 *                                     (After OTP loads, the inverse of
 *                                     PU_SLEEP_MODE bit will be written to
 *                                     CLKSEL[0])
 */
uint8_t mpu9250_power_management_1_get(void);
void mpu9250_power_management_1_set(uint8_t value);

/**
 * Register 108 - Power Management 2 (PWR_MGMT_2)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:6]   RESERVED
 *
 * Bit [5]     DISABLE_XA              1 - X accelerometer is disabled
 *                                     0 - X accelerometer is on
 *
 * Bit [4]     DISABLE_YA              1 - Y accelerometer is disabled
 *                                     0 - Y accelerometer is on
 *
 * Bit [3]     DISABLE_ZA              1 - Z accelerometer is disabled
 *                                     0 - Z accelerometer is on
 *
 * Bit [2]     DISABLE_XG              1 - X gyro is disabled
 *                                     0 - X gyro is on
 *
 * Bit [1]     DISABLE_YG              1 - Y gyro is disabled
 *                                     0 - Y gyro is on
 *
 * Bit [0]     DISABLE_ZG              1 - Z gyro is disabled
 *                                     0 - Z gyro is on
 *
 * The MPU-9250 can be put into Accelerometer Only Low Power Mode using the
 * following steps:
 *
 * (i)     Set CYCLE bit to 1
 * (ii)    Set SLEEP bit to 0
 * (iii)   Set TEMP_DIS bit to 1
 * (iv)    Set DIS_XG, DIS_YG, DIS_ZG bits to 1
 *
 * The bits mentioned in the steps (i) to (iii) can be found in Power
 * Management 1 register (Register 107).
 *
 * In this mode, the device will power off all devices except for the primary
 * I2C interface, waking only the accelerometer at fixed intervals to take a
 * single measurement.
 */
uint8_t mpu9250_power_management_2_get(void);
void mpu9250_power_management_2_set(uint8_t value);

/**
 * Register 114 and 115 - FIFO Count Registers
 */
/**
 * Register 114 - FIFO_COUNTH
 * Address: 114
 * Serial IF: Read Only
 * Reset Value: 0x00
 *
 * Bit [7:5]   RESERVED
 *
 * Bit [4:0]   FIFO_CNT[12:8]          High Bits, count indicates the number of
 *                                     written bytes in the FIFO.
 *
 *                                     Reading this byte latches the data for
 *                                     both FIFO_COUNTH, and FIFO_COUNTL.
 */
uint8_t mpu9250_fifo_counth_get(void);
// No setter for FIFO_COUNTH (Read-Only)
// void mpu9250_fifo_counth_set(uint8_t value);

/**
 * Register 115 - FIFO_COUNTL
 * Address: 115
 * Serial IF: Read Only
 * Reset Value: 0x00
 *
 * Bit [7:0]   FIFO_CNT[7:0]           Low Bits, count indicates the number of
 *                                     written bytes in the FIFO. NOTE: Must
 *                                     read FIFO_COUNTH
 */
uint8_t mpu9250_fifo_countl_get(void);
// No setter for FIFO_COUNTL (Read-Only)
// void mpu9250_fifo_countl_set(uint8_t value);

/**
 * Register 116 - FIFO Read Write (FIFO_R_W)
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   D[7:0]                  Read/Write command provides Read or
 *                                     Write operation for the FIFO.
 *
 * Description
 * -----------
 *
 * This register is used to read and write data from the FIFO buffer.
 *
 * Data is written to the FIFO in order of register number (from lowest to
 * highest). If all the FIFO enable flags (see below) are enabled and all
 * External Sensor Data registers (Registers 73 to 96) are associated with a
 * Slave device, the contents of registers 59 through 96 will be written in
 * order at the Sample Rate.
 *
 * The contents of the sensor data registers (Registers 59 to 96) are written
 * into the FIFO buffer when their corresponding FIFO enable flags are set to 1
 * in FIFO_EN (Register 35). An additional flag for 2 the sensor data registers
 * associated with I C Slave 3 can be found in I2C_MST_CTRL (Register 36).
 *
 * If the FIFO buffer has overflowed, the status bit FIFO_OFLOW_INT is
 * automatically set to 1. This bit is located in INT_STATUS (Register 58).
 * When the FIFO buffer has overflowed, the oldest data will be lost and new
 * data will be written to the FIFO unless register 26 CONFIG, bit[6]
 * FIFO_MODE = 1.
 *
 * If the FIFO buffer is empty, reading this register will return the last byte
 * that was previously read from the FIFO until new data is available. The user
 * should check FIFO_COUNT to ensure that the FIFO buffer is not read when
 * empty.
 */
uint8_t mpu9250_fifo_read_write_get(void);
void mpu9250_fifo_read_write_set(uint8_t value);

/**
 * Register 117 - Who Am I (WHOAMI)
 * Serial IF: Read Only
 * Reset Value: 0x68
 *
 * Bit [7:0]   WHOAMI                  Register to indicate to user which
 *                                     device is being accessed.
 *
 * This register is used to verify the identity of the device. The contents of
 * WHO_AM_I is an 8-bit device ID. The default value of the register is 0x71.
 */
uint8_t mpu9250_whoami_get(void);
// No setter for WHOAMI (Read-Only)
// void mpu9250_whoami_set(uint8_t value);

/**
 * 4.39 Registers 119, 120, 122, 123, 125, 126 Accelerometer Offset Registers
 */
/**
 * For MPU-9250 Mode:
 * ------------------
 *
 * Name: XA_OFFS_H
 * Address: 119
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   XA_OFFS[14:7]           Upper bits of the X accelerometer offset
 *                                     cancellation. +/- 16g Offset cancellation
 *                                     in all Full Scale modes, 15 bit
 *                                     0.98-mg steps
 */
uint8_t mpu9250_x_accel_offset_h_get(void);
void mpu9250_x_accel_offset_h_set(uint8_t value);

/**
 * Name: XA_OFFS_L
 * Address: 120
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:1]   XA_OFFS[6:0]            Lower bits of the X accelerometer offset
 *                                     cancellation. +/- 16g Offset cancellation
 *                                     in all Full Scale modes, 15 bit 0.98-mg
 *                                     steps
 *
 * Bit [0]     RESERVED
 */
uint8_t mpu9250_x_accel_offset_l_get(void);
void mpu9250_x_accel_offset_l_set(uint8_t value);

/**
 *
 * Name: YA_OFFS_H
 * Address: 122
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   YA_OFFS[14:7]           Upper bits of the Y accelerometer offset
 *                                     cancellation. +/- 16g Offset cancellation
 *                                     in all Full Scale modes, 15 bit
 *                                     0.98-mg steps
 */
uint8_t mpu9250_y_accel_offset_h_get(void);
void mpu9250_y_accel_offset_h_set(uint8_t value);

/**
 * Name: YA_OFFS_L
 * Address: 123
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:1]   YA_OFFS[6:0]            Lower bits of the Y accelerometer offset
 *                                     cancellation. +/- 16g Offset cancellation
 *                                     in all Full Scale modes, 15 bit 0.98-mg
 *                                     steps
 *
 * Bit [0]     RESERVED
 */
uint8_t mpu9250_y_accel_offset_l_get(void);
void mpu9250_y_accel_offset_l_set(uint8_t value);

/**
 *
 * Name: ZA_OFFS_H
 * Address: 125
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]   ZA_OFFS[14:7]           Upper bits of the Z accelerometer offset
 *                                     cancellation. +/- 16g Offset cancellation
 *                                     in all Full Scale modes, 15 bit
 *                                     0.98-mg steps
 */
uint8_t mpu9250_z_accel_offset_h_get(void);
void mpu9250_z_accel_offset_h_set(uint8_t value);

/**
 * Name: ZA_OFFS_L
 * Address: 126
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:1]   ZA_OFFS[6:0]            Lower bits of the Z accelerometer offset
 *                                     cancellation. +/- 16g Offset cancellation
 *                                     in all Full Scale modes, 15 bit 0.98-mg
 *                                     steps
 *
 * Bit [0]     RESERVED
 */
uint8_t mpu9250_z_accel_offset_l_get(void);
void mpu9250_z_accel_offset_l_set(uint8_t value);

/***
 * 5 Register Map for Magnetometer
 * The register map for the MPU-9250’s Magnetometer (AK8963) section is
 * listed below.
 *
 * Name  | Address  | READ/WRITE  | Description  | Bit Width   | Explanation
 * -----------------------------------------------------------------------------
 * WIA   | 00H      | R           | Device ID    | 8           |
 * -----------------------------------------------------------------------------
 * INFO  | 01H      | R           | Information  | 8           |
 * -----------------------------------------------------------------------------
 * ST1   | 02H      | R           | Status 1     | 8           | Data status
 * -----------------------------------------------------------------------------
 * HXL   | 03H      |             |              | 8           | X-axis data
 * ------------------             |              |-------------|
 * HXH   | 04H      |             |              | 8           |
 * ------------------             |              |------------------------------
 * HYL   | 05H      | R           | Measurement  | 8           | Y-axis data
 * ------------------             | data.        |-------------|
 * HYH   | 06H      |             |              | 8           |
 * ------------------             |              |------------------------------
 * HZL   | 07H      |             |              | 8           | Z-axis data
 * ------------------             |              |-------------|
 * HZH   | 08H      |             |              | 8           |
 * -----------------------------------------------------------------------------
 * ST2   | 09H      | R           | Status 2     | 8           | Data status
 * -----------------------------------------------------------------------------
 * CNTL  | 0AH      | RW          | Control      | 8           |
 * -----------------------------------------------------------------------------
 * RSV   | 0BH      | RW          | Reserved     | 8           | DO NOT ACCESS
 * -----------------------------------------------------------------------------
 * ASTC  | 0CH      | RW          | Self-test    | 8           |
 * -----------------------------------------------------------------------------
 * TS1   | 0DH      | RW          | Test 1       | 8           | DO NOT ACCESS
 * -----------------------------------------------------------------------------
 * TS2   | 0EH      | RW          | Test 2       | 8           | DO NOT ACCESS
 * -----------------------------------------------------------------------------
 * I2CDIS| 0FH      | RW          | I2C disable  | 8           |
 * -----------------------------------------------------------------------------
 * ASAX  | 10H      | R           | X-axis       | 8           | Fuse ROM
 *       |          |             | sensitivity  |             |
 *       |          |             | adjustment   |             |
 *       |          |             | value        |             |
 * -----------------------------------------------------------------------------
 * ASAY  | 11H      | R           | Y-axis       | 8           | Fuse ROM
 *       |          |             | sensitivity  |             |
 *       |          |             | adjustment   |             |
 *       |          |             | value        |             |
 * -----------------------------------------------------------------------------
 * ASAZ  | 12H      | R           | Z-axis       | 8           | Fuse ROM
 *       |          |             | sensitivity  |             |
 *       |          |             | adjustment   |             |
 *       |          |             | value        |             |
 * -----------------------------------------------------------------------------
 *
 * Addresses from 00H to 0CH and from 10H to 12H are compliant with automatic
 * increment function of serial interface respectively. Values of addresses
 * from 10H to 12H can be read only in Fuse access mode. In other modes, read
 * data is not correct.
 */
/**
 * 5.1 Register Map Description
 *
 * Addr  | Reg. | D7    | D6    | D5    | D4    | D3    | D2    | D1    | D0
 *       | Name |       |       |       |       |       |       |       |
 * -----------------------------------------------------------------------------
 * Read-only Register
 * -----------------------------------------------------------------------------
 * 00H   | WIA  | 0     | 1     | 0     | 0     | 1     | 0     | 0     | 0
 * -----------------------------------------------------------------------------
 * 01H   | INFO | INFO7 | INFO6 | INFO5 | INFO4 | INFO3 | INFO2 | INFO1 | INFO0
 * -----------------------------------------------------------------------------
 * 02H   | ST1  | 0     | 0     | 0     | 0     | 0     | 0     | DOR   | DRDY
 * -----------------------------------------------------------------------------
 * 03H   | HXL  | HX7   | HX6   | HX5   | HX4   | HX3   | HX2   | HX1   | HX0
 * -----------------------------------------------------------------------------
 * 04H   | HXH  | HX15  | HX14  | HX13  | HX12  | HX11  | HX10  | HX9   | HX8
 * -----------------------------------------------------------------------------
 * 05H   | HYL  | HY7   | HY6   | HY5   | HY4   | HY3   | HY2   | HY1   | HY0
 * -----------------------------------------------------------------------------
 * 06H   | HYH  | HY15  | HY14  | HY13  | HY12  | HY11  | HY10  | HY9   | HY8
 * -----------------------------------------------------------------------------
 * 07H   | HZL  | HZ7   | HZ6   | HZ5   | HZ4   | HZ3   | HZ2   | HZ1   | HZ0
 * -----------------------------------------------------------------------------
 * 08H   | HZH  | HZ15  | HZ14  | HZ13  | HZ12  | HZ11  | HZ10  | HZ9   | HZ8
 * -----------------------------------------------------------------------------
 * 09H   | ST2  | 0     | 0     | 0     | BITM  | HOFL  | 0     | 0     | 0
 * -----------------------------------------------------------------------------
 * Write/Read Register
 * -----------------------------------------------------------------------------
 * 0AH   | CNTL1| 0     | 0     | 0     | 0     | MODE3 | MODE2 | MODE1 | MODE0
 * -----------------------------------------------------------------------------
 * 0BH   | CNTL2| 0     | 0     | 0     | 0     | 0     | 0     | 0     | SRST
 * -----------------------------------------------------------------------------
 * 0CH   | ASTC | -     | SELF  | -     | -     | -     | -     | -     | -
 * -----------------------------------------------------------------------------
 * 0DH   | TS1  | -     | -     | -     | -     | -     | -     | -     | -
 * -----------------------------------------------------------------------------
 * 0EH   | TS2  | -     | -     | -     | -     | -     | -     | -     | -
 * -----------------------------------------------------------------------------
 * 0FH   |I2CDIS|I2CDIS7|I2CDIS6|I2CDIS5|I2CDIS4|I2CDIS3|I2CDIS2|I2CDIS1|I2CDIS0
 * -----------------------------------------------------------------------------
 * Read-only Register
 * -----------------------------------------------------------------------------
 * 10H   | ASAX | COEFX7| COEFX6| COEFX5| COEFX4| COEFX3| COEFX2| COEFX1| COEFX0
 * -----------------------------------------------------------------------------
 * 11H   | ASAY | COEFY7| COEFY6| COEFY5| COEFY4| COEFY3| COEFY2| COEFY1| COEFY0
 * -----------------------------------------------------------------------------
 * 12H   | ASAZ | COEFZ7| COEFZ6| COEFZ5| COEFZ4| COEFZ3| COEFZ2| COEFZ1| COEFZ0
 *
 *
 * Table 3 Register Map
 *
 * Note: When VDD is turned ON, POR function works and all registers of AK893
 * are initialized. TS1 and TS2 are test registers for shipment test. Do not
 * use these registers. RSV is reserved register. Do not use this register.
 *
 * (See page 48 of register map PDF)
 */
/**
 * Device ID of AKM. It is described in one byte and fixed value.
 */
uint8_t mpu9250_magnetometer_wia_device_id_get(void);
// No setter for WIA: Device ID (Read-Only)
/**
 * INFO[7:0]: Device information for AKM.
 */
uint8_t mpu9250_magnetometer_information_get(void);
// No setter for INFO: Information (Read-Only)
/**
 * DRDY: Data Ready
 *   0 - Normal
 *   1 - Data is ready
 *
 *   DRDY bit turns to "1" when data is ready in single measurement mode or
 *   self-test mode. It returns to "0" when any one of ST2 register or
 *   measurement data register (HXL to HZH) is read.
 *
 * DOR: Data Overrun
 *   0 - Normal
 *   1 - Data overrun
 *
 *   DOR bit turns to "1" when data has been skipped in continuous measurement
 *   mode or external trigger measurement mode. It returns to "0" when any one
 *   of ST2 register or measurement data register (HXL~HZH) is read.
 */
uint8_t mpu9250_magnetometer_status_1(void);
// No setter for ST1: Status 1

/**
 * 5.6 HXL to HZH: Measurement Data
 *
 * Addr  | Reg. Name  | D7   | D6   | D5   | D4   | D3   | D2   | D1   | D0
 * -----------------------------------------------------------------------------
 *                             Read-only register
 * -----------------------------------------------------------------------------
 * 03H   | HXL        | HX7  | HX6  | HX5  | HX4  | HX3  | HX2  | HX1  | HX0
 * -----------------------------------------------------------------------------
 * 04H   | HXH        | HX15 | HX14 | HX13 | HX12 | HX11 | HX10 | HX9  | HX8
 * -----------------------------------------------------------------------------
 * 05H   | HYL        | HY7  | HY6  | HY5  | HY4  | HY3  | HY2  | HY1  | HY0
 * -----------------------------------------------------------------------------
 * 06H   | HYH        | HY15 | HY14 | HY13 | HY12 | HY11 | HY10 | HY9  | HY8
 * -----------------------------------------------------------------------------
 * 07H   | HZL        | HZ7  | HZ6  | HZ5  | HZ4  | HZ3  | HZ2  | HZ1  | HZ0
 * -----------------------------------------------------------------------------
 * 08H   | HZH        | HZ15 | HZ14 | HZ13 | HZ12 | HZ11 | HZ10 | HZ9  | HZ8
 * -----------------------------------------------------------------------------
 *         Reset      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *
 * Measurement data of magnetic sensor X-axis/Y-axis/Z-axis
 *   HXL[7:0]: X-axis measurement data lower 8bit
 *   HXH[15:8]: X-axis measurement data higher 8bit
 *   HYL[7:0]: Y-axis measurement data lower 8bit
 *   HYH[15:8]: Y-axis measurement data higher 8bit
 *   HZL[7:0]: Z-axis measurement data lower 8bit
 *   HZH[15:8]: Z-axis measurement data higher 8bit
 *
 * Measurement data is stored in two's complement and Little Endian format.
 * Measurement range of each axis is from -32760 ~ 32760 decimal in 16-bit
 * output.
 *
 * -----------------------------------------------------------------------------
 * Measurement data (each axis) [15:0]                       | Magnetic Flux
 * ----------------------------------------------------------| density [μT]
 * Two's complement    | Hex      | Decimal                  |
 * -----------------------------------------------------------------------------
 * 0111 1111 1111 1000 | 7FF8     | 32760                    | 4912 (max.)
 * -----------------------------------------------------------------------------
 *          |          |   |      |    |                     |  |
 * -----------------------------------------------------------------------------
 * 0000 0000 0000 0001 | 0001     | 1                        | 0.15
 * -----------------------------------------------------------------------------
 * 0000 0000 0000 0000 | 0000     | 0                        | 0
 * -----------------------------------------------------------------------------
 * 1111 1111 1111 1111 | FFFF     | -1                       | -0.15
 * -----------------------------------------------------------------------------
 *          |          |   |      |    |                     |   |
 * -----------------------------------------------------------------------------
 * 1000 0000 0000 1000 | 8008     | -32760                   | -4912 (min.)
 * -----------------------------------------------------------------------------
 *                       Table 4 Measurement data format
 */
uint8_t mpu9250_magnetometer_measurement_data_hxl_get(void);
uint8_t mpu9250_magnetometer_measurement_data_hxh_get(void);
uint8_t mpu9250_magnetometer_measurement_data_hyl_get(void);
uint8_t mpu9250_magnetometer_measurement_data_hyh_get(void);
uint8_t mpu9250_magnetometer_measurement_data_hzl_get(void);
uint8_t mpu9250_magnetometer_measurement_data_hzh_get(void);

/**
 * ST2: Status 2
 *
 * -----------------------------------------------------------------------------
 * Addr  | Reg. Name  | D7   | D6   | D5   | D4   | D3   | D2   | D1   | D0
 * -----------------------------------------------------------------------------
 *                             Read-only register
 * -----------------------------------------------------------------------------
 * 09H   | ST2        | 0    | 0    | 0    | BITM | HOFL | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *         Reset      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *
 * HOFL: Magnetic sensor overflow
 *   0 - Normal
 *   1 - Magnetic sensor overflow occurred
 *
 *   In single measurement mode, continuous measurement mode, external trigger
 *   measurement mode and self-test mode, magnetic sensor may overflow even
 *   though measurement data register is not saturated. In this case,
 *   measurement data is not correct and HOFL bit turns to "1". When next
 *   measurement stars, it returns to "0".
 *
 * BITM: Output bit setting (mirror)
 *   0 - 14-bit output
 *   1 - 16-bit output
 *
 *   Mirror data of BIT bit of CNTL1 register. ST2 register has a role as data
 *   reading end register, also. When any of measurement data register is read
 *   in continuous measurement mode or external trigger measurement mode, it
 *   means data reading start and taken as data reading until ST2 register is
 *   read. Therefore, when any of measurement data is read, be sure to read
 *   ST2 register at the end.
 */
uint8_t mpu9250_magnetometer_status_2_get(void);

/**
 * 5.8 CNTL1: Control 1
 *
 * -----------------------------------------------------------------------------
 * Addr  | Reg. Name  | D7   | D6   | D5   | D4   | D3   | D2   | D1   | D0
 * -----------------------------------------------------------------------------
 *                             Read-only register
 * -----------------------------------------------------------------------------
 * 0AH   | CNTL1      | 0    | 0    | 0    | BIT  | MODE3| MODE2| MODE1| MODE0
 * -----------------------------------------------------------------------------
 *         Reset      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *
 * MODE[3:0]: Operation mode setting
 *
 *   "0000": Power-down mode
 *   "0001": Single measurement mode
 *   "0010": Continuous measurement mode 1
 *   "0110": Continuous measurement mode 2
 *   "0100": External trigger measurement mode
 *   "1000": Self-test mode
 *   "1111": Fuse ROM access mode
 *
 *   Other code settings are prohibited
 *
 * BIT: Output bit setting
 *   0 - 14-bit output
 *   1 - 16-bit output
 *
 * When each mode is set, AK8963 transits to set mode.
 * When CNTL register is accessed to be written, registers from 02H to 09H
 * are initialized.
 */
uint8_t mpu9250_magnetometer_control_1_get(void);

/**
 * 5.9 CNTL2: Control 2
 *
 * -----------------------------------------------------------------------------
 * Addr  | Reg. Name  | D7   | D6   | D5   | D4   | D3   | D2   | D1   | D0
 * -----------------------------------------------------------------------------
 *                             Read-only register
 * -----------------------------------------------------------------------------
 * 0BH   | CNTL2      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | SRST
 * -----------------------------------------------------------------------------
 *         Reset      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *
 * SRST: Soft reset
 *   0 - Normal
 *   1 - Reset
 *
 * When "1" is set, all registers are initialized. After reset, SRST bit turns to "0" automatically.
 */
uint8_t mpu9250_magnetometer_control_2_get(void);

/**
 * 5.10 ASTC: Self-Test Control
 *
 * -----------------------------------------------------------------------------
 * Addr  | Reg. Name  | D7   | D6   | D5   | D4   | D3   | D2   | D1   | D0
 * -----------------------------------------------------------------------------
 *                             Read/Write register
 * -----------------------------------------------------------------------------
 * 0CH   | ASTC       | -    | SELF | -    | -    | -    | -    | -    | -
 * -----------------------------------------------------------------------------
 *         Reset      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *
 * SELF: Self-test control
 *   0 - Normal
 *   1 - Generate magnetic field for self-test
 *
 * Do not write "1" to any bit other than SELF bit in ASTC register. If "1" is
 * written to any bit other than SELF bit, normal measurement cannot be done.
 */
uint8_t mpu9250_magnetometer_self_test_get(void);
void mpu9250_magnetometer_self_test_set(uint8_t value);

/**
 * 5.11 TS1, TS2: Test 1, 2
 *  (See page 52)
 * TS1 and TS2 registers are test registers for shipment test. Do not use these registers.
 */

/**
 * 5.12 I2CDIS: I2C Disable
 *
 * -----------------------------------------------------------------------------
 * Addr  | Reg. Name | D7    | D6   | D5   | D4   | D3   | D2   | D1   | D0
 * -----------------------------------------------------------------------------
 *                             Read/Write register
 * -----------------------------------------------------------------------------
 * 0FH   | I2CDIS     | DIS7 | DIS6 | DIS5 | DIS4 | DIS3 | DIS2 | DIS1 | DIS0
 * -----------------------------------------------------------------------------
 *         Reset      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0
 * -----------------------------------------------------------------------------
 *
 * This register disables I2C bus interface. I2C bus interface is enabled in
 * default. To disable I2C bus  interface, write "00011011" to I2CDIS register.
 * Then I2C bus interface is disabled.
 *
 * Once I2C bus interface is disabled, it is impossible to write other value to
 * I2CDIS register. To enable I2Cbus interface, reset AK8963 or input start
 * condition 8 times continuously.
 */
uint8_t mpu9250_magnetometer_i2c_disable_get(void);
void mpu9250_magnetometer_i2c_disable_set(uint8_t value);

#ifdef __cplusplus
}
#endif
#endif
