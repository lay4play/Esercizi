/* File: equazioniIISol.cpp*/
/* Time-stamp: "2017-03-06 03:26:06 paolo" */
/* Scopo: uso di if-then-else con istruzioni annidate
uso della libreria matematica math
// Sviluppato con: VisualStudio2017
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cmath>
main()
{
	//variabili locali alla funzione main
	float aa, bb, cc, delta, x1, x2;
	cout << "\nInserisci i coefficiente di una equazione di secondo grado";
	cout << "\n inserisci il valore di a ";
	cin >> aa;
	cout << "\n inserisci il valore di b ";
	cin >> bb;
	cout << "\n inserisci il valore di c ";
	cin >> cc;
	// elaborazione
	if (aa == 0) //equazione di I grado
		if (bb == 0)
			if (cc == 0)
				cout << "\nl'equazione e' indeterminata";
			else
				cout << "\nl'equazione e' impossibile";
		else
		{
			x1 = (-1 * cc / bb);
			cout << "\nl'equazione e' di primo grado con soluzione " << x1;
		}
	else                     //calcola le radici equazione di II grado
	{
		delta = bb*bb - 4 * aa*cc;
		if (delta<0)
			cout << "il discriminante e'negativo: soluzioni non reali";
		else
			if (delta == 0)
			{
				x1 = (-1 * bb / 2 * aa);
				cout << "\nl'equazione ha due soluzioni coincidenti " << x1;
			}
			else
			{
				x1 = (-1 * bb + sqrt(bb*bb - 4 * aa*cc)) / (2 * aa);
				x2 = (-1 * bb - sqrt(bb*bb - 4 * aa*cc)) / (2 * aa);
				if (bb == 0)
					cout << "\nequazione pura: le due radici sono x1= " << x1 << "x2= " << x2;
				else
					if (cc == 0)
						cout << "\nequazione spuria:  le due radici sono x1= " << x1 << "x2= " << x2;
					else
						cout << "\nequazione completa: le due radici sono x1= " << x1 << "x2= " << x2;
			}  // fine ramo else calcolo delta ==0  
	}    // fine ramo else calcolo radici II grado   

	printf("\n\n");
	system("PAUSE");
}
