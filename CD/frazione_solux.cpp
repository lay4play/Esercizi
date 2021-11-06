/* File: frazioneSol.cpp */
/* Time-stamp: "2014-06-06 03:26:06 paolo"      */
/* Scopo: uso di if-then e blocco di istruzioni */
/* Sviluppato con  : Dev-C++ 5.4.1   */

#include <iostream>
using namespace std;

main()
{
//  variabili locali alla funzione main
  int a,b;
  cout << "introduci il numeratore a della frazione a/b: ";
  cin  >> a;
  cout << "introduci il denominatore b della frazione a/b: ";
  cin  >> b;
//verifica sul contenuto del numeratore a
  if (a==0)
  {
    cout << "attenzione";
    cout << "numeratore uguale a 0!";
  }
//verifica sul contenuto del denominatore b
  if (b==0)
  {
    cout << "attenzione";
    cout << "denominatore uguale a 0!";
  }

//  system("PAUSE");	
  return 0;
}

