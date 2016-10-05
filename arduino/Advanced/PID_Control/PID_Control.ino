//PID制御のプログラム(途中)

int analogPin = 0;
int analogValue = 0;

int motor_1 = 3;
int motor_2 = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor_1, OUTPUT);
  pinMode(motor_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read A0 value
  analogValue = analogRead(analogPin);

  if(analogValue>100)motor_pwm_output(constrain(100-analogValue,-256,256));
  else motor_output(0);
  
}

void motor_output(int mode) {
  switch (mode) {
    //正転
    case 0:
      digitalWrite(motor_1, HIGH);
      digitalWrite(motor_2, LOW);
      break;
    //逆転
    case 1:
      digitalWrite(motor_2, HIGH);
      digitalWrite(motor_1, LOW);
      break;
    //Brake
    case 2:
      digitalWrite(motor_1, HIGH);
      digitalWrite(motor_2, HIGH);
      break;
    //例外
    default:
      break;
  }
}

//pwm output
void motor_pwm_output(int value) {
  if(value >= 0){
      analogWrite(motor_1, value);
      digitalWrite(motor_2, LOW);
  }
  else{
      analogWrite(motor_2, value-1);
      digitalWrite(motor_1, LOW);
  }

}

