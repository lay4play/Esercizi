#include <iostream> 
using namespace std;
int main()
{
  int  num1,num2,num3,min,max,inter,tempo;  
  cout <<"\nIntroduci il primo numero ";   // leggi un numero
  cin>> num1;
  max = num1;
  cout <<"\nIntroduci il secondo numero "; // leggi un numero
  cin>> num2;
  min=num2;
  if (min>max)          // esegui il confronto
  {
    tempo=min;          // scambiali tra loro
    min=max;
    max=tempo;
  }
  cout <<"\nIntroduci il terzo numero ";   // leggi un numero
  cin>> num3;
  inter=num3;
  if (inter>max)        // esegui il confronto
  {
    tempo=inter;        // scambiali tra loro
    inter=max;
    max=tempo;
  }
  if (inter<min)        // esegui il confronto
  {
    tempo=inter;        // scambiali tra loro
    inter=min;
    min=tempo;
  }
// comunica il risultato 
 cout <<" \ni tre numeri ordinati sono: " <<min<<" "<<inter<<" "<<max;
  
  printf("\n\n");
}


