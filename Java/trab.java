import java.io.*;

public class piscina throws IOException {

double largo, ancho, alto;

BufferedReader scan =new BufferedReader(new InputStreamReader(System.in));


double devlargo(){
	largo = Double.ParseDouble(scan.ReadLine);
	return largo;
	}
	
double devancho(){
	ancho = Double.ParseDouble(scan.ReadLine);
	return ancho;
	}
	
double devalto(){
	alto = Double.ParseDouble(scan.ReadLine);
	return alto; 
	}
	
double agua(){/*Devuelve en litros*/
	return (largo*ancho*alto)/1000;
	}
double pintura(){
	return ((largo*ancho)+2*(alto*largo)+2*(alto*ancho));
	}

}



public static void main (String args[])/*throws IOException*/{

double x, y, z;
double aqua, pint;

//BufferedReader scan =new BufferedReader(new InputStreamReader(System.in));
pisc = new piscina();

x = pisc.devlargo();
y = pisc.devancho();
z = pisc.devalto();

aqua = pisc.agua(x, y, z);
pint = pisc.pintura(x, y, z);

}