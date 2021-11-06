#include <stdio.h>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
const int TANTI = 24;   // costanti manifeste  
const int MIN = -5;
const int MAX = 20;
int main(void) {
 int x ;      // variabili
 double minima= MAX, massima = MIN;
 int    oraMin, oraMax;
 int mioVettore[TANTI];  // vettore di TANTI
 srand(time(NULL));      // inizializza il 
 // genera e visualizzai numeri casuali
 printf("\ni numeri generati sono:\n");
 for (x = 0; x < TANTI; x++){
   mioVettore[x] = MIN+(rand() % (MAX-MIN)); 
   printf("%3d", mioVettore[x]) ;
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
 printf("\n\nla minima alle ore %d e' stata %6.2f", oraMin, minima);
 printf("\n\nla massima alle ore %d e' stata %6.2f", oraMax, massima);

}









	
