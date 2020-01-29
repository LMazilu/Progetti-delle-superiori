
package esercizio.pkg00;


public class Persona {
private int eta;
private String nome;
private String sesso;
private String professione;


    public Persona(int eta0, String nome0, String sesso0, String professione0) {
        this.eta = eta0;
        this.nome = nome0;
        this.sesso = sesso0;
        this.professione = professione0;
      
    }

    public int getEta() {
        return eta;
    }

    public void setEta(int eta0) {
        this.eta = eta0;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome0) {
        this.nome = nome0;
    }

    public String getSesso() {
        return sesso;
    }

    public void setSesso(String sesso0) {
        this.sesso = sesso0;
    }

    public String getProfessione() {
        return professione;
    }

    public void setProfessione(String professione0) {
        this.professione = professione0;
    }
   
    
    public String chiSei(){
        String chisei0 ="Sono una persona di nome: " +this.nome+ ", di eta': " +this.eta+ ", di sesso: " +this.sesso+ "e di professione: " +this.professione;
        return(chisei0);
    }
    

  

    public static void main(String[] args) {
       Persona  p1 = new Persona(17,"Mirco","Maschio","Programmatore");
        System.out.println(p1.chiSei());
     
     
    }

    
}
