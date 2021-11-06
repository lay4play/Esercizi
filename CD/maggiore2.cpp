// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	int minore, maggiore;
	cout << "Inserisci il I numero \t: ";
	cin >> num1;
	cout << "Inserisci il II numero\t: ";
	cin >> num2;
	if (num1 > num2)
	{
		minore = num2;
		maggiore = num1;
	}
	else
	{
		minore = num1;
		maggiore = num2;
	}
	cout << "il numero minore e'  : \t" << minore << endl;
	cout << "il numero maggiore e': \t" << maggiore << endl;

	system("PAUSE");
	return 0;
}


