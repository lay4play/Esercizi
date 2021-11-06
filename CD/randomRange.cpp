// uda array cpp.cpp : definisce il punto di ingresso dell'applicazione console.
// 

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;
const int TANTI = 6;  // costanti manifeste
const int MIN = 10;
const int MAX = 30;

int main(void){
  int conta;                // variabile di conteggio
  int mioVettore[TANTI];    // vettore da 0 a TANTI-1
  srand(time(0));           // inizializza il seme delle sequenza casuale

  // genera i numeri casuali
  for (conta = 0; conta < TANTI; conta++){
    mioVettore[conta] = MIN + (rand() % (MAX-MIN)); // numero tra MIN e MAX
  }
   // visualizza i risultati 
  cout << "\n i numeri generati sono:\n";
  for (conta = 0; conta < TANTI; conta++) {
    cout << mioVettore[conta] << "\t";
  }

  system("pause");
}









