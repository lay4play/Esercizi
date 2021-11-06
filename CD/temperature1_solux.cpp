#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	//variabili locali alla funzione main
	int temperatura, fascia = 0;
	cout << "\nInserisci il valore di temperatura: ";
	cin >> temperatura;
	if (temperatura < 10)
		fascia = 1;
	else
		if (temperatura < 20)
			fascia = 2;
		else
			if (temperatura < 30)
				fascia = 3;
			else
				fascia = 4;
	switch (fascia){
	case 1:
		cout << "\nOggi fa freddo!";
		break;
	case 2:
		cout << "\nOggi temperatura ideale!";
		break;
	case 3:
		cout << "\nOggi fa caldo!";
		break;
	case 4:
		cout << "\nOggi fa molto caldo!";
		break;
	}
	printf("\n\n");
	system("PAUSE");
}
