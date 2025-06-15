# Scale Project AVR

Rebuild of a Transcell Model TCS3T-60LB

## Description

The scale's original controller board stopped working so I built a controller with two ATMega328 chips, one for the HX711 load cell amplifier and LCD (LCM1602C V2.1 with a HD55780 controller). The other chip functions as an keypad controller.
This project was originally coded with the Arduino IDE using the built in Wire library. This repo is a port to regular C++ without the Ardunio framework The two 0ATMega devices are programmed with the ISP connection with a USBTiny programmer from SparkFun.

## Getting Started

### Dependencies

* AVR-GCC tool chain

### Installing

* ToDo - create make file


## Version History

* 0.1.0-a
   * alpha

## License

This project is licensed under the GPLv3 License - see the LICENSE file for details
