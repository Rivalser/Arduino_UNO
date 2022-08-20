int myVoltPin=A3;
int pinRed = 13;
int readVal;
float V2;
int delayT = 500;
void setup() {
  Serial.begin(9600);
  pinMode(myVoltPin,INPUT);
  pinMode(pinRed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myVoltPin);
V2= 5./1023.*readVal;
Serial.println(V2);
if(V2>4.00){
  digitalWrite(pinRed,HIGH);
}else{
  digitalWrite(pinRed,LOW);
}
delay(delayT);
}
