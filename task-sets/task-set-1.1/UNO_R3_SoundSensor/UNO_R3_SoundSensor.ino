const int ledPin = 13; // Pin connected to the LED
const int analogSoundPin = A0; // Pin connected to the sound sensor
const int digitalSoundPin = 2; // Pin connected to the digital output of the sound sensor

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(analogSoundPin, INPUT);
  pinMode(digitalSoundPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(analogSoundPin);
  int digitalValue = digitalRead(digitalSoundPin);

  if (digitalValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(2000);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
