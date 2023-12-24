public class NaveCargo extends Mezzo
{
    private float velocitaCrociera;
    public NaveCargo(String modello, String compagnia, float portata, float velocitaCrociera){
        super(modello, compagnia, portata);
        this.velocitaCrociera=velocitaCrociera;
    }
    
    public void visualizza(){
        super.visualizza();
        System.out.println("Velocita di crociera:"+this.velocitaCrociera);
    }
}