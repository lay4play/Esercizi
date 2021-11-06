#include "stdafx.h"          // per VisualStudio 2017 
//  direttorio di prova { "/proveFile/<xxx.yyy> "};
#include <iostream>
#include <cstring>     // strcpy
using namespace std;
#define MAX 50         // lunghezza del nome file 
#define MAXSTR 80      // lunghezza del nome file 
#define NUMRECORD 2    // numero di record  
char nomeFile[] = { "/proveFile/anagraficaAlunniCPP.dat" };

struct s_alunno {
  unsigned int matricola;
  char cognome[30];
  char nome[20];
  char classe;
  char sezione;
  char corso[10];
  unsigned int debiti;
} dato;

void datiAlunnoIN(int matricola) {
  dato.matricola = matricola;
  cout << " Matricola : " << matricola << endl;
  cout << " Inserisci la cognome: ";
  cin >> dato.cognome;
  cout << " Inserisci il nome   : ";
  cin >> dato.nome;
  cout << " Inserisci la classe : ";
  cin >> dato.classe;
  cout << " Inserisci la sezione: ";
  cin >> dato.sezione;
  cout << " Inserisci il corso  : ";
  cin >> dato.corso;
//  cout << " Inserisci il numero dei debiti : ";
//  cin >> dato.debiti;
};

void datiAlunnoOut(){
  cout << "\n" << dato.matricola;
  cout << "\t" << dato.cognome;
  cout << "\t" << dato.nome;
  cout << "\t" << dato.classe;
  cout << " " << dato.sezione;
  cout << "\t  " << dato.corso;
};

int ultimaMatricolaInserita(){
  int err1, dimRec, dimFil, tanti;
  FILE *pFile;
  int last = 0;
  err1 = fopen_s(&pFile, nomeFile, "rb"); //w blocchi
  if (err1 == 0){
    fseek(pFile, 0, SEEK_END);
    dimRec = sizeof(dato);
    dimFil = ftell(pFile);
    tanti = dimFil / dimRec;
   // cout << "\nDimensione record: " << dimRec;
   // cout << "\nDimensione file  : " << dimFil;
   // cout << "\nnr. record       : " << tanti;
    if (dimFil > 0){
      err1 = fseek(pFile, sizeof(dato) * (tanti - 1), SEEK_SET);
      if (!feof(pFile)) {
        fread(&dato, sizeof(dato), 1, pFile);
        last = dato.matricola;
      }
      else cout << "\nfine file";
    }
    fclose(pFile);
  }
  else
    cout << "\nIl file non puo essere aperto\n";
  return last;
};


void mettiRecord(int matricola){
  int err1;
  FILE *pFile;
  err1 = fopen_s(&pFile, nomeFile, "ab");        // w blocchi
  if (err1 == 0){                                // ok apertura
    if (err1 == 0){                              // ok posiziona
      datiAlunnoIN(matricola);
      fwrite(&dato, sizeof(dato), 1, pFile);
    }
    else
      cout << "Errore nel posizionamento\n";
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
    cout << "\n\tCognome\t Nome \tclasse    corso ";
    fread(&dato, sizeof(dato), 1, pFile);
    while(!feof(pFile)){
      datiAlunnoOut();
      fread(&dato, sizeof(dato), 1, pFile);
    }
   fclose(pFile);
  }
  else
    cout << "Il file non puo essere aperto\n";
};

void mostraUnRecord(int mat){
  int err1;
  FILE *pFile;
  // lettura del file di record 
  err1 = fopen_s(&pFile, nomeFile, "rb");   
  if (pFile) {
    err1 = fseek(pFile, sizeof(dato)*(mat-1), SEEK_SET);
    if (!feof(pFile)){
      fread(&dato, sizeof(dato), 1, pFile);
      datiAlunnoOut();
    }
    else
      cout << "\nMatricola non presente \n";
    fclose(pFile);
  }
  else
    cout << "\nIl file non puo essere aperto\n";
};

int creaFileRecord(){
  FILE *pFile;
  cout << "Nome del file destinazione: ";
  cin >> nomeFile;
  return fopen_s(&pFile, nomeFile, "wb"); //w blocchi
};

int main(){

  int last, voluto  =  0;
  last = ultimaMatricolaInserita();
  mettiRecord(last+1);
  mostraFileRecord();
  cout << "\n" << endl;
  system("pause");
}
