#include <iostream>
#include <stdlib.h>  // srand, rand 
#include <time.h>    // time 
using namespace std;
const int TANTI = 8;          // costanti manifeste  
const int MAX = 90;
int main(void) {
 int conta;                  // variabile di conteggio
 int mioVettore[TANTI];      // vettore da 0 a TANTI-1
 srand(time(0));             // inizializza il seme delle sequenza 
 // genera i numeri casuali
 for (conta = 0; conta < TANTI; conta++){
   mioVettore[conta] = (rand() % MAX); // numero tra 0 e MAX
 }
 // visualizza i risultati 
 cout << "\n i numeri generati sono:\n";
 for (conta = 0; conta < TANTI; conta++){
   cout << mioVettore[conta] << "\t";
 }
 system("pause");
}









