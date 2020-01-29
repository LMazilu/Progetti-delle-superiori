/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package geometria;


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
    
    public double base(){
    return this.a.distanza(this.b);
    }
       
    public boolean equilateral(){
    if((base() == this.b.distanza(this.c)) && (this.b.distanza(this.c) == this.c.distanza(this.a)) &&(base() == this.c.distanza(this.a)))
        return true;
    else
        return false;
    }
    
    public double area(){
        if(equilateral()){
            double height = Math.sqrt((this.b.distanza(this.c)*this.b.distanza(this.c))-((base()/2)*(base()/2)));
            return (base()*height)/2;
        }
        else{
            double p = perimeter()/2;
            return Math.sqrt(p*(p-base())*(p-this.b.distanza(this.c))*(this.c.distanza(this.a)));
        }
        
    }
    
    public double perimeter(){
        return this.a.distanza(this.b) + this.b.distanza(this.c) + this.c.distanza(this.a);
    }

    public String toString(){
        String msg="E' UN TRIANGOLO";
        if(area() <= ERR_MAX){
            msg=" NON E' UN TRIANGOLO";
        }
        return msg;
    }
    
}