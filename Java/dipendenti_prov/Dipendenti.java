public class Dipendenti
{
    private String nome, cognome;
    private int oreLavorative;
    private float pagaOraria;
    
    public Dipendenti(String nome, String cognome, int oreLavorative, float pagaOraria){
        this.nome = nome;
        this.cognome = cognome;
        this.oreLavorative = oreLavorative;
        this.pagaOraria = pagaOraria;
    }
    
    public float stipendio(){
        return this.pagaOraria*this.oreLavorative;
    }
    
    public void report(){
        System.out.println("NOME: " + this.nome);
        System.out.println("COGNOME: " + this.cognome);
        System.out.println("ORE MENSILI: " + this.oreLavorative);
        System.out.println("PAGA ORARIA" + this.pagaOraria);
        System.out.println("STIPENDIO: " + this.stipendio());
    }
    
}
