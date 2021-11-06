// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
 int x, y = 2;
 
 x = (++y) -1;
 printf("\nx = %d", x);
 printf("\ny = %d", y);
 
 x = 2;
 y = 2;
 x = (y++) -1;            //postfissa
 printf("\nx = %d", x);
 printf("\ny = %d", y);
 
 printf("\n\n");
}



