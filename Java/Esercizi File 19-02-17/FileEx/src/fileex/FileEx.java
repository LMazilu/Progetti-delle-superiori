package fileex;
import java.io.*;

/**
 *
 * @author L i v i u
 */
public class FileEx {
private char mode;
private BufferedReader reader;
private BufferedWriter writer;

    /**
     *
     * @param filename
     * @param mode
     * @throws IOException
     */
    public FileEx(String filename, char mode) throws IOException{
    this.mode = 'R';
    if(mode == 'W' || mode == 'w'){
        this.mode = 'W';
        writer = new BufferedWriter(new FileWriter(filename));
    }
    else{
    reader = new BufferedReader(new FileReader(filename));
    }
}

    /**
     *
     * @param line
     * @throws FileException
     * @throws IOException
     */
    public void toFile(String line) throws FileException,IOException{
      if(this.mode == 'R') throw new FileException("Read-only"+"file!");
        writer.write(line);
        writer.newLine();
  }
  
    /**
     *
     * @return
     * @throws FileException
     * @throws IOException
     */
    public String fromFile() throws FileException, IOException{
      String tmp;
      if(this.mode == 'W') throw new FileException("Write-only"+"file!");
      tmp = reader.readLine();
      return tmp;
  }
  
    /**
     *
     * @throws IOException
     */
    public void closeFile() throws IOException{
      if(this.mode == 'W')
          writer.close();
      else
          reader.close();
  }
          
}
    

