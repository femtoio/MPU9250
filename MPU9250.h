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
uint8_t mpu9250_i2c_master_control_get(void);
void mpu9250_i2c_master_control_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave0_address_get(void);
void mpu9250_i2c_slave0_address_set(uint8_t value);

/**
 * Register 38 - I2C_SLV0_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]      I2C_SLV0_REG[7:0]    I2C slave 0 register address from where
 *                                     to begin data transfer
 */
uint8_t mpu9250_i2c_slave0_register_get(void);
void mpu9250_i2c_slave0_register_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave0_control_get(void);
void mpu9250_i2c_slave0_control_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave1_address_get(void);
void mpu9250_i2c_slave1_address_set(uint8_t value);

/**
 * Register 41 - I2C_SLV1_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV1_REG[7:0]     I2C slave 1 register address from where
 *                                    to begin data transfer
 *
 */
uint8_t mpu9250_i2c_slave1_register_get(void);
void mpu9250_i2c_slave1_register_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave1_control_get(void);
void mpu9250_i2c_slave1_control_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave2_address_get(void);
void mpu9250_i2c_slave2_address_set(uint8_t value);

/**
 * Register 44 - I2C_SLV2_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV2_REG[7:0]     I2C slave 2 register address from where
 *                                    to begin data transfer
 */
uint8_t mpu9250_i2c_slave2_register_get(void);
void mpu9250_i2c_slave2_register_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave2_control_get(void);
void mpu9250_i2c_slave2_control_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave3_address_get(void);
void mpu9250_i2c_slave3_address_set(uint8_t value);

/**
 * Register 47 - I2C_SLV3_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV3_REG[7:0]     I2C slave 3 register address from where
 *                                    to begin data transfer
 */
uint8_t mpu9250_i2c_slave3_register_get(void);
void mpu9250_i2c_slave3_register_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave3_control_get(void);
void mpu9250_i2c_slave3_control_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave4_address_get(void);
void mpu9250_i2c_slave4_address_set(uint8_t value);

/**
 * Register 50 - I2C_SLV4_REG
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV4_REG[7:0]      I2C slave 4 register address from where
 *                                     to begin data transfer
 */
uint8_t mpu9250_i2c_slave4_register_get(void);
void mpu9250_i2c_slave4_register_set(uint8_t value);

/**
 * Register 51 - I2C_SLV4_DO
 * Serial IF: R/W
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV4_DO[7:0]       Data to be written to I2C Slave 4 if
 *                                     enabled.
 */
uint8_t mpu9250_i2c_slave4_data_get(void);
void mpu9250_i2c_slave4_data_set(uint8_t value);

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
uint8_t mpu9250_i2c_slave4_control_get(void);
void mpu9250_i2c_slave4_control_set(uint8_t value);

/**
 * Register 53 - I2C_SLV4_DI
 * Serial IF: R
 * Reset Value: 0x00
 *
 * Bit [7:0]    I2C_SLV4_DI[7:0]       Data read from I2C Slave 4.
 */
uint8_t mpu9250_i2c_slave4_data_get(void);
// No setter for I2C_SLV4_DI (Read-only)
// void mpu9250_i2c_slave4_data_set(uint8_t value);

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
uint8_t mpu9250_i2c_master_status_get(void);
// No setter for I2C_MST_STATUS (Read-only)
// void mpu9250_i2c_master_status_set(uint8_t value);

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
uint8_t mpu9250_i2c_int_pin_config_get(void);
void mpu9250_i2c_int_pin_config_set(uint8_t value);


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
uint8_t mpu9250_i2c_interrupt_enable_get(void);
void mpu9250_i2c_interrupt_enable_set(uint8_t value);

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
uint8_t mpu9250_i2c_interrupt_status_get(void);
// No setter for INT_STATUS (Read-only)
// void mpu9250_i2c_interrupt_status_set(uint8_t value);

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
uint8_t mpu9250_i2c_accel_xout_h(void);

/**
 * Register 60 - ACCEL_XOUT_L
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of accelerometer x-axis data.
 */
uint8_t mpu9250_i2c_accel_xout_l(void);

/**
 * Register 61 - ACCEL_YOUT_H
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of accelerometer y-axis data.
 */
uint8_t mpu9250_i2c_accel_yout_h(void);

/**
 * Register 62 - ACCEL_YOUT_L
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of accelerometer y-axis data.
 */
uint8_t mpu9250_i2c_accel_yout_l(void);

/**
 * Register 63 - ACCEL_ZOUT_H
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of accelerometer z-axis data.
 */
uint8_t mpu9250_i2c_accel_zout_h(void);

/**
 * Register 64 - ACCEL_ZOUT_L
 * Serial IF: SyncR (Read-only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  Low byte of accelerometer z-axis data.
 */
uint8_t mpu9250_i2c_accel_zout_l(void);

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
uint8_t mpu9250_i2c_temp_out_h(void);
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
uint8_t mpu9250_i2c_temp_out_l(void);

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
uint8_t mpu9250_i2c_gyro_xout_h(void);
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
uint8_t mpu9250_i2c_gyro_xout_l(void);

/**
 * Register 69 - GYRO_YOUT_H
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of the Y-Axis gyroscope output
 */
uint8_t mpu9250_i2c_gyro_yout_h(void);
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
uint8_t mpu9250_i2c_gyro_yout_l(void);

/**
 * Register 71 - GYRO_ZOUT_H
 * Serial IF: SyncR (Read-Only)
 * Reset Value: 0x00 (If sensor disabled)
 *
 * Bit [7:0]   D[7:0]                  High byte of the Z-Axis gyroscope output
 */
uint8_t mpu9250_i2c_gyro_zout_h(void);
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
uint8_t mpu9250_i2c_gyro_zout_l(void);


#ifdef __cplusplus
}
#endif
#endif
