#include <Arduino.h>
#define LED 13
int i;

void setup(){

pinMode(LED, OUTPUT);
Serial.begin(9600);

}

void loop(){


digitalWrite(LED, HIGH);
delay(100);
digitalWrite(LED,LOW);
delay(100);




}