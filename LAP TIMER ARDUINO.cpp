double i = 0;
double a = millis();
double c ;
int lap = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}


void loop()
{
  delay(10);
  if(digitalRead(2) == LOW)
   {
   c = millis();
   i = (c - a) / 1000;
   if(i > 1)
    { 
      lap++;
      Serial.print("vuelta: ");
      Serial.print(lap);
      Serial.print("\t\t");
      Serial.println(i);
      a = millis();
    }
  }   
}
