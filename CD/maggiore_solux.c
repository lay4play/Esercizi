/* File: maggioreSol.c */
/* Time-stamp: "2013-06-06 03:26:06 paolo"      */
/* Scopo: uso di if        */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
#include <stdlib.h>
main()
{
//  variabili locali alla funzione main
  int numero1,numero2;
// istruzioni della funzione main
  printf("introduci due numeri interi\n");
  scanf("%d",&numero1);           // leggi i numeri
  scanf("%d",&numero2);  
  if (numero1>numero2)            // confrontali
    numero2=numero1;
  printf("numero maggiore: %d",numero2);
  printf("\n Saluti a tutti");
  
  printf("\n\n");
//  system("PAUSE");	
}

