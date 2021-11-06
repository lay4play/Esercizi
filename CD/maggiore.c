/* File: maggiore.c */
/* Time-stamp: "2018-06-06 03:26:06 paolo"        */
/* Scopo: uso di if/else                          */
// Sviluppato con: Dev-C++ 5.11                 
#include <stdio.h>
main()
{
//variabili locali alla funzione main
  int numero1,numero2;
//istruzioni della funzione main
  printf("introduci due numeri interi\n");
  scanf("%d",&numero1);           //leggi i numeri
  scanf("%d",&numero2);  
  if (numero1>numero2)            //confrontali
    printf("numero maggiore: %d",numero1);
  else
    printf("numero maggiore: %d",numero2);
    
  printf("\n\n");
}
