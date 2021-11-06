#include <iostream>
using namespace std;
int main(){
  int conta, numero; 
  cout << "tabellina da visualizzare : ";
  cin  >> numero;           // passo 1 
  for (conta = 1; conta <= 10; conta++) {
    cout << conta * numero << "  ";
  }  
}




