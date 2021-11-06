// autore : paolo
// versione e data: 1 del 10-08-2011
// descrizione :  operatori unari 
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
int var1=10,var2=10,var3,var4;
  var1++;
  ++var2;
  printf ("\nPostincremento %d e preincremento %d", var1,var2);
  var1--;
  --var2;
  printf ("\nPostdecremento %d e predecremento %d", var1,var2);

  printf("\n\n");
  var3 = (++var1) - 1;
  var4 = (var2++) - 1;
  printf ("\nPreincremento  var1 %d e sottrazione %d", var1,var3);
  printf ("\nPostincremento var2 %d e sottrazione %d", var2,var4);

  printf("\n\n");
//  system("PAUSE");
}
