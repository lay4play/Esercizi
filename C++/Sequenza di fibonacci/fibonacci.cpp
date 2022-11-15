#include <iostream>
#include <cstdlib>

using namespace std;
/*
Passi base (sono 2):
Fib(0)=0
Fib(1)=0

Passo ricorsivo:
Fib(n)=Fib(n-1)+Fib(n-2)
*/
int fibonacci (int);
int inval (string);

int main () {
    int numero = inval ("Inserire Numero: ");
    cout << fibonacci (numero);
    return 0;
}

int inval (string messaggio){
    int numero;
    cout << messaggio;
	cin >> numero;
    return numero;
}

int fibonacci (int numero){
    if (numero == 0 || numero == 1)
        return numero;
    return numero + fibonacci (numero-1); 
}