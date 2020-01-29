
package Esercizio01;


public class Triangolo {
    private Punto a;
    private Punto b;
    private Punto c;
    private final double ERR_MAX=0.00000001;

    public Triangolo(Punto a, Punto b, Punto c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    
    public Triangolo (Triangolo t){
    this.a = t.a;
    this.b = t.b;
    this.c = t.c;
    }

    public Punto getA() {
        return a;
    }

    public void setA(Punto a) {
        this.a = a;
        
    }

    public Punto getB() {
        return b;
    }

    public void setB(Punto b) {
        this.b = b;
    }

    public Punto getC() {
        return c;
    }

    public void setC(Punto c) {
        this.c = c;
    }
       
    public boolean equilateral(){
    if((this.a.distanza(this.b) == this.b.distanza(this.c)) && (this.b.distanza(this.c) == this.c.distanza(this.a)) &&(this.a.distanza(this.b) == this.c.distanza(this.a)))
        return true;
    else
        return false;
    }
    
    public double area(){
        if(equilateral()){
            double base = this.a.distanza(this.b);
            double height = Math.sqrt((this.b.distanza(this.c)*this.b.distanza(this.c))-((this.a.distanza(this.b)/2)*(this.a.distanza(this.b)/2)));
            return (base*height)/2;
        }
        else{
            double p = perimeter()/2;
            return Math.sqrt(p*(p-this.a.distanza(this.b))*(p-this.b.distanza(this.c))*(this.c.distanza(this.a)));
        }
        
    }
    
    public double perimeter(){
        return this.a.distanza(this.b) + this.b.distanza(this.c) + this.c.distanza(this.a);
    }

    public String toString(){
        String msg="";
        if(area() <= ERR_MAX) msg=" NON E' UN TRIANGOLO";
        return "A"+this.a.toString()+"B"+this.b.toString()+"C"+this.c.toString()+msg;
    }
    
    public boolean equals (Triangolo t){
        return((this.a.equals(t.a))&&(this.b.equals(t.b))&&(this.c.equals(t.c)));
    }
    
    public boolean equivals(Triangolo t){
        return (Math.abs(this.area()-t.area()) <= ERR_MAX);
        
    }
    
    public static void main(String[]args){
     Punto p0 = new Punto(1.,1.);
     Punto p1 = new Punto(2.,2.);
     Punto p2 = new Punto(2.,1.);
     Punto p3 = new Punto(1.,4.);
     Punto p4 = new Punto(3.,3.);
     Triangolo t0 = new Triangolo(p0,p1,p2);
     Triangolo t1 = new Triangolo(p0,p2,p3);
     Triangolo t2 = new Triangolo(p0,p1,p1);
     Triangolo t3 = new Triangolo(t0);
     
        System.out.println("Triangolo t0: "+t0.toString());
        System.out.println("Perimetro triangolo t0: "+t0.perimeter());
        System.out.println("Area triangolo t0: "+t0.area());
        System.out.println("Triangolo t1: "+t1.toString());
        System.out.println("Perimetro triangolo t1: "+t1.perimeter());
        System.out.println("Area triangolo t1: "+t1.area());
        System.out.println("Triangolo t2: "+t2.toString());
        System.out.println("Perimetro triangolo t2: "+t2.perimeter());
        System.out.println("Area triangolo t2: "+t2.area());
        System.out.println("Triangolo t3: "+t3.toString());
        System.out.println("Perimetro triangolo t3: "+t3.perimeter());
        System.out.println("Area triangolo t3: "+t3.area());
        
        if(t0.equals(t3))
            System.out.println("i triangoli t0 e t3 sono uguali");
        else
            System.out.println("i triangoli t0 e t3 non sono uguali");
        if(t0.equivals(t3))
            System.out.println("i triangoli t0 e t3 sono equivalenti");
        else
            System.out.println("i triangoli t0 e t3 non sono equivalenti");
         if(t0.equals(t1))
            System.out.println("i triangoli t0 e t1 sono uguali");
        else
            System.out.println("i triangoli t0 e t1 non sono uguali");
        if(t0.equivals(t1))
            System.out.println("i triangoli t0 e t1 sono equivalenti");
        else
            System.out.println("i triangoli t0 e t1 non sono equivalenti");
    }
}
