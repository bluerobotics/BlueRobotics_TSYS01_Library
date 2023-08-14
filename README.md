# BlueRobotics TSYS01 Temperature Sensor Library

Arduino library for the TSYS01 temperature sensor. The TSYS01 is a high-accuracy, fast-response subsea temperature sensor from Measurement Specialties. 

# Documentation

Please see the examples for normal operation. Below are the available functions used in the library.

``` cpp
TSYS01();

/** Initialize the sensor - return false if not detected.
 */
bool init();

/** The read from I2C takes up for 40 ms, so use sparingly is possible.
 */
void read();

/** This function loads the datasheet test case values to verify that
 *  calculations are working correctly. 
 */
void readTestCase();

/** Temperature returned in deg C.
 */
float temperature();

```

# Versions

- `1.0.1` - added initialization validation
- `1.0.0` - initial release
- `0.0` - Under development

# Reference

You can find the [TSYS01 datasheet here](http://www.meas-spec.com/downloads/TSYS01_Digital_Temperature_Sensor.pdf).

