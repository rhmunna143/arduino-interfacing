const int gasPin = A0;
const int ledPin = 8;
const int threshold = 150;
void setup()
{
    Serial.begin(9600);      // Serial Monitor
    pinMode(ledPin, OUTPUT); // LED
    Serial.println("Wait For Sensor Heating");
    delay(5000);
}

void loop()
{
    int gasValue = analogRead(gasPin);
    Serial.print("Gas Level: ");
    Serial.println(gasValue);

    if (gasValue > threshold)
    {
        digitalWrite(ledPin, HIGH);
        Serial.println("LED ON - Gas Pressure High");
    }
    else
    {
        digitalWrite(ledPin, LOW); // LED বন্ধ
        Serial.println("Safe. LED OFF");
    }

    delay(500);
}