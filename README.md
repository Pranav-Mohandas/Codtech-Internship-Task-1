# Name : Pranav Mohandas
# Company : CODTECH IT SOLUTIONS
# ID : CT08DS272
# Domain : Embedded Systems
# Duration : December 2024 to January 2025
# Mentor : Muzammil Ahmed

# LED Blinking Using Arduino  

This project demonstrates how to program an Arduino board to control multiple LEDs in a dynamic blinking sequence. The program utilizes loops and arrays to manage multiple LEDs, introducing intermediate-level embedded programming concepts and showcasing how to interface with hardware.  

---

## Technology Used  
- **Arduino IDE**  
- **Tinkercad** (for simulation and design of the circuit)  

---

## Components Required  
- Arduino Board (or simulation in Tinkercad)  
- 9 LEDs  
- 9 Resistors (420Ω or similar)  
- Connecting wires  
- Breadboard  

---

## Circuit Diagram  
The circuit consists of 9 LEDs connected to digital pins on the Arduino board (Pins 5 to 13) through resistors. Each LED's cathode is connected to the ground pin (GND).  

---

## Features  
- Controls 9 LEDs using dynamic patterns and sequences.  
- Utilizes arrays and loops for efficient programming.  
- Demonstrates intermediate-level microcontroller programming concepts.  
- Flexible code structure that allows easy customization of LED patterns and delays.  
- Suitable for beginners and hobbyists to explore embedded systems and hardware interfacing.  

---

## Code  
Below is the Arduino code for the project:  

```cpp
int ledCount = 9; 
int ledPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13}; 
int ledDelay = 300;

void setup() { 
  for (int thisLed = 0; thisLed < ledCount; thisLed++) { 
    pinMode(ledPins[thisLed], OUTPUT); 
  } 
}

void loop() { 
  digitalWrite(ledPins[4], HIGH); 
  delay(ledDelay); 
  digitalWrite(ledPins[4], LOW); 
  for (int offset = 1; offset <= 4; offset++) { 
    digitalWrite(ledPins[4 - offset], HIGH); 
    digitalWrite(ledPins[4 + offset], HIGH); 
    delay(ledDelay); 
    digitalWrite(ledPins[4 - offset], LOW); 
    digitalWrite(ledPins[4 + offset], LOW); 
  } 
  delay(ledDelay);

  for (int offset = 4; offset >= 1; offset--) { 
    digitalWrite(ledPins[4 - offset], HIGH); 
    digitalWrite(ledPins[4 + offset], HIGH); 
    delay(ledDelay); 
    digitalWrite(ledPins[4 - offset], LOW); 
    digitalWrite(ledPins[4 + offset], LOW); 
  } 
  digitalWrite(ledPins[4], HIGH); 
  delay(ledDelay); 
  digitalWrite(ledPins[4], LOW); 
  delay(ledDelay);

  for (int thisLed = 0; thisLed < 5; thisLed++) { 
    digitalWrite(ledPins[thisLed], HIGH); 
    delay(ledDelay); 
    digitalWrite(ledPins[thisLed], LOW); 
  } 
  digitalWrite(ledPins[4], HIGH); 
  delay(ledDelay); 
  digitalWrite(ledPins[4], LOW); 
  delay(ledDelay); 
  digitalWrite(ledPins[4], HIGH); 
  delay(ledDelay); 
  digitalWrite(ledPins[4], LOW); 
  for (int thisLed = 5; thisLed < 9; thisLed++) { 
    digitalWrite(ledPins[thisLed], HIGH); 
    delay(ledDelay); 
    digitalWrite(ledPins[thisLed], LOW); 
  } 
  delay(ledDelay);

  for (int thisLed = 0; thisLed < ledCount; thisLed += 2) { 
    digitalWrite(ledPins[thisLed], HIGH); 
    delay(ledDelay); 
    digitalWrite(ledPins[thisLed], LOW); 
  } 
  delay(1000);

  for (int thisLed = 1; thisLed < ledCount; thisLed += 2) { 
    digitalWrite(ledPins[thisLed], HIGH); 
    delay(ledDelay); 
    digitalWrite(ledPins[thisLed], LOW); 
  } 
  delay(1000); 
}
