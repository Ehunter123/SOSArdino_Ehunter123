#include <Servo.h> 

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
	myServo.attach(11); 
	myServo.write(90);
}


void blinkOnce(int time){ 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time);
}

void loop() {
  blinkOnce(1000); 


  
}
#include <Servo.h> 

Servo myServo;

void blinkOnce(int time){ 
  digitalWrite(LED_BUILTIN, HIGH);
  myServo.write(70);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  myServo.write(90);
  delay(time);
}

void loop() {
  pose1();
  delay(500);
  pose2();
  delay(500);
  pose3();
  delay(500);
  pose4();
  delay(500);
}

void runSOS(){
blinkOnce(700);
blinkOnce(700);
blinkOnce(700);

blinkOnce(300);
blinkOnce(300);
blinkOnce(300);

blinkOnce(700);
blinkOnce(700);
blinkOnce(700);
}

Servo leftLeg;
Servo leftFoot;
Servo rightLeg; 
Servo rightFoot;

int llCenter = 90;
int lfCenter = 90;
int rlCenter = 90;
int rfCenter = 90;

void setup(){ 
  // Left
  leftLeg.attach(2,1000,2000);
  leftLeg.write(llCenter);
  leftFoot.attach(4,1000,2000);
  leftFoot.write(lfCenter);
  // Right
  rightLeg.attach(3,1000,2000);
  rightLeg.write(rlCenter);
  rightFoot.attach(5,1000,2000);
  rightFoot.write(rfCenter);

  pinMode(LED_BUILTIN, OUTPUT);
	myServo.attach(11,1000,2000); 
	myServo.write(90);
}
void pose1(){
  leftLeg.write(llCenter);
  leftFoot.write(lfCenter);
  rightLeg.write(rlCenter);
  rightFoot.write(rfCenter);
}
  void pose2(){
  leftLeg.write(llCenter+30);
  leftFoot.write(lfCenter+55);
  rightLeg.write(rlCenter+30);
  rightFoot.write(rfCenter+55);
}
  void pose3(){
  leftLeg.write(llCenter+30);
  leftFoot.write(lfCenter+55);
  rightLeg.write(rlCenter+30);
  rightFoot.write(rfCenter+55);
}
 void pose4(){
  leftLeg.write(llCenter+30);
  leftFoot.write(lfCenter+55);
  rightLeg.write(rlCenter+30);
  rightFoot.write(rfCenter+55);
}
