// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// pariDispari.cpp

#include "stdafx.h"

#include <iostream> 
#include <math.h> 

using namespace std;
int main()
{
	int a, b, c, delta;
	double x1, x2;
	cout << "Inserisci il coefficiente a : ";
	cin >> a;
	cout << "Inserisci il coefficiente b : ";
	cin >> b;
	cout << "Inserisci il coefficiente c : ";
	cin >> c;
	if (a == 0)
		cout << "divisore = 0 !" << endl;
	else
  {
    delta = (b*b - 4 * a*c);
		if ( delta < 0)
    	cout << "delta < 0 ! " << endl;
		else
		{
			x1 = (-b + sqrt(delta)) / 2*a;
			x2 = (-b - sqrt(delta)) / 2*a;
			cout << "la radice x1 = " << x1 << endl;
			cout << "la radice x2 = " << x2 << endl;
		}
  }
	system("PAUSE");
	return 0;
}

