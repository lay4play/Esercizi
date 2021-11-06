/* File: annomeseSol.cpp */
/* Time-stamp: "2014-06-06 03:26:06 paolo"      */
/* Scopo: uso di if/else e bloco di istruzioni  */
// Sviluppato con: Dev-C++ 5.4.1     
// #include <cstdlib> 
#include <iostream>  
using namespace std;
main()
{
 int mese, anno, mesesucc, annosucc;
 cout << "Introduci  il mese e l'anno ";
 cin >> mese >> anno; 
 if (mese == 12) {
  mesesucc = 1;
  annosucc = anno + 1; 
 }
 else {
  mesesucc = mese + 1;
  annosucc = anno;
 }
 cout << "\nIl numero mese successivo  " << mesesucc << " e l'anno successivo e' "<< annosucc;

 printf("\n\n");
// system("PAUSE");	
}
