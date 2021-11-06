#include <stdio.h>
#include <stdlib.h>  // srand, rand 
#include <time.h>    // time 
#include <time.h>    // time 

const int TANTI = 12;  // num elementi
const int MAX   = 89;  // valore massimo casuale


int main(void) {
  int numeri[TANTI];     // vettore da elaborare  
  int min, max;      // numero massimo
  int x, y, temp;

  // riempiCasuale(){
  srand((unsigned)time(NULL));   
  for (x = 0; x < TANTI; x++)     
    numeri[x] = (rand() % MAX)+10;   
  // mostraVettore(){
  printf("\n" );
  for (x = 0; x < TANTI; x++)
    printf("%3d",numeri[x]) ;
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
  printf("\n" );
	  for (x = 0; x < TANTI; x++)
     printf("%3d", numeri[x]) ;
  printf("\n" );
}
 


