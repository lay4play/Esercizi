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
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "\n" << endl;
}
void riempiCasuale(){
  int x;
  srand((unsigned)time(NULL));   
  for (x = 0; x < TANTI; x++)     
    numeri[x] = (rand() % MAX)+10;   
}
void bubbleSort2(){
  int x, y;
  int temp;
  for (x = 0; x < TANTI - 1; x++){  
    for (y = 0; y < TANTI - 1 - x; y++)   
      if (numeri[y] > numeri[y + 1]){
        temp = numeri[y];
        numeri[y] = numeri[y + 1];
        numeri[y + 1] = temp;
      }
  }
}
int main(void) {
  int min, max;         // numero massimo
  riempiCasuale();      // riempi il vettore
  mostraVettore();      // visualizza il vettore 
  bubbleSort2();         // ordinamento
  mostraVettore();       // visualizza il vettore 
  system("pause");
}
 


