#include "ControlMotores.h"

ControlMotores controlMotores(5, 6, 9, 10, 210);

void setup() {
  controlMotores.setup();
}

void loop() {
  controlMotores.update();
}
