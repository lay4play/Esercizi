#include "stdafx.h"

#include <iostream>
#include <stdlib.h>    // srand, rand 
#include <time.h>      // time 
using namespace std;
const int TANTI = 11;  // num elementi
const int MAX = 20;    // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  

void mostraVettore(){
  int x;
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "\n" << endl;
}

void riempiCasuale(){
  int x;
  srand((unsigned)time(NULL));
  for (x = 0; x < TANTI; x++){
    numeri[x] = (rand() % MAX) + 11;
  }
}

void ribalta(){
  int x, tempo;
  for (x = 0; x < TANTI/2; x++){
    tempo = numeri[x];
    numeri[x] = numeri[TANTI - 1 - x];
    numeri[TANTI - 1 - x] = tempo;
   }
}

int main(void){
  int x;
  riempiCasuale();       // riempi vettore
  mostraVettore();       // visualizza il vettore 
  ribalta();             // elabora i dati  
  mostraVettore();       // visualizza il vettore 
  system("pause");
}
 


