#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
using namespace std;
#define MAX 50      // lunghezza del nome file 
#define MAXSTR 81   // lunghezza riga di input
#define PAROLE  5   // parole da scrivere    

int main(){
  char nomeFile[] = { "/proveFile/frutta.txt" };
  char buffer[MAXSTR+1];
  int err1;
  FILE *pFile;
  err1 = fopen_s(&pFile, nomeFile,"r");
  if (err1 == 0){    // ok apertura
    while(fgets(buffer, MAXSTR, pFile) != NULL)  
     cout << buffer;                       
     fclose(pFile);
  }
  else
    printf("Il file non puo essere aperto\n");

  cout << "\n" << endl;
  system("pause");
}

