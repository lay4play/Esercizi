// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  char car1,car2,car3;
  printf("\nInserisci il primo carattere nascosto\n");
  car1=getch();
  printf("\nInserisci il secondo carattere <enter>\n");
  car2=getchar();
  printf("\nInserisci il terzo carattere\n");
  car3=getche();
  printf("\nI tre caratteri letti sono %c,%c,%c", car1,car2,car3);
   
  printf("\n\n");
  getch();
}

 
