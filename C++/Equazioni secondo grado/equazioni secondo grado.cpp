#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int input(string messaggio);

float calcoloDelta(float a, float b, float c);

float x1(float delta, float a, float b, float c);

float x2(float delta, float a, float b, float c);

int main(){
    float a,b,c, delta, x1,x2;
    a=input("Inserisci il coefficiente del termine di secondo grado");
    b=input("Inserisci il coefficiente del termine di primo grado");
    c=input("Inserisci il coefficiente del termine noto");
//    cout << "x2: " << a << " x: " << b << " noto: " << c << " delta: " << delta << endl;
    delta=calcoloDelta(a,b,c);
    x1=x1(delta,a,b,c);
    return 0;
}

int input(string messaggio){
    short int input;
    cout << messaggio << endl;
    cin >> input;
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