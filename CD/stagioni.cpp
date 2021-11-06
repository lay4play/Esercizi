// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// stagioni.cpp

#include "stdafx.h"

#include <iostream> 
#include <string>   // per utilizzare le stringhe

using namespace std;
int main()
{
  char stagione;
  string nome, inizio, fine;
	cout << "Inserisci iniziale della stagione: ";
	cin >> stagione;
	switch (toupper(stagione)) //converte maiuscolo
	{
	case 'P':
		nome = "PRIMAVERA";
		inizio = "21 marzo";
		fine = "20 giugno";		  break;
	case 'E':
		nome = "ESTATE";
		inizio = "21 luglio";
		fine = "20 settembre";	break;
	case 'A':
		nome = "AUTUNNO";
		inizio = "21 settembre";
		fine = "20 dicembre";		break;
	case 'I':
		nome = "INVERNO";
		inizio = "21 dicembre";
		fine = "20 marzo";		  break;
	default:
		nome = "errore";
		inizio = "errore";
		fine = "errore";
		break;
	}
	cout << "la stagione e' " << nome << ": inizia ";
	cout << inizio << " e finisce " << fine << endl;
}

