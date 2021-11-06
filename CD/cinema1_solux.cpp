// uda selezione.cpp : definisce il punto di ingresso dell'applicazione console.
// mesi.cpp

#include "stdafx.h"

#include <iostream> 
using namespace std;
int main()
{
	//  variabili locali alla funzione main
	int anni;
	double prezzo, sconto, costo;
	cout << "Il costo del biglietto? ";
	cin >> prezzo;
	costo = prezzo;
	cout << "Sconto fasce protette ? ";
	cin >> sconto;
	cout << "quanti anni hai? ";
	cin >> anni;
	//questa è l'istruzione corretta
	costo = prezzo - prezzo * sconto / 100;
	if (!((anni>10) && (anni<80)))
	{
		cout << "hai l'ingresso scontato" << endl;
		if (costo < 8)
		{
			cout << "il prezzo intero e' :" << prezzo << endl;
		  cout << "il tuo sconto %  e' :" << sconto << endl;
	 }
  }
  cout << "l'importo da pagare : " << costo;

	printf("\n\n");

	system("PAUSE");
	// cin.get();

}



