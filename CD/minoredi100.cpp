/* Sviluppato con  : Dev-C++ 5.4.1    */
#include <iostream>    // libreria specifica del C++ per l'IO
using namespace std;

int main()
{
  const int limite=100;	
  int num;

  cout << "Introdurre un valore intero: ";
  cin >> num;
  
  if (num < limite)	
    cout << "numero introdotto minore di " << limite << endl;
    
  return 0;
}
