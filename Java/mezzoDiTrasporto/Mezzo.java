public class Mezzo
{
    private String modello, compagnia;
    private float portata;
    public Mezzo(String modello, String compagnia, float portata){
        this.modello=modello;
        this.compagnia=compagnia;
        this.portata=portata;
    }
    public void visualizza(){
        System.out.println("Modello: "+this.modello);
        System.out.println("Compagnia: "+this.compagnia);
        System.out.println("Portata: "+this.portata);
    }
}
