#include <stdio.h>
#define PI 3.1415
const int RAGGIO = 10;

main()
{
  float area;
  printf ("Calcolo area del cerchio  \n");
  area =  RAGGIO * RAGGIO *PI;
  printf ("valore:\tarea = %f,PI = %f, RAGGIO= %d \n", area, PI, RAGGIO);

  printf("\n\n");
}

// autore : paolo
// versione e data: 1 del 10-08-2013
// descrizione : calcolo dell'area di un cerchio: uso di costanti
// Sviluppato con: Dev-C++ 5.4.1    
