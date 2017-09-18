
const int buzzer = 10;

char data = 0 ;                
   void forward()
     {
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
    
      }
      void backward()
      {
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        
        }
   void backleft()
   {
    digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
     
    delay(100);
    digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
    }
    void backright()
    {
  digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        delay(100);
 digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
    
     
        }
    
      void upleft()
      {
       digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
        delay(100);
       digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
        
        
        
        }
      void upright()
      {
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        delay(100);
        digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
       
        }
      void stopcar()
      {
          digitalWrite(8,HIGH);
          digitalWrite(9,HIGH);
          digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      }
void setup() 
    
{
  Serial.begin(9600);         
   
    pinMode(8,OUTPUT); //pin2 of driveric and  1 input of motor 1
    pinMode(9,OUTPUT); //pin7 of driveric  and  2 input of motor 1
   pinMode(11,OUTPUT); //pin15 of driveric and  1 input of motor 2
   pinMode(12,OUTPUT); //pin10 of driveric and  2 input of motor 2
     pinMode(buzzer,OUTPUT);
    pinMode(13,OUTPUT);

  
}
void loop()
{
    
     
      if(Serial.available() > 0)  
      {
     data = Serial.read();    
     Serial.print(data);        
    Serial.print("\n");        
       
   
 if (data == '1')
 {
Serial.print("forward");

 forward();
 
  } 
  if (data == '2')
  {
    Serial.print("backward");
backward();

   
    }
  if (data == '3')
  {
    Serial.print("upleft");
 upleft();
    }
  if (data == '4' )
{
   Serial.print("upright");
   upright();
   
}
if(data == '5')
  {
    Serial.print("stop");
    stopcar();
    
    }
  
 if (data == '6')
  {
    digitalWrite(13,HIGH);
  }
  if (data == '7')
  {
    digitalWrite(13,LOW);
    }
  if (data == '8')
  {
   tone(buzzer,1000);
    }
  if (data == '9')
  {
   noTone(buzzer);
    }
 delay(100);
  }                            

/* if (data == '10')
 *  {
 *  backleft();
 *  }
 if (data == '11')
 {
 backright();
 }
 
 */

else
{
  return;
  }

}

