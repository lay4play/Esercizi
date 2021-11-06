// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  utilizzo dell'operatore mod 
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int modulo, conta , bambini;
  // Leggi  i numeri  
  printf("\nIntroduci il numero di bambini   :");
  scanf ("%d", &bambini);  
  printf("\nIntroduci il numero per la conta :");
  scanf ("%d", &conta);  
  // Esegui i calcoli   
  modulo = conta % bambini;        // resto della divisione
  // Comunica i risultati  
  printf ("\nIl bambino prescelto e' in posizione %d",  modulo);

  printf("\n\n");
}
 
