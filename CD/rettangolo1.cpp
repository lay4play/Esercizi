#include <iostream>    // libreria per l'IO
using namespace std;
int main(){
 int base, altezza, perimetro, area;	
 cout << "Misura del rettangolo \n \n";	
 cout << "Inserisci valore della base   : ";
 cin >> base;
 cout << "Inserisci valore della altezza: ";
 cin >> altezza;
 perimetro = (base + altezza) * 2;	
 area = base * altezza;	
 cout << "\nBase     : " << base << endl; 	
 cout << "Altezza  : " << altezza << endl; 	
 cout << "Perimetro: " << perimetro << endl; 	
 cout << "Area     : " << area << endl;  
}
// autore : paolo
// versione e data: 1 del 10-08-2018
// descrizione : calcolo dell'area  e perimetro di un rettangolo
/* Sviluppato con  : Dev-C++ 5.11    */


