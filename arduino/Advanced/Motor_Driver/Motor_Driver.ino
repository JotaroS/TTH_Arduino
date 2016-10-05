//Analogピンの値をシリアルモニタに出力するプログラム

int analogPin = 0;
int analogValue = 0;

int motor_1 = 2;
int motor_2 = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read A0 value
  analogValue = analogRead(analogPin);

  //print out analogValue(cmd + shift + M to open Serial Monitor)
  Serial.println(analogValue);

  //wait 50ms
  digitalWrite(motor_1,HIGH);
  digitalWrite(motor_2,LOW);
  delay(500);

  digitalWrite(motor_2,HIGH);
  digitalWrite(motor_1,LOW);
  delay(500);
}
