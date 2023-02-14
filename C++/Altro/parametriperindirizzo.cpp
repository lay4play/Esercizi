#include<iostream>
#include<cstdlib>
using namespace std;

void calcolaSomma3(int,int,int&);
/*Passaggio per indirizzo
Quando chiamerò la funzione, passo i valori che voglio sommare al posto dei parametri formali e una variabile di tipo intera. 
In questo caso r (ossia int&) funge da contenitore per le altre due variabili int. La funzione modifica la variabile r  */
 
int main(){
	cout<<"Inserisci a";
	cin>>a;
	cout<<"Inserisci b";
	cin>>b;
	system("pause");
	return 0;
}

void calcolaSomma3(int a,int b,int&ris){
	ris=a+b;
	return;
}
