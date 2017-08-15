
const int buzzer = 10;

char data ;                
void setup() 
{
  Serial.begin(9600);         
   pinMode(11,OUTPUT); //pin2 of driver motor1 left
   pinMode(12,OUTPUT); //pin7 of driver motor1 left
    pinMode(8,OUTPUT); // pin 15 of driver of motor 2 right
    pinMode(9,OUTPUT); //pin 10 of driver of motor 2 right
     pinMode(buzzer,OUTPUT);
    pinMode(13,OUTPUT);
   
}
void loop()
{
     data = Serial.read();      
       
   
 if (data == 'u')
 {
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);

 
  } 
  if (data == 'd')
  {
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);

   
    }
  if (data == 'l')
  {
  digitalWrite(9,HIGH);
digitalWrite(8,LOW);  
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
    }
  if (data == 'r' )
{
    digitalWrite(11,HIGH);
digitalWrite(12,LOW);
    digitalWrite(9,LOW);
digitalWrite(8,HIGH);
}
if(data == 's')
  {
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    }
  
 if (data == '1')
  {
    digitalWrite(13,HIGH);
  }
  if (data == '0')
  {
    digitalWrite(13,LOW);
    }
  if (data == 'b')
  {
   tone(buzzer,1000);
    }
  if (data == 'f')
  {
   noTone(buzzer);
    }
  }                            
  
