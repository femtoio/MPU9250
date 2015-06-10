/**
 * MPU9250 class. Based on the InvenSense MPU-9250 register map (PDF).
 */
 /**
  * Note: Disable the I2C interface when using SPI mode to prevent accidentally
  * switching to I2C.
  *
  * When in SPI mode, the auxillary I2C interface cannot be accessed through
  * the interface bypass multiplexer. See section 4.14 of the product 
  * specification PDF named "PS-MPU-9250A-01_product_specifications.pdf" in
  * the InvenSense_Files directory.
  *
  * Note: This class runs in I2C mode by default.
  */
#include <stdint.h>
#include "MPU9250.h"
#include "MPU9250_reg.h"

#define I2C_MASTER_CALLBACK_MODE true
#include <i2c_common.h>
#include <i2c_master.h>
#include <i2c_master_interrupt.h>


#ifndef MPU9250_SS_PIN
#define MPU9250_SS_PIN EXT1_PIN_SPI_SS_0
#endif

#include <spi.h>
#include <spi_interrupt.h>

struct i2c_master_module mpu9250_master;
static struct i2c_master_module mpu9250_master_i2c_instance;

struct spi_module mpu9250_master_spi_instance;
struct spi_slave_inst mpu9250_slave_spi_instance;

void mpu9250_init() {

    mpu9250_configure_i2c();

    // @TODO Make sure i2c interface is disabled first!
    // @TODO Implement SPI configuration.
//    mpu9250_configure_spi( sercom_module );
}
void mpu9250_configure_i2c() {
    /* Create and initialize config structure */
    struct i2c_master_config config_i2c;
    i2c_master_get_config_defaults(&config_i2c);

    /* Change address and address_mode */
//    config_i2c.address      = MPU9250_I2C_ADDRESS;
//    config_i2c.address_mode = I2C_MASTER_ADDRESS_MODE_MASK;
//    config_i2c.pinmux_pad0  = PORT_PA08C_SERCOM0_PAD0;
//    config_i2c.pinmux_pad1  = PORT_PA09C_SERCOM0_PAD1;

    config_i2c.baud_rate = I2C_MASTER_BAUD_RATE_400KHZ;
    config_i2c.buffer_timeout = 10000;

    /* Initialize and enable device with config */
    i2c_master_init(&mpu9250_master_i2c_instance, SERCOM0, &config_i2c);
    i2c_master_enable(&mpu9250_master_i2c_instance);
}
void mpu9250_configure_spi() {
  // @TODO implement SPI mode.
//  struct spi_config config_spi_master;
//  struct spi_slave_inst_config slave_dev_config;
//
//  spi_slave_inst_get_config_defaults( slave_dev_config );
//  slave_dev_config.ss_pin = MPU9250_SS_PIN;
//
//  spi_attach_slave(&mpu9250_slave_spi_instance, &slave_dev_config);
//
//  spi_get_config_defaults(&config_spi_master);
//  config_spi_master.mux_setting = EXT1_SPI_SERCOM_MUX_SETTING;
//  config_spi_master.pinmux_pad0 = EXT1_SPI_SERCOM_PINMUX_PAD0;
//  config_spi_master.pinmux_pad1 = PINMUX_UNUSED;
//  config_spi_master.pinmux_pad2 = EXT1_SPI_SERCOM_PINMUX_PAD2;
//  config_spi_master.pinmux_pad3 = EXT1_SPI_SERCOM_PINMUX_PAD3;
//  spi_init(&spi_master_instance, EXT1_SPI_MODULE, &config_spi_master);
//
//  spi_enable(&spi_master_instance);

}

/**
 *
 *
 *
 */
void mpu9250_configure_intn() {
  // @TODO Implement INT and FSYNC features.
//    struct extint_chan_conf eic_conf;
//
//    /* Configure the external interrupt channel. */
//    extint_chan_get_config_defaults(&eic_conf);
//    eic_conf.gpio_pin            = PORT_PA18A_EIC_EXTINT2;
//    eic_conf.gpio_pin_mux        = PINMUX_PA18A_EIC_EXTINT2;
//    eic_conf.gpio_pin_pull       = EXTINT_PULL_UP;
//    eic_conf.detection_criteria  = EXTINT_DETECT_FALLING;
//    eic_conf.filter_input_signal = true;
//    extint_chan_set_config(SW0_EIC_LINE, &eic_conf);
//
//    /* Register and enable the callback function. */
//    extint_register_callback(p_handler,
//            SW0_EIC_LINE,
//            EXTINT_CALLBACK_TYPE_DETECT);
//    extint_chan_enable_callback(SW0_EIC_LINE,
//            EXTINT_CALLBACK_TYPE_DETECT);
}


uint8_t mpu9250_self_test_x_gyro_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_self_test_x_gyro_set(uint8_t value) {

}

uint8_t mpu9250_self_test_y_gyro_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_self_test_y_gyro_set(uint8_t value) {}

uint8_t mpu9250_self_test_z_gyro_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_self_test_z_gyro_set(uint8_t value) {}

uint8_t mpu9250_self_test_x_accel_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_self_test_x_accel_set(uint8_t value) {}

uint8_t mpu9250_self_test_y_accel_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_self_test_y_accel_set(uint8_t value) {}

uint8_t mpu9250_self_test_z_accel_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_self_test_z_accel_set(uint8_t value) {}

uint8_t mpu9250_gyro_offset_registers_x_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_gyro_offset_registers_x_set(uint8_t value) {}

uint8_t mpu9250_gyro_offset_registers_y_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_gyro_offset_registers_y_set(uint8_t value) {}

uint8_t mpu9250_gyro_offset_registers_z_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_gyro_offset_registers_z_set(uint8_t value) {}

uint8_t mpu9250_sample_rate_divider_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_sample_rate_divider_set(uint8_t value) {}

uint8_t mpu9250_config_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_config_set(uint8_t value) {}

uint8_t mpu9250_gyroscope_config_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_gyroscope_config_set(uint8_t value) {}

uint8_t mpu9250_accelerometer_config_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_accelerometer_config_set(uint8_t value) {}

uint8_t mpu9250_accelerometer_config2_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_accelerometer_config2_set(uint8_t value) {}

uint8_t mpu9250_low_power_accelerometer_odr_control_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_low_power_accelerometer_odr_control_set(uint8_t value) {}

uint8_t mpu9250_wake_on_motion_threshold_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_wake_on_motion_threshold_set(uint8_t value) {}

uint8_t mpu9250_fifo_enable_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_fifo_enable_set(uint8_t value) {}

uint8_t mpu9250_i2c_master_control_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_i2c_master_control_set(uint8_t value) {}

uint8_t mpu9250_i2c_slave0_address_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_i2c_slave0_address_set(uint8_t value) {}

uint8_t mpu9250_i2c_slave0_register_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_i2c_slave0_register_set(uint8_t value) {}

uint8_t mpu9250_i2c_slave0_control_get() {
  return 0; // @TODO Implement this.
}
void mpu9250_i2c_slave0_control_set(uint8_t value) {}


