// j007.java = dibuja 2 circunferencias 
import java.awt.*; 
import java.awt.event.*; 
class j007 extends Frame { 
 public j007() { 
  setTitle("Trabajo");

	crear_menu();
	
	    MenuBar m_princ = new MenuBar();
  
  Menu archivo = new Menu("Archivo");
  MenuItem creditos = new MenuItem("Creditos");
  MenuItem salir = new MenuItem ("Salir");
  archivo.add(creditos);
  archivo.add(salir);
  
  Menu menuquiz = new Menu("Quiz");
  Menu mqkanji = new Menu("Kanji");
  Menu mqnoken = new Menu("Noken");
  
  
  
  menuquiz.add(mqkanji);  
  menuquiz.add(new MenuItem("-"));
  menuquiz.add(mqnoken);
  
  
  Menu menubuscar = new Menu("Buscar");
  Menu mbkanji = new Menu("Kanji");
  Menu mbnoken = new Menu("Noken");
  
  menubuscar.add(mbkanji);  
  menubuscar.add(new MenuItem("-"));
  menubuscar.add(mbnoken);
  
  MenuItem qk1 = new MenuItem("Grado 1");
  MenuItem qk2 = new MenuItem("Grado 2");
  MenuItem qk3 = new MenuItem("Grado 3");
  MenuItem qk4 = new MenuItem("Grado 4");
  MenuItem qk5 = new MenuItem("Grado 5");
  MenuItem qk6 = new MenuItem("Grado 6");
  MenuItem qk7 = new MenuItem("Grado 7");
  MenuItem qk8 = new MenuItem("Grado 0");
  mqkanji.add(qk1);
  mqkanji.add(qk2);
  mqkanji.add(qk3);
  mqkanji.add(qk4);
  mqkanji.add(qk5);
  mqkanji.add(qk6);
  mqkanji.add(qk7);
  mqkanji.add(qk8);
  
  MenuItem qJLPT1 = new MenuItem("JLPT 1");
  MenuItem qJLPT2 = new MenuItem("JLPT 2");
  MenuItem qJLPT3 = new MenuItem("JLPT 3");
  MenuItem qJLPT4 = new MenuItem("JLPT 4");
  mqnoken.add(qJLPT1);
  mqnoken.add(qJLPT2);
  mqnoken.add(qJLPT3);
  mqnoken.add(qJLPT4);
  
  
  MenuItem bk1 = new MenuItem("Grado 1");
  MenuItem bk2 = new MenuItem("Grado 2");
  MenuItem bk3 = new MenuItem("Grado 3");
  MenuItem bk4 = new MenuItem("Grado 4");
  MenuItem bk5 = new MenuItem("Grado 5");
  MenuItem bk6 = new MenuItem("Grado 6");
  MenuItem bk7 = new MenuItem("Grado 7");
  MenuItem bk8 = new MenuItem("Grado 0");
  mbkanji.add(bk1);
  mbkanji.add(bk2);
  mbkanji.add(bk3);
  mbkanji.add(bk4);
  mbkanji.add(bk5);
  mbkanji.add(bk6);
  mbkanji.add(bk7);
  mbkanji.add(bk8);
  
  MenuItem bJLPT1 = new MenuItem("JLPT 1");
  MenuItem bJLPT2 = new MenuItem("JLPT 2");
  MenuItem bJLPT3 = new MenuItem("JLPT 3");
  MenuItem bJLPT4 = new MenuItem("JLPT 4");
  mbnoken.add(bJLPT1);
  mbnoken.add(bJLPT2);
  mbnoken.add(bJLPT3);
  mbnoken.add(bJLPT4);

  m_princ.add(archivo);
  m_princ.add(menubuscar);
  m_princ.add(menuquiz);
  setMenuBar(m_princ);
	
	
/*  Panel panelAlto = new Panel();
panelAlto.add("West", new Label("Cartel", Label.LEFT));
//panelAlto.add("East", new Label(" ", Label.CENTER));
add("North", panelAlto); */

 } 
 public static void main(String [] args) { 
  Frame f=new j007(); 

 f.setSize(600,400); 
 f.setVisible(true);
 } 
 /*public void paint(Graphics g){ 
  g.setColor(Color.red); 
  g.drawOval(200,50,30,30); 
  g.setColor(Color.blue); 
  g.drawOval(35,75,30,30); 
  g.drawString("Dos circunferencias",40,100); 
 }*/
  public void crear_menu(){

	
  }
  
public boolean handleEvent(Event ev) {
        if (ev.id == Event.WINDOW_DESTROY){    
                System.exit(0);   
        }
        return super.handleEvent(ev);
    }
   
}