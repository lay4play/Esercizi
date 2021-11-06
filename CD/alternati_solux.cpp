#include "stdafx.h"

#include <iostream>
#include <stdlib.h>    // srand, rand 
#include <time.h>      // time 
using namespace std;
const int TANTI = 12;  // num elementi
const int MAX = 40;    // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  

void mostraVettore(){
  int x;
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "\n" << endl;
}

void riempiCasualeDispari(){
  int x;
  srand((unsigned)time(NULL));
  for (x = 0; x < TANTI; x++){
    numeri[x] = (rand() % MAX) + 10;
    if (numeri[x] % 2 == 0)
      numeri[x]= numeri[x] + 1;
  }
}

int main(void){
  int x;
  riempiCasualeDispari();
  mostraVettore();       // visualizza il vettore 
  for (x = 1; x < TANTI; x++) 
    if (x % 2 != 0)      // indice dispari - posizione pari
      numeri[x] = numeri[x] + numeri[x - 1];
  mostraVettore();       // visualizza il vettore 
  system("pause");
}
 


