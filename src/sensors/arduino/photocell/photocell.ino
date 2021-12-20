//www.elegoo.com
//2016.12.9

const int ReadPin = 0; 

void setup() 
{
Serial.begin(9600);
}

void loop() 
{

}

int value_update(){
  int reading  = analogRead(ReadPin);
  return reading; 
  }
