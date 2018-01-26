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

/*==================[inclusions]=============================================*/

#include "ladder.h"

/*==================[macros and definitions]=================================*/

#define IO_COUNT 8

/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/

const int mark1_outputs[IO_COUNT] = {21,20,16,12,25,24,23,18};
const int mark1_inputs[IO_COUNT] = {17,27,22,5,6,13,19,26};

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/

BOOL Read_U_b_X0(void)
{
	return !digitalRead(mark1_inputs[0]);
}

BOOL Read_U_b_X1(void)
{
	return !digitalRead(mark1_inputs[1]);
}

BOOL Read_U_b_X2(void)
{
	return !digitalRead(mark1_inputs[2]);
}

BOOL Read_U_b_X3(void)
{
	return !digitalRead(mark1_inputs[3]);
}

BOOL Read_U_b_X4(void)
{
	return !digitalRead(mark1_inputs[4]);
}

BOOL Read_U_b_X5(void)
{
	return !digitalRead(mark1_inputs[5]);
}

BOOL Read_U_b_X6(void)
{
	return !digitalRead(mark1_inputs[6]);
}

BOOL Read_U_b_X7(void)
{
	return !digitalRead(mark1_inputs[7]);
}

BOOL Read_U_b_Y0(void)
{
	return digitalRead(mark1_outputs[0]);
}

BOOL Read_U_b_Y1(void)
{
	return digitalRead(mark1_outputs[1]);
}

BOOL Read_U_b_Y2(void)
{
	return digitalRead(mark1_outputs[2]);
}

BOOL Read_U_b_Y3(void)
{
	return digitalRead(mark1_outputs[3]);
}

BOOL Read_U_b_Y4(void)
{
	return digitalRead(mark1_outputs[4]);
}

BOOL Read_U_b_Y5(void)
{
	return digitalRead(mark1_outputs[5]);
}

BOOL Read_U_b_Y6(void)
{
	return digitalRead(mark1_outputs[6]);
}

BOOL Read_U_b_Y7(void)
{
	return digitalRead(mark1_outputs[7]);
}

void Write_U_b_Y0(BOOL v)
{
	digitalWrite(mark1_outputs[0], v);
}

void Write_U_b_Y1(BOOL v)
{
	digitalWrite(mark1_outputs[1], v);
}

void Write_U_b_Y2(BOOL v)
{
	digitalWrite(mark1_outputs[2], v);
}

void Write_U_b_Y3(BOOL v)
{
	digitalWrite(mark1_outputs[3], v);
}

void Write_U_b_Y4(BOOL v)
{
	digitalWrite(mark1_outputs[4], v);
}

void Write_U_b_Y5(BOOL v)
{
	digitalWrite(mark1_outputs[5], v);
}

void Write_U_b_Y6(BOOL v)
{
	digitalWrite(mark1_outputs[6], v);
}

void Write_U_b_Y7(BOOL v)
{
	digitalWrite(mark1_outputs[7], v);
}

void ladder_iface_init(void)
{
    for (int i=0; i<IO_COUNT; i++) {
	    pinMode(mark1_outputs[i], OUTPUT);
	    pinMode(mark1_inputs[i], INPUT);
    }
}

/*==================[end of file]============================================*/
