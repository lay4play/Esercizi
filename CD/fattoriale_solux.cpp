#include <iostream>
using namespace std;
int main()
{
  long numero, conta, fatt = 0; 
  for (int x = 0; x<5; x++){    
	  printf("\ninserisci un numero: ");
    cin >> numero;
    if (numero < 0)
      printf("\nattenzione: il numero deve essere positivo!"); 
    else
     fatt = 1;                     // inizializza il fattoriale           
     for (conta = numero; conta > 1; conta--){              
        fatt = fatt*conta;                              // calcolo del fattoriale
      }
      cout<<"\nil fattoriale di "<< numero<<" " <<fatt; // stampa il fattoriale
  }
  printf("\n\n");
}
