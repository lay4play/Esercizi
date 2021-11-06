#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
using namespace std;

const int TANTI = 12;  // num elementi
const int MAX   = 89;  // valore massimo casuale
int numeri[TANTI];     // vettore da elaborare  

int main(void) {
  int min, max;      // numero massimo
  int x, y, temp;
  // riempiCasuale(){
  srand((unsigned)time(NULL));   
  for (x = 0; x < TANTI; x++)     
    numeri[x] = (rand() % MAX)+10;   
  // mostraVettore(){
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";
  // bubbleSort                                                               
  for (x = 0; x < TANTI - 1; x++){  
    for (y = 0; y < TANTI - 1; y++){   
      if (numeri[y] > numeri[y + 1]){
        temp = numeri[y];
        numeri[y] = numeri[y + 1];
        numeri[y + 1] = temp;
      }
    }
	}
  // mostraVettore(){
  cout << "\n" << endl;
  for (x = 0; x < TANTI; x++)
    cout << numeri[x] << " ";  
  cout << "\n" << endl;
}
 


