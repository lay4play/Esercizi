/* File: posneg.c                              */
/* Time-stamp: "2013-06-06 03:26:06 paolo"     */
/* Scopo: uso di if/else                       */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
//  variabili locali alla funzione main
  int numero;
// istruzioni della funzione main
  printf("introduci un numero");
  scanf("%d",&numero);
  printf("numero inserito: %d",numero);
  if (numero>0)                  // confrontalo con 0
    printf("\nsi tratta di un numero positivo");
  else
    printf("\nsi tratta di un numero negativo");
    
  printf("\n\n");
}
