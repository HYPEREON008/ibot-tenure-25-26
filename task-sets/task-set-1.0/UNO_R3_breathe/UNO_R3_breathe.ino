const int LED_PIN = 13;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  //long unsigned int timepassed = millis();
  int stage = millis()%1000;
  float brightness = (sin((float)stage/500 *PI)+1)*127.5;
  analogWrite(LED_PIN, brightness);
}
