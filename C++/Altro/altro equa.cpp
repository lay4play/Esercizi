#include <cstdlib>
#include <iostream>
#include<cstring>
using namespace std;

int inval(string messaggio);

int main(){
	int a;
	a=inval("Inserisci il primo coefficiente: ");

	system("PAUSE");
	return 0;
}

int inval(string messaggio){
	int risp;
	do{
		cout<<messaggio;
		cin>>risp;
		if(risp==0){
			cout<<"Valore non accettabile."<<"\n";
		}else{
			return risp;
		}
	
	

}

