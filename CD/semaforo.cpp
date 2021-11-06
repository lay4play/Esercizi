// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// selezioneMultipla.cpp

#include "stdafx.h"

#include <iostream> 
using namespace std;
int main()
{
	const int VERDE = 0; // dichiaraz. costanti
	const int ROSSO = 2;
	const int ARANCIO = 1;
	int numero;
	cout << "Inserisci un numero tra 0 e 2: ";
	cin >> numero;
	switch (numero)
	{
	case VERDE:
		cout << "il semaforo e' VERDE" << endl;
		break;
	case ARANCIO:
		cout << "il semaforo e' ARANCIO" << endl;
		break;
	case ROSSO:
		cout << "il semaforo e' ROSSO" << endl;
		break;
	default:
		cout << "digitazione errata!" << endl;
	}
}





