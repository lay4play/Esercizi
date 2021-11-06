// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  ciclo do-while
// Sviluppato con: Dev-C++ 5.4.1                 
               
#include <stdio.h>
#include <stdlib.h>
main()
{
//  visualizzazione delle sequenza di Fibonacci 
  int quanti,conta,fiboA,fiboB,fiboC;
  char scelta='S';
// prima parte: verifica dell'input "); 
  do
  {
    printf("\nSequenza di Fibonacci");
    printf("\ninserisci il numero di termini desiderato: " );
    do
      scanf("%d",&quanti);
    while(quanti<2);
// seconda parte: calcolo della sequenza 
    fiboA=0;                // primo termine della sequenza
    fiboB=1;                // secondo termine della sequenza
    printf("%d ",fiboA);
    printf("%d ",fiboB);
    conta=2;                // inizializzo il contatore termini stampati
    do
    {
      fiboC=fiboA+fiboB;    // genero il nuovo termine della sequenza
      printf("%d ",fiboC);  // stampo il termine
      conta++;              // aggiorno il contatore termini stampati
      fiboA=fiboB;          // penultimo termine diventa l'ultimo 
      fiboB=fiboC;          // il nuovo termine diventa il penultimo    
    }
    while(conta<quanti); 
    printf("\n Vuoi generare una nuova sequenza S/N ? " );
    scelta=getche();          // legge un carattere e lo visualizza 
    system("cls");
   }    
   while ((scelta=='S')||(scelta=='s'));   // S minuscola o s maiuscola 
}
