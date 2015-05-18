/**
 * Invensense MPU9250 header.
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
 * These registers are used to remove DC bias from the gyro sensor data output for X, Y and Z axes.
 * The values in these registers are subtracted from the gyro sensor values before going into the
 * sensor registers. Please refer to registers 67 to 72 for units.
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
 * NOTE: This register is only effective when Fchoice = 2’b11 (fchoice_b
 * register bits are 2’b00), and (0 < dlpf_cfg < 7), such that the average filter’s
 * output is selected (see chart below).
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
 * Bit [6] FIFO_MODE    When set to ‘1’, when the fifo is full, additional
 *                      writes will not be written to fifo.
 *
 *                      When set to ‘0’, when the fifo is full, additional
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
 * Fsync will be latched to capture short strobes. This will be done such that if
 * Fsync toggles, the latched value toggles, but won’t toggle again until the new
 * latched value is captured by the sample rate strobe. This is a requirement for
 * working with some 3 party devices that have fsync strobes shorter than our
 * sample rate.
 *
 *
 *
 * Bit [2:0] DLPF_CFG[2:0]  For the DLPF to be used, fchoice[1:0] must be set
 * to 2’b11, fchoice_b[1:0] is 2’b00.
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
 * factor of 1/(1+SMPLRT_DIV), where SMPLRT_DIV is an 8-bit integer. The following
 * is a small subset of ODRs that are configurable for the accelerometer in the
 * normal mode in this manner (Hz): 3.91, 7.81, 15.63, 31.25, 62.50, 125, 250,
 * 500, 1K
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
 * Bit [4]    I2C_MST_P_NSR  This bit controls the I2C Master’s transition from
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
 * Bit [7:0]       I2C_SLV0_EN        1 - Enable reading data from this slave at
 *                                    the sample rate and storing data at the
 *                                    first available EXT_SENS_DATA register,
 *                                    which is always EXT_SENS_DATA_00 for I2C
 *                                    slave 0.
 *
 *                                    0 - function is disabled for this slave
 */


#ifdef __cplusplus
}
#endif
#endif
