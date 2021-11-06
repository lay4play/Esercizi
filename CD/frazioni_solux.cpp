// Sviluppato con  : Dev-C++ 5.4.1   

#include <iostream>  
using namespace std;
main()
{
  int a, b, c, d ;              //dati in input
  int numSomma, denSomma  ;     //dati in output
// Leggi la prima frazione  
  cout <<"\nQuesto programma esegue la somma di due frazioni  ";
  cout <<"\nmediante la seguente formula: ";
  cout <<"\n   a     c    ad + bc ";
  cout <<"\n  --- + --- = ------- ";
  cout <<"\n   b     d      bd ";
  cout <<"\n***************************************************";
// Leggi la prima frazione  
  cout <<"\nIntroduci il num della prima   frazione a/b: ";
  cin  >> a;
  cout <<"Introduci il den della prima   frazione a/b: ";
  cin >> b;
// Leggi la seconda frazione  
  cout <<"Introduci il num della seconda frazione c/d: ";
  cin  >> c;
  cout <<"Introduci il den della seconda frazione c/d: ";
  cin  >> d;
// Esegui i calcoli   
  numSomma = (a*d)+(b*c);            // calcolo il numeratore
  denSomma =  b*d;                   // calcolo il denominatore
// Comunica il risultato  
  cout <<"\n***************************************************";
  cout <<"\nIl risultato e\' il seguente :";
  cout <<"\n        "<< a <<"       "<< c <<"       "<< numSomma;
  cout <<"\n     ----- + ----- = -------";
  cout <<"\n        "<< b <<"       "<< d <<"       "<<  denSomma;
  cout <<"\n***************************************************";
 
  printf("\n\n");
}
