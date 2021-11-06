// autore : paolo
// versione e data: 1 del 10-12-2013
// descrizione : calcolo il cambio tra le valute lire e dollari
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
#define EuroLira 1963.27
const float EuroDollaro = 1.3768;      //cambio del 10-12-2013

main()
{
  float valore1;
  float valore2;
  
  valore1 = 100/EuroLira;
  valore2 = valore1*EuroDollaro;
  printf ("Calcolo 100 lire in Euro: %2.3f  in Dollari: %2.3f  \n", valore1,valore2);
  valore1 = 100000/EuroLira;
  valore2 = valore1*EuroDollaro;
  printf ("Calcolo 100000 lire in Euro: %4.3f  in Dollari: %4.3f  \n", valore1,valore2);
  valore1 = 1000000/EuroLira;
  valore2 = valore1*EuroDollaro;
  printf ("Calcolo 1 milione di lire in Euro: %6.3f  in Dollari: %6.3f  \n", valore1,valore2);
  
  printf("\n\n");
  // system("PAUSE");
}

