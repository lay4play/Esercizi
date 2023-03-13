#include <iostream>

using namespace std;

//scrivere una funzione ricorsiva che riceve come parametro un numero intero e visualizza la corrispondente visualizzazione binaria

void visualizza_binario(int);

void visualizza_binario_ricorsivo(int);

int main(){
    int num=1;
    visualizza_binario_ricorsivo(num);
    cout << endl;
    // visualizza_binario(num);
    //system(PAUSE);
    return 0;
}

// void visualizza_binario(int num){
//     string bin="";

//     do{
//         if(num%2==0){
//             bin='0'+bin;
//         } else {
//             bin='1'+bin;
//         }
//         num/2;
//     } while(n>0);
// }

void visualizza_binario_ricorsivo(int num){
    if(num!=0) visualizza_binario_ricorsivo(num/2);
    cout<<num%2;
}