
package Esercizio01;


public class Punto {
    private double x;
    private double y;

    public Punto(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Punto(Punto p){
        this.x=p.getX();
        this.y=p.getY();
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }
    
    public double distanza(Punto p){
        double dx = x-p.getX();
        double dy = y-p.getY();
        return Math.sqrt((dx*dx)+(dy*dy));
    }
    
   public boolean equals(Punto p){
       return ((x==p.x) && (y==p.y));
   }
   

   public String toString(){
       return "("+x+";"+y+")";
   }

    public static void main(String[] args) {
     Punto p0 = new Punto(5.,4.);
     Punto p1 = new Punto(9.,7.);
     Punto p2 = new Punto(p1);
     System.out.println("p0 = "+p0.toString());
     System.out.println("p1 = "+p1.toString());
     System.out.println("p2 = "+p2.toString());
     System.out.println("Distanza p0-p1: "+p0.distanza(p1));
     System.out.println("Distanza p0-p2: "+p1.distanza(p2));
     if(p1.equals(p2))
         System.out.println("p0 e p2 coincidono");
     else
         System.out.println("p0 e p2 non coincidono");
    }
   
    
}
