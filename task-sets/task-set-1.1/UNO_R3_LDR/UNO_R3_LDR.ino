const int LDR_PIN = A0; // Pin connected to the LDR

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(LDR_PIN, INPUT); // Set LDR pin as input


}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrValue = analogRead(LDR_PIN); // Read the value from the LDR
  Serial.print("LDR Value: "); // Print
  Serial.println(ldrValue); // the LDR value to the Serial Monitor
  delay(1000); // Wait for 1 second before the next reading

}
