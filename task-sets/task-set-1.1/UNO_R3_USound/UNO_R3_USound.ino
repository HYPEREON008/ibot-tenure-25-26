
const int trigPin = 9; // Pin connected to the trigger of the ultrasonic sensor
const int echoPin = 10; // Pin connected to the echo of the ultrasonic sensor

float readDistance() {
  // send 10us pulse
  digitalWrite(trigPin, LOW); //start with trigger off
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //keep trigger pin on for 10us initiates the distance measuement process
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH, 30000UL); //the echo pin is set to HIGH it then waits for the echo of the light wave and when it receives it the pin is set back to LOW
  //the duration for which it was HIGH is measured with pulseIn (30ms timeout in case no echo received)
  if (duration == 0) {
    return -1; //invalid
  }
  return duration/58.3; //distance in cm(from speed of light)
  //since the speed of sound is approximately 343 m/s, which is 29.15 microseconds per centimeter for the round trip
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(trigPin, OUTPUT); // Set the trigger pin as output
  pinMode(echoPin, INPUT); // Set the echo pin as input


}

void loop() {
  // put your main code here, to run repeatedly:
  float distance = readDistance(); // Read the distance from the ultrasonic sensor
  if (distance < 0) {
    Serial.println("Invalid reading"); // Print an error message if the reading is invalid
  } else {
    Serial.print("Distance: "); // Print the distance to the Serial Monitor
    Serial.print(distance);
    Serial.println(" cm"); // Print the unit of measurement
  }

}
