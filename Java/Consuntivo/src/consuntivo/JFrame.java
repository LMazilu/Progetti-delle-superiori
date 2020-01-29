
package consuntivo;

import java.awt.Desktop;
import java.io.*;
import java.util.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class JFrame extends javax.swing.JFrame {

 
    public JFrame() {
        initComponents();
    }


    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        creaFile = new javax.swing.JButton();
        Title = new javax.swing.JLabel();
        Apri = new javax.swing.JButton();
        CreaFileFinal = new javax.swing.JButton();
        Visual = new javax.swing.JButton();
        Delete = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        creaFile.setText("Creazione Files Primari");
        creaFile.addFocusListener(new java.awt.event.FocusAdapter() {
            public void focusGained(java.awt.event.FocusEvent evt) {
                creaFileFocusGained(evt);
            }
        });
        creaFile.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                creaFileActionPerformed(evt);
            }
        });

        Title.setFont(new java.awt.Font("Tahoma", 0, 36)); // NOI18N
        Title.setText("GESTIONE CSV");
        Title.setBorder(new javax.swing.border.MatteBorder(null));

        Apri.setText("Apri Cartella");
        Apri.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ApriActionPerformed(evt);
            }
        });

        CreaFileFinal.setText("Creazione File Finale");
        CreaFileFinal.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CreaFileFinalActionPerformed(evt);
            }
        });

        Visual.setText("Visualizzazione");
        Visual.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                VisualActionPerformed(evt);
            }
        });

        Delete.setText("Delete");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap(165, Short.MAX_VALUE)
                .addComponent(Title)
                .addGap(103, 103, 103)
                .addComponent(Delete))
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                    .addComponent(CreaFileFinal, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(creaFile, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 150, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(Apri, javax.swing.GroupLayout.DEFAULT_SIZE, 150, Short.MAX_VALUE)
                    .addComponent(Visual, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Title, javax.swing.GroupLayout.PREFERRED_SIZE, 39, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(Delete))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(creaFile, javax.swing.GroupLayout.DEFAULT_SIZE, 67, Short.MAX_VALUE)
                    .addComponent(Apri, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 74, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(CreaFileFinal, javax.swing.GroupLayout.PREFERRED_SIZE, 68, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(Visual, javax.swing.GroupLayout.PREFERRED_SIZE, 68, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(44, 44, 44))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void creaFileActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_creaFileActionPerformed
                Files p = new Files();
                File f0 = new File("src/files/BOLLETTE.csv");
                File f1 = new File("src/files/ABBONAMENTI.csv");
                File f2 = new File("src/files/SCUOLA.csv");
                File f3 = new File("src/files/SALUTE.csv");
                File f4 = new File("src/files/VACANZE.csv");
                File f5 = new File("src/files/SVAGO.csv");
                File f6 = new File("src/files/ALIMENTARI.csv");
                f0.getParentFile().mkdirs();
                f1.getParentFile().mkdirs(); 
                f2.getParentFile().mkdirs(); 
                f3.getParentFile().mkdirs(); 
                f4.getParentFile().mkdirs(); 
                f5.getParentFile().mkdirs(); 
                f6.getParentFile().mkdirs(); 
                try {
                    f0.createNewFile();
                    f1.createNewFile();
                    f2.createNewFile();
                    f3.createNewFile();
                    f4.createNewFile();
                    f5.createNewFile();
                    f6.createNewFile();
                } catch (IOException ex) {
                    Logger.getLogger(JFrame.class.getName()).log(Level.SEVERE, null, ex);
                }
                p.Write(f0,"Gas;87.50\nLuce;52\nInternet;19.99\nAffitto;487.54");
                p.Write(f1,"GTT;300\n");
     
                
    }//GEN-LAST:event_creaFileActionPerformed

    private void ApriActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ApriActionPerformed
          try {
            Desktop.getDesktop().open(new File("src/files"));
        } catch (IOException ex) {
            Logger.getLogger(JFrame.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_ApriActionPerformed

    private void creaFileFocusGained(java.awt.event.FocusEvent evt) {//GEN-FIRST:event_creaFileFocusGained
     
    }//GEN-LAST:event_creaFileFocusGained

    private void CreaFileFinalActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CreaFileFinalActionPerformed
       //creazione consuntivo finale
    }//GEN-LAST:event_CreaFileFinalActionPerformed

    private void VisualActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_VisualActionPerformed
        //Visualizzazione
    }//GEN-LAST:event_VisualActionPerformed


    public static void main(String args[]){
       

        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(JFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(JFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(JFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(JFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
          new JFrame().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton Apri;
    private javax.swing.JButton CreaFileFinal;
    private javax.swing.JButton Delete;
    private javax.swing.JLabel Title;
    private javax.swing.JButton Visual;
    private javax.swing.JButton creaFile;
    // End of variables declaration//GEN-END:variables
}
