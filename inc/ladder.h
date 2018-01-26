/*
 * MIT License
 * Copyright (c) 2017, Pablo Ridolfi - Code 'n Load
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _LADDER_H_
#define _LADDER_H_

/*==================[inclusions]=============================================*/

#include <stdint.h>

/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

typedef int16_t SWORD;
typedef int	BOOL;

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

BOOL Read_U_b_X0(void);
BOOL Read_U_b_X1(void);
BOOL Read_U_b_X2(void);
BOOL Read_U_b_X3(void);
BOOL Read_U_b_X4(void);
BOOL Read_U_b_X5(void);
BOOL Read_U_b_X6(void);
BOOL Read_U_b_X7(void);

BOOL Read_U_b_Y0(void);
BOOL Read_U_b_Y1(void);
BOOL Read_U_b_Y2(void);
BOOL Read_U_b_Y3(void);
BOOL Read_U_b_Y4(void);
BOOL Read_U_b_Y5(void);
BOOL Read_U_b_Y6(void);
BOOL Read_U_b_Y7(void);

void Write_U_b_Y0(BOOL v);
void Write_U_b_Y1(BOOL v);
void Write_U_b_Y2(BOOL v);
void Write_U_b_Y3(BOOL v);
void Write_U_b_Y4(BOOL v);
void Write_U_b_Y5(BOOL v);
void Write_U_b_Y6(BOOL v);
void Write_U_b_Y7(BOOL v);

void ladder_iface_init(void);

void PlcCycle(void);

/*==================[end of file]============================================*/
#endif /* #ifndef _LADDER_H_ */
