  #include "stdafx.h"          // per VisualStudio 2017 
  #include <iostream>
  #include <iomanip>
  #include <time.h>            // time 
  using namespace std;

  const int MAX = 80;          // range valori casuali
  const int RIGHE   = 11;      // dimensione matrice
  const int COLONNE = 11;        
  int miaMat[RIGHE][COLONNE];  // matrice bidimensionale
   

 void mostraMatrice(){
  int x, y;
  setw(4);
   for (x = 0; x < RIGHE; x++){
     cout << "\n" << endl;   // a riga nuova
     for (y = 0; y < COLONNE; y++)
       cout << miaMat[x][y] << " ";
   }
 }

  void riempiPitagorica() {
   int x, y;
   for (x = 0; x < RIGHE; x++){   // seleziona riga
     for (y = 0; y < RIGHE; y++){ // riempie la riga
       miaMat[x][y] = (x+1) * (y+1);
     }
   }
 }

int main(void) {
  riempiPitagorica();  // riempi i dati nella matrice
  mostraMatrice();     // visualizza la matrice
  system("pause");
}










