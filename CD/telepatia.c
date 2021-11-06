// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  commenti nel programma 
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
  /*
  Questo programma verifica le operazioni
  che vengono fatte eseguire ad un giocatore
  nel trucco del numero telepatico 
   */
  int numPensato, numCalcolato;
  // Leggi un numero 
  printf("Introduci il numero che hai pensato :");
  scanf ("%d", &numPensato);            // operazione di input del numero
  // Esegui le operazioni 
  printf("ora raddoppialo...");
  numCalcolato =  ( numPensato * 2 );
  printf("\nsomma al risultato 12 ... ");
  numCalcolato =  (numCalcolato +12 );
  printf("\ndividi il risultato per 2 ...");
  numCalcolato =  (numCalcolato / 2  );
  printf("\nsottrai al risultato il numero che avevi pensato..");
  numCalcolato =  (numCalcolato - numPensato );
  // Comunica il risultato  
  printf ("\nIn ogni caso il numero finale e\' 6 !");
  printf ("\nIl valore ottenuto dai calcoli e\' %d", numCalcolato);

  printf("\n\n");
//  system("PAUSE");
}
