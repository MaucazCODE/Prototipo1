#include <EEPROM.h>

//const int EEPROM_SIZE = 512; // Define el tamaño de la EEPROM (ajusta según tu necesidad)

// Declaracion de pines
int negro1 = 12;
int amarillo1=14;
int rojo1=27;
int negro2 = 28;
int amarillo2=25;
int rojo2=33;

int tiempo = 2000;

void setup() {
  pinMode(negro1,OUTPUT);
  pinMode(amarillo1,OUTPUT);
  pinMode(rojo1,OUTPUT);
  pinMode(negro2,OUTPUT);
  pinMode(amarillo2,OUTPUT);
  pinMode(rojo2,OUTPUT);
} 

void loop() {

//vuelta de primera rueda
  digitalWrite(negro1,HIGH); 
  delay(tiempo);
  digitalWrite(amarillo1,HIGH);  
  delay(tiempo);
  digitalWrite(rojo1,HIGH);  
  delay(tiempo);

//vuelta de 2da rueda
  digitalWrite(negro2,HIGH); 
  delay(tiempo);
  digitalWrite(amarillo2,HIGH);  
  delay(tiempo);
  digitalWrite(rojo2,HIGH);
  delay(tiempo);  
}