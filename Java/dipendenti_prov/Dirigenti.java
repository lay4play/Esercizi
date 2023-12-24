public class Dirigenti extends Dipendenti
{
    private int bonusMensile;
    public Dirigenti(String nome, String cognome, int oreLavorative, float pagaOraria, int bonusMensile){
        super(nome, cognome, oreLavorative, pagaOraria);
        this.bonusMensile = bonusMensile;
    }
    public float stipendio(){
        return super.stipendio()+this.bonusMensile;
    }
    
    public void report(){
        super.report();
        System.out.println("BONUS MENSILE: "+ this.bonusMensile);
        return;
    }
}
