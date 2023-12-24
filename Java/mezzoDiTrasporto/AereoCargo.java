public class AereoCargo extends Mezzo
{
    private int equipaggio;
    public AereoCargo(String modello, String compagnia, float portata, int equipaggio){
        super(modello, compagnia, portata);
        this.equipaggio=equipaggio;
    }
    
    public void visualizza(){
        super.visualizza();
        System.out.println("Equipaggio: "+this.equipaggio);
    }
}
