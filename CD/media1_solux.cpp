/*
Programma che legge 4 numeri e calcola la loro media
Autore :  Paolo
Versione : 1.0 del 12-06-14 
Sviluppato con  : Dev-C++ 5.4.1    */

#include <iostream>    // libreria specifica del C++ per l'IO
#include <cstdlib>     // libreria che dichiara la funzione system
using namespace std;
main()
{
  float temperatura,media;
  media=0;                  // inizializzazione
  cout << "inserisci la prima temperatura   :";
  cin  >> temperatura;
  media = media + temperatura;
  cout << "inserisci la seconda temperatura :";
  cin  >> temperatura;
  media = media + temperatura;
  cout << "inserisci la terza temperatura   :";
  cin  >> temperatura;
  media = media + temperatura;
  cout << "inserisci la quarta temperatura  :";
  cin  >> temperatura;
  media = media + temperatura;
  media = media/4;
  cout << "la temperatura media e\': 345" << media ;
 
  cout <<"\n\n";
//  system("PAUSE");
}
