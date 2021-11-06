#include "stdafx.h"

#include <iostream>
#include <stdlib.h>        // srand, rand 
#include <time.h>          // time 
using namespace std;

const int MAX    = 20;     // range valori casuali
const int ORE    = 5;      // dimensione matrice
const int GIORNI = 1;        
int miaMat[GIORNI][ORE];   // matrice bidimensionale
int medie[GIORNI];         // vettore delle medie
int tempMAX, oraMAX, giornoMAX;   // per il massimo
char giorno[11];
char fascia[5];

// da rivedere con le stringhe 
char decodGiorno(int nrGiorno){
  switch (nrGiorno)
  {
  case 1: {
    strcpy_s(giorno,"lunedi"); break;
  }
  case 2: {
    strcpy_s(giorno, "martedi"); break;
  }
  case 3: {
    strcpy_s(giorno, "mercoledi"); break;
  }
  case 4: {
    strcpy_s(giorno, "giovedi"); break;
  }
  case 5: {
    strcpy_s(giorno, "venerdi"); break;
  }
  case 6: {
    strcpy_s(giorno, "sabato"); break;
  }
  case 0: {
    strcpy_s(giorno, "domenica"); break;
  }
  default:
    break;
  }
  return ' ';
}

// da rivedere con le stringhe 
void decodFascia(int nrOra){
	switch (nrOra)
	{
	case 0: {
		cout << "11-12"; break;
	}
	case 1: {
		cout << "12-13"; break;
	}
	case 2: {
		cout << "13-14"; break;
	}
	case 3: {
		cout << "14-15"; break;
	}
	case 4: {
		cout << "15-16"; break;
	}  default:
		cout << " error "; break;
		break;
	}
}
// da rivedere con le stringhe 
char decodFascia1(int nrOra){
  switch (nrOra)
  {
  case 0: {
    strcpy_s(fascia, "11-12"); break;
  }
  case 1: {
    strcpy_s(fascia, "12-13"); break;
  }
  case 2: {
    strcpy_s(fascia, "13-14"); break;
  }
  case 3: {
    strcpy_s(fascia, "14-15"); break;
  }
  case 4: {
    strcpy_s(fascia, "15-16"); break;
  }  default:
    break;
  }
  return ' ';
}
void azzeraMatrice(){
  int x, y;
  for(x = 0; x < GIORNI; x++)
    for(y = 0; y < ORE;y++)
      miaMat[x][y] = 0;
}

void riempiCasuale(){
  int x, y;
  srand((unsigned)time(NULL));
  for(x = 0; x < GIORNI; x++)
    for(y = 0; y < ORE; y++)
      miaMat[x][y] = (rand() % MAX) + 150;
}

void riempiManuale(){
  int x, y;
  int valore;
  for (x = 0; x < GIORNI; x++)
    for (y = 0; y < ORE; y++){
      cout << "inserisci la temperatura : ";
      cin >> valore;
      miaMat[x][y] = valore;
    }
}
void mostraMatrice(){
  int x, y;
  for (x = 0; x < GIORNI; x++){
    cout << "\n giorno "<< x+1<<": ";  // a riga nuova
    for (y = 0; y < ORE; y++)
      cout << miaMat[x][y] << " ";
  }
  cout << "\n " << endl;                 // a riga nuova
}
 
void riempiPerRighe(){
  int x, y, conta;
  conta = 0;
  for(x = 0; x < GIORNI; x++){  // ciclo seleziona riga
    for(y = 0; y < ORE; y++){   // ciclo riempie la riga
      conta = conta + 1;
      miaMat[x][y] = conta;
    }
  }
}

void riempiPerColonne(){
  int x, y, conta;
  conta = 0;
  for(y = 0; y < ORE; y++){      // ciclo seleziona colonna
    for(x = 0; x < GIORNI; x++){ // ciclo riempie la colonna
      conta = conta + 1;
      miaMat[x][y] = conta;
    }
  }
 }

void riempiRiga(int riga, int valore) {
  int y;
  for (y = 0; y < ORE; y++) {
    miaMat[riga][y] = valore;
  }
}

void riempiColonna(int colonna, int valore) {
  int x;
  for (x = 0; x < GIORNI; x++) {
    miaMat[x][colonna] = valore;
  }
}
    
void calcolaMedia(){
  int x, y, media;
  for (y = 0; y < ORE; y++){      // per tutte le fasce   
    media = 0;
    for (x = 0; x < GIORNI; x++){ // sommo i giorni 
      media = media + miaMat[x][y];
    }
    medie[y] = media / GIORNI;    // divido per i giorni 
  }
}

void calcolaMassimo(){
  int x, y;
  tempMAX = 0;
  oraMAX = 0;
  giornoMAX = 0; 
  for(y = 0; y < ORE; y++){
    for(x = 0; x < GIORNI; x++){                   // ciclo riempie la colonna
      if(miaMat[x][y] > tempMAX){
        tempMAX = miaMat[x][y];
        oraMAX = y;
        giornoMAX = x;
      }
		}
  }
	cout<<"\ntemperatura massima: "<<tempMAX;
	cout<<"\nfascia oraria      : ";
	decodFascia(oraMAX); //da y a fascia
 }


void mostraVettore(){
  int y;
  cout << "\n\ntemperature media per fasce orarie\n";
  for (y = 0; y < ORE; y++)
    cout << medie[y] << " ";
  cout << "\n" << endl;      // a riga nuova
}

int main(void){
  riempiManuale();   // carica i dati nella matrice
  mostraMatrice();   // visualizza la matrice
  calcolaMassimo();  // carica temperatura massima
  calcolaMedia();    // calcola le medie per fasce
  mostraVettore();
  system("pause");
}
