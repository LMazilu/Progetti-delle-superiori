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
public class Main2 {
    
    /**
     *
     * @param args
     * @throws IOException
     */
    public static void main(String[] args) throws IOException {
     FileEx out = new FileEx("src/fileex/b2.txt",'W');
     FileEx out2= new FileEx("src/fileex/a2.txt",'R');
      try {
         int ri=0,ca=0;
         String s;
           
             while((s=out2.fromFile())!=null){ 
             ri++;
             ca+=s.length();
             
             }
            
             out.toFile("numero di righe : "+ri);
             out.toFile("numero di caratteri : "+ca); 
            // if(s == null) throw new FileException("End of file!");
             
           }

             
         
      
      catch (FileException exception){
          System.out.println(exception.getMatter());
      }
      out.closeFile();
      out2.closeFile();
}
}
