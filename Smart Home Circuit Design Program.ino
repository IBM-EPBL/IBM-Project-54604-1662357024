// C++ code
//
int trig =4;
int echo =3;
int piezo =6;
int temp = 0;
void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(6,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop()
  {
  digitalWrite(trig,LOW);
  digitalWrite(trig,HIGH);
  delayMicroseconds(15);
  digitalWrite(trig,LOW);
  float dur =pulseIn(echo,HIGH);
  float dist = (dur*0.0343/2);
  Serial.print("distance");
  Serial.println('dist');
  if(dist >=100)
  {               
  digitalWrite(6,HIGH);
    
  }
  else
  {  
  digitalWrite(6,LOW);
    
  }
{
  temp = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40,125);
  Serial.println(temp);
  if(temp < 25)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(10,LOW);
  }
  if(temp > 25 && temp < 50)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(10,LOW);
  }
  if (temp > 50 && temp < 125)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(10,HIGH);
  }
  delay(10);
 }
 
}
                                
    
                 
      
                   
                   
                 
                 

  