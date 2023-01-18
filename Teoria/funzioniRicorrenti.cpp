#include <iostream>

using namespace std;

int fatt_iter(int);

int fatt_ricor(int);

int main(){
    int numero=4;
    cout << "Il fattoriale e' :" << fatt_iter(numero) << endl;
    return 0;
}

int fatt_iter(int num){
    int ris=1;
    for(int i=num;i>1;i--){
        ris=ris*i;
    }
    return ris;
}

int fatt_ricor(int num){
    if(num==0){
        return 1;
    }
    return num*fatt_ricor(num-1);
}