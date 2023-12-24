
/**
 * Aggiungi qui una descrizione della classe Punto
 * 
 * @author (il tuo nome) 
 * @version (un numero di versione o una data)
 */
public class Punto
{
    private double asc, ord;

    public Punto(double asc, double ord){
        this.asc=asc;
        this.ord=ord;
    }
    public double getAsc() {
        return this.asc;
    }
    public double getOrd() {
        return this.ord;
    }
    public void setAsc(double asc){
        this.asc=asc;
    }
    
    public void setOrd(double ord){
        this.ord=ord;
    }
    public double distanza(Punto altro){
        return Math.sqrt(Math.pow(altro.getAsc()-this.getAsc(),2)+Math.pow(altro.getOrd()+this.getOrd(),2));
    }
}
