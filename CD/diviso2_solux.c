/*
Programma che divide per 2 un numero letto da input
finche tale numero � maggiore di 2 visualizzando i
valori intermedi dei calcoli effettuati (trace - table)
Autore :  Paolo
Versione : 1.0 del 12-03-11 
Sviluppato con: Dev-C++ 5.4.1   
*/              
#include <stdio.h>
main()
{
  int numero;
  printf("inserisci un numero intero : ");
  scanf ("%d",&numero);
  while(numero > 2)          // condizione di ingresso del ciclo 
  {
    numero = numero / 2;     // corpo del ciclo
    printf("\nlo divido per 2 ed ottengo : %d", numero); 
  }
  printf("\nvalore finale del numero inserito: %d", numero);
  
  printf("\n\n");
}


