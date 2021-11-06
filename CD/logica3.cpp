// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// mesi.cpp

#include "stdafx.h"

#include <iostream> 
using namespace std;
int main()
{
	int anni;
	cout << "quanti anni hai? ";
	cin >> anni;
	if ((anni < 10) || (anni > 80))  // OR
		cout << "ingresso gratuito" << endl;
	else
		cout << "ingresso a pagamento" << endl;

	system("PAUSE");

}



