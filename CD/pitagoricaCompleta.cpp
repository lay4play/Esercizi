#include <iostream>
using namespace std;
int main()
{
  int num, fuori, dentro; 
  cout << "tabellina da visualizzare:  ";
  cin  >> num ;
  for(fuori = 1; fuori <= num; fuori++){ 
    cout << "\n";                    
    for(dentro = 1; dentro <= num; dentro++)  
      cout <<" "<< fuori * dentro << "\t" ;    
  }  
  cout << "\n\n";
}



