/* Sviluppato con  : Dev-C++ 5.4.1    */
#include <iostream>   // include le funzioni di IO
#include <conio.h>    // include le funzioni get()

using namespace std;
main()
{
  char car1,car2,car3;
  cout << "\nInserisci il primo carattere nascosto\n";
  car1=getch();
  cout << "\nInserisci il secondo carattere <enter>\n";
  car2=getchar();
  cout << "\nInserisci il terzo carattere\n";
  car3=getche();
  cout << "\nI tre caratteri letti sono "<< car1 << " " << car2<< " " << car3;
   
  printf("\n\n");
  getch();
}

 
