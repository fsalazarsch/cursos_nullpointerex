import java.awt.*;
import java.applet.*;
public class Ejemplo7 extends Applet {
    public static void main(String args[]) {
        Ejemplo7 window = new Ejemplo7();

        window.show();
    }
    public Ejemplo7() {
Panel panelAlto = new Panel();
Button ok = new Button("Aceptar");
panelAlto.add("West", ok);
panelAlto.add("East", new TextArea("Area de texto", 5, 20));
add("North", panelAlto);
Panel panelBajo = new Panel();
panelBajo.add(new TextField("Campo de Texto"));
panelBajo.add(new Button("Botón"));
add("South",panelBajo);
    }
    public boolean handleEvent(Event ev, Button ok) {
        if(ev.target == ok)
        new Label("Hola");
        
        if(ev.id == Event.WINDOW_DESTROY) {
             
                System.exit(0);
            
        }
        return super.handleEvent(ev);
    }
}