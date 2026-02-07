
#include <DHT.h>

const int timeDelay = 2000;
const int DHT11Pin = 2;
float Humidity, Temperature;

DHT MyDHT(DHT11Pin, DHT11);

void setup() {

  Serial.begin(9600);
  MyDHT.begin();
}

void loop() {
  Humidity = MyDHT.readHumidity();
  Temperature = MyDHT.readTemperature();

  if (isnan(Humidity)||isnan(Temperature)) {
    Serial.println("Reading Failed");
  }
  else {
    Serial.print("Humidity: ");
    Serial.print(Humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(Temperature);
    Serial.println(" *C");
  }
  delay(timeDelay);
}
