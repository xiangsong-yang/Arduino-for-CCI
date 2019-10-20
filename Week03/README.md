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

[Testing video](https://youtu.be/kmYKmtS6u_I) 

#### Potentometer

Potentometer was used in week2. The princicple of using it is to use the variable resistor for changing the voltage for voltage divider. It can be using for changing the lightness of a LED or something that can be affect buy the value fo the voltage.
![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/images/knob.JPG?raw=true)

#### Making a dark detechting LED

For this seesion, Pheonix had introduced two components, which are transistor and phototransistor. As one of the most used component in the world mechtronics, it is essential for student to understand the basic of the transistor. 

A transistor is a semiconductor device used to amplify or switch electronic signals and electrical power. For understanding the use of the transistor, a simple LED controlling circuit was required for student to make with transistor.

A phototransistor is a component that concerts light energy into eletric energy. It can be used for detecting the environmental lightness.

Also, this is a training for students to get begin with unfamiliar components by searching datasheet and simply testing circuit. By checking the Serial number on the component, student had found the data sheet that explained the use of the component.

Pheonix had shared the example of the circuit and the circuit diagram. 
![alt text](https://i0.wp.com/cdn.makezine.com/uploads/2014/10/wp20_schematic_w_circle-transistor.png?zoom=2&resize=719%2C421)
