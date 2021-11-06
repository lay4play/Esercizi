// Sviluppato con  : Dev-C++ 5.4.1     
#include <iostream>  
#include <cstdlib>             // per includere la funzinoe system
using namespace std;

main()
{
  system("TITLE Nome colorato");
  system("COLOR 2e");
  cout << "\n  Ciao, io sono Paolo\n";

  system("PAUSE");

  system("CLS");
  cout <<"\n system(\"COLOR fc\")imposta il nome rosso su sfondo bianco\n\n";
  system("PAUSE");
  system("COLOR fc");
  system("CLS");
  cout <<"\n  Ciao, io sono Paolo\n";
  system("PAUSE");

  cout <<"\n system(\"COLOR cf\")imposta il nome bianco su sfondo rosso\n\n";
  system("PAUSE");
  system("CLS");
  cout <<"\n  Ciao, io sono Paolo\n";
  system("COLOR cf");
  system("PAUSE");

  cout <<"\n system(\"COLOR 17\")imposta il nome grigio chiaro su sfondo blu\n\n";
  system("PAUSE");
  system("CLS");
  cout <<"\n  Ciao, io sono Paolo\n";
  system("COLOR 17");
  system("PAUSE");

  cout <<"\n system(\"COLOR 71\")imposta il nome blu su sfondo grigio chiaro\n\n";
  system("PAUSE");
  system("COLOR 71");
  system("CLS");
  cout <<"\n  Ciao, io sono Paolo\n";
  system("PAUSE");

  cout <<"\n system(\"COLOR f2\")imposta il nome verde su sfondo bianco\n\n";
  system("PAUSE");
  system("COLOR f2");
  system("CLS");
  cout <<"\n  Ciao, io sono Paolo\n";
  system("PAUSE");

  cout <<"\n system(\"COLOR 2f\")imposta il nome bianco su sfondo verde\n\n";
  system("PAUSE");
  system("COLOR 2f");
  system("CLS");
  cout <<"\n  Ciao, io sono Paolo\n"  ;

  printf("\n\n");
//  system("PAUSE");
}

