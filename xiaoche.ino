void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}


int income;
void loop()
{
  if(Serial.available()>0){
    income=Serial.read();
  }
  switch(income){
    case 'F':FORWARD();break;
    case 'B':BACKWARD();break; 
    case 'L':LEFT();break;
    case 'R':RIGHT();break;
    case 'S':STOP();break;
  }
}

void  FORWARD()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void  BACKWARD()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}
void  left()
{
   digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void RIGHT()
{
   digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void STOP()
{
   digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
