#include <iostream>
using namespace std;

int main(){
    short unsigned int lato, figura;
    float risultato;
    cout << "Scegli di che figura vuoi sapere l'area\n1 Quadrato\n2 Cerchio\n3 Triangolo equilatero\n";
    cin >> figura;
    cout << "Inserisci il lato o raggio\n";
    cin >> lato;
    if(figura == 1){
        risultato = lato * lato;
    } else {
        if(figura == 2){
            risultato = (float)((lato * lato) * 3,14);
        } else {
            risultato = (float)((lato * lato) / 2);
        }
    }
    cout << "Il risultato e ";
    cout << risultato;
    cout << "\n"; 
}