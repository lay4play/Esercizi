#include <stdio.h>
main()
{
  int numero,somma,conta;  // def. delle variabili
  conta=0;                 // iniz.delle variabili
  somma=0;
  printf("inserisci un numero intero : ");
  scanf ("%d",&numero);
  while(conta<numero)    // condizione di ingresso  
  {
    conta=conta+1;        // contae++;  incrementa contatore
    somma=somma+conta;    // totale+=contatore; aggiorna totale
  }
  printf("\nla somma dei primi N numeri e\': %d", somma);

  printf("\n\n");
}






