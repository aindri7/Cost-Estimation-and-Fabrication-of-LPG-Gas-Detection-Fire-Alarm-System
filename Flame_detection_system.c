#include <LiquidCrystal.h>
LiquidCrystal lcd(5,6,8,9,10,11);
	
int spinkler = 13;
int redled = 2;
int greenled = 3;
int buzzer = 4;
int sensor1 = A0;
int sensorThresh = 60;
int blueled = 12;

void setup()
{
  pinMode(spinkler, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(sensor1, INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop()
{
  int analogValue = analogRead(sensor1);
   int temp=analogValue*0.48828125;
  Serial.print(temp );
  //Serial.print('\n'); 
  if(temp>sensorThresh)
  {
    digitalWrite(spinkler,HIGH);
    digitalWrite(blueled,HIGH);
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    tone(buzzer,1000,10000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("HIGH FLAME");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("EVACUATE");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(temp);
    delay(1000);
  }
  else
  {
    digitalWrite(greenled,HIGH);
    digitalWrite(spinkler,LOW);
    digitalWrite(redled,LOW);
    digitalWrite(blueled,LOW);
    noTone(buzzer);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("SAFE");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("ALL CLEAR");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(temp);
    delay(1000);
  }
  
}
