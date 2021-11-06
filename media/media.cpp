#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3, media;
	cout<<"inserisci tre numeri: ";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	media=(n1+n2+n3)/3;
	cout<<"La media e': "<< media<<" i tre numeri sono "<<n1<<n2<<n3;
	return 0;
}
