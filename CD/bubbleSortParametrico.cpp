#include "stdafx.h"

#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 

using namespace std;
const int TANTI = 11;   // num elementi
const int MAX   = 89;   // valore massimo casuale

void mostraVettore(int vet[]) {
  int x;
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << vet[x] << " ";
  cout << "\n" << endl;
}
void riempiCasuale(int vet[]){
  int x;
  srand((unsigned)time(NULL));
  for (x = 0; x < TANTI; x++)
    vet[x] = (rand() % MAX);
}
void bubbleSort5(int vet[], int quanti){
  int  y, temp;
  bool scambi = false;
  do{                                    // ripeti finchè ci sono scambi 
    scambi = false;                      // inizializzo sentinella 
    for (y = 0; y < quanti - 1; y++){    // ciclo di confronto tutti a coppie 
      if (vet[y] > vet[y + 1]){          // se ne trovo uno maggiore
        temp = vet[y];                   // li scambio tra loro    
        vet[y] = vet[y + 1];
        vet[y + 1] = temp;
        scambi = true;                    // cambio valore alla sentinella
      }                                   // fine scambio   
    }                                     // fine ciclo interno 
  }while (scambi == true);                // fine ciclo esterno 
}

int main(void){
  int numeri[TANTI];                      // vettore da elaborare  
  riempiCasuale(numeri);                  // riempi il vettore
  mostraVettore(numeri);                  // visualizza il vettore 
  bubbleSort5(numeri, TANTI);             // ordinamento con sentinella
  mostraVettore(numeri);                  // visualizza il vettore 

  system("pause");
}

/*
// calcolo dimensione vettore
int quanti = sizeof(numeri) / sizeof(numeri[0]); // calcolo dimensione vettore
cout << "\nquanti " << quanti << endl;

*/

