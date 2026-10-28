/*
  00_HelloRobot
  A tiny "is everything working?" sketch for the Pololu 3pi+ 32U4.

  What it does:
    1. Beeps and shows a message on the display at start-up.
    2. When you press button A, the wheels twitch forward and back briefly.

  NOTE: written for the Pololu3piPlus32U4 library. If your robot has the
  older character LCD rather than the OLED, change "OLED display;" to the
  display type used in the library's own examples (see File > Examples >
  Pololu3piPlus32U4). Please test on one robot before the session.
*/

#include <Pololu3piPlus32U4.h>

using namespace Pololu3piPlus32U4;

OLED display;
Buzzer buzzer;
Motors motors;
ButtonA buttonA;

void setup()
{
  display.clear();
  display.print(F("Hello!"));
  display.gotoXY(0, 1);
  display.print(F("Press A"));

  buzzer.play("c32");   // a short beep
}

void loop()
{
  if (buttonA.getSingleDebouncedPress())
  {
    display.clear();
    display.print(F("Wheels!"));

    motors.setSpeeds(100, 100);     // gently forward
    delay(300);
    motors.setSpeeds(-100, -100);   // gently back
    delay(300);
    motors.setSpeeds(0, 0);         // stop

    display.clear();
    display.print(F("Works :)"));
    buzzer.play("c32e32g32");
  }
}
