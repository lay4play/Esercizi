#include <iostream>
using namespace std;
int main()
{
 int numero, somma, conta; // def.  variabili
 conta=0;                  // iniz. variabili
 somma=0;
 cout << "\nInserisci un numero : ";  
 cin  >> numero;
 while(conta < numero)   // condizione di ingresso  
 {
  conta = conta + 1;     // incrementa contatore
  somma = somma + conta; // aggiorna totale
 }
 cout <<"\nla somma di N numeri e\': "<< somma;
}






