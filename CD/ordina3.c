/* File: ordina3.c                              */
/* Time-stamp: "2014-06-06 03:26:06 paolo"      */
/* Scopo: uso di if/else e bloco di istruzioni  */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
//  variabili locali alla funzione main
  int numero1,numero2,tempo;
// istruzioni della funzione main
  printf("inserisci i numeri da ordinare\n");
  scanf("%d",&numero1);     //inserimento dei numeri da ordinare
  scanf("%d",&numero2);
  if(numero1<numero2)       //confronto sui numeri
    printf("i numeri sono gia' ordinati. \n");
  else
  {
    printf("i numeri sono da ordinare. \n");
    tempo=numero1;          //i numeri vengono scambiati
    numero1=numero2;        //usando una variabile temporanea
    numero2=tempo;
  }
  printf("il piu' piccolo e' %d",numero1);
  printf("\nil piu' grande e' %d",numero2);
  
  printf("\n\n");	
}
