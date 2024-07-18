#include <Servo.h>
#include <HCSR04.h>

Servo myServo;
HCSR04 sensorDistance(4 , 5);//trig e echo
float distanceRead = 0;

void setup() {
  // put your setup code here, to run once:

myServo.attach(2);
myServo.write(0);
delay(1000);
myServo.write(100);
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  distanceRead = sensorDistance.dist()/100;

  if (distanceRead < 0.50){
myServo.write(0);
  }else{
    myServo.write(180);
  }
  delay(1000);
}
myServo.write(0);
delay(1000);
myServo.write(100);
delay(180);
}
