The sensor is the Measurement Specialties TSYS01, It comes standard with a 4-pin DF13 connector and compatible with most DroneCode compatible boards including the APM2.6, PixHawk, and others.

## Features

* &plusmn;0.1&deg;C Accuracy
* Standard DF13 connector for connection to DroneCode boards such as APM, PixHawk, Navio2, etc.
* Sealed in a bulkhead penetrator for easy installation into any 10mm hole

## Compatibility

The Celsius sensor is compatible with any device with 3.3V I<sup>2</sup>C logic. When using with a 5V device, such as an Arduino Uno, it is necessary to use a logic level converter.

##Configuration

The sensor is mounted on a PCB that extends into the water and is sealed from water with a thick layer of thermally conductive epoxy. This mounting method minimizes heat capacitance and ensures a fast time-response.

##Ratings

For further information please see the [TSYS01 Data Sheet](http://meas-spec.com/downloads/TSYS01_Digital_Temperature_Sensor.pdf).

|      **Electrical**       |
| ------------- | --------- |
| **Item** | **Condition** | **Value** |
| Supply Voltage| -- | 3.3 to 5.5 volts |
| I<sup>2</sup>C Logic Voltage (SDA and SCL) | -- | 3.3 volts |
| Peak Current   | -- | 1.4 mA   |
| ------------- | --------- |

|            **Temperature**            			 |
| ------------- | ------------- | ------------- |
| **Item** | **Condition** | **Value** |
| Operating Temperature | -- | -40 to +125&deg;C |
|Storage Temperature | -- | -55 to +150&deg;C                        |
|Absolute Accuracy   | From -5 to 50&deg;C | +/- 0.1&deg;C      |
|                    | From -40 to 125&deg;C |  +/- 0.5&deg;C   |
|  **Physical**  |
| Wire Colors | Green - I<sup>2</sup>C Clock (SCL, 3.3V) |
|             | White - I<sup>2</sup>C Data (SDA, 3.3V)  |
|             | Red - Positive (3.3-5.5V) |
|             | Black - Ground          |
| ------------|-------------------------|
| Overall Length | 56.1 mm |
| Thread Size    | M10x1.5 20 mm threaded |
| Recommended Through Hole Size | 10-11 mm |
| Wrench Flats | 16 mm |
|---------------------------------------------|

##Physical Specifications

* Bulkhead hole size: 10-10.5mm
* Wire length: 11" (280mm)

##License

The Celsius Pressure Sensor Hardware Design is released under the MIT License.

##Revision History

0.0 - Under development
0.1 - First production version (marked with rev3)
0.2 - Minor layout changes (marked with rev4)