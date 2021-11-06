#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
#include <stdlib.h>      // srand, rand 
#include <time.h>        // time 
using namespace std;

const int TANTI = 12;         // num elementi
const int MAX = 89;           // valore massimo casuale
int numeri[TANTI+1] = { 0 };  // vettore da elaborare  

void mostraVettore() {
  int x;
  cout << " "<< endl;
  for (x = 1; x <= TANTI; x++)
    cout << numeri[x] << " ";
//  cout << "\n" << endl;
}

void riempiCasuale() {
  int x;
  srand((unsigned)time(NULL));
  for (x = 1; x <= TANTI; x++)
    numeri[x] = (rand() % MAX) + 10;
}

void swap(int vet[], long x, long y) {
  int tmp = vet[x];
  vet[x] = vet[y];
  vet[y] = tmp;
}

int scivola_2(int vet[], int x, int cont, int dactr) {      // sposta in dietro di due 
  swap(vet, x, dactr);
  if (x = cont)
  {
    x--;
  }
  else
  {
    x--;
    x--;
  }
  return x;
}

int main() {
  int x, y, cont, fine2;
  int dactr1, dactr2;
  // La fine la imposto a meno 1 della lunghezza che scrivo nella dichiarazione del vettore
  // dichiarato così le celle del vettore vanno da 0 a 5; 
  // io utilizzerò il vettore dalla cella 1;
  cont = 0;
  //Imposto la fine del secondo ciclo ovvero la metà della lunghezza del vettore
  fine2 = (cont + TANTI) / 2;
  //Richiamo procedura riempie vettore e lo visualizza 
  riempiCasuale();
  mostraVettore();
  
  // ciclo esterno che ripete i controlli per la lunghezza del vettore 
  for (y = 1; y <= TANTI; y++) {
    // Imposto x uguale ad un contatore ; 
    // al contatore gli sommo uno ogni volta che finisce il ciclo interno;
    // visto che a fine di ogni ciclo interno ottengo in prima posizione del vettore il minore ,
    // quelle celle non le controllo, 
    // infatti ad ogni ciclo interno controllo sempre un elemento in meno nel vettore
    x = cont + 1;
    while (x <= fine2)
    {
      dactr1 = (2 * x) - cont;
      dactr2 = (2 * x) - cont + 1;
      //controllo se il numero in posizione doppia e doppia +1: se minore li scambio 
      if (numeri[x] > numeri[dactr1])
        x = scivola_2(numeri, x, cont, dactr1);        // sposta indietro di due 
      else
        if ((numeri[x] > numeri[dactr2]) && (x < fine2))
          x = scivola_2(numeri, x, cont, dactr2);      // sposta indietro di due 
      x++;
    }
    cont++;   // posizione iniziale del vettore - a sinistra i numeri sono ordinati 
    fine2 = (cont + TANTI) / 2;   // aggiorno la fine del ciclo interno col nuovo valore centrale
  }

  mostraVettore();
  cout << "\n" << endl;
  system("pause");
}


