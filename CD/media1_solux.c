// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  float temperatura,media;
  media=0;                  // inizializzazione
  printf("inserisci la prima temperatura   :");
  scanf("%f",&temperatura);
  media = media + temperatura;
  printf("inserisci la seconda temperatura :");
  scanf("%f",&temperatura);
  media = media + temperatura;
  printf("inserisci la terza temperatura   :");
  scanf("%f",&temperatura);
  media = media + temperatura;
  printf("inserisci la quarta temperatura  :");
  scanf("%f",&temperatura);
  media = media + temperatura;
  media = media/4;
  printf("la temperatura media e\' = %6.2f",media);
 
  printf("\n\n");
//  system("PAUSE");
}
