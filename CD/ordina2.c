/* File: ordina2.c                              */
/* Time-stamp: "2011-06-06 03:26:06 paolo"      */
/* Scopo: uso di if/else e bloco di istruzioni  */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
//variabili locali alla funzione main
  int numero1,numero2;
//istruzioni della funzione main
  printf("inserisci i numeri da ordinare\n");
  scanf("%d",&numero1);     //inserimento dei numeri da ordinare
  scanf("%d",&numero2);
  if(numero1<numero2)       //confronto sui numeri
  {                         //se condizione vera 
    printf("i numeri sono gia' ordinati. \n"); //visualizzazione numeri in ordine
    printf("il piu' piccolo e' %d",numero1);   //di inserimento
    printf("\nil piu' grande e' %d",numero2);
  }
  else                      //se condizione falsa 
 {                          //visualizzazione numeri in ordine invertito
    printf("i numeri sono da ordinare. \n");
    printf("il piu' piccolo e' %d",numero2);
    printf("\nil piu' grande e' %d",numero1);
  }
  
  printf("\n\n");	
}
