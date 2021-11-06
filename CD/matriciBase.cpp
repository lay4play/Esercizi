  #include "stdafx.h"          // per VisualStudio 2017 
  #include <iostream>
  #include <stdlib.h>          // srand, rand 
  #include <time.h>            // time 
  using namespace std;

  const int MAX = 80;          // range valori casuali
  const int RIGHE   = 3;       // dimensione matrice
  const int COLONNE = 5;        
  int miaMat[RIGHE][COLONNE];  // matrice bidimensionale
    
  void azzeraMatrice(){
    int x, y;
    for(x = 0; x < RIGHE; x++)
      for(y = 0; y < COLONNE;y++)
        miaMat[x][y] = 0;
  }

  void riempiCasuale(){
    int x, y;
    srand((unsigned)time(NULL));
    for(x = 0; x < RIGHE; x++)
      for(y = 0; y< COLONNE; y++)
        miaMat[x][y] = (rand() % MAX) + 11;
  }

  void mostraMatrice(){
    int x, y;
    for (x = 0; x < RIGHE; x++){
      cout << "\n" << endl;   // a riga nuova
      for (y = 0; y < COLONNE; y++)
        cout << miaMat[x][y] << "- ";
    }
  }

  
  void riempiPerRighe(){
    int x, y, conta;
    conta = 0;
    for(x = 0; x < RIGHE; x++){     //ciclo seleziona riga
      for(y = 0; y < COLONNE; y++){ //ciclo riempie la riga
        conta = conta + 1;
        miaMat[x][y] = conta;
      }
    }
  }

  void riempiRiga(int riga, int valore){
    int y;
    for(y = 0; y < COLONNE; y++){
      miaMat[riga][y] = valore;
    }
  }
  
  void riempiColonna(int colonna, int valore){
    int x;
    for (x = 0; x < RIGHE; x++){
      miaMat[x][colonna] = valore;
    }
  }
  void riempiPerColonne(){
    int x, y, conta;
    conta = 0;
    for(y = 0; y < COLONNE; y++){ //ciclo seleziona colonna
      for(x = 0; x < RIGHE; x++){ //ciclo riempie la colonna
        conta = conta + 1;
        miaMat[x][y] = conta;
      }
    }
  }

  void riempiPitagorica() {
    int x, y, conta;
    conta = 10;
    for(y = 0; y < COLONNE; y++)
      for(x = 0; x < RIGHE; x++)
        miaMat[x][y] = (x+1)*(y+1);
  }

  int determinante(){
    int x, y, diag1, diag2, valore;
    diag1 = 1; diag2 = 1;
    if(COLONNE == RIGHE){
      for(y = 0; y < RIGHE; y++){
        diag1 = diag1 * miaMat[y][y];
        diag2 = diag2 * miaMat[RIGHE-1-y][RIGHE-1-y];
      }
      valore = diag1 - diag2;
    }
    else{
      cout << "ERRORE: la matrice non è quadrata!";
      valore = -999;
   }
   return valore;
  }

int main(void) {
  int numero;
  riempiCasuale();        // carica i dati nella matrice
  riempiPerRighe();       // carica i dati per righe
  mostraMatrice();         // visualizza la matrice
  azzeraMatrice();
  riempiPerColonne();     // carica i dati per colonne
  mostraMatrice();         // visualizza la matrice
  azzeraMatrice();
  riempiPitagorica();     // riempie tabellina pitagorica
  mostraMatrice();         // visualizza la matrice
  numero = determinante();// calcola determinante
  cout << "il determinante vale:" << numero;


  azzeraMatrice();
  riempiRiga(1, 7);       // riempie una riga
  mostraMarice();         // visualizza la matrice
  riempiColonna(3, 7);    // riempie una colonna
  mostraMarice();         // visualizza la matrice

  cout << "\n" << endl;
  system("pause");
}










