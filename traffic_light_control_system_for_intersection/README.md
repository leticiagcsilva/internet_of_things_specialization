# Traffic Light Control System for Intersection

## Overview

A road intersection features two traffic lights controlling traffic flow in a single direction, as illustrated in the accompanying image. This project involves the development of both a circuit and a control algorithm for the lights (LEDs) using an Arduino. The control sequence is based on the specified timings and colors outlined in the table below. The routine is initiated upon powering the circuit and repeats indefinitely.

## Traffic Light Control Table

| Fase | Tempo (s) | Semáforo 1 | Semáforo 2 |
|------|-----------|------------|------------|
| 1    | 8         | Verde      | Vermelho   |
| 2    | 3         | Amarelo    | Vermelho   |
| 3    | 2         | Vermelho   | Vermelho   |
| 4    | 8         | Vermelho   | Verde      |
| 5    | 3         | Vermelho   | Amarelo    |
| 6    | 2         | Vermelho   | Vermelho   |

## Circuit and Algorithm

To implement this traffic light control system, a corresponding circuit and algorithm are necessary. The Arduino platform will be utilized for seamless control and synchronization of the traffic lights.

## Usage

1. **Hardware Setup:**
   - Assemble the circuit as per the provided schematic.
   - Ensure all components are properly connected to the Arduino board.

2. **Upload Code:**
   - Upload the provided Arduino code (`traffic_light_control.ino`) to the Arduino board.

3. **Energize the Circuit:**
   - Power up the circuit to initiate the traffic light control routine.

## Contributions

Contributions to enhance the circuit design, algorithm, or overall functionality are welcome. Feel free to submit issues, propose improvements, or contribute directly to the project.

## License

This project is licensed under the terms of the [MIT License](LICENSE). Refer to the LICENSE file for more details.