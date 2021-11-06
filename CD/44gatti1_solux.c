// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  scrittura di stringhe 
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  float gatti1,gatti2,gatti3,gatti4,gatti5;

  gatti1  = 44;
  gatti2  =  6;
  gatti3  =  2;
  gatti4  =  7;
   
  printf("%2.0f gatti ", gatti1);
  printf("\nin fila per %3.1f col resto di %3.2f ", gatti2, gatti3);
  printf("\n %12.3f x ", gatti2);
  printf("\n %12.3f = ", gatti4);
  printf("\n %12.3f piu' %2.0f fa %2.0f", 42.00, gatti3, gatti1);
      
  printf("\n\n");	
}
