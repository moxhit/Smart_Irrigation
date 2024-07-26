# Smart Irrigation System with Arduino Uno

This project uses an Arduino Uno to create a smart irrigation system. The system monitors soil moisture levels and controls a water pump accordingly. Additionally, it provides visual and auditory feedback using LEDs and a buzzer.

## Components Used

- Arduino Uno
- Soil Moisture Sensor
- Relay Module
- Buzzer
- Green LED
- Red LED
- Jumper Wires
- Breadboard

## Circuit Diagram

![Circuit Diagram](path_to_circuit_diagram_image)

## Connections

### Soil Moisture Sensor
- VCC to 5V
- GND to GND
- Analog output to A0

### Relay Module
- IN to Digital Pin 5
- VCC to 5V
- GND to GND

### Buzzer
- Positive to Digital Pin 4
- Negative to GND

### LEDs
- Green LED anode to Digital Pin 14 (with appropriate resistor)
- Red LED anode to Digital Pin 12 (with appropriate resistor)
- Both cathodes to GND

## Code

The code for this project can be found in the [GitHub repository](https://github.com/yourusername/Arduino-Smart-Irrigation).

## Installation

1. Clone this repository.
    ```sh
    git clone https://github.com/yourusername/Arduino-Smart-Irrigation.git
    ```
2. Open the project in the Arduino IDE.
3. Connect your Arduino Uno and upload the code.

## Usage

1. Assemble the circuit as per the connection diagram.
2. Upload the code to your Arduino Uno.
3. Monitor the Serial output to see the moisture levels and the status of the pump.
4. The system will automatically water the plants when the soil is dry and stop when the soil is sufficiently moist.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
