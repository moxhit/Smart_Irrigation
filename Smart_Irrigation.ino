// code for smart irrigation based on moisture level of soil
const int moistureSensorPin = A0;
const int relayPin = 5;
const int buzzerPin = 4;
const int greenLEDPin = 14; // Pin A0
const int redLEDPin = 12;

// Threshold for soil moisture
const int moistureThreshold = 500; // Adjust based on your sensor's calibration

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Set pin modes
  pinMode(moistureSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);

  // Initial state of the pump, LEDs, and buzzer
  digitalWrite(relayPin, LOW);
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(redLEDPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read the moisture level
  int moistureLevel = analogRead(moistureSensorPin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  // Check if the soil is dry
  if (moistureLevel < moistureThreshold) {
    // Soil is dry, activate the pump
    digitalWrite(relayPin, HIGH);
    digitalWrite(greenLEDPin, HIGH);
    digitalWrite(redLEDPin, LOW);
    digitalWrite(buzzerPin, LOW);
    Serial.println("Pump activated, watering the plants...");
  } else {
    // Soil is wet, deactivate the pump
    digitalWrite(relayPin, LOW);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Soil is wet, pump deactivated.");
  }

  // Wait for 10 seconds before the next reading
  delay(10000);
}
