const int soundPin = A0;  
const int ledPin = 8;     
const int threshold = 500; 

void setup() {
  Serial.begin(9600);      
  pinMode(ledPin, OUTPUT); 
  Serial.println("Sound Sensor ON");
}

void loop() {
  int soundValue = analogRead(soundPin);
  Serial.print("Sound Level: ");
  Serial.println(soundValue);

  if (soundValue > threshold) {  // Proper if statement
    digitalWrite(ledPin, HIGH);
    Serial.println("Sound captured! LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No sound! LED OFF");
  }

  delay(500);
}