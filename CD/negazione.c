/* File: negazione.c */
/* Time-stamp: "2013-06-06 03:26:06 paolo"         */
/* Scopo: uso delle variabili bool e operatore !   */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
#include <stdbool.h>   // per definire le variabili bool 
main()
{
//variabili locali alla funzione main
  bool piove;
//istruzioni della funzione main
  piove=true;
  if  (!piove)
    printf("non piove"); 
  else
    printf("apri l'ombrello"); 
    
  printf("\n\n");
}
