int redPin=13;
int yellowPin=12;
int bluePin = 8;
int delayT = 450;
int i;
void setup() {
pinMode(redPin,OUTPUT);  
pinMode(yellowPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {

for(i = 0; i<5; i++){
  if(i<=2){
    digitalWrite(bluePin,HIGH);
  }else{
    digitalWrite(bluePin,LOW);
  }
  digitalWrite(redPin,HIGH);
  delay(delayT);
  digitalWrite(redPin,LOW);
  delay(delayT);
  
    for(int j = 0; j<2; j++){
       digitalWrite(yellowPin,HIGH);
       delay(delayT);
       digitalWrite(yellowPin,LOW);
       delay(delayT);
    }

}

}
