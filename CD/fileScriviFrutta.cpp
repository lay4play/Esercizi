#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
using namespace std;
#define MAX 50      // lunghezza del nome file 
#define MAXSTR 81   // lunghezza riga di input
#define PAROLE  5   // parole da scrivere    

int main(){
  char buffer[MAXSTR + 1];
  char nomeFileIN[] = { "/proveFile/nomi.txt" };
  cout << "nome del file da scrivere : ";
  cin >> nomeFileIN;
  int err1;
  FILE *pFile;
  err1 = fopen_s(&pFile, nomeFileIN,"w");
  if (err1 == 0){    // ok apertura
     for (int x = 0; x < PAROLE; x++) {
       cout << "inserisci il nome del frutto : ";
       cin >> buffer;
       fputs(buffer, pFile);      // scriviamo il nome 
       fputc((int) '\n', pFile);  // aggiungiamo il CR
      }                  
   fclose(pFile);
  }
  else
    printf("Il file non puo essere aperto\n");

  cout << "\n" << endl;
  system("pause");
}
