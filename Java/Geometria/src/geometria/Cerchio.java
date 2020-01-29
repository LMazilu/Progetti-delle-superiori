
package geometria;


public class Cerchio {
    private Punto a;
    private Punto b;

    public Cerchio(Punto a, Punto b) {
        this.a = a;
        this.b = b;
    }
    
      public Cerchio(Cerchio c) {
        this.a = c.a;
        this.b = c.b;
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
   
    public double radius(){
    return this.a.distanza(this.b);
    }
    
      public double circonference(){
      return 2*Math.PI*radius();
      }
      
      public double area(){
      return Math.PI*Math.pow(radius(),2);
      }
      
      public String toString(){
        String msg="NON E' UN CERCHIO";
        if(radius()!=0){
        msg="E' UN CERCHIO";
        }
        return msg;
      }
}
