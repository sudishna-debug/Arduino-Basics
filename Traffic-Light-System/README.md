Traffic Light System 🚦

📌 Description

A simple Arduino-based traffic light system that uses three LEDs to simulate the basic operation of a traffic signal and displays the count down.


🎯 Objective 

To control multiple LEDs using Arduino and understand how digital outputs and timing can be used to create a sequence as well as displays the delay.


🧰 Components

- Arduino Uno
- Red LED
- Yellow LED
- Green LED
- 7 Segment Display
- 3 Resistors
- Breadboard
- Jumper wires
- USB cable / power supply

 
⚙️ Working

The Arduino controls the three LEDs in a specific sequence:
Red → Yellow → Green → Repeat and display the delay between each LED in the 7 segment display.
Each LED remains ON for a predefined amount of time before the next LED is activated.


🔌Circuit

The three LEDs are connected to separate digital output pins of the Arduino through resistors.
- Red LED → Digital output pin
- Yellow LED → Digital output pin
- Green LED → Digital output pin
- LED cathodes → GND
- Display output -> Digital output pins
- Display com -> VCC and GND  


💻 Code

The Arduino program is available in:
"Traffic_Light_System.ino"


📷 Project Images

Actual circuit and testing photos will be added to the "images" folder.


 📚 What I Learned
 
- Arduino digital output
- Controlling multiple LEDs
- Using "digitalWrite()"
- Using "delay()"
- Creating a timed sequence
- Basic circuit connections

