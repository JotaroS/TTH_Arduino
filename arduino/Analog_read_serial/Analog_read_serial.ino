//Analogピンの値をシリアルモニタに出力するプログラム

int analogPin = 0;
int analogValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read A0 value
  analogValue = analogRead(analogPin);

  //print out analogValue(cmd + shift + M to open Serial Monitor)
  Serial.println(analogValue);

  //wait 50ms
  delay(50);
}
