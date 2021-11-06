#include <iostream>
using namespace std;
int main()
{
 int numero, somma, conta; // def.  variabili
 conta=0;                  // iniz. variabili
 somma=0;
 cout << "\nInserisci un numero : ";  
 cin  >> numero;
 conta = numero;                  // iniz. variabili
 while(conta >= 0)   // condizione di ingresso  
 {
  somma += conta;  // aggiorna totale
  conta --;        // incrementa contatore
 }
 cout <<"\nla somma di N numeri e\': "<< somma;
}






