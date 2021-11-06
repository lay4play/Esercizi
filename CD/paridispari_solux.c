/* File: paridispariSol.c                       */
/* Time-stamp: "2013-06-06 03:26:06 paolo"      */
/* Scopo: uso di if/else e operatore modulo     */
/* Sviluppato con: Dev-C++ 5.4.1                */ 
#include <stdio.h>
#include <stdlib.h>
main()
{
  int resto,numero;
  printf("Introduci un numero ");
  scanf("%d",&numero);
  resto = numero % 2;
  if (resto==0)
    printf("\nIl numero %d e' pari",numero);
  else
    printf("\nIl numero %d e' dispari",numero);
    
  printf("\n\n");	
}
