/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File: printf_config.h  
 * Author: Javinator9889
 * Comments: Configuration file for the printf.h lib - https://github.com/mpaland/printf
 * Revision history: 1.0
 */

// Configuration file for the printf.h lib
#ifndef PRINTF_CONFIG_H
#define	PRINTF_CONFIG_H

/**
 * ntoa (integer) conversion buffer size. 
 * This must be big enough to hold one converted numeric 
 * number including leading zeros, normally 32 is a 
 * sufficient value. Created on the stack
 */
#define PRINTF_NTOA_BUFFER_SIZE         32

/**
 * ftoa (float) conversion buffer size. 
 * This must be big enough to hold one converted float number 
 * including leading zeros, normally 32 is a sufficient value. 
 * Created on the stack
 */
#define PRINTF_FTOA_BUFFER_SIZE         32

/**
 * Define the default floating point precision
 */
#define PRINTF_DEFAULT_FLOAT_PRECISION  6

/**
 * Define the largest suitable value to be printed with %f, 
 * before using exponential representation
 */
#define PRINTF_MAX_FLOAT                1E10

/**
 * Define this to disable floating point (%f) support
 */
//#define PRINTF_DISABLE_SUPPORT_FLOAT

#ifndef CONFIG_DEBUG
/**
 * Define this to disable exponential floating point (%e) support
 */
#define PRINTF_DISABLE_SUPPORT_EXPONENTIAL

/**
 * Define this to disable long long (%ll) support
 */
//#define PRINTF_DISABLE_SUPPORT_LONG_LONG

/**
 * Define this to disable ptrdiff_t (%t) support
 */
#define PRINTF_DISABLE_SUPPORT_PTRDIFF_T
#endif

#endif	/* PRINTF_CONFIG_H */

