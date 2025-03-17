#include <Wire.h>
#include <RTClib.h>
RTC_DS1307 rtc;

void setup()
{
    Serial.begin(9600);
    rtc.begin();
}

void loop()
{
    DateTime now = rtc.now();
    // Printing time in hh:mm:ss format
    Serial.print(now.hour());
    Serial.print(':');
    Serial.print(now.minute());
    Serial.print(':');
    Serial.println(now.second());
    delay(1000); // Update every second
}