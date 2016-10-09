//最も基礎的なプログラム｛Lチカ]

void setup(){
    // initialize the digital pin as an output.
    // Pin 13 has an LED connected on most Arduino boards:
    pinMode(13,      OUTPUT);
}

void loop(){
    digitalWrite(13, HIGH);   // set the LED on
    delay(1000);              // wait for a second
    digitalWrite(13, LOW);
    delay(1000);              // wait for a second
}
