  #include "stdafx.h"          // per VisualStudio 2017 
  #include <iostream>
  #include <string>
  using namespace std;

  const int TANTI = 4;          // area globale
  string cognomi[TANTI + 1];
  string nomi[TANTI + 1];
  
  void riempiVettori(){
    int x;
    for (x = 0; x < TANTI; x++){
      cout << "Inserisci cognome: ";
      cin >> cognomi[x];
      cout << "Inserisci nome: ";
      cin >> nomi[x];
    }
  }
  void mostraVettori() {
    int x;
    for (x = 0; x < TANTI; x++)
      cout << "\n" << x << " "
      << cognomi[x] << " " << nomi[x];
    cout << "" << endl;
  }
  void cercaAlunni(){
    int x;
    string cognome, nome;    // var di servizio 
    cout << "\nInserisci nome desiderato: ";
    cin >> nome;
    for (x = 0; x < TANTI; x++) {
      if (nome == nomi[x])
        cout << x << " "
         << cognomi[x] << " " << nomi[x] << endl;
    }
  }
  int main(void) {
    riempiVettoriP(); // carica i dati nei vettori 
    mostraVettoriP(); // visualizza il vettore  
    cercaAlunno();    // stampa alunni ricercati  
  }
 








