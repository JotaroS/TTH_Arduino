//Groveスターターキット リレー駆動プログラム

int relayPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin,HIGH);
  delay(500);
  digitalWrite(relayPin,LOW);
  delay(500);
}
