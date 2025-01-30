const int gasPin = A0;
const int buzzerPin = 9;
const int threshold = 150;

void setup()
{
    Serial.begin(9600);
    pinMode(buzzerPin, OUTPUT);
    Serial.println("Sensor Heating, please Wait");
}

void loop()
{
    int gasValue = analogRead(gasPin);
    Serial.print("Gas Level: ");
    Serial.println(gasValue);

    if (gasValue > threshold)
    {
        digitalWrite(buzzerPin, HIGH);
        Serial.println("High Gas Level! Buzzer ON");
    }
    else
    {
        digitalWrite(buzzerPin, LOW);
        Serial.println("Safe, Buzzer OFF");
    }

    delay(1000);
}