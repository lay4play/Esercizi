/*
Programma che calcola la somma dei numeri interi
fino ad un numero letto da input (bis) 
Autore :  Paolo
Versione : 1.0 del 12-03-13 
*/
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
  int numero,totale;         // definizione delle variabili
  totale = 0;
  printf("inserisci un numero intero : ");
  scanf ("%d",&numero);
  totale = numero;
  while(numero>0)           // condizione di ingresso del ciclo 
  {
    numero--;               // incrementa il contatore
    totale+=numero;         // aggiorna il totale
  }
  printf("\nla somma dei primi N numeri e: %d", totale);

  printf("\n\n");
}


