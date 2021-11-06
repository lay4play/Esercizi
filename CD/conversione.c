// autore : paolo
// versione e data: 1 del 10-08-2011
// descrizione :  utilizzo dell'operatore /  
// Sviluppato con: Dev-C++ 5.4.1

#include <stdio.h>
main()
{
  float celsius, fahr;
  printf("Inserisci la temperatura in gradi Celsius: ");
  scanf("%g", &celsius);
  fahr = (celsius * 9)/5 + 32;
  printf("%g gradi Celsius = %g gradi Fahrenheit\n", celsius, fahr);

  printf("\n\n");
}
