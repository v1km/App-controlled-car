#include <Servo.h>
Servo left;//Define left servo
Servo right;//Define right servo
byte val;



void setup()
{
  Serial.begin(115200);
  left.attach(9, 800, 2200); //left servo on digital pin 9 of arduino
  right.attach(10, 800, 2200); //right servo on digital pin 10 of arduino
  
}

void loop()
{
 int a=0;
 if(Serial.available())
  {
    val=Serial.read();
    Serial.println(int(val));

if(int(val)==49)//Move front
{
  right.write(180);//Rotates servo clockwise
  left.write(0);//Rotates servo anticlockwise
}

if(int(val)==50)//Move back
{
  right.write(0);
  left.write(180);
}

if(int(val)==53)//Stop
{
  right.write(90);//Stops the servos
  left.write(90);//Stops the servos
}

if(int(val)==51)//left
{
  right.write(180);
  left.write(90);
}

if(int(val)==52)//right
{
  right.write(90);
  left.write(0);
}


if(int(val)==55)//Extra button
{
  //Enter your code for any extra commands
}

}
}




