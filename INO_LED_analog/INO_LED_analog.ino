//Nem mindegyik pin képes analógként viselkedni, csak azok melyek előtt '~' jel van. 
int yellowPin = 11;
int brightness = 110;
/*
Az analóg értékmegadási skála 0-tól 255-ig megy.
0= 0V;
255=5V;
Ezen végpontok között van a V érték eloszlatva
*/
void setup() {
  pinMode(yellowPin,OUTPUT);
}

void loop() {
analogWrite(yellowPin,brightness);
}
