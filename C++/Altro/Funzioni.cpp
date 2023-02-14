#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*Dati in input valori x e y, corrispondenti all'altezza e alla base di un rettangolo, di un triangolo e l,
ossia lato di un triangolo equilatero calcolare perimetro e area usando funzioni*/

float input(string messaggio);
void rettangolo(float base, float altezza);
void triangolo(float base, float altezza); 

int main(){
	char valore;
	float b,h;
	cout<<"Scrivi r se vuoi conoscere l'area e perimetro del rettangolo, scrivi t se vuoi conoscere l'area e perimetro del triangolo: ";
	cin>>valore;
	b=input("Inserisci il valore della base: ");
	h=input("Inserisci il valore dell'altezza: ");
	if(valore=='r'){
		rettangolo(b,h);
	}else{
		triangolo(b,h);
	}
	system("pause");
	return 0;
}

float input(string messaggio){
	float risp;
	cout<<messaggio;
	cin>>risp;
	return risp;
}

void rettangolo(float base, float altezza){
	cout<<"L'area e': "<<base*altezza<<"\n";
	cout<<"Il perimetro e': "<<(base+altezza)*2<<"\n";
}

void triangolo(float base, float altezza){
	cout<<"L'area e': "<<(base*altezza)/2<<"\n";
	cout<<"Il perimetro e': "<<base*3<<"\n";
}
