    

package geometria;

public class Main {
  
    
    public static void main(String[]args){
        Punto a = new Punto(1,1);
        Punto b = new Punto(2,2);
        Punto c = new Punto(1,2);
        Punto d = new Punto(2,1);
        Punto e = new Punto(3,3);
        Punto f = new Punto(4,4);
        Punto g = new Punto(3,4);
        Punto h = new Punto(4,3);
        Punto i = new Punto(5,5);
        Punto l = new Punto(6,6);
        Punto m = new Punto(5,6);
        Punto n = new Punto(6,5);
        Punto o = new Punto(7,7);
        Cerchio ce = new Cerchio(a,b);
        Rettangolo re = new Rettangolo(c,d,e,f);
        Quadrato qu = new Quadrato(g,h,i,l);
        Triangolo tr = new Triangolo(m,n,o);
        ce.toString();
        re.toString();
        qu.toString();
        tr.toString();
        if(ce.toString()=="NON E' UN CERCHIO")  System.out.println(ce.toString());
        else System.out.println("Cerchio : Area = "+ce.area()+" Circoferenza = "+ce.circonference());
        if(re.toString()=="NON E' UN RETTANGOLO")  System.out.println(re.toString());
        else System.out.println("Rettangolo : Area = "+re.area()+" Perimetro = "+re.perimeter());
        if(qu.toString()=="NON E' UN QUADRATO")  System.out.println(qu.toString());
        else System.out.println("Quadrato : Area = "+qu.area()+" Perimetro = "+qu.perimeter());
        if(re.toString()=="NON E' UN TRIANGOLO")  System.out.println(tr.toString());
        else System.out.println("Triangolo : Area = "+tr.area()+" Perimetro = "+tr.perimeter());
    }
    
}
