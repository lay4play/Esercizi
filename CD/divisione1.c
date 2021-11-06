// autore : paolo
// versione e data: 1 del 10-08-2011
// descrizione :  divisione tra numeri interi 
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int   numero1, numero2, numero3;
  float numero4;
  // Leggi  i numeri  
  printf("\nIntroduci il dividendo :");
  scanf ("%d", &numero1);  
  printf("Introduci il divisore  :");
  scanf ("%d", &numero2);  
  // Esegui i calcoli   
  numero3=numero1/numero2;   // risultato nella variabile intera
  numero4=numero1/numero2;   // risultato nella variabile reale
  // Comunica i risultati  
  printf ("\nRisultato nella variabile intera :  %d",  numero3);
  printf ("\nRisultato nella variabile reale  :%6.2f", numero4);
   
  printf("\n\n");
}
