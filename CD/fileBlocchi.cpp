#include "stdafx.h"          // per VisualStudio 2017 
//  direttorio di prova { "/proveFile/<xxx.yyy> "};
#include <iostream>
#include <cstring>     // strcpy
using namespace std;
#define MAX 50         // lunghezza del nome file 
#define MAXSTR 80      // lunghezza del nome file 
#define NUMRECORD 2    // numero di record  
char nomeFile[] = { "/proveFile/3sezA.dat" };

struct s_alunno{
  char cognome[30];
  char nome[20];
  unsigned int debiti;
} dato;

void riempiFileRecord(){
  int err1;
  int x;
  FILE *pFile;
  // scrittura file di record
  err1 = fopen_s(&pFile, nomeFile, "wb"); //w blocchi
  if (err1 == 0) {    // ok apertura
    for (x = 0; x < NUMRECORD; x++) {
      cout << " Inserisci la cognome: ";
      cin >> dato.cognome;
      cout << " Inserisci il nome   : ";
      cin >> dato.nome;
      cout << " Inserisci il numero dei debiti : ";
      cin >> dato.debiti;
      fwrite(&dato, sizeof(dato), 1, pFile);
    }
    fclose(pFile);
  }
  else
    cout << "Il file non puo essere aperto\n";
};

void mostraFileRecord(){
  int err1;
  FILE *pFile;
  // lettura del file di record 
  err1 = fopen_s(&pFile, nomeFile, "rb"); //r blocchi   
  if (pFile){
    cout << "\nCognome\t Nome \tdebiti";
    fread(&dato, sizeof(dato), 1, pFile);
    while(!feof(pFile)){
      cout << "\n" << dato.cognome;
      cout << "\t" << dato.nome;
      cout << "\t  " << dato.debiti;
      fread(&dato, sizeof(dato), 1, pFile);
    }
   fclose(pFile);
  }
  else
    cout << "Il file non puo essere aperto\n";
};

int creaFileRecord(){
  FILE *pFile;
  cout << "Nome del file destinazione: ";
  cin >> nomeFile;
  return fopen_s(&pFile, nomeFile, "wb"); //w blocchi
};

int main(){
  //  char nomeFile[MAX+1];    // file destinazione 

  riempiFileRecord();
  mostraFileRecord();
 
  cout << "\n" << endl;
  system("pause");
}
