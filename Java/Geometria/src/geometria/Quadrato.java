
package geometria;


public class Quadrato {
private Punto a;
private Punto b;
private Punto c;
private Punto d;

    public Quadrato(Punto a, Punto b, Punto c, Punto d) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }
    
    public Quadrato(Quadrato q){
    this.a = q.a;
    this.b = q.b;
    this.c = q.c;
    this.d = q.d;
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

    public Punto getD() {
        return d;
    }

    public void setD(Punto d) {
        this.d = d;
    }
    
    public double side(Punto j, Punto l ){
        return j.distanza(l);
    }
   
    public double perimeter(){
     return side(a,b)*4;
    
    }
    
    public double area(){
    return Math.pow(side(a,b),2);
    
    }
    
    public String toString(){
        String msg="NON E' UN QUADRATO";
     if((side(a,b)==side(b,c)) && (side(b,c) == side(c,d)) && (side(c,d) == side(d,a)) && (side(a,b)!=0 &&  side(b,c)!=0 && side(c,d)!=0 && side(d,a)!=0)){
            msg="E' UN QUADRATO";
        }
     return msg;
    }
}
