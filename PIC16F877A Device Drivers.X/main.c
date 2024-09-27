/* 
 * File:   main.c
 * Author: Youssef Ahmed Tawfik Ali
 * https://www.linkedin.com/in/youssefahmed2001/
 * Created on May 21, 2021, 9:53 PM
 */

#include "MCAL_layer/gpio/gpio.h"
#include "MCAL_layer/Interrupt/mcal_interrupt_config.h"
#include "MCAL_layer/Interrupt/mcal_external_interrupt.h"
#include "MCAL_layer/timer1/hal_timr1.h"
#include "MCAL_layer/timer2/hal_timr2.h"
#include "MCAL_layer/timer0/hal_timr0.h"
#include "MCAL_layer/ccp/hal_ccp.h"
#include "MCAL_layer/comparator/comparator.h"
#include "ECU_layer/chr_lcd/ecu_chr_lcd.h"
#include "ECU_layer/keypad/ecu_keypad.h"
#include "MCAL_layer/usart/hal_usart.h"
#include "MCAL_layer/spi/hal_spi.h"
#include "MCAL_layer/i2c/hal_i2c.h"
#include "ECU_layer/mpu6050/mpu6050.h"

int main() {
    
    while(1)
	{
        
    }
    
    return (EXIT_SUCCESS);
}