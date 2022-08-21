int analogIn = A3;
int bluePin = 13;
int givenVal;
int dT = 400;
void setup() {
Serial.begin(9600);
pinMode(bluePin,INPUT);
}

void loop() {
  givenVal = analogRead(analogIn);
  Serial.println(givenVal);
  delay(dT);
  while(givenVal>=1000){
    digitalWrite(bluePin,HIGH);
    givenVal=analogRead(analogIn);
    Serial.println(givenVal);
    delay(dT);
  }
  digitalWrite(bluePin,LOW);
}
