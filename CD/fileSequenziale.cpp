#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>       // strcpy
#include <stdlib.h>      // srand, rand 
#include <time.h>        // time 
using namespace std;

int main(){
  char nomeFile[] = { "/proveFile/prova.txt" };
  int err;
  FILE *puntaFile;
  err = fopen_s(&puntaFile, nomeFile, "r");
  if (err == 0)    // verifica eventuali errori di apertura
    cout << "\nFile aperto correttamente da fopen_s()";
  else
    cout << "\nIl file non puo'essere aperto!";
  cout << "\n"<< endl;

  if (feof(puntaFile))    // verifica se EOF
    cout << "\nFile finito";
  else
    cout << "\nFile non finito";

  err = fclose(puntaFile);
  if (err == 0)  // verifica errori di chiusura
    cout << "\nFile chiuso correttamente";
  else
    cout << "\nIl file non puo' essere chiuso!";
  
  cout << "\n" << endl;



  system("pause");
}


