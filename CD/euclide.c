/* File: euclide-c */
/* Time-stamp: "2018-06-06 03:26:06 paolo" */
/* Scopo: uso del ciclo while   */
// Sviluppato con: Dev-C++ 5.11                 
#include <stdio.h>
main()
{
  int numero1,numero2,resto,MCD;   
  printf("\nAlgoritmo di Euclide per il calcolo del MCD.");
  printf("\ninserisci due numeri positivi :");
  scanf ("%d%d",&numero1,&numero2);
  while(numero2>0)           // inizio iterazione
  {
    resto=numero1%numero2;   // calcolo del resto
    numero1=numero2;         // scambio dei numeri
    numero2=resto;
  }
  MCD=numero1;               // assegnazione inutile, solo per chiarezza
  printf("\nil MCD e\': %d", MCD);

  printf("\n\n");
}


