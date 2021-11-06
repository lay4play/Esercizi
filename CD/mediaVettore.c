#include <stdio.h>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
const int TANTI = 8;   // costanti manifeste  
const int MIN = 10;
const int MAX = 20;
int main(void) {
 int x ;      // variabili
 double somma = 0, media = 0; 
 int mioVettore[TANTI];  // vettore di TANTI
 srand(time(NULL));      // inizializza il 
 // genera e visualizzai numeri casuali
 printf("\ni numeri generati sono:\n");
 for (x = 0; x < TANTI; x++){
   mioVettore[x] = MIN+(rand() % (MAX-MIN)); 
   printf("%3d", mioVettore[x]) ;
 }
 // sommo i valori  
 for (x = 0; x < TANTI; x++){
   somma = somma + mioVettore[x] ;
 }
 media = somma / TANTI;
 printf("\n\nla media e' %6.2f", media );
}









	
