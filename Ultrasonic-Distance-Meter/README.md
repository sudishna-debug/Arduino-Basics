Ultrasonic Distance Meter 📏

📌 About the Project
This project uses an Arduino Uno and an HC-SR04 ultrasonic sensor to measure the distance between the sensor and an object.
The measured distance is calculated by Arduino and displayed on the Serial Monitor in centimeters.


🧰 Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires
- USB Cable
- Object for distance measurement


🔌 Circuit Connections
HC-SR04 Pin| Arduino Uno
VCC| 5V
GND| GND
TRIG| Digital Pin 9
ECHO| Digital Pin 10


⚙️ How It Works
The HC-SR04 works using ultrasonic sound waves.

1. Arduino sends a short pulse to the TRIG pin.
2. The HC-SR04 sends an ultrasonic sound wave.
3. The sound wave travels toward the object and gets reflected back.
4. The ECHO pin produces a pulse whose duration represents the travel time.
5. Arduino measures this time using "pulseIn()".
6. The distance is calculated from the time taken by the sound wave.


📐 Distance Formula
          Distance = (Time × Speed of Sound) / 2
The division by 2 is required because the sound travels to the object and back.
For the Arduino calculation:
          distance = duration * 0.0343 / 2;
Here, "0.0343 cm/µs" is the approximate speed of sound.


💻 Code
The Arduino program:
- Sends a trigger pulse using the "TRIG" pin
- Measures the returning signal using the "ECHO" pin
- Calculates the distance
- Prints the result to the Serial Monitor


🖥️ Output
Example:
Distance: 12.45 cm
Distance: 12.51 cm
Distance: 12.38 cm


📸 Project Photos

Circuit
Add your circuit photo here.

Working
Add a photo showing the sensor measuring an object here.


🧠 What I Learned
Through this project, I learned:
- How an ultrasonic sensor works
- Difference between "TRIG" and "ECHO"
- How Arduino measures time using "pulseIn()"
- How time can be converted into distance
- How to use the Serial Monitor
- Basic sensor interfacing with Arduino
- Why the measured distance can fluctuate slightly


🛠️ Technologies Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Arduino IDE
- Embedded C/C++
