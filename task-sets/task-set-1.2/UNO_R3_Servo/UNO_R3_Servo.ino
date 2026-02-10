#include <Servo.h>

Servo myservo;

int val=0;
int step = -1;
void setup() {
  myservo.attach(9);
}

void loop() {
  if (val==180||val==0) {
    step = -(step);
  }
  val += step;
  myservo.write(val);
  delay(15);
}