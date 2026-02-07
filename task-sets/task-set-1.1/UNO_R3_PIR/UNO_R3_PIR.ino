int pirPin = 2; // PIR Output Pin
int ledPin = 13; // Built-in LED

int val = 0;
bool motion = false;
int calibrationTime = 20;

void setup() {                
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  //give the sensor some time to calibrate
  Serial.print("Calibrating");
  for (int i = 0; i < calibrationTime; i++) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("\nCalibration done");
  delay(50);
}
void loop() {
  int val = digitalRead(pirPin);

  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
    delay(500);   
  } else {
    digitalWrite(ledPin, LOW);
  }
}
