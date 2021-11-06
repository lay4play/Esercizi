/* File: ordinazioneSol.cpp */
/* Time-stamp: "2018-09-06 03:26:06 paolo"                 */
/* Scopo: definizione ed uso di una tabella di record      */

#include "stdafx.h"          // per VisualStudio 2017 

#include <iostream>
#include <cstring>           // strcpy
#include <stdlib.h>          // srand, rand 
#include <time.h>            // time 
using namespace std;

#define NUM 33
int main() {
  struct s_prenotazione {
    int tavolo;
    int data;
    int totcosto;
    struct s_bere {
      int codicebe;
      int totbe;
      int costobe;
    }bev[10];             // possibili 10 bevande per prenotazione 
    struct s_mangiare {
      int codicepo;
      int totpo;
      int costopo;
    }port[20];            // possibili 20 portate per prenotazione
  }pre[NUM];              // definiamo NUM prenotazioni

  int i, j;
  cout << ("Inserisci Ordinazione");

  for (i = 0; i < NUM; i++) {
    cout << "Inserisci numero del tavolo da 1 a 20 : ";
    cin >> pre[i].tavolo;
    cout << "Inserisci data : ";
    scanf("%d", &pre[i].data);
    for (j = 0; j < NUM; j++) {
      cout << "Inserisci codice portata da 1 a 200 : ";
      cin >> pre[i].port[j].codicepo;
      cout << "Inserisci quantita portata : ";
      cin >> pre[i].port[j].totpo;
      cout << "Inserisci costo portata : ";
      cin >> pre[i].port[j].costopo;
      cout << "Inserisci codice bevanda da 1 a 20 : ";
      cin >> pre[i].bev[j].codicebe;
      cout << "Inserisci quantita bevanda : ";
      cin >> pre[i].bev[j].totbe;
      cout << "Inserisci costo bevanda : ";
      cin >> pre[i].bev[j].costobe;
    }
  }

  cout << "\n" << endl;
  system("pause");
}


