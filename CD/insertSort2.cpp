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
void bubbleSort1() {
  int x, y;
  int temp;
  for (x = 0; x < TANTI - 1; x++) {
    for (y = 0; y < TANTI - 1; y++)
      if (numeri[y] > numeri[y + 1]) {
        temp = numeri[y];
        numeri[y] = numeri[y + 1];
        numeri[y + 1] = temp;
      }
  }
}
void shiftR(int buco) {
  int x;                                // fine contiene ultima pos del vettore
  for (x = TANTI - 1; x >= buco; x--)   // sposta a destra dalla fine a buco
    numeri[x + 1] = numeri[x];          // crea il posto libero in buco 
}
void insertSort(int corrente) {
  int dove = 0;
  while ((numeri[dove] < corrente) && (numeri[dove] != 0))  // corrente è il numero da inserire
    dove++;                                                  // dove è la posizione del nuovo numero 
  shiftR(dove);
  numeri[dove] = corrente;
}

int main(void) {
  int nuovo, x;      // numero massimo

  for (x = 0; x < TANTI; x++)     // inizializza vettore
    numeri[x] = 0;

  srand((unsigned)time(NULL));    // inizializza il seme 
  for (x = 0; x < TANTI; x++) {
    nuovo = (rand() % MAX + 1);   // valori casuali tra 1 e massimo
    insertSort(nuovo);            // inseriscilo 
    mostraVettore();              // visualizza parziali    
  }

  
  system("pause");
}

