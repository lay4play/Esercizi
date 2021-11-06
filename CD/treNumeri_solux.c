/* File: ordina.c                               */
/* Time-stamp: "2014-06-06 03:26:06 paolo"      */
/* Scopo: uso di if e blocco di istruzioni      */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int  num1,num2,num3,min,max,inter,tempo;  
  printf ("\nIntroduci il primo numero ");   // leggi un numero
  scanf ("%d",&num1);
  max = num1;
  printf ("\nIntroduci il secondo numero "); // leggi un numero
  scanf ("%d",&num2);
  min=num2;
  if (min>max)          // esegui il confronto
  {
    tempo=min;          // scambiali tra loro
    min=max;
    max=tempo;
  }
  printf ("\nIntroduci il terzo numero ");   // leggi un numero
  scanf ("%d",&num3);
  inter=num3;
  if (inter>max)        // esegui il confronto
  {
    tempo=inter;        // scambiali tra loro
    inter=max;
    max=tempo;
  }
  if (inter<min)        // esegui il confronto
  {
    tempo=inter;        // scambiali tra loro
    inter=min;
    min=tempo;
  }
// comunica il risultato 
  printf("\ni tre numeri ordinati sono %d %d %d",min,inter,max);
  
  printf("\n\n");
}


