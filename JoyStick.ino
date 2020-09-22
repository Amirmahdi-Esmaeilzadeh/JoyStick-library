#include "JoyStick.h"
JoyStick js(1);
void setup() {
  // put your setup code here, to run once:
  js.begin(9600);
  js.pin(1,2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
