  #include "stdafx.h"          // per VisualStudio 2017 
  #include <iostream>
  #include <stdlib.h>          // srand, rand 
  #include <time.h>            // time 
  using namespace std;

  const int MAX = 80;          // range valori casuali
  const int RIGHE   = 2;       // dimensione matrice
  const int COLONNE = 2;        
  int miaMat[RIGHE][COLONNE];  // matrice bidimensionale
   
  
  void riempiCasuale() {
    int x, y;
    srand((unsigned)time(NULL));
    for(x = 0; x < RIGHE; x++)
      for(y = 0; y< COLONNE; y++)
        miaMat[x][y] = (rand() % MAX) + 10;
  }

  void mostraMatrice(){
    int x, y;
    for (x = 0; x < RIGHE; x++){
      cout << "\n" << endl;   // a riga nuova
      for (y = 0; y < COLONNE; y++)
        cout << miaMat[x][y] << " ";
    }
  }

  
  void caricaQuadrata() {
    int x, y, dato;
    dato = 0;
    cout << "inserisci coefficienti per riga:"  << endl;

    for (x = 0; x < RIGHE; x++) {     // seleziona riga
      for (y = 0; y < COLONNE; y++) { // riempie la riga
        cin >> dato;
        miaMat[x][y] = dato;
      }
    }
  }

  int determinante(){
    int x, y, diag1, diag2, valore;
    diag1 = 1; 
    diag2 = 1;
    if(COLONNE == RIGHE){
      for(y = 0; y < RIGHE; y++){
        diag1 = diag1 * miaMat[y][y];
        diag2 = diag2 * miaMat[y][RIGHE-1-y];
      }
      valore = diag1 - diag2;
    }
    else{
      cout << "ERRORE: la matrice non e' quadrata!" << endl;
      valore = -999;
   }
   return valore;
  }

int main(void) {
  int numero;
  //  riempiCasuale();      // carica i dati nella matrice
  caricaQuadrata();         // carica i dati nella matrice
  mostraMatrice();          // visualizza la matrice
  numero = determinante();  // calcola determinante
  cout << "\n\nil determinante vale: " << numero << endl;
  cout << "\n" << endl;
  system("pause");
}










