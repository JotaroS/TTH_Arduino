//Groove Starter Kit ブザーテストCode
//Jotaro Shigeyama 2016

/*
 * ブザー(Buzzer)をGrooveシールドのD2コネクタと接続．
 * ブザーのSIGとD2コネクタの「D2」ピンと一致していることを確認すること．
 * 結構うるさいので注意．
 */


//ブザーピンはD2
int buzzerPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);  //2番ピンを出力設定とする．pinMode(2,OUTPUT)でも良いが，上のように設定しておいたほうが，ピンを入れ替えたりするときに便利．
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(buzzerPin,HIGH); //つけて
  delay(1000);                  //一秒待つ
  digitalWrite(buzzerPin,LOW);  //けして
  delay(1000);                  //一秒待つ
  
}
