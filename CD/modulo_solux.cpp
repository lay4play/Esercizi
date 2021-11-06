// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  utilizzo dell'operatore mod 
/* Sviluppato con  : Dev-C++ 5.4.1    */

#include <iostream>    // libreria specifica del C++ per l'IO
//#include <cstdlib>     // libreria che dichiara la funzione system 
using namespace std;
main()
{
  int num1, num2, num3;
  int resto1,resto2,resto3,resto4,resto5,resto6;

// Leggi  i numeri  
  cout << "\nIntroduci tre numeri interi :";
  cin >> num1;  
  cin >> num2;  
  cin >> num3;  

// Esegui i calcoli   
  resto1=num1%num2;
  resto2=num2%num1;
  resto3=num1%num3;
  resto4=num3%num1;
  resto5=num2%num3;
  resto6=num3%num2;

// Comunica i risultati  
  cout << "\n dividendo  divisore quoziente resto " ;
  cout << "\n num1: "  << num1  << "   num2: " << num2 << "     " << num1/num2 << "      " << resto1;
  cout << "\n num2: "  << num2  << "   num1: " << num1 << "     " << num2/num1 << "      " << resto2;
  cout << "\n num1: "  << num1  << "   num3: " << num3 << "     " << num1/num3 << "      " << resto3;
  cout << "\n num3: "  << num3  << "   num1: " << num1 << "     " << num3/num1 << "      " << resto4;
  cout << "\n num2: "  << num2  << "   num3: " << num3 << "     " << num2/num3 << "      " << resto5;
  cout << "\n num3: "  << num3  << "   num2: " << num2 << "     " << num3/num2 << "      " << resto6;
                                              
  printf("\n\n");
//  system("PAUSE");
}
