#include <Servo.h>
#define pinBase 11
#define pinDerecha 12
#define pinIzquierda 13
#define pinGarra 10

Servo Base;
Servo Garra;
Servo Derecha;
Servo Izquierda;

char matriz[4][15]={
{-90,-75,-65,-50,-45,-30,-20,-15,-10,-5,0,2,6,7,8},
{60,61,62,63,64,65,66,67,68,71,75,77,80,82,85},
{109,105,101,97,93,89,75,69,65,59,56,49,45,42,40},
{20,21,21,22,23,23,24,24,25,26,26,27,28,29,30} 
};
void setup() {
  Base.attach(pinBase);
  Garra.attach(pinGarra);
  Derecha.attach(pinDerecha);
  Izquierda.attach(pinIzquierda);
Base.write(110);

Derecha.write(10);

Garra.write(60);

Izquierda.write(-90);


Izquierda.write(matriz[0][0]);
delay(300);
Izquierda.write(matriz[0][1]);
delay(300);
Izquierda.write(matriz[0][2]);
delay(300);
Izquierda.write(matriz[0][3]);
delay(300);
Izquierda.write(matriz[0][4]);
delay(300);
Izquierda.write(matriz[0][5]);
delay(300);
Izquierda.write(matriz[0][6]);
delay(300);
Izquierda.write(matriz[0][7]);
delay(300);
Izquierda.write(matriz[0][8]);
delay(300);
Izquierda.write(matriz[0][9]);
delay(300);
Izquierda.write(matriz[0][10]);
delay(300);
Izquierda.write(matriz[0][11]);
delay(300);
Izquierda.write(matriz[0][12]);
delay(300);
Izquierda.write(matriz[0][13]);
delay(300);
Izquierda.write(matriz[0][14]);
delay(300);

Garra.write(matriz[1][0]);
delay(100);
Garra.write(matriz[1][1]);
delay(100);
Garra.write(matriz[1][2]);
delay(100);
Garra.write(matriz[1][3]);
delay(100);
Garra.write(matriz[1][4]);
delay(100);
Garra.write(matriz[1][5]);
delay(100);
Garra.write(matriz[1][6]);
delay(100);
Garra.write(matriz[1][7]);
delay(100);
 Garra.write(matriz[1][8]);
delay(100);
Garra.write(matriz[1][9]);
delay(100);
Garra.write(matriz[1][10]);
delay(100);
Garra.write(matriz[1][11]);
delay(100);
Garra.write(matriz[1][12]);
delay(100);
Garra.write(matriz[1][13]);
delay(100);
Garra.write(matriz[1][14]);
delay(100);

Base.write(matriz[2][0]);
delay(300);
Base.write(matriz[2][1]);
delay(300);
Base.write(matriz[2][2]);
delay(300);
Base.write(matriz[2][3]);
delay(300);
Base.write(matriz[2][4]);
delay(300);
Base.write(matriz[2][5]);
delay(300);
Base.write(matriz[2][6]);
delay(300);
Base.write(matriz[2][7]);
delay(300);
Base.write(matriz[2][8]);
delay(300);
Base.write(matriz[2][9]);
delay(300);
Base.write(matriz[2][10]);
delay(300);
Base.write(matriz[2][11]);
delay(300);
Base.write(matriz[2][12]);
delay(300);
Base.write(matriz[2][13]);
delay(300);
Base.write(matriz[2][14]);
delay(300);

Derecha.write(matriz[3][0]);
delay(100);
Derecha.write(matriz[3][1]);
delay(100);
Derecha.write(matriz[3][2]);
delay(100);
Derecha.write(matriz[3][3]);
delay(100);
Derecha.write(matriz[3][4]);
delay(100);
Derecha.write(matriz[3][5]);
delay(100);
Derecha.write(matriz[3][6]);
delay(100);
Derecha.write(matriz[3][7]);
delay(100);
Derecha.write(matriz[3][8]);
delay(100);
Derecha.write(matriz[3][9]);
delay(100);
Derecha.write(matriz[3][10]);
delay(100);
Derecha.write(matriz[3][11]);
delay(100);
Derecha.write(matriz[3][12]);
delay(100);
Derecha.write(matriz[3][13]);
delay(100);
Derecha.write(matriz[3][14]);
delay(100);

Garra.write(60);
delay(300);
}

void loop() {
 ///////////

}
