// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// mesi.cpp

#include "stdafx.h"

#include <iostream> 
#include <string>   // per utilizzare le stringhe
using namespace std;
int main()
{
	int mese;
	string nome;
	cout << "Inserisci il numero del mese : ";
	cin >> mese;
  switch (mese)
	{
	case 1:
		nome = "gennaio";
		break;
	case 2:
		nome = "febbraio";
		break;
	case 3:
		nome = "marzo";
		break;
	case 4:
		nome = "aprile";
		break;
	case 5:
		nome = "maggio";
		break;
	case 6:
		nome = "giugno";
		break;
	case 7:
		nome = "luglio";		break;
	case 8:
		nome = "agosto";		break;
	case 9:
		nome = "settembre";	break;
	case 10:
		nome = "ottobre";		break;
	case 11:
		nome = "novembre";	break;
	case 12:
		nome = "dicembre";	break;
	default:
		nome = " e'  errato";
	}
	cout << "il nome del mese e' " << nome << endl;
}









