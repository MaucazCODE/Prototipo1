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
  Serial.begin(115200);
  Wire.begin(21, 22);  // Asegúrate de usar los pines correctos

  if (!lox.begin()) {
    Serial.println("Fallo al encontrar VL53L0X");
    while (1);
  }

  Serial.println("Sensor VL53L0X iniciado correctamente");

}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false); // true = debug!

  if (measure.RangeStatus != 4) {  // 4 = fuera de rango
    Serial.print("Distancia (mm): "); Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println("Fuera de rango");
  }

  delay(1000);
  
  
  
  
  
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
