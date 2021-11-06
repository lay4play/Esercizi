// autore : paolo
// versione e data: 1 del 10-08-2015
// descrizione :  utilizzo dell'operatore mod 
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int modulo, posti, elefanti;
  // Leggi  il numero degli elefanti  
  printf("\nIntroduci il numero degli elefanti :");
  scanf ("%d", &elefanti);  
  printf("\nIntroduci il numero dei psoti in auto:");
  scanf ("%d", &posti);  
  // Esegui i calcoli   
  modulo = elefanti % posti;        // resto della divisione
  // Comunica i risultati  
  printf ("\nServono %d automabili per portare %d elefanti",  modulo,elefanti );

  printf("\n\n");
}
 
