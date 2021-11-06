#include <iostream> 
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Inserisci il I numero  \t: ";
	cin >> num1;
	cout << "Inserisci il II numero \t: ";
	cin >> num2;
	cout << "Inserisci il III numero\t: ";
	cin >> num3;
	if (num1 > num2)
		if (num1 > num3)
			cout << "il maggiore e': " << num1 << endl;
		else
			cout << "il maggiore e': " << num3 << endl;
	else
		if (num2 > num3)
			cout << "il maggiore e': " << num2 << endl;
		else
			cout << "il maggiore e': " << num3 << endl;
	system("PAUSE");
}


