#include <iostream>
#include <stdlib.h>  // srand, rand 
#include <time.h>    // time 
using namespace std;
const int TANTI = 8;          // costanti manifeste  
const int MAX = 90;
int main(void) {
 int conta;                  // variabile di conteggio
 int mioVettore[TANTI];      // vettore da 0 a TANTI-1
 srand(time(NULL));          // inizializza il seme   
 // genera i numeri casuali
 for (conta = 0; conta < TANTI; conta++){
   mioVettore[conta] = (rand() % MAX); //  tra 0 e MAX
 }
 // visualizza i risultati 
 cout << "\ni numeri generati sono:\n";
 for (conta = 0; conta < TANTI; conta++){
   cout << mioVettore[conta] << "  ";
 }
}









