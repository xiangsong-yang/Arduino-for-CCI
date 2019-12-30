# This is the portfolio for Xiangsong Yang's Arduino work in CCI.

## Labs for week7

In week6, Xiangsong finished the Lab of using Shift Register. 

Shift Register is a common used component for controlling different inputs and outputs with limited pins. 

### Shift Register
In this week, the topic is about shift register and controlling.

#### Basic
The way shit register works is to store the data that needs to be written into different pins from microcontroller and wait the write the moment to write them at the same time. What happens inside is the bits is shfiting from pins, so it was called Shit register.

By using Shift register, a huge number of inputs or outpus can be controlled with three pins on Arduino or six pins for both inputs and outputs.

A classic controlling for LED with Shift register is shown below.

![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/Week7/Image/Shfit1.jpg?raw=true)

#### Pins
Normally, there are four types of pins on a shift register: MR, SH_CP, ST_CP, OE.

MR: Master Reclear, emptying the whole shift register.
SH_CP: Shift Register Clock Pin, when this pin is pulled HIGH, it will shift the register.
ST_CP: Strorage R=register Clock Pin, the trigger of "display" pattern.
OE: Output Enable pin, for disables outpus when HIGH.

#### Shift Register chaining

Shift registers can be chained for extending number of output/input pins controlling. 
The basic chainning diagram is shown as below.

![alt text](https://github.com/xiangsong-yang/Arduino-for-CCI/blob/master/Week7/Image/Shfit2.jpg?raw=true)
