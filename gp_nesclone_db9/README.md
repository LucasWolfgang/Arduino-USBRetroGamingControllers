
## Auth: Wolfgang
## Version: 3.0.1

### Hardware
 - ATmega32u4 based Arduino (Arduino Leonardo/Micro)
 - Super Nintendo Entertainment System Controller

### Software
 - Arduino Joystick Library 1.0.1 - https://github.com/MHeironimus/ArduinoJoystickLibrary


<pre>
       +---------> Clock                 
       | +-------> Latch                 
       | | +-----> Data                  
       | | |                             
   _____________                   
 5 \ x o o o x / 1                 
    \ x o x o /                    
   9 `~~~~~~~' 6                   
        |   |                            
        |   +----> Power                 
        +--------> Ground
      
</pre>

### Impotant notes
 * The gamepad does not follow the same protocol as the SNES.
 * It has more buttons, but only 10 are useful simulatenously (smaller than SNES's). This is not a hardware limitation (talking about the gamepad). The embedded asic generates a internal 15 Hz clock and make some signal filtering to get the following behaviors.
    * X, &#9723;, L1 and L2 have the same output bit.
    * &#9723; and L1 only sets once every 2 cycles.
    * &#9651;, &#9711;, R1 and R2	has the same output.
    * &#9651; and R1 only sets once every 2 cycles
