public class Programma
{
    public static void main(String[] Args){
        
        Auto a2 = new Auto(Mioinput.leggiStr("Inserisci la marca della macchina"),
                                            Mioinput.leggiStr("Inserisci il modello della macchina"),
                                            Mioinput.leggiNum("Inserisci l'anno della macchina", 1900, 2023),
                                            TipoAlim.valueOf(Mioinput.leggiStr("Inserisci il tipo di alimentazione BENZINA/DIESEL/IBRIDA").toUpperCase()));
        
        System.out.println("Velocità max Auto: "+ Auto.VMAX);
    }
}
