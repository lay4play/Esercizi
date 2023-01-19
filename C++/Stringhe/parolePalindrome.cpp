#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

string inverti(string, int);

bool compara(string, int);

int main(){
    string parola;
    cout << "Inserisci parola" << endl;
    cin >> parola;
    if(compara(parola, parola.length())){
        cout << "La parola " << parola << " e' palindroma" << endl;
    } else {
        cout << "La parola " << parola << " non e' palindroma" << endl;
    }
//  system("PAUSE");    
    return 0;
}

string inverti(string parola0, int n){
    string parola1;
    for(char i=n-1;i>=0;i--){
        parola1 += parola0[i];
    }
    return parola1;
}

bool compara(string parola0, int n){
    if(inverti(parola0, n)==parola0){
        return true;
    }
    return false;
}
