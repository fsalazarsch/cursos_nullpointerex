import java.lang.*;
import java.io.*;

class ne{
	public static void main (String []args) throws IOException{
	kanji[] k;
	
	
	short gra, i, x=0;
	String sig, kun, on;
		
	BufferedReader scan =new BufferedReader(new InputStreamReader(System.in));
	
	System.out.print("Escriba el numero:\t");
	x = Short.parseShort(scan.readLine());

	k = new kanji[x]; //x es elnumero de elementos

	
	for(i=0;i<x;i++){
	
	System.out.print("Escriba el grado:\t");
	gra = Short.parseShort(scan.readLine());
	System.out.print("Escriba la lectura kun:\t");
	kun = scan.readLine();
	System.out.print("Escriba la lectura on:\t");
	on = scan.readLine();
	System.out.print("Escriba el significado:\t");
	sig = scan.readLine();
	
	k[i]= new kanji(gra,kun,on,sig);

	}
	System.out.println("");
	System.out.println(".-=DATOS DE KANJI=-.\n====================");
	
	for(i=0;i<x;i++){
	System.out.println("Kanji nº"+(i+1));
	System.out.println("Grado:\t"+k[i].get_grado());
	System.out.println("Lectura kun:\t"+k[i].get_kun());
	System.out.println("Lectura on:\t"+k[i].get_on());
	System.out.println("Significado:\t"+k[i].get_sig());
	System.out.println("");
	
	}	
	
	
	}
}