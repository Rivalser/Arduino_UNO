void setup() {
pinMode(13,OUTPUT); //Csatlakozás a 13-as porthoz, ami az alapból beépített LED-é
}

void loop() {
  //végtelen ismétlés
  digitalWrite(13,HIGH); //high vagyis bekapcs vagyis 5V-t küldünk oda
  delay(100); //milisec-ben mérve késleltet
  digitalWrite(13,LOW);
  delay(900);
}
