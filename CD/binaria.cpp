#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
#include <stdlib.h>      // srand, rand 
#include <time.h>        // time 
using namespace std;
const int TANTI = 12;  // num elementi
const int MAX = 89;  // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  
void mostraVettore() {
  int x;
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "\n" << endl;
}
void riempiCasuale() {
  int x;
  srand((unsigned)time(NULL));
  for (x = 0; x < TANTI; x++)
    numeri[x] = (rand() % MAX) + 10;
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

int binaria(int inizio, int fine, int numero){
  int estrInf = inizio;            // estremo inferiore  
  int estrSup = fine - 1;          // estremo superiore    
  int medio;
  while (estrInf <= estrSup) {     // il vettore non è finito 
    medio = (estrInf + estrSup)/2; // nuovo valore iniziale 
    if (numero > numeri[medio])    // se il numero è maggiore 
      estrInf = medio + 1;         // è nella parte destra  
    else
      if (numero < numeri[medio])  // se il numero è minore 
        estrSup = medio - 1;       // è nella parte sinistra 
      else
        return (medio);            // altrimenti l'ho trovato 
  }
  return -1;                       // il numero non è presente
}

int main(void) {
  int cerca = 0;     // numero da cercare
  int trovato = -1;
  riempiCasuale();   // riempi il vettore
  mostraVettore();   // visualizza il vettore 
  bubbleSort1();     // ordinamento
  mostraVettore();   // visualizza il vettore 
  cout << "\nInserisci il numero da ricercare : ";
  cin >> cerca;
  trovato = binaria(0, TANTI, cerca);

  if (trovato == -1)
    cout << "\n il numero "<<  cerca <<" non e' presente!";
  else
    cout << "\n il numero e' in posizione " << trovato;
   
  cout << "\n" << endl;
  system("pause");
}


