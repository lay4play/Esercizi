public class Pila{
    private static final int MAXDIM=100;
    private String[] dati;
    private int numElementi;
    
    public Pila(){
        numElementi=0;
        dati = new String[MAXDIM];
    }
    
    public int size(){
        return numElementi;
    }
    
    public void push(String msg){
        dati[numElementi]=msg;
        numElementi++;
    }
    
    public String pop(){
        String aux;
        aux = dati[numElementi--];
        numElementi--;
        return aux;
    }
    
    public String top(){
        return dati[numElementi--];
    }
    
    public boolean isEmpty(){
        if(numElementi!=0){
            return true;
        } else {
            return false;
        }
    }
}
