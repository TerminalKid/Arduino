#include <Servo.h>


Servo servo;


int servoMotor = 7;
int photoResistor = A0; 




void setup() {

  
   servo.attach(servoMotor);
   servo.write(0);


   pinMode(photoResistor, INPUT);
  
   Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {

    
   int dataCollected = analogRead(photoResistor);


   Serial.println("LIGHT DATA:");
   Serial.println(dataCollected);


   delay(1000);

    




  // put your main code here, to run repeatedly:

}
