

void setup()
{

pinMode(2,OUTPUT);
pinMode(15,INPUT);
}

void loop() 
{

if(digitalRead(15)==LOW)
{
  
 digitalWrite(2,HIGH);

}
else
{
  digitalWrite(2,LOW);

}
}
