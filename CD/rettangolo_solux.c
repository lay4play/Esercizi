// descrizione: calcolo dell'area di un rettangolo
// versione e data: 1 del 10-03-2013
// autore : paolo
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
  int area;                  // dichiarazione delle variabili
  int latoA;
  int latoB;
  latoA = 10;                // inizializzazione delle variabili
  latoB = 20;
  area  = latoA * latoB;     // calcolo dell'area
  printf("\n-----------------------------------------------");
  printf("\n|Programma che calcola l'area di un rettangolo|");
  printf("\n|  valore del primo lato   = %d               |",latoA);
  printf("\n|  valore del secondo lato = %d               |",latoB);
  printf("\n|  calcolo dell'area= %d                     |",area);
  printf("\n-----------------------------------------------");
  
  printf("\n\n");
}

