# This is the portfolio for Xiangsong Yang's Arduino work in CCI.

## Labs for week3

In week3, Xiangsong had finished the 3 lab teseting, which is mainly about using PWM, transistor for controlling.

The detail of the labs will be explained below.

### Lab00-PWM and LED 
#### Fade

This session is mainly about exploring the controlling ability of the digital pins on Arduino by using PWM. 

As Phoenix mentioned before, digital pins on Arduino are for reading and transimitting digital signal, which is either 0 or 1. 

According to the week 3 lecture by Phoenix, "Pulse Width Modulation(PWM) can makes a digital pin act analogish". 

So the arduino is sending pulse every 20ms in PWM digital pins, the length of the pulse will affecft the voltage sent to the pins. In this way, controlling LED and motors is possible for digital pins.

![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/Week03/image/simplefade_bb.png?raw=true)

Also, the coding part of the "Fade" has used a smart way to achieve effect, which is flip the value of the lightness into negative value for using the same equation to go back. This is an easier way to make the programming for its purpose. Also, the minimum use of equation by applying the OR function in the statement is the vital part of the code and worthy learning.

<a href="https://youtu.be/kmYKmtS6u_I" target="_blank"><img src="http://img.youtube.com/vi/YOUTUBE_VIDEO_ID_HERE/0.jpg" 
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>

#### Potentometer

Potentometer was used in week2. The princicple of using it is to use the variable resistor for changing the voltage for voltage divider. It can be using for changing the lightness of a LED or something that can be affect buy the value fo the voltage.
![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/images/knob.JPG?raw=true)

### Lab01-Serial Data
By using the example for Pheonix, Xiangsong and the group understood the principle of the example and some key feature for setting up serial in Arduino.

Serial.Begin(9600); // this is the speed of the serial port runs
Serial.availbe(); //this is the reading command
Serail.print();// this is for print in the serial monitor
Serial.println;// this i for print in lines in serial monitor

### Lab02-Potentiometers
This is a convient component for controlling by using variable resistor. The diagram of the inner cuicirt shows below. In this diagram, aruduino is reading the analog data which is voltage variation from the reading pin and ground pin.
![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/images/knob.JPG?raw=true)

### Lab03-Light Dependent Resistors

This is the variable resistor which changes its resistance with light intensity. It can be easily tested by the multimeter. It can be applied as:

(1)In circuil in serail with LED to change the lightness of the light directly 

(2)Apply it with independent circuit for arduino to get the analog read and use it to control the LED in the circuit. 

The first way is easier but the lightness of the LED will be affect much. The seond principle is harder to set up, but it can control the lightness of the LED in proper way.


### Lab04-Light Playing with Common Sensors

In this session, Xiangsong got a Ultrasonic sensor- MB1040 LV-MaxSonar-EZ4. 

From the datesheet, there will be 3 pins that need to be connected to Arduino- Power, Ground, Tx. They are connected to to 5v, GND, and a Analog read.

Feonix had already soldered the pns. In order to make reliable coonect, the wires with clips had been used for making circuit.

The way sensor works is to count the time from making sound wave until receiving the wave. the half time of sound travling would be the time for the sound travels through the distance. When it times speed of the sounds in air, the distance can be worked out.

From the data sheet, the onboard circuit had made the convert and the Tx pin will be sending voltage to the analog ports on arduino. The distance would be (Vcc/512) / inch.

This sensor has many applications for interactive items, it can be seen as a sensor for detecting the distance for safety or detecting the movement.



