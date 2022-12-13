#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAXN

using namespace std;

int numeroCasuale(int, int);

int main(){
    int numero;
    numero=numeroCasuale(1,10);
    cout << numero << endl;
}

int numeroCasuale(int min, int max){
    return min+rand()%(min-max+1);
}