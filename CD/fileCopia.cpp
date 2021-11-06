#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
#include <stdlib.h>      // srand, rand 
#include <time.h>        // time 
using namespace std;

#define MAX 50     // lunghezza  del nome file 
int main(){
  char nomeFileIN[MAX+1];   
  char nomeFileOUT[MAX+1];  // file destinazione 
  int err1, err2;
  char c;
  FILE *fileIn,*fileOut;
  cout << "Nome del file da leggere : ";
  cin >> ("%s", nomeFileIN);
  cout<< "Nome del file destinazione: ";
  cin >>("%s", nomeFileOUT);
  err1 = fopen_s(&fileIn, nomeFileIN, "r");
  err2 = fopen_s(&fileOut, nomeFileOUT, "a");
  if ((err1+err2) == 0){    // ok apertura
    while (!feof(fileIn)){  // file non finito
      c = fgetc(fileIn);    // carattere letto
      fputc(c, fileOut);    // c e’ scritto in out  
    }
    fclose(fileIn);         // chiusura dei file    
    fclose(fileOut);
  }
  else
    cout << "\nErrore in apertura file !";

  cout << "\n" << endl;
  system("pause");
}


// { "/proveFile/nomi.txt" };


