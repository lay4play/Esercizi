#include <iostream>
using namespace std;
int main()
{
  int max, numero, conta;   
  max = 0;
  for (conta = 1; conta <= 7; conta++){
    cout<<"inserisci un numero : ";
	  cin >> numero;  
    if (numero > max) 
      max = numero;
  }
  cout << "\n numero maggiore: " << max;  
}







