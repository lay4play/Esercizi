#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void inverti(string, string, int);

bool compara(string, string, int);

int main(){
    string parola, parolaContrario;
    cout << "Inserisci parola" << endl;
    cin >> parola;
    inverti(parola, parolaContrario, parola.length());
    cout << "parola 1: " << parola << endl;
    cout << "parola al contrario: " << parolaContrario << endl;
    if(compara(parola, parolaContrario, parola.length())){
        cout << "La parola " << parola << " e' palindroma" << endl;
    } else {
        cout << "La parola " << parola << " non e' palindroma" << endl;
    }
//  system("PAUSE");    
    return 0;
}

void inverti(string parola0, string parola1, int n){
    for(char i=0;i<n/2;i++){
        parola1[i] = parola0[(n-1)-i];
    }
    cout << parola1 << endl;
    return;
}

bool compara(string parola0, string parola1, int n){
    bool palindroma;
    for(char i=0;i<n;i++){
        if(parola0[i]!=parola1[(n-1)-i]){
            return false;
        }
    }
    return true;
}
