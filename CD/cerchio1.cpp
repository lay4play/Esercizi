#include <iostream>     // libreria per l'IO
using namespace std;    // spazio dei nomi

#define PI 3.1415        // definizione di 
const int RAGGIO = 10;   // due costanti

int main(){
  double area;
  cout << "\nCalcolo area del cerchio";
  area =  RAGGIO * RAGGIO *PI;
  cout <<"\n valore:  area = " << area; 
	cout <<"\n PI =  "<< PI << " r = "<< RAGGIO;

}

// autore : paolo
// versione e data: 1 del 10-08-2013
// descrizione : calcolo dell'area di un cerchio: uso di costanti
// Sviluppato con: Dev-C++ 5.4.1    
