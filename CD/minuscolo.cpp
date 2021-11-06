  #include "stdafx.h"               // per VisualStudio 2017 
  #include <iostream>
  #include <string.h>
  using namespace std;
  const int MAX = 30;                // costanti manifeste
  int main(void) {
    char parola[MAX + 1];            // vettore da 0 a MAX
    char minusc[MAX + 1];            // vettore da 0 a MAX
    int x;                           // var di servizio 
    int lun;
    cout << "Inserisci una parola: ";
    cin >> parola;                                    
    strcpy(minusc, parola);          // copia in altra variabile
    for (x = 0; minusc[x] != 0; x++){
     minusc[x] = tolower(minusc[x]); // trasforma in minuscolo
    }
    printf("La parola in minuscolo e': %s\n", minusc);    
    system("pause");
  }
 








