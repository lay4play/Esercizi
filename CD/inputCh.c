// autore : paolo
// versione e data: 1 del 10-08-2018
// descrizione :  lettura di caratteri singoli
// Sviluppato con: Dev-C++ 5.11                 
#include <stdio.h>
main()
{
	char ca1, ca2, ca3; // se voglio memorizzare i caratteri inseriti

  printf("\nInserisci un carattere da tastiera e non viene visualizzato\n");
  ca1 = getch();
  printf("\nInserisci un carattere da tastiera visualizzandolo senza <enter>\n");
  ca2 = getche();
  printf("\nInserisci un carattere da tastiera visualizzandolo con <enter>\n");
  ca3 = getchar();
 
  printf("\nHai inserito %c, %c, %c", ca1, ca2, ca3);
 
  printf("\nTermine elaborazione!\n");
    
  printf("\n\n");
  getch();
}

 
