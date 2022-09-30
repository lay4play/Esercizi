#include <iostream> //inclusione librerie
#include <cstdlib>
#include <cmath>

using namespace std;


float input(string messaggio); //prototipo funzione AKA sottoprogramma

int main(){ //funzione main, funzione principale
    short int x;
    x = input("Inserisci un valore");
    cout << "Il valore e' " << x;
    return 0;
}

float input(string messaggio){ //creazione funzione
    short int a;

    cout << messaggio;
    cin >> a;
    return a;
} 