int redLED = 11;
int greenLED = 10;
int blueLED = 9;

void setup(){
  
  pinMode(redLED, 11);
  pinMode(greenLED, 10);
  pinMode(blueLED, 9);
}

void loop(){
  analogWrite(redLED, 255);
  delay(500);
  analogWrite(redLED, 100);
  delay(500);
  analogWrite(redLED, 0);
  delay(500);
  analogWrite(greenLED, 255);
  delay(500);
  analogWrite(greenLED, 100); 
  delay(500);
  analogWrite(greenLED, 0); 
  delay(500);
  analogWrite(blueLED, 255);
  delay(500);
  analogWrite(blueLED, 100);
  delay(500);
  analogWrite(blueLED, 0);
  delay(500);

}
