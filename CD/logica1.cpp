// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// logica1.cpp

#include "stdafx.h"

#include <iostream> 
using namespace std;
int main()
{
	bool piove;         // var. boolean 
	piove = false;      // iniz. a FALSO

	if (piove)
		cout << "apri l'ombrello" << endl;
	else
		cout << "non piove!" << endl;

	if (!piove)         //  negazione        
		cout << "non piove!" << endl;
	else
		cout << "apri l'ombrello" << endl;

	system("PAUSE");
}


