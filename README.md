# Smart Irrigation System with ESP32

This project uses an ESP32 to create a smart irrigation system. The system monitors soil moisture levels and controls a water pump accordingly. Additionally, it provides visual and auditory feedback using LEDs and a buzzer.

## Components Used

- ESP32 Development Board
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
- VCC to 3.3V
- GND to GND
- Analog output to A0

### Relay Module
- IN to GPIO 5
- VCC to 3.3V
- GND to GND

### Buzzer
- Positive to GPIO 4
- Negative to GND

### LEDs
- Green LED anode to GPIO 14 (with appropriate resistor)
- Red LED anode to GPIO 12 (with appropriate resistor)
- Both cathodes to GND

## Code

The code for this project can be found in the [GitHub repository](https://github.com/yourusername/ESP32-Smart-Irrigation).

## Installation

1. Clone this repository.
    ```sh
    git clone https://github.com/yourusername/ESP32-Smart-Irrigation.git
    ```
2. Open the project in your preferred Arduino IDE or PlatformIO.
3. Connect your ESP32 and upload the code.

## Usage

1. Assemble the circuit as per the connection diagram.
2. Upload the code to your ESP32.
3. Monitor the Serial output to see the moisture levels and the status of the pump.
4. The system will automatically water the plants when the soil is dry and stop when the soil is sufficiently moist.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
