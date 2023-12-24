public class Automezzo extends Mezzo
{
    private int cilindrata;
    public Automezzo(String modello, String compagnia, float portata, int cilindrata){
        super(modello, compagnia, portata);
        this.cilindrata=cilindrata;
    }
    
    public void visualizza(){
        super.visualizza();
        System.out.println("Cilindrata: "+this.cilindrata);
    }
}
