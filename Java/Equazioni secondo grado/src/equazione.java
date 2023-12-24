import com.sun.source.doctree.SystemPropertyTree;

public class equazione {
    private float a,b,c, delta;
    public equazione(){};
    public equazione(float a, float b, float c){
        this.a=a;
        this.b=b;
        this.c=c;
    }

    public void setA(float a) {
        this.a = a;
    }

    public void setB(float b) {
        this.b = b;
    }

    public void setC(float c) {
        this.c = c;
    }

    public void setDelta(float delta) {
        this.delta = delta;
    }

    public float calcoloDelta(){
        return this.delta=(b*b)-4*a*c;
    }
    public void calcolaRisultato(){
        if(this.calcoloDelta()<0){
            System.out.println("L'equazione di secondo grado è impossibile");
        } else {
            System.out.println("X1: " + (-b+Math.sqrt(this.calcoloDelta()))/2*a+ " X2: " + (-b-Math.sqrt(this.calcoloDelta()))/2*a);
        }
        return;
    }

}
