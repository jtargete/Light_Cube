const int analogPin = A0;
int LEDW = 9;
int LEDBG = 11;
int LEDRY = 10;




void setup() {
 Serial.begin(115200); 
 pinMode(LEDW,OUTPUT);
 pinMode(LEDBG,OUTPUT);
 pinMode(LEDRY,OUTPUT);
 digitalWrite(LEDW,HIGH);
 delay(500);
 digitalWrite(LEDW,LOW);
 delay (500);
 digitalWrite(LEDW,HIGH);
 delay (500);
 digitalWrite(LEDW,LOW);
 delay (500);
 digitalWrite(LEDW,HIGH);
 delay (500);
 digitalWrite(LEDW,LOW);
 delay (500);
 digitalWrite(LEDW,HIGH);
 
}


void loop(){
int val = analogRead(A0);
float voltage = val*(5.0/1024.0);
Serial.println(voltage);


if (voltage > 0.99)
{
digitalWrite(LEDBG,HIGH);
delay(10);
digitalWrite(LEDRY,HIGH);
delay(10);
}
else
{
digitalWrite(LEDBG,LOW);
digitalWrite(LEDRY,LOW);
}

}

//Light Cube Show Code by Joshua Targete
