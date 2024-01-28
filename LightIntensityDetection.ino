#include <Servo.h>  // This makes it possible for us to use already existing code someone has wrote to control a servo motor


Servo servo;  // Read on objects and classes 


int servoMotorPin = 7;  // define a a variable(varible here is servoMotor of type int) that holds a pin number(it's value is 7) on the arduino which is digital
int photoResistorPin = A0; // The A infront indicates it's analog 




void setup() { // Function to set up the arduino

  
   servo.attach(servoMotorPin); // tells the arduino which pin to control the motor with
   servo.write(0); // sets the motor to an initial angle value of 0


   pinMode(photoResistorPin, INPUT); // tells the arduino  photoResistorPin is for INPUT (If We use OUTPUT then the pin will be used for OUTPUT)
  
   Serial.begin(9600); // Tells the arduino what rate of data transfer to communicate with the computer

  // put your setup code here, to run once:

} // Setup function ends




void loop() { // this is where you put the actual code , loop indictates that it never stops running, it keeps on repeating

    
   int dataCollected = analogRead(photoResistor);  
  //  analogRead(pinNumber) to get INPUT from a pin, analogWrite(pinNumber) to send OUTPUT to a pin
  // for digital pins digitalWrite(pinNumber) OUTPUT,  digitalRead(pinNumber) INPUT


   Serial.println("LIGHT DATA:"); // Prints on the Terminal
   Serial.println(dataCollected);


   delay(1000); // The arduino waits for 1 sec and does nothing

    




  // put your main code here, to run repeatedly:

} // loop function ends
