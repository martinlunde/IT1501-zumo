#include <ZumoMotors.h>
#include <Pushbutton.h>

ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);
const int MAX_SPEED = 400;

void setup() {
 button.waitForButton();

 motors.setSpeeds(100,100);
 delay(1000);
 motors.setSpeeds(1,0);
} 

void loop() { 
}
