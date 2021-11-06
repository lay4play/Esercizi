#include <iostream>
using namespace std;

int main() {
    int n1, p, p1, p2;
    cout<<"Inserisci un numero\n";
    cin>>n1;
    p= n1 * n1;
    p1 = p * n1;
    p2 = p1 * n1; 
    cout<<"Le prime tre potenze dei numeri sono\n"<<p<<"\n"<<p1<<"\n"<<p2<<"\n";
    return 0;
}