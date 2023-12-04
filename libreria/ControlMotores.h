#ifndef ControlMotores_h
#define ControlMotores_h

#include <Arduino.h>

class ControlMotores {
public:
  ControlMotores(int izqAPin, int izqBPin, int derAPin, int derBPin, int velocidad);
  void setup();
  void update();

  void moveForward();
  void turnRight();
  void turnLeft();
  void stopMotor();
  void reverseMotor();

private:
  int izqA, izqB, derA, derB;
  int velocidad;
  char estado;

  void processBluetooth();
};

#endif
