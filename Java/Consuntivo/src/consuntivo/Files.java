package consuntivo;

import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Files {

    public void Write(File f, String s) {
        BufferedWriter w;
        try {
            w = new BufferedWriter(new FileWriter(f));
            w.write(s);
            w.newLine();
            w.close();
        } catch (IOException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
            System.out.println("errore");
        }
        
    }

    public String Read(File f) {
        BufferedReader r;
        try {
            r = new BufferedReader(new FileReader(f));
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            r = new BufferedReader(new FileReader(f));
            String s= r.readLine();
            r.close();
            return s;
        } catch (IOException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }

    }

}
