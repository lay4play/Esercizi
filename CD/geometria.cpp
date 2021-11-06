// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// selezioneMultipla.cpp

#include "stdafx.h"

#include <iostream> 
using namespace std;
int main()
{
	int lati;
	cout << "Numero di lati (3-5) : ";
	cin >> lati;
	switch (lati)
	{
	case 3:
		cout << "e' un triangolo " << endl;
		break;
	case 4:
		cout << "e' un quadrilatero" << endl;
		break;
	case 5:
		cout << "e' un pentagono " << endl;
		break;
	default:
		cout << "altro poligono!" << endl;
	}
	return 0;
}

