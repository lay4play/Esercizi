#include <iostream>   // include le funzioni di IO
#include <conio.h>    // include le funzioni get()
using namespace std;
int main(){
char ca1, ca2, ca3; // se voglio memorizzare i caratteri inseriti
 cout << "\nInput di un carattere che non viene visualizzato\n";
 ca1 = getch();
 cout << "\nInput e visualizzazione di un carattere senza [Invio]\n";
 ca2 = getche();
 cout << "\nInput e visualizzazione di un carattere con  [Invio]\n";
 ca3 = getchar();
 cout << "sono stati inseriti: " << ca1 << " " << ca2 << " " << ca3;
 cout << "\nTermine elaborazione!\n";    
 cout <<  "\n\n";
}


// autore : paolo
// versione e data: 1 del 22-05-2014
// descrizione :  input di caratteri  
/* Sviluppato con  : Dev-C++ 5.4.1    */
 
