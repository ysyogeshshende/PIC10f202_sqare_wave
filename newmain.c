/*
 * File:   newmain.c
 * Author: Admin
 *
 * Created on January 19, 2022, 10:02 AM
 */

// PIC10F202 Configuration Bit Settings
// 'C' source line config statements
// CONFIG
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = ON          // Code Protect (Code protection on)
#pragma config MCLRE = ON       // Master Clear Enable (GP3/MCLR pin function  is MCLR)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ 4000000

#include <xc.h>
#include<stdio.h>
void main(void) {
    TRISGPIO=0x00   ;
    GP0=0;
    
    while(1)
    {
        while(1){
     GP0=1;
     __delay_us(10);
     GP0=0;
     __delay_us(10);
        }
    }
}
