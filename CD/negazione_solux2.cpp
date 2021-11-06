/* File: negazioneSol2.cpp */
/* Time-stamp: "2011-06-06 03:26:06 paolo"      */
/* Scopo: uso operatore logico not */
/* Sviluppato con  : Dev-C++ 5.4.1    */

#include <iostream>    // libreria specifica del C++ per l'IO
//#include <cstdlib>     // libreria che dichiara la funzione system 
using namespace std;
main()
{
//variabili locali alla funzione main
  bool piove;
//istruzioni della funzione main
  piove=false;
  if (!(!piove))
    cout << "apri l'ombrello"; 
  else
    cout << "non piove"; 

  printf("\n\n");
//  system("PAUSE");	   
 }

 
