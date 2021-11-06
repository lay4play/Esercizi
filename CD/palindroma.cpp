  #include "stdafx.h"          // per VisualStudio 2017 
  #include <iostream>
  #include <string.h>
  using namespace std;
        
  const int MAX = 30;           // costanti manifeste
  int main(void) {
    int mioVettore[MAX];        // vettore da 0 a MAX-1
    char parola[MAX + 1];       // vettore da 0 a MAX
    char minusc[MAX + 1];       // vettore da 0 a MAX
    int x, y, palin;            // var di servizio 
    int lun;
    cout << "Parola palindroma\n";
    cout << "Inserisci una parola: ";
    cin >> parola;                                    
    strcpy(minusc, parola);     // copia in altra variabile
    for (x = 0; minusc[x] != 0; x++) {
     minusc[x] = tolower(minusc[x]);  //trasfoema in minuscolo
    }
    printf("La parola in minuscolo e': %s\n", minusc);   
                                // verifica se e' palindroma
    lun = strlen(minusc);       // trovo la sua lunghezza
    x = 0;
    y = lun - 1;
    palin = 1;                  // inizializzo a vero
    while (x < y && palin == 1) {
      if (minusc[x] != minusc[y]) {
        palin = 0;
      }
      x++;
      y--;
    }
    if (palin == 1)             // stampa esito 
      cout <<  "La parola e' palindroma\n";
    else
      cout << "La parola non e' palindroma\n";
   
    system("pause");
  }
 








