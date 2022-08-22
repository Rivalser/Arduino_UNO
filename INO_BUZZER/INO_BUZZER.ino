int buzzPin = 13;
int analogPin = A3;
int potVal;
float toneLevel;
void setup() {
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
pinMode(analogPin,INPUT);
}

void loop() {
  potVal = analogRead(analogPin);
  toneLevel = 9940./1023.*potVal+60;
  Serial.println(toneLevel);
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneLevel);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneLevel);
}
