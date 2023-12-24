public class Programma
{
    public static void main(String[] Args){
        Dipendenti[] dipendentiAzienda = new Dipendenti[5];
        int i=0;
        do{
            System.out.println("1) Inserisci dipendente");
            System.out.println("2) Inserisci dirigente");
            System.out.println("3) Report");
            System.out.println("4) visualizza i");
            System.out.println("0) Esci");
            switch(Mioinput.inputInt("Inserisci scelta: ",0,4)){
            case 0: 
                System.exit(-1);
            case 1:
                dipendentiAzienda[i]= new Dipendenti(Mioinput.inputString("Inserisci il nome"),
                                                    Mioinput.inputString("Inserisci il cognome"),
                                                    Mioinput.inputInt("Inserisci le ore lavorative",0),
                                                    Mioinput.inputInt("Inserisci la paga oraria",0));
                i++;
                break;
            case 2:
                dipendentiAzienda[i] = new Dirigenti(Mioinput.inputString("Inserisci il nome"),
                                                    Mioinput.inputString("Inserisci il cognome"),
                                                    Mioinput.inputInt("Inserisci le ore lavorative",0),
                                                    Mioinput.inputInt("Inserisci la paga oraria",0),
                                                    Mioinput.inputInt("Inserisci il bonus mensile"));
                i++;
                break;
            case 3:
                dipendentiAzienda[i-1].report();
                break;
            case 4:
                System.out.println(i);
                break;
            }
        }while(i<5);
    }
}
