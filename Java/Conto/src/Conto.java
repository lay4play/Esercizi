import java.util.Scanner;
public class Conto {
    private float deposito,tasso;
    public Conto(){};
    Scanner in;
    public void setDeposito(float d){
        this.deposito=d;
        return;
    };
    public void setTasso(float t){
        this.tasso=t;
        return;
    };
    public float getDeposito(){
        return this.deposito;
    };
    public float getTasso(){
        return this.tasso;
    };
    public void versamento(float importo){
        this.deposito+=importo;
    };
    public boolean prelievo(float importo){
        if(importo>this.deposito){
            return false;
        }
        this.deposito-=importo;
        return true;
    };
    public void aggiorna(){
        System.out.println("Aggiornato?");
    };
}
