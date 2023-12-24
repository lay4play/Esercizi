public class Auto
{
    private String produttore, modello;
    private int vAtt, cilindrata, marcia;
    public static final int VMAX=260;
    private boolean motoreON;
    private TipoAlim alimentazione;

    public Auto(String produttore, String modello, int cilindrata, TipoAlim alimentazione){
    this.produttore=produttore;
    this.modello=modello;
    this.cilindrata=cilindrata;
    this.alimentazione=alimentazione;
    this.motoreON=false;
    this.vAtt=0;
    this.marcia=0;
    }
    
    public TipoAlim getAlimentazione(){
        return this.alimentazione;
    }
    
    public String getProduttore(){
        return this.produttore;
    }
    
    public String getModello(){
        return this.modello;
    }
    
    public int getCilindrtata(){
        return this.cilindrata;
    }
    
    public boolean isMotoreOn(){
        return this.motoreON;
    }
    
    public void avviaMotore(){
        this.motoreON=true;
    }
    
    public void arrestaMotore(){
        if(this.vAtt==0 && this.marcia==0){
            this.motoreON=false;
        }
    }
    
    public int getVAtt(){
        return this.cilindrata;
    }
    
    public void accelera(){
        if(this.motoreON && this.vAtt<=this.VMAX-10){
            this.vAtt+=10;
        }
        this.cambia();
    }
    
    public void frena(){
        if(this.motoreON && this.vAtt>=10){
            this.vAtt-=10;
        }
        this.cambia();
    }
    
    public int getMarcia(){
        return this.marcia;
    }
    
    public String toString(){
        return this.produttore + " " + this.modello + "\n" +
                "Motore ON: " + this.motoreON + "\n" +
                "Velocità attuale: " + this.vAtt + "\n" +
                "Rapporto inserito: " + this.marcia + "\n";
    }
    
    private void cambia(){
        //int[] mappa = new int[8];
        int[] mappa= {-1,0,40,80,120,160,200,VMAX};
        for(int i=0;i<mappa.length;i++){
            if(this.vAtt>mappa[1] && this.vAtt<=mappa[i+1]){
                this.marcia=i;
                break;
            }
        }
    }
}
