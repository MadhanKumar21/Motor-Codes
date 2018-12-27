#include <motor.h>

motordirection motor;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
motor.forward(125);
delay(2000);
motor.backward(255);
delay(2000);
motor.left(125);
delay(2000);
motor.right(125);
delay(2000);
motor.stop();
delay(5000);
}
