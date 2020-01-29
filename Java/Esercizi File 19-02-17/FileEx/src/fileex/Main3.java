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
public class Main3 {
    
    /**
     *
     * @param args
     * @throws IOException
     */
    public static void main(String[] args) throws IOException {
     FileEx out = new FileEx("src/fileex/f1.txt",'R');
     FileEx out2= new FileEx("src/fileex/f2.txt",'R');
     FileEx out3= new FileEx("src/fileex/unione.txt",'W');
      try {
          
         String s="";
         String s2="";
       
         
         while(s!=null || s2!=null){
             
         s= out.fromFile();
         if(s!=null){out3.toFile(s);}
         s2= out2.fromFile();
         if(s2!=null){out3.toFile(s2);}
         
        }
         
         if(s==null){
         while(s2!=null){
             s2=out2.fromFile();
             out3.toFile(s2);
         }     
        }
         
         if(s2==null){
         while(s!=null){
             s=out.fromFile();
             out3.toFile(s2);
         }     
        }
         
      }
      

      catch (FileException exception){
          System.out.println(exception.getMatter());
      }
      
      out.closeFile();
      out2.closeFile();
      out3.closeFile();
      
}
}
