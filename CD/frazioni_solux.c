// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int a, b, c, d ;              //dati in input
  int numSomma, denSomma  ;     //dati in output
// Leggi la prima frazione  
  printf("\nQuesto programma esegue la somma di due frazioni  ");
  printf("\nmediante la seguente formula: ");
  printf("\n   a     c    ad + bc ");
  printf("\n  --- + --- = ------- ");
  printf("\n   b     d      bd ");
  printf("\n***************************************************");
// Leggi la prima frazione  
  printf("\nIntroduci il num della prima   frazione a/b: ");
  scanf("%d",&a);
  printf("Introduci il den della prima   frazione a/b: ");
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
  printf("\n***************************************************");
  printf ("\nIl risultato e\' il seguente :");
  printf ("\n %7d %7d  %7d ", a, c, numSomma);
  printf ("\n     ----- + ----- = -------");
  printf ("\n %7d %7d  %7d", b, d, denSomma);
  printf("\n***************************************************");
 
  printf("\n\n");
//  system("PAUSE");
}
