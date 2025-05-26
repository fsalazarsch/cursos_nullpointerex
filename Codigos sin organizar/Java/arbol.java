import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.FileInputStream;
import java.io.DataInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.lang.NullPointerException;

class nodo{
	private String palabra;
	private nodo izq;
	private nodo der;
	
	nodo(String pal, nodo iz, nodo de){
		palabra = pal;
		izq = iz;
		der = de;
		}
	String get_pal(){
		return palabra;
		}

	nodo get_izq(){
		return izq;
		}

	nodo get_der(){
		return der;
		}
	
	void set_pal(String pal){
		palabra = pal;
		}
	void set_izq(nodo x){
		izq = x;
		}
	void set_der(nodo x){
		der = x;
		}
		
public void insertar(nodo raiz, String tupla){

		if(raiz != null){
			
		if(raiz.get_pal() == null)
			raiz.set_pal(tupla);
			
		else if (tupla.compareTo(raiz.get_pal()) < 0){
		raiz = raiz.get_izq();
		}
		else if(tupla.compareTo(raiz.get_pal()) > 0){
		raiz = raiz.get_der();
		}
		}

			if(raiz == null){
//		System.out.println("Se ha creado un nodo nuevo");
			raiz = new nodo(tupla, null, null);
			System.out.println(raiz.get_pal());
		}

	}
	}

class arbol{

	public static void main(String x[]){
		
		System.out.println("Creacion de arboles");
		nodo raiz = new nodo(null, null, null);

		
		FileInputStream arch;
		DataInputStream f2;
		String cad = null;
		try{
		arch = new FileInputStream("dicc.txt");
		f2 = new DataInputStream(arch);
		do{
			
		cad = f2.readLine();
			try{
				if(cad != null){
					raiz.insertar(raiz,cad);
						
				}
			}
		catch (NullPointerException npe){}
			//System.out.println(cad);
		}while (cad != null);
		arch.close();
		}
		catch (FileNotFoundException fnfe){
			System.out.println("No existe el archivo");
			}
		catch (IOException ioe){
			System.out.println("Error en lectura");
			}

		recorrer(raiz); //preorden (raiz, izq, der)

		}
		
	

public static void recorrer(nodo raiz){
	try{
	
	if(raiz.get_pal() != null){
		recorrer(raiz.get_izq());
		System.out.println(raiz.get_pal()+" ");
		recorrer(raiz.get_der());
	}
	}

catch (NullPointerException npe){}
}

}