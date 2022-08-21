int redPin = 13;
int greenPin = 12;
int bluePin = 11;
String allBe = "Állítsd be a kívánt LED színt!";
int R;
int G;
int B;
void setup() {
 
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println(allBe);
Serial.print("R: ");
while(Serial.available()==0){
}
R = Serial.parseInt();
Serial.println(R);
Serial.print("G: ");
while(Serial.available()==0){
}
G = Serial.parseInt();
Serial.println(G);
Serial.print("B: ");
while(Serial.available()==0){
}
B = Serial.parseInt();
Serial.println(B);

  analogWrite(redPin,R);
  analogWrite(greenPin,G);
  analogWrite(bluePin,B);

}
