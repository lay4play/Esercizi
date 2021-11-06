/* File: sommaLogica.c                               */
/* Time-stamp: "2013-06-06 03:26:06 paolo"           */
/* Scopo: uso delle variabili bool e operatore or    */
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
//variabili locali alla funzione main
  int anni;
  printf("quanti anni hai?");
  scanf("%d",&anni);
  if ((anni<10) || (anni>80))
    printf("hai l'ingresso gratuito");
  else
    printf("devi pagare il biglietto");
    
  printf("\n\n");	
}
