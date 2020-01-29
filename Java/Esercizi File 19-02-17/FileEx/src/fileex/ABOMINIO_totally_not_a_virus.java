/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fileex;

import java.io.*;

/**
 *
 * @author L i v i u
 */
public class ABOMINIO_totally_not_a_virus {
    
    /**
     *
     * @param args
     * @throws IOException
     */
    public static void main(String[] args) throws IOException {
     FileEx out = new FileEx("b2.txt",'W');
     FileEx out2= new FileEx("a2.txt",'R');
      try {
         int ri=0,ca=0;
         String s;
         s=out2.fromFile();  
             while(s!=null){ 
              
             ri++;
             ca+=s.length();
             out.toFile("numero di righe : "+ri);
             out.toFile("numero di caratteri : "+ca);}
           }

             
         
      
      catch (FileException exception){
          System.out.println(exception.getMatter());
      }
      out.closeFile();
      
      FileEx in =new FileEx("file.txt",'R');
      String line;
      try{
          while(true){
              line=in.fromFile();
              System.out.println(line);
          }
      }
      catch(FileException exception){
          System.out.println(exception.getMatter());
     
      out.closeFile();
      out2.closeFile();
}
    }
}
