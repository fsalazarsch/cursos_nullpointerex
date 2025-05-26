import java.io.*;
class Ejempl {
public static void main(String args[]) throws FileNotFoundException,IOException {
FileInputStream fptr;
DataInputStream f;
String linea = null;
fptr = new FileInputStream("ne.java");
f = new DataInputStream(fptr);
do {
linea = f.readLine();
if (linea!=null) System.out.println(linea);
} while (linea != null);
fptr.close();
}
}