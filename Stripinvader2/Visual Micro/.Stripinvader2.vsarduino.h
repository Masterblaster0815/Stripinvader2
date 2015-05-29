/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Ethernet, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define _VMDEBUG 1
#define ARDUINO 164
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define F_CPU 16000000L
#define ARDUINO 164
#define ARDUINO_AVR_ETHERNET
#define ARDUINO_ARCH_AVR
extern "C" void __cxa_pure_virtual() {;}

//
//
void initMode();
uint32_t hsb2rgbAN2(uint16_t index, uint8_t sat, uint8_t bright);
void loopHsb();
void setupKnightRider(byte _krSize, byte _howMany, byte _krMode);
void loopKnightRider();
void drawKnightRider();
void checkSwapDirection(uint16_t lengthOfStrip);
void setupLines();
void loopLines();
void newAnimation();
void setupRainbow();
void loopRainbow();
void setupSolid(uint8_t _mode);
void loopSolid();
void fillAllPixelWith(uint32_t col);
void setupXor(uint8_t _xormode);
void loopXor();
void setTintPixelColor(uint16_t i, uint32_t c);
uint32_t Color(uint8_t r, uint8_t g, uint8_t b);
uint32_t complementaryColor();
uint32_t Wheel(byte WheelPos);
void startFadeToRandomColor(uint8_t r, uint8_t g, uint8_t b);
void faderLoop();
void synchronousBlink();
void EEPROMWriteInt(uint16_t p_address, uint16_t p_value);
uint16_t EEPROMReadInt(uint16_t p_address);
void saveCurrentStateToEeprom();
boolean checkEepromSignature();
void restorePresetStateFromEeprom();
void loopAudioSensor();
void oscCallbackDelay(OSCMessage *_mes);
byte getFirstFloatArgument(OSCMessage *_mes);
void oscCallbackR(OSCMessage *_mes);
void oscCallbackG(OSCMessage *_mes);
void oscCallbackB(OSCMessage *_mes);
void oscCallbackAudio(OSCMessage *_mes);
void oscCallbackChangeModeDirect(OSCMessage *_mes);
void increaseMode();
void oscCallbackChangeMode(OSCMessage *_mes);
void oscCallbackConfig(OSCMessage *_mes);
void oscCallbackSavePreset(OSCMessage *_mes);
void oscCallbackPixel(OSCMessage *_mes);
void oscCallbackHello(OSCMessage *_mes);
void oscCallbackConfigSend(OSCMessage *_mes);
void oscCallbacksetRGB(OSCMessage *_mes);
void serialEvent();

#include "G:\Projekte\Arduino\arduino-1.6.4\hardware\arduino\avr\variants\ethernet\pins_arduino.h" 
#include "G:\Projekte\Arduino\arduino-1.6.4\hardware\arduino\avr\cores\arduino\arduino.h"
#include <Stripinvader2.ino>
#include <FxHsb.ino>
#include <FxKnightRider.ino>
#include <FxLines.ino>
#include <FxRainbow.ino>
#include <FxSolid.ino>
#include <FxXor.ino>
#include <Helper.ino>
#include <InAudioSensor.ino>
#include <InOscCallback.ino>
#include <InSerial.ino>
