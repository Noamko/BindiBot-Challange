#include <Servo.h>

Servo servo;
void setup() {

servo.attach(3);
pinMode(3, OUTPUT);


}

void loop()
{
  servo.writeMicroseconds(800);
  delay(2000);
  servo.writeMicroseconds(2000);  
}