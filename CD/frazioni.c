// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int a, b, c, d ;              //dati in input
  int numSomma, denSomma  ;     //dati in output
// Leggi la prima frazione  
  printf("\nIntroduci il num  della prima frazione a/b: ");
  scanf("%d",&a);
  printf("Introduci il den  della prima frazione a/b: ");
  scanf("%d",&b);
// Leggi la seconda frazione  
  printf("Introduci il num della seconda frazione c/d: ");
  scanf("%d",&c);
  printf("Introduci il den della seconda frazione c/d: ");
  scanf("%d",&d);
// Esegui i calcoli   
  numSomma = (a*d)+(b*c);            // calcolo il numeratore
  denSomma =  b*d;                   // calcolo il denominatore
// Comunica il risultato  
  printf ("\n                             %7d ", numSomma);
  printf ("\nIl risultato della somma e\'  : ------");
  printf ("\n                             %7d", denSomma);
 
  printf("\n\n");
//  system("PAUSE");
}
