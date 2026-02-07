const int ledPin = 13;
const int buttonPin = 2;
int ledState = HIGH;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin)==LOW) {
    ledState = !ledState;
    digitalWrite(ledPin,ledState);
    
    while (digitalRead(buttonPin)==LOW) {
      delay(30);
    }
  }
  
}
