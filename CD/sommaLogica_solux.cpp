/* File: sommaLogicaSol.cpp */
/* Time-stamp: "2013-06-06 03:26:06 paolo"      */
/* Scopo: uso operatore logico not e OR         */
/* Sviluppato con  : Dev-C++ 5.4.1              */

#include <iostream>    // libreria specifica del C++ per l'IO
//#include <cstdlib>     // libreria che dichiara la funzione system
using namespace std;
main()
{
//  variabili locali alla funzione main
  int anni;
  cout << "quanti anni hai? ";
  cin  >> anni;
  
//questa è l'istruzione corretta inserendo il not
  if ((!(anni>10) || !(anni<80)))
    cout << "hai l'ingresso gratuito";
  else
    cout << "devi pagare il biglietto";
 
  printf("\n\n");
//  system("PAUSE");	
}
