#include <Adafruit_LEDBackpack.h>

  

 int on=500;
int off=500;
int red=1;
int yeloo=5;
int green=9;
  
void setup()
  
{  
 pinMode(red,OUTPUT);
 pinMode(yeloo,OUTPUT); 
 pinMode(green,OUTPUT); 
   
 digitalWrite(red,HIGH);
 delay(on); 
 digitalWrite(yeloo,HIGH);
 delay(off);
 digitalWrite(yeloo,LOW);
 delay(on);
 digitalWrite(yeloo,HIGH);
 delay(off);
 digitalWrite(yeloo,LOW);
 delay(on);
 digitalWrite(yeloo,HIGH);
 delay(off);
 digitalWrite(yeloo,LOW);
 delay(on);
 digitalWrite(red,LOW); 
 digitalWrite(green,HIGH); 
 delay(off);
  digitalWrite(green,LOW); 
  
}

void loop(){

  


}   