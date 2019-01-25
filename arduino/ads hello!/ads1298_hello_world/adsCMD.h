/*
 * adsCMD.h
 * Library header file for adsCMD library
 */
#include "Arduino.h"

//For Leonardo SPI see http://openenergymonitor.blogspot.com/2012/06/arduino-leonardo-atmega32u4-and-rfm12b.html
//constants define pins on Arduino 

// Teensy 3.1 pinout
//const int IPIN_PWDN = 47; //not required for TI demo kit
//const int PIN_CLKSEL = 49;//6;//*optional
//const int IPIN_RESET  = 48;//*optional

// Para Teensy 3.1:
/*
const int PIN_START = 4; //como START es OUTPUT, debe transmitir comando desde el teensy al ADS..
const int IPIN_DRDY = 5; // como DRDY es INPUT, el teensy debe recibir comando desde el ADS..
const int IPIN_CS = 10;
const int PIN_DOUT = 11;//SPI out
const int PIN_DIN = 12;//SPI in
const int PIN_SCLK = 13;//SPI clock
*/
//Para Arduino Mega:
const int PIN_START = 4; //como START es OUTPUT, debe transmitir comando desde el teensy al ADS..
const int IPIN_DRDY = 5; // como DRDY es INPUT, el teensy debe recibir comando desde el ADS..
const int IPIN_CS = 53;
const int PIN_DOUT = 51;//SPI out
const int PIN_DIN = 50;//SPI in
const int PIN_SCLK = 52;//SPI clock

//function prototypes
void adc_wreg(int reg, int val); //write register
void adc_send_command(int cmd); //send command
int adc_rreg(int reg); //read register