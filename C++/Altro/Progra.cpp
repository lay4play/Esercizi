#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

//pari o dispari, quadrato , primo
int input(string messaggio);
bool PariDispari (int n);
bool Quadrati (int n);
bool Primo (int n);

int main(){
	int n;
	n=input("Inserisci numero: ");
	if(PariDispari(n)==true){
		cout<<"Il numero e'pari"<<"\n";
	}else{
		cout<<"Il numero e'dispari"<<"\n";
	}
	if(Quadrati(n)==true){
		cout<<"Il numero e'quadrato di "<<sqrt(n)<<"\n";
	}else{
		cout<<"Il numero non e'quadrato di un altro numero "<<0<<"\n";
	}if(Primo(n)==true){
		cout<<"Il numero e'primo"<<"\n";
	}else{
		cout<<"Il numero non e'primo"<<"\n";
	}
	system("pause");
	return 0;
}

int input(string messaggio){
	int risp;
	cout<<messaggio;
	cin>>risp;
	return risp;
}

bool PariDispari (int n){
	bool pd;
	if(n%2==0){
		pd=true;
	}else{
		pd=false;
	}
	return pd;
}

bool Quadrati (int n){
	int quadrato=sqrt(n);
	bool quadra;
	if(quadrato*quadrato==n){
		quadra=true;
	}else{
		quadra=false;
	}
	return quadra;
}

bool Primo (int n){
	bool prime;
	int divisore=1,i;
	while(divisore<=n/2&&i<=1){
		if(n%divisore==0){
			i++;
		} 
		divisore++;
	}
	if(i==1){
		prime=true;
	}else{
		prime=false;
	}
	return prime;
}
