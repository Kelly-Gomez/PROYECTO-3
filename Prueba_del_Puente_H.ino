/* Prueba del Puente H (L293D) 
Dibujo de las conexiones en www.elprofegarcia.com

ARDUINO   L293D(Puente H)        
  5          10
  6          15
  9          7
  10         2
  5V         1, 9, 16
  GND        4, 5, 12, 13
  
  El motor 1 se conecta a los pines 3 y 6 del Puente H
  El motor 2 se conecta a los pines 11 y 14 del Puente H
  
  La fuente de alimentacion de los Motores se conecta a tierra y
  el positivo al pin 8 del puennte H.  

*/
int izqA = 5; 
int izqB = 6; 
int derA = 9; 
int derB = 10; 
int vel = 255; // Velocidad de los motores (0-255)

void setup()  { 
  pinMode(derA, OUTPUT);
  pinMode(derB, OUTPUT);
  pinMode(izqA, OUTPUT);
  pinMode(izqB, OUTPUT);
 } 
 
void loop()  { 
  analogWrite(derB, 0);  // Detiene los Motores
  analogWrite(izqB, 0); 
  delay (500);
  analogWrite(derA, vel);  // Frente 2 segundos
  analogWrite(izqA, vel); 
  delay (2000);
  
  analogWrite(derA, vel);  // Derecha 0,5 segundos
  analogWrite(izqA, 0); 
  delay (500);
  
  analogWrite(derA, 0);    // Izquierda 0,5 segundos
  analogWrite(izqA, vel); 
  delay (500);
  
  analogWrite(derA, 0);    // Detiene los Motores
  analogWrite(izqA, 0);
  delay (500);
  analogWrite(derB, vel);  // Reversa 2 segundos
  analogWrite(izqB, vel); 
  delay (2000);                      
}
