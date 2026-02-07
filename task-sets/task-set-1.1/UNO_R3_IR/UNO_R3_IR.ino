const int inputPin = A0; // Pin connected to the IR receiver
void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}
void loop() {
  int sensorValue = analogRead(inputPin); // Read the value from the IR receiver
  Serial.println(sensorValue); // Print the value to the serial monitor
  delay(100); // Delay for a short period before the next reading
}
