import java.util.*;

class vectorapp
{
	public static void main(String[] args) {
        Vector v = new Vector();
	Vector z = new Vector();
        
	v.addElement(z);
        
	z.addElement("Hijo Izq");
        z.addElement("Hijo Der");
        System.out.println();
	
	v.addElement("2");
        v.addElement(5);
/*        v.insertElementAt("tres", 2);
        for(int i=0; i<v.size(); i++){
            System.out.print(v.elementAt(i)+"\t");
        }
        v.removeElement("tres"); */
       for(int i=0; i<v.size(); i++){
            System.out.print(v.elementAt(i)+"\t");
        }
        System.out.println();

     }
}

