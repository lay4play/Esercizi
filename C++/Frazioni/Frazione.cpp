#include <iostream>
#include <cstdlib>

using namespace std;

bool controllo(int denominatore);

int input(string messaggio, int x);

void semplificaFrazioni(int &, int &);

int Mcd(int a, int b);

string stringaFrazione(int numeratore, int denominatore);

int main(){
    int numeratore, denominatore, mcd;
    numeratore = input("Inserire il numeratore: ", 0);
    denominatore = input("Inserire il denominatore: ", 0);
    semplificaFrazioni(numeratore, denominatore);
    cout << stringaFrazione(numeratore, denominatore) << endl;
}

bool controllo(int denominatore){
    if (denominatore == 1) {
        return true;
    }
	return false; 
}

int input(string messaggio, int x) {
    int risp;
    do {
        cout << messaggio;
        cin >> risp;
        if (risp == x) {
            cout << "Valore inserito non accettabile." << endl;
            cout << "Inserire un valore diverso da " << x << endl;
        }
    } while (risp == x);
    return risp;
}

int Mcd(int a, int b){
    int restovero=1;
    if (a < b) {
        int c;
        c = a;
        a = b;
        b = c;
    }
    while (restovero != 0) {
        restovero = a % b;
        a = b;
        b = restovero;
    }
    return a;
}

void semplificaFrazioni(int &numeratore, int &denominatore){
    int mcd = Mcd(numeratore, denominatore);
    numeratore /= mcd; // numeratore = numeratore / mcd;
    denominatore /= mcd; // denominatore = denominatore / mcd;
    return;
}

string stringaFrazione(int numeratore, int denominatore){
    string aux = to_string(numeratore);
    if(denominatore != 1){
        aux += "/" + to_string(denominatore); //aux = aux + "/" + to_string(denominatore);
    }
    return aux;
}

