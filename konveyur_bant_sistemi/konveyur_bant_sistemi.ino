const int dirPin = 2;
const int stepPin = 3;
int stepDelay;
int sensor1=50;
int sensor2=52;
int sayi=0;
void setup() {
 Serial.begin(9600);
 pinMode(sensor1, INPUT);
 pinMode(sensor2, INPUT);
 pinMode(dirPin, OUTPUT);
 pinMode(stepPin, OUTPUT);
 digitalWrite(stepPin, HIGH);
}
void loop() {
  if(sayi<2){
 digitalWrite(dirPin, LOW);
 for (int x = 0; x <= 1600; x++) {
 digitalWrite(stepPin, HIGH);
 delayMicroseconds(75);
 digitalWrite(stepPin, LOW);
delayMicroseconds(75);
 }
}
 if(digitalRead(sensor1) == LOW ) 
{
sayi++;
Serial.println(sayi);
}
else if (digitalRead(sensor2) == LOW ) 
{
sayi--;
Serial.println(sayi);
}
if(sayi>=2){
 digitalWrite(dirPin, LOW);
 for (int x = 0; x <= 1600; x++) {
 digitalWrite(stepPin, HIGH);
 delayMicroseconds(35);
 digitalWrite(stepPin, LOW);
delayMicroseconds(35);
}
}
}
