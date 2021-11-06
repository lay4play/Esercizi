// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// lettere.cpp

#include "stdafx.h"

#include <iostream> 
using namespace std;
int main()
{
	int numero;
	cout << "Inserisci numero < 3 : ";
	cin >> numero;
	switch (numero)
	{
	case 1:
		cout << "digitato  UNO" << endl;
		break;
	case 2:
		cout << "digitato  DUE" << endl;
		break;
	default:
		cout << "numero errato!" << endl;
	}
}









