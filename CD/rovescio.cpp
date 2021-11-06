  #include "stdafx.h"        
  #include <iostream>
  #include <time.h>
  using namespace std;
  const int TANTI = 6;          
  int main(void) {
    int x, numLetto;                   
    int mioVettore[TANTI];      
    srand(time(0));              
    // genera i numeri casuali
    for (x = 0; x < TANTI; x++){
      cout << "inserisci un numero: ";
      cin >> numLetto;
      mioVettore[x] = numLetto;  
    }
    // visualizza i risultati 
    cout << "\n i numeri a rovescio : ";
    for (x = TANTI - 1; x > -1; x--) {
      cout << mioVettore[x] << " ";
    }
  }









