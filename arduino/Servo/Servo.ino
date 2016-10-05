//サーボ駆動プログラム
#include <Servo.h>

Servo myservo;  // サーボオブジェクトを宣言

int pos = 0;    // サーボの角度（degree単位

void setup() {
  myservo.attach(3);  // 3ピンをサーボのシグナルに用いる
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                      
  }
}

