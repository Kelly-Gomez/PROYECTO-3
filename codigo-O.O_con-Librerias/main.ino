#include "Carro.h"

// Definición de constantes y pines
#define TRIG_PIN A0
#define ECHO_PIN A1
#define MAX_DISTANCE 200
const int motorPin1 = 8;
const int motorPin2 = 9;
const int motorPin3 = 5;
const int motorPin4 = 6;

// Crear el objeto RobotCar
Carro car(TRIG_PIN, ECHO_PIN, MAX_DISTANCE, 3, motorPin1, motorPin2, motorPin3, motorPin4);

void setup() {
  car.setup();
}

void loop() {
  car.loop();
}
