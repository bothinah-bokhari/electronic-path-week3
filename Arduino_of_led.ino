#define myLed 13
const int mybutton=12;
  int button=0;
boolean buttonCheck=false;
void setup()
{
  pinMode(myLed,OUTPUT);
  pinMode(mybutton,INPUT);
}
void loop()
{
delay(20);
  button=digitalRead(mybutton);
  
  if(button==HIGH && buttonCheck==false)
  {
    digitalWrite(myLed,HIGH);
    buttonCheck=true;
  }
  else if(buttonCheck==true && button==HIGH)
  {
digitalWrite(myLed,LOW);    
    buttonCheck=false;
    }
  
}
