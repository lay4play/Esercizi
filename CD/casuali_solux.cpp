#include <iostream>
#include <stdlib.h>  // srand, rand 
#include <time.h>    // time 
using namespace std;
const int TANTI = 12;          // costanti manifeste  
const int MIN = 10;
const int MAX = 20;
int main(void) {
 int conta;                  // variabile di conteggio
 int mioVettore[TANTI];      // vettore da 0 a TANTI-1
 srand(time(NULL));             // inizializza il seme delle sequenza 
 // genera i numeri casuali
 for (conta = 0; conta < TANTI; conta++){
   mioVettore[conta] = MIN+(rand() % (MAX-MIN)); // numero tra 0 e MAX
 }
 // visualizza i risultati 
 cout << "\n i numeri generati sono:\n";
 for (conta = TANTI; conta >0 ; conta--){
   cout << mioVettore[conta] << " ";
 }
 
}









