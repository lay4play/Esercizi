public class Triangolo{
    private Punto vA, vB, vC;
    public Triangolo(){
        vA = new Punto(Mioinput.leggiNum("Inserire ascissa primo vertice: ", -100.0, 100.0)
                      ,Mioinput.leggiNum("Inserire ordinata primo vertice: ", -100.0, 100.0));
        vB = new Punto(Mioinput.leggiNum("Inserire ascissa secondo vertice: ", -100.0, 100.0)
                      ,Mioinput.leggiNum("Inserire ordinata secondo vertice: ", -100.0, 100.0));
        vC = new Punto(Mioinput.leggiNum("Inserire ascissa terzo vertice: ", -100.0, 100.0)
                      ,Mioinput.leggiNum("Inserire ordinata terzo vertice: ", -100.0, 100.0));
         
    }
}
