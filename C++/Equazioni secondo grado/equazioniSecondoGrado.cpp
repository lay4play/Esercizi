#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int input(string messaggio, int max);

int input(string messaggio);

float calcoloDelta(float a, float b, float c);

float x1(float delta, float a, float b, float c);

float x2(float delta, float a, float b, float c);

string stringaEquazione(float a, float b, float c);

bool numeroMaggiore(float numero1, float limite);

int main(){
    float a,b,c, delta, x1,x2;
    a=input("Inserisci il coefficiente del termine di secondo grado", 0);
    b=input("Inserisci il coefficiente del termine di primo grado");
    c=input("Inserisci il coefficiente del termine noto");
//    cout << "x2: " << a << " x: " << b << " noto: " << c << " delta: " << delta << endl;
    delta=calcoloDelta(a,b,c);
    x1=x1(delta,a,b,c);

    return 0;
}

string stringaEquazione(float a, float b, float c){
    string aux;
    if(a==1){
        if(a>0){
            aux = "x ";
        } else (
            aux = "-x ";
        )
    } 
}

int input(string messaggio, int min){
    short int input;
    do{
        cout << messaggio << endl;
        cin >> input;
        if(input < min){
            cout << "Il numero zero non e' un numero accettato";
        }
    } while(input < min);
    // cout << messaggio << endl;
    // cin >> input;
    return input;
}

float calcoloDelta(float a, float b, float c){
    float delta;
    delta=pow(b, 2)-(4*a*c);
    return delta;
}

float x1(float delta, float a, float b, float c){
    float x1;
    x1=(-b+sqrt(delta))/2*a;
    return x1;
}

float x2(float delta, float a, float b, float c){
    float x2;
    x2=(-b-sqrt(delta))/2*a;
    return x2;
}

bool numeroMaggiore(float numero1, float limite){
    if(numero1>limite){
        return true;
    } else {
        return false;
    }
}

int input(string messaggio){
    short int input;
    cout << messaggio << endl;
    cin >> input;
    return input;
}
