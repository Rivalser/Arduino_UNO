/*
A0-A5: Analog in az analog adatok olvasására van
*/

int readPin=A3;
float V2 = 0;
int aktVal;
int delayTime  =300;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {

aktVal = analogRead(readPin);
V2 = (5./1023.)*aktVal;
Serial.println(V2);
delay(delayTime);
}
