import java.io.*;
import java.util.*;

class setear_kanji{
	public static void main(String[] args) throws FileNotFoundException, IOException{
	
	ArrayList lista = new ArrayList();
	kanji kan;
	
	FileInputStream arch;
	DataInputStream f;
	//String linea1 = null, linea2 = null, linea3 = null, linea4 = null;
	
	short gr = 0;
	String k = null, o = null, s = null;
	
	arch = new FileInputStream("k1.txt");
	f = new DataInputStream(arch);
	do {

	gr = 1;
	k = f.readLine();
	o = f.readLine();
	s = f.readLine();
	
	kan = new kanji(gr, k, o, s);
	lista.add(kan);
	
	} while ( (o != null)||(k != null)||(s != null));
	lista.remove(lista.size()-1);
	arch.close();
	
	for(int i = 0; i<(lista.size()); i++){
		
	System.out.print(((kanji)lista.get(i)).get_grado()+"\t");
	System.out.print(((kanji)lista.get(i)).get_kun()+"\t");
	System.out.print(((kanji)lista.get(i)).get_on()+"\t");
	System.out.println(((kanji)lista.get(i)).get_sig());
	}
		System.out.println("Hay "+(lista.size())+" kanji");
	}
}