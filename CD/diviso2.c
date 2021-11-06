/* File: diviso2.c */
/* Time-stamp: "2013-06-06 03:26:06 paolo" */
/* Scopo: uso del ciclo while              */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int numero;
  printf("inserisci un numero intero: ");
  scanf ("%d",&numero);
  while(numero>2)        // condizione di ingresso del ciclo 
  { 
    numero=numero/2;     // corpo del ciclo
  } 
  printf("valore finale del numero inserito %d: ", numero);
  
  printf("\n\n");
}
