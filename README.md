
# LED Blinking Project

## Objective
This project demonstrates a simple LED blinking simulation using Arduino and Tinkercad. It is designed to showcase basic microcontroller programming and digital output control.

## Components Used
- Arduino Uno (virtual in Tinkercad)
- 1 x LED
- 1 x 220-ohm resistor
- Breadboard (virtual simulation)
- Jumper wires

## Circuit Diagram
![CIRCUIT_DIAGRAM](https://github.com/user-attachments/assets/80934f9e-62c9-4ce9-9c19-969049a823dc)


## Code
The Arduino code for this project is as follows:
```cpp
int led = 12; // Pin number for the LED

void setup() {
  pinMode(led, OUTPUT); // Configure pin 12 as an output
}

void loop() {
  digitalWrite(led, HIGH); // Turn the LED on
  delay(1000); // Pause for 1 second
  digitalWrite(led, LOW); // Turn the LED off
  delay(1000); // Pause for 1 second
}
```

## How to Run
1. Set up the circuit as per the diagram.
2. Upload the code to the Arduino using the Arduino IDE or Tinkercad.
3. Observe the LED blinking at 1-second intervals.

## Observations
- The LED turns on and off every second, demonstrating basic digital output control with Arduino.
- This project highlights:
  - How to use the `digitalWrite` function for controlling output pins.
  - The importance of `delay()` in creating timed actions.
  - A foundational understanding of microcontroller programming.


## Conclusion
This project serves as an introduction to Arduino programming and circuit simulation using Tinkercad. During the process, I learned:
- How to set up a basic circuit in Tinkercad.
- Writing and debugging simple Arduino code.
- Overcoming initial challenges with Tinkercad simulation setup and pin connections.

This project lays the foundation for exploring more complex projects involving sensors, actuators, and communication modules.
