
package fileex;

import java.io.IOException;

/**
 *
 * @author L i v i u
 */
public class Main1 {
    
    /**
     *
     * @param args
     * @throws IOException
     */
    public static void main(String[] args) throws IOException {
     FileEx out = new FileEx("src/fileex/b1.txt",'W');
     FileEx out2= new FileEx("src/fileex/a1.txt",'R');
      try {
            String s;
            while(out2.fromFile()!=null){
                s = out2.fromFile();
                out.toFile(s);
           }
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
              if(line == null) throw new FileException("End of file!");
              
              
          }
      }
      catch(FileException exception){
          System.out.println(exception.getMatter());
     
      out.closeFile();
}
    }
}
