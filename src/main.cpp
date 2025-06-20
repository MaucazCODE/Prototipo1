#include <EEPROM.h>
#include <AccelStepper.h>
#include "Adafruit_VL53L0X.h"
#include <Wire.h>


int M1_0 = 15;
int M1_1 = 2;
int M1_2 = 4;
int M1_3 = 5;

int M2_0 = 13;
int M2_1 = 12;
int M2_2 = 14;
int M2_3 = 27;

int del = 5;

Adafruit_VL53L0X lox = Adafruit_VL53L0X();


void setup() {


  pinMode(M1_0, OUTPUT);
  pinMode(M1_1, OUTPUT);
  pinMode(M1_2, OUTPUT);
  pinMode(M1_3, OUTPUT);

  /*Yo hice esta parte Motor 2*/
  pinMode(M2_0, OUTPUT);
  pinMode(M2_1, OUTPUT);
  pinMode(M2_2, OUTPUT);
  pinMode(M2_3, OUTPUT);

Serial.begin(115200);

  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
  }
 
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
    }

// power 
  Serial.println(F("VL53L0X API Simple Ranging example\n\n"));

}

void loop() {
  
  
  VL53L0X_RangingMeasurementData_t measure;
   
  Serial.print("Reading a measurement... ");
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!

  if (measure.RangeStatus != 4) {  // phase failures have incorrect data
    Serial.print("Distance (mm): "); Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println(" out of range ");
  }
   
  delay(100);
  
  
  
  //uno 
  /*
  digitalWrite(M1_0, LOW);
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, HIGH);
  digitalWrite(M1_3, HIGH);
  delay(del);
  */


  /*MOTOR DOS PASO UNO*/
  //digitalWrite(M2_0, LOW);
  //digitalWrite(M2_1, LOW);
  //digitalWrite(M2_2, HIGH);
  //digitalWrite(M2_3, HIGH);
  //delay(del);


  //dos
  /*
  digitalWrite(M1_0, LOW);
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, HIGH);
  digitalWrite(M1_3, LOW);
  delay(del);
  */



  /*MOTOR DOS PASO DOS*/
  //digitalWrite(M2_0, LOW);
  //digitalWrite(M2_1, HIGH);
  //digitalWrite(M2_2, HIGH);
  //digitalWrite(M2_3, LOW);

  //delay(del);

  //tres
  /*
  digitalWrite(M1_0, HIGH);
  digitalWrite(M1_1, HIGH);
  digitalWrite(M1_2, LOW);
  digitalWrite(M1_3, LOW);
  delay(del);
  */



  /*MOTOR DOS PASO 3*/
  //digitalWrite(M2_0, HIGH);
  //digitalWrite(M2_1, HIGH);
  //digitalWrite(M2_2, LOW);
  //digitalWrite(M2_3, LOW);
  //delay(del);

  //cuarto
  /*
  digitalWrite(M1_0, HIGH);
  digitalWrite(M1_1, LOW);
  digitalWrite(M1_2, LOW);
  digitalWrite(M1_3, HIGH);
  delay(del);
  */

  /*MOTOR DOS PASO 4*/
  //digitalWrite(M2_0, HIGH);
  //digitalWrite(M2_1, LOW);
  //digitalWrite(M2_2, LOW);
  //digitalWrite(M2_3, HIGH);

  //delay(del);

  
}