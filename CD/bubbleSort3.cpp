#include "stdafx.h"

#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
using namespace std;
const int TANTI = 12;  // num elementi
const int MAX   = 89;  // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  
void mostraVettore(){
  int x;
 // cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "" << endl;
}
void riempiCasuale(){
  int x;
  srand((unsigned)time(NULL));   
  for (x = 0; x < TANTI; x++)     
    numeri[x] = (rand() % MAX)+10;   
}
void bubbleSort3() {
  int  y, temp;
  bool scambi = false;
  do{                                    // ripeti finchè ci sono scambi 
    scambi = false;                      // inizializzo sentinella 
    for (y = 0; y < TANTI - 1; y++){     // ciclo di confronto tutti a coppie 
      if (numeri[y] > numeri[y + 1]){    // se ne trovo uno maggiore
        temp = numeri[y];                // li scambio tra loro    
        numeri[y] = numeri[y + 1];
        numeri[y + 1] = temp;
        scambi = true;                    // cambio valore alla sentinella
      }                                   // fine scambio   
    }                                     // fine ciclo interno 
    mostraVettore();                      // visualizza il vettore 
  }while (scambi == true);                // fine ciclo esterno 
}

int main(void) {
  int min, max;         // numero massimo
  riempiCasuale();      // riempi il vettore
  mostraVettore();      // visualizza il vettore 
  bubbleSort3();        // ordinamento con sentinella
  mostraVettore();      // visualizza il vettore 
  system("pause");
}
 


