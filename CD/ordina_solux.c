/* File: ordinaSol.c                            */
/* Time-stamp: "2013-06-06 03:26:06 paolo"      */
/* Scopo: uso di if-then e blocco di istruzioni */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int  min,max,inter,tempo;  
  printf ("\nIntroduci il primo numero ");   // leggi un numero
  scanf ("%d",&max);
  printf ("\nIntroduci il secondo numero "); // leggi un numero
  scanf ("%d",&min);
  if (min>max)          // esegui il confronto
  {
    tempo=min;          // scambiali tra loro
    min=max;
    max=tempo;
  }
  printf ("\nIntroduci il terzo numero ");   // leggi un numero
  scanf ("%d",&inter);
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


