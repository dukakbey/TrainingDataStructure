//this is slave

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0,1);

int state = 0;
//const int led = 8;
const int button = 2;
int buttonstate = 1;

void setup() 
{
  BTSerial.begin(38400);
  //pinMode(led, OUTPUT);
  //digitalWrite(led, LOW);
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
}
void loop() 
{
 if(BTSerial.available() > 0)
 { 
    // Checks whether data is comming from the serial port
     BTSerial.write("8");
    state = BTSerial.read(); // Reads the data from the serial port
 }
 
 // Reading the button
 buttonstate = digitalRead(button);
 if (buttonstate == LOW) 
 {
   BTSerial.write('1'); // Sends '1' to the master to turn on LED
   Serial.print("1 written");
 }
 else
 {
   BTSerial.write('0');
   Serial.println("0 written");
 }  

  delay(1000);
}
