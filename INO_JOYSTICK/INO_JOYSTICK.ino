int pinX = A0;
int pinY = A1;
int pinS = 2;
int valX;
int valY;
int valS;
int dT = 200;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinX,INPUT);
  pinMode(pinY,INPUT);
  pinMode(pinS,INPUT);
  digitalWrite(pinS,HIGH);
}

void loop() {
  valX = analogRead(pinX);
  valY = analogRead(pinY);
  valS = digitalRead(pinS);
  delay(dT);
  Serial.print("X value = " );
  Serial.print(valX);
  Serial.print(" Y value = " );
  Serial.print(valY);
  Serial.print(" Switch state is: ");
  Serial.println(valS);
}
