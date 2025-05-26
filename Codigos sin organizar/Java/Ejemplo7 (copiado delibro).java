// grabar como "Ejemplo7.java"
// compilar con "javac Ejemplo7.java"
import java.awt.*;
public class Ejemplo7 extends Frame {
    boolean inAnApplet = true;
    public static void main(String args[]) {
        Ejemplo7 window = new Ejemplo7();
        window.inAnApplet = false;
        window.setTitle("Ejemplo");
        window.pack();
        window.show();
    }
    public Ejemplo7() {
Panel panelAlto = new Panel();
panelAlto.add("West", new Label("Cartel", Label.CENTER));
panelAlto.add("East", new TextArea("\u3067\u3059", 20, 20));
add("North", panelAlto);
Panel panelBajo = new Panel();
panelBajo.add(new TextField("Campo de Texto"));
panelBajo.add(new Button("\u3067\u3059"));
add("South",panelBajo);
    }
    public boolean handleEvent(Event ev) {
        if (ev.id == Event.WINDOW_DESTROY) {
             if (inAnApplet) {
                dispose();
            } else {
                System.exit(0);
            }
        }
        return super.handleEvent(ev);
    }
}