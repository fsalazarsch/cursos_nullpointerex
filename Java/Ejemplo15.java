import java.awt.*;
import java.applet.Applet;
class canvas extends Applet {
    public static void main() {
Label label = new Label("Pique y arrastre con el mouse!");
miCanvas zonaDib = new miCanvas();
zonaDib.resize(new Dimension (200,200));
add("North", label);
add("Center", zonaDib);
resize(300,250);
   }
}
class miCanvas extends Canvas {
    Rectangle rectActual;
    public boolean mouseDown(Event e, int x, int y) {
rectActual = new Rectangle(x, y, 0, 0);
repaint();
return false;
    }
    public boolean mouseDrag(Event e, int x, int y) {
rectActual.resize(x-rectActual.x, y-rectActual.y);
repaint();
return false;
    }
    public boolean mouseUp(Event e, int x, int y) {
rectActual.resize(x-rectActual.x, y-rectActual.y);
repaint();
return false;
    }
    public void paint(Graphics g) {
Dimension d = size();
g.setColor(Color.red);
g.drawRect(0, 0, d.width-1, d.height-1);
g.setColor(Color.blue);
if (rectActual != null) {
Rectangle box = cortarRect(rectActual, d);
g.drawRect(box.x, box.y, box.width-1, box.height-1);
}
    }
    Rectangle cortarRect(Rectangle miRect, Dimension areaDib) {
        int x = miRect.x;
        int y = miRect.y;
        int ancho = miRect.width;
        int alto = miRect.height;
        if (ancho < 0) {
            ancho = -ancho;
            x = x - ancho + 1;
            if (x < 0) {
                ancho += x;
                x = 0;
            }
        }
        if (alto < 0) {
            alto = -alto;
            y = y - alto + 1;
            if (y < 0) {
                alto += y;
                y = 0;
            }
        }
        if ((x + ancho) > areaDib.width) {
            ancho = areaDib.width - x;
        }
        if ((y + alto) > areaDib.height) {
            alto = areaDib.height - y;
        }
        return new Rectangle(x, y, ancho, alto);
    }
}