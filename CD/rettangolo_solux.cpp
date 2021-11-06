// descrizione: calcolo dell'area di un rettangolo
// versione e data: 1 del 10-03-2013
// autore : paolo
/* Sviluppato con  : Dev-C++ 5.4.1    */

#include <iostream>    // libreria specifica del C++ per l'IO
//#include <cstdlib>     // libreria che dichiara la funzione system
using namespace std;
main()
{
  int area;                  // dichiarazione delle variabili
  int latoA;
  int latoB;
  latoA = 10;                // inizializzazione delle variabili
  latoB = 20;
  area  = latoA * latoB;     // calcolo dell'area
  cout << "\n-----------------------------------------------";
  cout << "\n|Programma che calcola l'area di un rettangolo|";
  cout << "\n|  valore del primo lato   = "<< latoA  <<"               |" ;
  cout << "\n|  valore del secondo lato = "<< latoB  <<"               |" ;
  cout << "\n|  calcolo dell'area =      "<< area   <<"               |" ;
  cout << "\n-----------------------------------------------";
  
  printf("\n\n");
 // system("PAUSE");  
}

