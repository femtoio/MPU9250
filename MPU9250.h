/**
 * Invensense MPU9250 header.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
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
 * See table 3 of page 13.
 */
uint8_t mpu9250_config_get(void);
void mpu9250_config_set(uint8_t value);

/**
 *
 */

#ifdef __cplusplus
}
#endif
#endif
