// autore : paolo
// versione e data: 1 del 10-08-2013
// descrizione :  media di temperature : input e output di float
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  float tempera1,tempera2,tempera3,tempera4,media;
  printf("inserisci la prima temperatura   :");
  scanf("%f",&tempera1);
  printf("inserisci la seconda temperatura :");
  scanf("%f",&tempera2);
  printf("inserisci la terza temperatura   :");
  scanf("%f",&tempera3);
  printf("inserisci la quarta temperatura  :");
  scanf("%f",&tempera4);
  media = (tempera1+tempera2+tempera3+tempera4)/4;
  printf("la temperatura media e\' = %6.2f",media);
 
  printf("\n\n");
//  system("PAUSE");
}
