// Programma per mostrare diversi modi di stampare su video
// Sviluppato con  : Dev-C++ 5.4.1   
#include <iostream>
using namespace std;
int main()
{
  cout << "Prima riga ";	
  cout << "seguito della riga" << endl;	
  cout << "Nuova riga molto lunga"
          " la riga continua ancora su video"
          "\n questo viene stampato su una nuova riga" 
       << endl;	 
  cout << "\n "; 
    
//  system("PAUSE");
  return 0;
}
/*
 Se si compila, e si lancia l'esecuzione del programma, si ottiene:
 Prima riga seguito della riga
 Nuova riga molto lunga la riga continua ancora su video questo viene stampato su una nuova riga
 Nella 1 si incanala (per mezzo dell'operatore di inserimento <<) nello stream cout la stringa Prima riga.
 Tutto ciò che è racchiuso fra “ e “ (il carattere doppio apice), come si nota nell'esecuzione, 
verrà visualizzato su video così come è. Il ; chiude l'istruzione.
 Nella 2, nonostante si tratti di una nuova istruzione, la stringa, come si può notare nell'esecuzione, 
è visualizzata di seguito alla prima. Lo stream è utilizzato in modo sequenziale. 
 Per andare a riga nuova si è accodato (operatore <<) il modificatore endl (end-line) che, 
appunto, termina la linea e fa passare alla prossima riga nel video.
 L'istruzione 3 è suddivisa in più righe di listato. L'istruzione termina, 
al solito, con il ; e consente di distribuire il testo da visualizzare su più righe fisiche.
 In ognuna si è scritta una stringa racchiusa dai soliti caratteri: 
questo viene ... verrà visualizzata la riga successiva a quella che visualizza Nuova riga... 
 Per passare ad una nuova riga su video, si è utilizzato in questo caso il carattere di 
controllo \n dentro la stringa da visualizzare.
 Lo spazio successivo al carattere di controllo non è necessario ma è stato introdotto solo per evidenziarlo.
 In definitiva per poter passare alla linea successiva si può accodare allo stream 
di output endl o inserire nella stringa da stampare il carattere di controllo \n.
*/
