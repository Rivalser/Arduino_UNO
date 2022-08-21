String msg = "Hányszor villogjon a LED?";
int redPin= 13;
int myNum;
int dT = 300;
void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){
  }//Ezzel tudjuk megakadályozni a "végelenig menő kiírást".
  myNum = Serial.parseInt();
  for(int i = 0;i<myNum;i++){
    digitalWrite(redPin,HIGH);
    delay(dT);
    digitalWrite(redPin,LOW);
    delay(dT);
  }
}
