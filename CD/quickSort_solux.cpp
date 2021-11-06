#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
#include <stdlib.h>      // srand, rand 
#include <time.h>        // time 
using namespace std;

const int TANTI = 10;    // num elementi
const int MAX = 89;      // valore massimo casuale
int numeri[TANTI];       // vettore da elaborare  

void mostraVettore() {
  int x;
  cout << " "<< endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
//  cout << "\n" << endl;
}

void riempiCasuale() {
  int x;
  srand((unsigned)time(NULL));
  for (x = 0; x < TANTI; x++)
    numeri[x] = (rand() % MAX) + 10;
}

void scambia(int vet[], long x, long y) {
  int tmp = vet[x];
  vet[x] = vet[y];
  vet[y] = tmp;
}
int scegli_pivot(int i, int j) {
  int nuovoPivot;
  nuovoPivot = i;                   // primo elemento  (preso da Hoare)
 // nuovoPivot = ((i + j) / 2);     // prendo l'elemento centrale ??? 
  return nuovoPivot;
}

int partiziona(int vett[], int sx, int dx) {
  int pivot, ipivot;                         // valore di pivot, indice posizione pivot 
  ipivot = scegli_pivot(sx, dx);             // scegli indice per il pivot 
  pivot = vett[ipivot];                      // valore_pivot <- [posizione_iniziale_pivot]
  // effettua il partizionamento in due sotto vettori individuando q (posizione_effettiva_pivot) 
  while (sx < dx){
    while ((vett[sx] <= pivot) && (sx < dx)) // cerco elemento di sinistra > pivot
      sx++;
    while (vett[dx] > pivot)                 // cerco elemento di destra < pivot 
      dx--;
    if (sx < dx){                            // se non ho finito di ordinare 
      scambia(vett, sx, dx);                 // scambio i due elementi 
    }
  }
  scambia(vett, ipivot, dx);                 // posiziona il pivot nella sua cella q 
  mostraVettore();                           // visualizza un passo 
  return dx;
}

void quick_sort(int vett[], int e_sx, int e_dx){
  int q;                        // nuovo indice  pivot 
  if (e_sx < e_dx){             // ctr termine vettore       
    q = partiziona(vett, e_sx, e_dx);
    // -- chiamata sui sotto vettori sinistro e destro 
    quick_sort(vett, e_sx, q - 1);  // vet di sinistra
    quick_sort(vett, q + 1, e_dx);  // vet di destra 
  }
}


int main() {
  riempiCasuale();           // riempi il vettore con numeri causali 
  mostraVettore();           // visualizza il vettore disordinato    
 
  quick_sort(numeri, 0, TANTI-1); 
  mostraVettore();           // visualizza vettore ordinato    
 
  cout << "\n" << endl;
  system("pause");
}


