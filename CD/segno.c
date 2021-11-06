/* Time-stamp: "2013-06-06 03:26:06 paolo" */
/* Scopo: uso di if e istruzione singola   */
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
// Legge un numero e ne cambia il segno 
{
// variabili locali alla funzione main
  int numero;
// leggi un numero
  printf ("Introduci il numero con segno : ");
  scanf ("%d",&numero);
  if (numero<0)         // esegui il confronto
  {
    numero=-1*numero;   // cambiagli il segno
  }
// comunica il risultato 
  printf("valore assoluto del numero letto : ");
  printf("%d",numero);
   
  printf("\n");	
}
