/*
Programma che calcola la somma dei numeri interi
fino ad un numero letto da input
Autore :  Paolo
Versione : 1.0 del 12-03-13 
*/
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
  int numero,totale,contatore; // definizione delle variabili
  contatore=0;                 // inizializzazione delle variabili
  totale=0;
  printf("inserisci un numero intero : ");
  scanf ("%d",&numero);
  contatore=numero;
  totale   =numero;
  while(contatore>0)           // condizione di ingresso del ciclo 
  {
    contatore--;               // incrementa il contatore
    totale+=contatore;         // aggiorna il totale
  }
  printf("\nla somma dei primi N numeri e: %d", totale);

  printf("\n\n");
}


