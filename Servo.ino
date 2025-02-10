#include <Servo.h>

Servo myServo;
void setup()
{
    myServo.attach(9);
}

void loop()
{
    for (int pos = 0; pos <= 180; pos += 10)
    {
        myServo.write(pos);
        delay(500);
    }
    for (int pos = 180; pos >= 0; pos -= 10)
    {
        myServo.write(pos);
        delay(500);
    }
}