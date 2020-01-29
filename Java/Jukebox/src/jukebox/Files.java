package jukebox;

import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JTable;

public class Files {

    public void write(File f, String s) {
        try {
            RandomAccessFile f1 = new RandomAccessFile(f, "r");
            try {
                f1.writeChars(s);

            } catch (IOException ex) {
                Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
            }

        } catch (FileNotFoundException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
        }

    }

    public String read(File f) {
        BufferedReader r, a;
        int c;
        try {
            r = new BufferedReader(new FileReader(f));
            a = new BufferedReader(new FileReader(f));
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            r = new BufferedReader(new FileReader(f));
            a = new BufferedReader(new FileReader(f));
            String s = "", tmp = "";
            for (c = 0; (tmp = r.readLine()) != null; c++);
            r.close();
            for (int i = 0; i < c; i++) {
                s += "\n" + a.readLine();
            }
            a.close();
            return s;
        } catch (IOException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }

    }

    public int count(File f) {
        BufferedReader r;
        int i;
        try {
            r = new BufferedReader(new FileReader(f));
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            r = new BufferedReader(new FileReader(f));
            for (i = 0; r.readLine() != null; i++);
            r.close();
            return i;
        } catch (IOException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
            return 0;
        }

    }

    public String readLine(File f, int c) {
        BufferedReader r;
        int i;
        String s = "";
        try {
            r = new BufferedReader(new FileReader(f));
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            r = new BufferedReader(new FileReader(f));
            for (i = 0; i < c; i++) {
                s = r.readLine();
            }
            return s;
        } catch (IOException ex) {
            Logger.getLogger(Files.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }
    }

    public double totalSum(File f) {
        double sum = 0.0;
        String substring;
        for (int i = 1; i < this.count(f) + 1; i++) {
            substring = this.readLine(f, i).substring(this.readLine(f, i).indexOf(';') + 1, this.readLine(f, i).length());
            sum += Double.parseDouble(substring);
        }
        return sum;
    }

    public boolean search(File f, String s) {
        for (int i = 0; i < this.count(f); i++) {
            if (this.readLine(f, i).substring(this.readLine(f, i).indexOf(';') + 1, this.readLine(f, i).length()).equals(s)) {
                return true;
            }
        }
        return false;
    }

    public static void clearTable(JTable table) {
        for (int i = 0; i < table.getRowCount(); i++) {
            for (int j = 0; j < table.getColumnCount(); j++) {
                table.setValueAt("", i, j);
            }
        }
    }
}
