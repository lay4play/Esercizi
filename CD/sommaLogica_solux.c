/* File: sommaLogicaSol.c                        */
/* Time-stamp: "2013-06-06 03:26:06 paolo"       */
/* Scopo: uso operatore logico not e OR          */
// Sviluppato con: Dev-C++ 5.4.1               
 #include <stdio.h>
// #include <stdbool.h>
main()
{
//  variabili locali alla funzione main
  int anni;
  printf("quanti anni hai? ");
  scanf("%d",&anni);
//questa è l'istruzione corretta inserendo il not
 if ((!(anni>10) || !(anni<80)))
    printf("hai l'ingresso gratuito");
  else
    printf("devi pagare il biglietto");
    
  printf("\n\n");	
}
