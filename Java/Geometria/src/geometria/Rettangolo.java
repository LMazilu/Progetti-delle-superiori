
package geometria;


public class Rettangolo {
    private Punto a;
    private Punto b;
    private Punto c;
    private Punto d;

    public Rettangolo(Punto a, Punto b, Punto c, Punto d) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }
    
    public Rettangolo(Rettangolo r){
    this.a = r.a;
    this.b = r.b;
    this.c = r.c;
    this.d = r.d;
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
    
      public double base(){
        return this.a.distanza(this.b);
    }
      
      public double height(){
      return this.b.distanza(this.c);
      }
    
    public double perimeter(){
    return (base() + height())*2;
    }
    
    public double area(){
    return base()* height();
    }
    
    public String toString(){
    String msg="NON E' UN RETTANGOLO";
    if(((base()==this.c.distanza(this.d)) && (height()==this.d.distanza(this.a)))&& (base()!= 0 && height()!=0)){
        msg="E' UN RETTANGOLO";
    }
    return msg;
    
    
    }
}