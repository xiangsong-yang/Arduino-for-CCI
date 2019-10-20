# This is the portfolio for Xiangsong Yang's Arduino work in CCI.

## Labs for week2

In week2, Xiangsong had finished the 5 labs, which is mainly about testing with sensors.

The detail of the labs will be explained below.

### Lab00-Leds in Serial and Parallel
From what Xiangsong understood, this lab is about founding the relationship about resistance, voltage and current in serial and parallel circuits.

In serial circuit, every component is connect in serial, which means the they share the same amont of current. 

In parallel circuit, every component is connect in parallel, every component has the same voltage applied on each side.

From the equation, the U = IR, the component's resistance, volate or current can be caculated by given two of them.

In parallel circuit, every component is connect in parallel, every component has the same voltage applied on each side. For components like LEDs, Resistors, the relationship of resistance in total and each components can be caculated as 

R total = r1 + r2 + r3 + ...

In parallel circuit, every component is connect in parallel, every component has the same voltage applied on each side.For LEDs and Resistors, the relationship of resistance in total and each components can be caculated as 

1/R total = 1/r1 + 1/r2 + 1/r3 +...

In these question, the meanning of the runnning out of voltage should be not enough current to power the LED.

#### Question 1: How many leds can you hook up with a 220k resistor in serial before running out of voltage?
For question 1, everything connect in serial, this process can be seen as making a huge resistor.


From the equation, R total = r1 + r2 +r3+...


In ideal situation, the I total = U/ Rtotal


The minimum current to power the led can be worked out by testing with arduino and multimemter.

the number of LEDs n, in the equation and solve the equation, it should be:

![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/images/Serial_caculation.JPG?raw=true)

n = (5-220k * I)/ I * r LED  (I means minimal current to power LED)

In the real testing with arduino, the number of LED is 3 in total.

#### Question 2: How many leds can you hook up with a 220k resistor in parallel before running out of voltage?
From the equation, 1/R total = 1/r1 + 1/r2 + 1/r3 +... in parallel circuit

![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/images/Parallel_caculation.JPG?raw=true)

From Xiangsong's understanding, the 220k resistor should be connect in serial with the LEDS as shown below. The caculation in theory shows the result of possible number n. In the same condition of current of using 3 LEDs in serial, which has the current of 0.015 mA and led resistance as 110k the number n would be around 220.

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



