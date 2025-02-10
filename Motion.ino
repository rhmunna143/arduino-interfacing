int pirPin = 7;
int buzzerPin = 10;

void setup()
{
    pinMode(pirPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int motion = digitalRead(pirPin);
    if (motion == HIGH)
    {
        Serial.println("Motion Detected!");
        digitalWrite(buzzerPin, HIGH);
    }
    else
    {
        digitalWrite(buzzerPin, LOW);
    }
    delay(500);
}
