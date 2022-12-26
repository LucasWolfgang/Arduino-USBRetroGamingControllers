/*
* Auth: Lucas Wolfgang
* Version: 2.0.1
* 
* Hardware
*  - ATmega32u4 based Arduino (Arduino Leonardo/Micro)
*  - Super Nintendo Entertainment System Controller
* Software
*  - Arduino Joystick Library 1.0.1 - https://github.com/MHeironimus/ArduinoJoystickLibrary
* 
*    +---------+---------+---------+	               
*  9 | o  o  o | o  o  o | o  o  o | 1               parallel	               
*     \________|_________|________/                  port pins	               
*      |  |      |  |  |   |   
*      |  |      |  |  |   +-------->  Clock    ---  (4) 
*      |  |      |  |  +------------>  Select   ---  (3) 
*      |  |      |  +--------------->  Power    ---  (5-9) 
*      |  |      +------------------>  Ground   ---  (18-25)      
*      |  +------------------------->  Command  ---  (2)	               
*      +---------------------------->  Data     ---  (one of 10,11,12,13,15)
*/

#include <Joystick.h>

Joystick_ Joystick;
