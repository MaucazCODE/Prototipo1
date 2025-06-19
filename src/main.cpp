#include <EEPROM.h>
#include <AccelStepper.h>
#include "Adafruit_VL53L0X.h"


int M1_0 = 15;
int M1_1 = 2;
int M1_2 = 4;
int M1_3 = 5;

int M2_0 = 13;
int M2_1 = 12;
int M2_2 = 14;
int M2_3 = 27;

int del = 5;

void setup() {
  pinMode(M1_0, OUTPUT);
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
  pinMode(M1_3, OUTPUT);
}

void loop() {

  //uno
  digitalWrite(M1_0, LOW);
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, LOW);
  digitalWrite(M1_3, HIGH);
  delay(del);

  //dos
  digitalWrite(M1_0, LOW);
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, HIGH);
  digitalWrite(M1_3, LOW);
  delay(del);

  //tres
  digitalWrite(M1_0, LOW);
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
  digitalWrite(M1_3, LOW);
  delay(del);

  //cuarto
  digitalWrite(M1_0, HIGH);
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, LOW);
  digitalWrite(M1_3, LOW);
  delay(del);

}
