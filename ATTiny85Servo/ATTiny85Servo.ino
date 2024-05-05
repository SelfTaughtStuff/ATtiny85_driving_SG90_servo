#include <Adafruit_SoftServo.h>
Adafruit_SoftServo myservo;
int pos = 0;
void setup() {
  myservo.attach(PB0);
}
void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    myservo.refresh();
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    myservo.refresh();
    delay(15);
  }
}
