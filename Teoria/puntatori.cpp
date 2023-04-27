#include <iostream>

using namespace std;

int main(){
    int *p;
    p = new int();
    cout << "Inserisci il valore di *p: ";
    cin >> *p;
    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
//  system("PAUSE");
    return 0;
}