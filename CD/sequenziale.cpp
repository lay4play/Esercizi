#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
#include <stdbool.h>    // true, false 
using namespace std;
const int TANTI = 10;   // num elementi
const int MAX   = 20;   // valore massimo casuale

int main(void){
  int voluto, x;   
  int posiz = 0;         // indice del risultato
  int numeri[TANTI];     // vettore da elaborare  
  bool trovato = false;  // flag per esito 
  // riempi il vettore
  srand((unsigned)time(NULL));   
  for (x = 0; x < TANTI; x++)     
    numeri[x] = (rand() % MAX);   
  // richiedi il numero 
	cout << "\nInserisci il numero desiderato: ";
  cin >> voluto;
  // ricerca nel vettore
  for (x = 0; x < TANTI; x++){
	  if (numeri[x] == voluto){
      posiz = x;
      trovato = true;    // il numero è presente 
		}
	} 
  // visualizzo il risultato
	if (trovato)
    cout << "\n->trovato in posizione " << posiz;
  else
    cout << "\n->il numero non e' presente"; 
  // visualizzo il vettore per verifica soluzione
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  cout << "\n" << endl;
}
 
 
