#include <iostream>
#include <stdlib.h>    // srand, rand 
#include <time.h>      // time 
using namespace std;
const int TANTI = 8;   // costanti manifeste  
const int MIN = 10;
const int MAX = 20;
int main(void) {
 int x ;               // variabili
 double somma = 0, media = 0; 
 int mioVettore[TANTI];  // vettore di TANTI
 srand(time(NULL));      // inizializza seme 
 // genera e visualizzai numeri casuali
 cout << "\ni numeri generati sono:\n";
 for (x = 0; x < TANTI; x++){
   mioVettore[x] = MIN+(rand() % (MAX-MIN)); 
   cout <<  mioVettore[x] << " ";
 }
 // sommo i valori  
 for (x = 0; x < TANTI; x++){
   somma = somma + mioVettore[x] ;
 }
 media = somma / TANTI;
 cout << "\n\nla media e' "<< media ;
}









	
