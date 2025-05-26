import javax.swing.*;
import java.awt.*;
import java.io.*;

public class none extends JFrame{
    private JLabel nombre, pass, di,nom;
    private JTextField paswd;
    private Container vent;
    private GridLayout rej;
    
    public none() {
    	super("Registro Pagos");
    	rej = new GridLayout(5,2,5,5);



      //ventana.add();
    	
      vent = getContentPane();
      vent.setLayout(rej);
		vent.add(new JLabel("Alias"));
		vent.add(new JTextField(20));
		vent.add(new JLabel("Pass"));
		vent.add(new JTextField(20));
		vent.add(new JLabel("Cantidad"));
		vent.add(new JTextField(20));
		vent.add(new JLabel());vent.add(new JLabel());
		vent.add(new JButton("Enviar formulario"));
      setSize(350,200);
      setResizable(false);
      setVisible(true);
      
	
    	//nombre=JOptionPane.showInputDialog(null,"Escribe tu nombre");
    	//JOptionPane.showInputDialog(null, "Ingrese nombre de usuario", "Identificación",3);
    }

    public static void main(String[] args) throws Exception{
          none m = new none();
      m.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
    
    }
}