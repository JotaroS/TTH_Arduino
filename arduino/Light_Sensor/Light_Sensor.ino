//Groove Starter Kit 光センサーテストCode
//Jotaro Shigeyama 2016

/*
 * 光センサー(Light Sensor)をGrooveシールドのA0コネクタと接続．
 * センサーのSIGとA0コネクタの「A0」ピンと一致していることを確認すること．
 */

//この変数にセンサの値が格納されます．
int sensorvalue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      // シリアルポートを9500BPSで開く．ツール→シリアルモニタのボーレートが9500と一致していることを確認する
}

void loop() {
  // put your main code here, to run repeatedly:

  //A0ピンのセンサの値を読み取る．入力電圧の0-5[V]　が intの 0 - 1023 に変換される．
  sensorvalue = analogRead(A0);
  Serial.println(sensorvalue);
}
