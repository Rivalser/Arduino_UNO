int myVoltPin=A3;
int readVal;
float V2;
int delayT = 500;
void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myVoltPin);
V2= 5./1023.*readVal;
Serial.println(V2);
delay(delayT);
}
