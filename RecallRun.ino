#include <EEPROM.h>
#define btnPin 3

bool mode = false;
//int iter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(btnPin,INPUT);
  if (digitalRead(btnPin) == 0){
    mode = true;
  }
  for (int i=0; i<1000; i+=3){
    Serial.println(EEPROM.read(i)+', '+EEPROM.read(i+1)+', '+EEPROM.read(i+2));
  }
}

void loop() {
  if (!(mode)){
    //do things
    /*int val = 4;
    if (iter < 997){
      EEPROM.write(iter, val);
      iter++
      EEPROM.write(iter, val);
      iter++
      EEPROM.write(iter, val);
      iter++
    }*/
  }
}
