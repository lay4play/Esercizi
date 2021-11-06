// passaggio del vettore con puntatore 
#include "stdafx.h"

#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
#include <stdbool.h>    // true, false 
using namespace std;
const int TANTI = 10;   // num elementi
const int MAX = 20;     // valore massimo casuale

void mostraVettore(int vet[]){
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
int cerca(int vet[], int voluto){
  bool trovato = false;  // flag per esito 
  int x = 0;
  do                     // inizia scansione  
    if (vet[x] == voluto)
      trovato = true;    // il numero è presente 
    else
      x++;               // incrementa indice 
  while ((x < TANTI) && (trovato == false));
  if (x < TANTI)
    return x;
  else
    return -1;
}

int main(void){
  int num;                    // numero da cercare
  int posiz;                  // indice del risultato
  int numeri[TANTI];          // vettore da elaborare  
  riempiCasuale(numeri);      // riempi il vettore
  cout << "\nInserisci il numero desiderato: ";
  cin >> num;
  posiz = cerca(numeri, num); // ricerca nel vettore
  if (posiz < 0)              // visualizza i risultati 
    cout << "\n->il numero non e' presente";
  else
    cout << "\n->trovato in posizione " << posiz;
  mostraVettore(numeri);      // visualizza il vettore 

  system("pause");
}

