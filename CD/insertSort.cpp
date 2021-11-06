#include "stdafx.h"

#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
using namespace std;
const int TANTI = 10;  // num elementi
const int MAX   = 89;  // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  
void mostraVettore(){
  int x;
 // cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "" << endl;
}

void shiftR(int buco){
  int x;                         
  for (x = TANTI-1; x >= buco; x--) // sposta a destra  
    numeri[x + 1] = numeri[x];      // posto libero in buco 
}
void insertSort(){
  int nuovo, x;      
  int dove;                     // posizione nuovo numero
  srand((unsigned)time(NULL));  // inizializza il seme 
  for (x = 0; x < TANTI; x++)   // inizializza vettore
    numeri[x] = 0;
  //inizio algoritmo di inserzione
  for (x = 0; x < TANTI; x++) {
    nuovo = (rand() % MAX + 1); // nuovo numero 
    dove = 0;
    while ((numeri[dove] < nuovo) && (numeri[dove] != 0))
      dove++;           // trova il posto per inserimento                          
    shiftR(dove);       // crea un buco dove inserire
    numeri[dove] = nuovo;
    mostraVettore();    // per vedere passo passo 
  }
}
int main(void) {
    insertSort();           
    mostraVettore();         
    system("pause");
}

