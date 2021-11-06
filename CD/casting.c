// autore : paolo
// versione e data: 1 del 10-08-2013
// descrizione :  casting
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>

main()
{
  int   numero1, numero2, numero3;
  float numero4, numero5, numero6;
  // Leggi  i numeri  
  printf("\nIntroduci il dividendo :");
  scanf ("%d", &numero1);  
  printf("Introduci il divisore  :");
  scanf ("%d", &numero2);  
  // Esegui i calcoli   
  numero3=numero1/numero2;   // risultato nella variabile intera
  printf ("\n\nEffettuo il casting");
  numero4=numero1;           // assegno il numero intero ad un reale
  numero5=(int)numero2;      // assegno il numero intero ad un reale
  numero6=numero4/numero5;   // divisione tra reali 
  printf ("\nRisultato divisione tra reali  :%6.2f", numero6);
  // Comunica i risultati  
  printf ("\nParte intera   della divisione :%d", numero3);
  printf ("\nParte decimale della divisione :%4.2f", numero6-numero3);
   
  
  printf("\n\n");
 
}
