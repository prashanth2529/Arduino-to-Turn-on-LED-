//Created By Prashanth.S 
//Date: 27/3/2018
// The Hardware used is Arduino Uno where the pin no 5 is connected to an 
// an LED through a 220ohm or 100 ohm resistor.

const int ledpin=5;        // Pin 5 of Arduino  is connected to LED through Resistor
void setup()               // Set up function for setting the Output pin
{
   Serial.begin(9600);
   pinMode(ledpin,OUTPUT);  // Describes the ledpin is an Output 
  
}
void loop()                    // Loop Function for Keep repeating 
{
    digitalWrite(ledpin,HIGH);   // Turn On the LED 
    delay(1000);                 // 1 sec delay 
    digitalWrite(ledpin,LOW);    // Turn off the LED 
    delay(1000);                 // 1 Sec Delay
}
