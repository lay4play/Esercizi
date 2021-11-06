#include "stdafx.h"

#include <iostream>
#include <stdlib.h>    // srand, rand 
#include <time.h>      // time 
using namespace std;
const int TANTI = 12;  // num elementi
const int MAX = 89;    // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  

void mostraVettore() {
  int x;
  // cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "" << endl;
}

void riempiCasuale() {
  int x;
  srand((unsigned)time(NULL));
  for (x = 0; x < TANTI; x++)
    numeri[x] = (rand() % MAX) + 10;
}

void seleScambioSort(){
  int x, y, i_min;
  int temp;
  for (x = 0; x < TANTI - 1; x++) {     // ricerca del minimo 
    i_min = x;                          // hp primo come minimo 
    for (y = x + 1; y < TANTI; y++) {   // x la parte dx del vettore
      if (numeri[y] < numeri[i_min]) {  // se l'elemento è minore 
        i_min = y;                      // hp primo come minimo 
        temp = numeri[i_min];
        numeri[i_min] = numeri[x];
        numeri[x] = temp;
     }
    }
    mostraVettore();     // per vedere un passo alla volta
  }
}

int main(void) {
  riempiCasuale();
  mostraVettore();
  seleScambioSort();
  //  mostraVettore();         
  system("pause");
}




