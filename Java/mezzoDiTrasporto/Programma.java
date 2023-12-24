public class Programma
{
    public static void main(String[] Args){
        Mezzo m1 = new Mezzo("","",0f);
        while(true){
            System.out.println("1) Crea Aereo cargo");
            System.out.println("2) Crea Nave cargo");
            System.out.println("3) Crea Automezzo");
            System.out.println("4) Visualizza informazione mezzo");
            System.out.println("5) Esci");
            switch(Mioinput.leggiNum("Inserisci la scelta:", 1,5)){
                case 1:
                    m1 = new AereoCargo(Mioinput.leggiStr("Inserisci il modello:"),
                                                            Mioinput.leggiStr("Inserisci la compagnia"),
                                                            Mioinput.leggiNum("Inserisci la portata",0),
                                                            Mioinput.leggiNum("Inserisci il numero di membri dell'equipaggio: "));
                    break;
                case 2:
                    m1 = new NaveCargo(Mioinput.leggiStr("Inserisci il modello:"),
                                                            Mioinput.leggiStr("Inserisci la compagnia"),
                                                            Mioinput.leggiNum("Inserisci la portata",0),
                                                            Mioinput.leggiNum("Inserisci la velocità di crociera",0,100));
                    break;
                case 3:
                    m1 = new Automezzo(Mioinput.leggiStr("Inserisci il modello:"),
                                                            Mioinput.leggiStr("Inserisci la compagnia"),
                                                            Mioinput.leggiNum("Inserisci la portata",0),
                                                            Mioinput.leggiNum("Inserisci la cilindrata",0,100));
                    break;                        
                case 4:
                    m1.visualizza();
                    break;
                case 5:
                    return;
            }
        }
    }
}
