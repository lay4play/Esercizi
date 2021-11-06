#include <iostream> 
using namespace std;
int main()
{
	int num1;
	cout << "Inserisci un numero  \t: ";
	cin >> num1;

	if (num1 == 0)
		cout << "numero 0 NON CONTEMPLATO" << endl;
	else
		if ((num1 % 2) == 0)     // operazione MOD
			cout << "la meta' del numero e' " << num1/2 ;
		else
			cout << "il numero " << num1 << " e' dispari";

	return 0;
}

{
}
