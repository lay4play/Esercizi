// autore : paolo
// versione e data: 1 del 22-05-2014
// descrizione :  gestione dei colori 
// Sviluppato con  : Dev-C++ 5.4.1     
#include <iostream>  
#include <cstdlib>             // per includere la funzioen system
using namespace std;

main()
{
  cout <<"\nInizializzo lo sfondo BLU (1) e la scritta VERDE (A):\n";
  cout <<"system(\"COLOR 1A\")\n\n";
  system("COLOR 1A");

  cout <<"\nAssegno il nome alla finestra:\n";
  cout <<"system(\"TITLE Nome finestra colorata\")\n\n";
  system("TITLE Nome finestra colorata");
}
