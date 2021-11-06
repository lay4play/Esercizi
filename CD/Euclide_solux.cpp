/*
Programma che calcola il MCD mediante l'algoritmo di Euclide del resto
Questa versione: verifica il corretto inserimento numero1 > numero2 
                 controlla l'inserimento dei numeri negativi
Autore :  Paolo
Versione : 1.0 del 12-03-18 
Sviluppato con  : Dev-C++ 5.11   
*/
#include <iostream>  
using namespace std;
main()
{
  int numero1,numero2,resto,MCD,tempo;  // definizione delle variabili
  cout << "\nAlgoritmo di Euclide per il calcolo del MCD.";
  cout << "\ninserisci due numeri positivi :";
  cin >> numero1 >> numero2;
  if (numero1 < 0)                      // cambia il segno 
  { numero1 *= -1;}                     // notazione sintetica per la moltiplicazione
  if (numero2<0)                        // cambia il segno 
  { numero2 *= -1;}                     // notazione sintetica per la moltiplicazione
  if (numero2 > numero1)                // scambiali tra loro
  { 
    tempo   = numero2;
    numero2 = numero1;
    numero1 = tempo;                                 
  }
  while(numero2 > 0)                    // inizio iterazione
  {
   resto   = numero1 % numero2;         // calcolo del resto
   numero1 = numero2;                   // scambio dei numeri
   numero2 = resto;
  }
  MCD = numero1;                          // assegnazione inutile, solo per chiarezza
  cout <<"\nil MCD e\': " << MCD;

  printf("\n\n");
}



