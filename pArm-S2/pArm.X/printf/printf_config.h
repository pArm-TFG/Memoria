/*
 * Copyright (C) 2020 - present | pArm-S2 by Javinator9889
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see https://www.gnu.org/licenses/.
 *
 * Created by Javinator9889 on 2020 - pArm-S1.
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

