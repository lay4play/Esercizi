// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// maggioreUguale.cpp

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Inserisci il I numero  \t: ";
	cin >> num1;
	cout << "Inserisci il II numero \t: ";
	cin >> num2;
	if (num1 == num2)
		cout << "il due numeri sono uguali " << endl;
	else
		if (num1 > num2)
			cout << "il  maggiore e': " << num1 << endl;
		else
			cout << "il  maggiore e': " << num2 << endl;

	system("PAUSE");
	return 0;
}



