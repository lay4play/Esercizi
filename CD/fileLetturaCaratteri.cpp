#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
#include <stdlib.h>      // srand, rand 
#include <time.h>        // time 
using namespace std;

int main(){
  char nomeFile[] = { "/proveFile/nomi.txt" };
  int err;
  char c;
  FILE *puntaFile;
  err = fopen_s(&puntaFile, nomeFile, "r");
  if (err == 0){                // ok apertura
    while (!feof(puntaFile)){   // file non finito
      c = fgetc(puntaFile);
      cout << c;
    }
    err = fclose(puntaFile);    // chiusura file 
  }
  else
    cout << "\nIl file non puo'essere aperto!";

  cout << "\n" << endl;
  system("pause");
}



