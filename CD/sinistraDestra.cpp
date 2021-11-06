#include "stdafx.h"

#include <iostream>
#include <stdlib.h>    // srand, rand 
#include <time.h>      // time 
using namespace std;
const int TANTI = 12;  // num elementi
const int MAX   = 98;  // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  
void mostraVettore(){
  int x;
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "\n" << endl;
}

void riempiVettore() {
  int sx, dx;           // indice ultimo numero 
  int dato;             // numero da inserire 
  srand((unsigned)time(NULL));
  sx = 0;
  dx = TANTI - 1;
  while (sx <= dx){     // si incrociano indici
    dato = (rand() % MAX) + 1;
    if (dato % 2 == 0) {
      numeri[sx] = dato;
      sx = sx + 1;
    }
    else {
      numeri[dx] = dato;
      dx = dx - 1;
    }
  }
}
int main(void){
  riempiVettore(); // carica i dati nel vettore 
  mostraVettore(); // visualizza il vettore 
  system("pause");
}
 


