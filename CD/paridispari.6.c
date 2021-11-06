/* File: paridispari.c */
/* Time-stamp: "2013-06-06 03:26:06 paolo"      */
/* Scopo: uso di if/else e casting              */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
//variabili locali alla funzione main
  int numeroTroncato,numero;
  printf("Introduci un numero ");                 //leggi il numero
  scanf("%d",&numero);
  numeroTroncato= (int) numero/2;                //effettua la divisione intera
  numeroTroncato=numeroTroncato*2;               //moltiplica il quoziente per due
  if (numero==numeroTroncato)                    //confronta i due valori
    printf("\nIl numero %d e' pari",numero);
  else
    printf("\nIl numero %d e' dispari",numero);
    
  printf("\n\n");	
}
