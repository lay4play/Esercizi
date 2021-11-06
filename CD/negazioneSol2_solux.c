/* File: negazioneSol2.c                        */
/* Time-stamp: "2011-06-06 03:26:06 paolo"      */
/* Scopo: uso operatore logico not              */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
#include <stdbool.h>
main()
{
//variabili locali alla funzione main
  bool piove;
//istruzioni della funzione main
  piove = false;
  if (!(!piove))
    printf("apri l'ombrello"); 
  else
    printf("non piove"); 

  printf("\n\n");	   
 }

 
