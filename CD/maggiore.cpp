#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	int min, max;
	cout << "Inserisci il I numero \t: ";
	cin >> num1;
	cout << "Inserisci il II numero\t: ";
	cin >> num2;
	if (num1 > num2)
	{                // inizio blocco a capo 
		min = num2;
		max = num1;
	}                // fine blocco
	else{            // inizio di seguito 
		min = num1;
		max = num2;
	}
	cout << "il minore   : " << min << endl;
	cout << "il maggiore : " << max << endl;
}


