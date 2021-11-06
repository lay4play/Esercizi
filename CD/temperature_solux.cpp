#include <iostream>
#include <stdlib.h>    // srand, rand 
#include <time.h>      // time 
using namespace std;
const int TANTI = 24;   // costanti manifeste  
const int MIN = -10;
const int MAX = 25;
int main(void) {
 int x ;               // variabili
 double minima= MAX, massima = MIN;
 int    oraMin, oraMax;
 int mioVettore[TANTI];  // vettore di TANTI
 srand(time(NULL));      // inizializza seme 
 // genera e visualizzai numeri casuali
 cout << "\ni numeri generati sono:\n";
 for (x = 0; x < TANTI; x++){
   mioVettore[x] = MIN+(rand() % (MAX-MIN)); 
   cout <<  mioVettore[x] << " ";
 }
 // calcolo minimo e massimo
 for (x = 0; x < TANTI; x++){
   if ( mioVettore[x]<minima){
     minima = mioVettore[x];
     oraMin = x;
	 }
   if ( mioVettore[x]>massima){
     massima = mioVettore[x];
     oraMax = x;
	 }
 }
 cout << "\n\nminima  alle ore "<< oraMin << " e' stata "<< minima;
 cout <<   "\nmassima alle ore "<< oraMax << " e' stata "<< massima;
}









	
