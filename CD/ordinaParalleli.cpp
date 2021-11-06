  #include "stdafx.h"          // per VisualStudio 2017 
  #include <iostream>
  #include <string>
  using namespace std;

  const int TANTI = 4;          // area globale
  string cognomi[TANTI + 1];
  string nomi[TANTI + 1];

  void riempiVettoriP() {
    int x;
    for (x = 0; x < TANTI; x++){
      cout << "Inserisci cognome: ";
      cin >> cognomi[x];
      cout << "Inserisci nome: ";
      cin >> nomi[x];
    }
  }
  void mostraVettoriP() {
    int x;
    for (x = 0; x < TANTI; x++)
      cout << "\n" << x << " "
      << cognomi[x] << " " << nomi[x];
    cout << "" << endl;
  }
  void bubbleParalleli() {
    int  y, temp;
    bool scambi = false;
    do {                                   
      scambi = false;                      
      for (y = 0; y < TANTI - 1; y++) {     
        if (numeri[y] > numeri[y + 1]) {    
          //scambia vettore 1 - cognomi


          temp = numeri[y];               
          numeri[y] = numeri[y + 1];
          numeri[y + 1] = temp;
          // scambia vettore 2 - nomi 


          scambi = true;                    
        }                                   
      }                                     
    } while (scambi == true);                
  }

 int main(void) {
    riempiVettoriP();   // carica i dati nei vettori 
    mostraVettoriP();   // visualizza il vettore  
    bubbleParalleli();  // ordina alunni  
    mostraVettoriP();   // visualizza il vettore  
    system("pause");
 }
 








