/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.170.0
        Device            :  PIC24FJ64GB202
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.61
        MPLAB 	          :  MPLAB X v5.45
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"



// #define mcuAtomicOr(variable, mask)            \
//     __asm__ volatile (                        \
//         "    ior.w %0, [%1], [%1] \n"        \
//         : : "r"(mask), "r"(&(variable))        \
//         : "cc"                                \
//     )
// 
// #define mcuAtomicAnd(variable, mask)        \
//     __asm__ volatile (                        \
//         "    and.w %0, [%1], [%1] \n"        \
//         : : "r"(mask), "r"(&(variable))        \
//         : "cc"                                \
//     )
// 
// #define mcuAtomicXor(variable, mask)        \
//     __asm__ volatile (                        \
//         "    xor.w %0, [%1], [%1] \n"        \
//         : : "r"(mask), "r"(&(variable))        \
//         : "cc"                                \
//     )
/*
                         Main application
 */
int main(void)
{
//    mcuAtomicAnd(SR, 0xFF1F); // enable interrupts
// 	INTCON1bits.NSTDIS = 0;   // enable nesting
    // initialize the device
    SYSTEM_Initialize();
    PORTBbits.RB5 = 1;
    while (1)
    {
        int x=0;
        int y=0;
        PORTBbits.RB5 = 1;
        for(x=0; x<1000; x++){
            for(y=0; y<1000; y++){;}
        }
        PORTBbits.RB5 = 0;
        for(x=0; x<1000; x++){
            for(y=0; y<1000; y++){;}
        }
    }

    return 1;
}
/**
 End of File
*/

