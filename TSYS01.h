/* Blue Robotics Arduino TSYS01 Temperature Sensor Library
------------------------------------------------------------
 
Title: Blue Robotics Arduino TSYS01 Temperature Sensor Library
Description: This library provides utilities to communicate with and to
read data from the Measurement Specialties TSYS01 temperature 
sensor.
Authors: Rustom Jehangir, Blue Robotics Inc.
		 Jonathan Newman, Blue Robotics Inc.
         Adam Šimko, Blue Robotics Inc.
-------------------------------
The MIT License (MIT)
Copyright (c) 2016 Blue Robotics Inc.
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-------------------------------*/ 

#ifndef TSYS01_H_BLUEROBOTICS
#define TSYS01_H_BLUEROBOTICS

#include "Arduino.h"

class TSYS01 {
public:


	TSYS01(uint8_t i2cAddress = 0x77);

	bool isValid();
	void init();

	/** The read from I2C takes up for 40 ms, so use sparingly is possible.
	 */
	void read();

	/** This function loads the datasheet test case values to verify that
	 *  calculations are working correctly. No example checksum is provided
	 *  so the checksum test may fail.
	 */
	void readTestCase();

	/** Temperature returned in deg C.
	 */
	float temperature();

private:
	uint16_t C[8];
	uint32_t D1;
	float TEMP;
	uint32_t adc;
	uint8_t mAddress;

	/** Performs calculations per the sensor data sheet for conversion and
	 *  second order compensation.
	 */
	void calculate();

};

#endif
