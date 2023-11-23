# LED Signaling System for Bicycles

This project involves the creation and installation of an LED signaling system on a bicycle, designed to provide support for cyclists during night races. The device is controlled through a push button (or, alternatively, the use of a sliding switch) and is based on the Arduino UNO platform.

## System Specifications

**a) LEDs and Distribution:**
The system is equipped with 6 LEDs distributed in even and odd positions. Resistors have been used to reduce electrical current.

**b) Functionality Control:**
- A push button (or sliding switch) is responsible for changing the system's functionalities.
  1. **1st Functionality:** All LEDs flash every 1 second, alternating between active and inactive states.
  2. **2nd Functionality:** Even and odd LEDs are activated sequentially, alternating between them at a speed of 1 second.

**c) System Initialization:**
The system routine starts automatically when the circuit is powered.

## Installation Guide

1. **Hardware Requirements:**
   - Arduino UNO
   - 6 LEDs
   - Resistor for current control
   - Push button or sliding switch
   - Additional electrical components as needed

2. **Assembly Instructions:**
   - Connect the LEDs in even and odd positions.
   - Install the push button or sliding switch as preferred.
   - Ensure you follow the instructions to connect the Arduino UNO and other electrical components.

3. **Source Code:**
   - The program's source code is available in the `codigo_fonte.ino` file.

4. **Operation:**
   - Power the circuit to initiate the system routine.
   - Use the push button or sliding switch to switch between functionalities.

## Contributions
Contributions are welcome! Feel free to suggest improvements, report issues, or contribute to the development of this project.

## License
This project is licensed under the terms of the [MIT License](LICENSE). Refer to the LICENSE file for more details.
