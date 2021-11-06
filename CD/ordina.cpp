#include <iostream> 
using namespace std;
int main(){
	int num1, num2, tempo;
	cout << "Inserisci il I numero  \t: ";
	cin >> num1;
	cout << "Inserisci il II numero \t: ";
	cin >> num2;
	if (num1 < num2)  // scambio i numeri
	{
		tempo = num1;
		num1 = num2;
		num2 = tempo;
	}
	cout << "il maggiore e': " << num1 << endl;
	cout << "il minore e'  : " << num2 << endl;
}


