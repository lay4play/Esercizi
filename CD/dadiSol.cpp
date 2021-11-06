#include "stdafx.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int facce = 6;

int main(void) {
  int numeroLanci = 0;         // numero di lanci inserito dall'utente
  int unLancio = 0;            // contiene il singolo lancio 
  int conta = 0;               // variabile di conteggio per i cicli  
  int lanciFatti[facce];       // vettore dei totali (da 0 a 5)
  float frequenze[facce];      // vettore delle frequenze

  srand(time(0));  // inizializza il seme delle sequenza casuale

                   //inizializzazione vettore
  for (conta = 0; conta < facce; conta++)
    lanciFatti[conta] = 0;

  //leggi i numeri
  cout << "\nintrodurre il numero dei lanci :";
  cin >> numeroLanci;

    //lancia un dado ripetutamente
  for (conta = 0; conta < numeroLanci; conta++) {
    unLancio = (rand() % 6);         // genero un numero random tra 0 e 5
    switch (unLancio) {              // aggiornamento dei totali 
    case 0: lanciFatti[0]++;
      break;
    case 1: lanciFatti[1]++;
      break;
    case 2: lanciFatti[2]++;
      break;
    case 3: lanciFatti[3]++;
      break;
    case 4: lanciFatti[4]++;
      break;
    case 5: lanciFatti[5]++;
      break;
    }
  }

  // calcola la frequenza di ogni numero                                              
  for (conta = 0; conta < facce; conta++)
    frequenze[conta] = (float)lanciFatti[conta] / numeroLanci;

  // visualizza i risultati 
  cout << "\n dado uscite frequenza\n";
  for (conta = 0; conta < facce; conta++) {
    cout << conta + 1 << "\t" ;
    cout << lanciFatti[conta] << "\t";
    cout << frequenze[conta] << endl;
  }

  system("pause");
  return 0;
}









