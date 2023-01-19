#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//Scrivi una funzione che ritorna vero se una stringa contiene almeno due lettere doppie diverse tra loro, falso altrimenti.

bool doppie(string, int);

int main(){
    string parola;
    cout << "Inserisci la parola" << endl;
    cin >> parola;
    if(doppie(parola, 2)){
        cout << "La parola contiene due doppie" << endl;
    } else {
        cout << "La parola non contiene due doppie" << endl;
    }
  system("PAUSE");
    return 0;
}

bool doppie(string parola, int n){
    char aux, doppie;
    for(char i=0;i<parola.length();i++){
        if(i==0){
            aux=parola[i];
        } else {
            if(aux==parola[i]){
                doppie++;
            } else {
                aux=parola[i];
            }
        }
    }
    if(doppie>=n){
        return true;
    }
    return false;
}