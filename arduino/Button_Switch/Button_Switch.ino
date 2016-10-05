//Grove Starter Kit スイッチ・タッチセンサのサンプルプログラム

//スイッチの部品をD2コネクタに接続。スイッチの信号はD2ピンに接続されます
int buttonPin = 2;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  // D2ピンをデジタル入力として使用
  pinMode(buttonPin,INPUT);
  // LEDピンをデジタル出力として使用
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin))
    digitalWrite(ledPin,HIGH); 
  else
    digitalWrite(ledPin,LOW);
}
