/* 
 * File:   mcal_interrupt_manager.h
 * Author: Youssef Ahmed Tawfik Ali
 * https://www.linkedin.com/in/youssefahmed2001/
 * Created on February 14, 2021, 11:53 PM
 */

#ifndef MCAL_INTERRUPT_MANAGER_H
#define	MCAL_INTERRUPT_MANAGER_H

/* Includes -----------------------------------------------------------------------------*/
#include "mcal_interrupt_config.h"
/* Data Type Declaration ----------------------------------------------------------------*/

/* Macros -------------------------------------------------------------------------------*/

/* Macro Functions ----------------------------------------------------------------------*/

/* Functions Declarations ---------------------------------------------------------------*/
void INT0_ISR(void);
void RB4_ISR(uint8 RB4_Source);
void RB5_ISR(uint8 RB5_Source);
void RB6_ISR(uint8 RB6_Source);
void RB7_ISR(uint8 RB7_Source);

void ADC_ISR(void);
void TMR0_ISR(void);
void TMR1_ISR(void);
void TMR2_ISR(void);
void EUSART_TX_ISR(void);
void EUSART_RX_ISR(void);
void MSSP_I2C_ISR(void);
void MSSP_I2C_BC_ISR(void);
void MSSP_SPI_ISR(void);

void CCP1_ISR(void);
void CCP2_ISR(void);

#endif	/* MCAL_INTERRUPT_MANAGER_H */

