#include <iostream>

using namespace std;

double calcola(int, double);

double calcola(double, int);

double calcola2(int);

double calcola2(long long int x);

int main(){
    // cout << calcola(2,3.0) << endl;
    // cout << calcola(2,3) << endl;
    cout << calcola2((float) 3.0) << endl;
    return 0;
    system("PAUSE");
}

double calcola(int x, double y){
    double aux=x+y;
    return aux;
}

double calcola(double x, int y){
    double aux=x+y;
    return aux;
}

double calcola2(double x){
    double aux=x*2;
    return aux;
}

double calcola3(long long int x){
    long long int aux = x;
    // double aux=x*2;
    return aux;
}