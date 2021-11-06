#include "stdafx.h"

#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
using namespace std;
const int TANTI = 10;  // num elementi
const int MAX   = 98;  // valore massimo casuale
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
    numeri[x] = (rand() % MAX)+1;   
}
void trovaMaxMin(int &num1, int &num2){
  int x;
  num1 = numeri[0];      // inzializzo il
  num2 = numeri[0];      // min e max
  for (x = 0; x < TANTI; x++){
    if (numeri[x] < num1)
      num1 = numeri[x];   // il minore
    if (numeri[x] > num2)
      num2 = numeri[x];   // il maggiore
  }
}
int main(void) {
  int min, max;           // numero massimo
  riempiCasuale();        // riempi il vettore
  trovaMaxMin(min, max);  // trova massimo e minimo
  cout << "numero minore   : " << min << endl;
  cout << "numero maggiore : " << max << endl;
  mostraVettore();        // visualizza il vettore 
  system("pause");
}
 


