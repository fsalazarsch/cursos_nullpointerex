import java.lang.*;
import java.io.*;
class prueba_1{
	public static void main(String [] args) throws IOException{
	alumno a;
	
	boolean salida;
	short i,j;
	String nom, rol;
	float nsol[], nctrl[];
	
	BufferedReader scan =new BufferedReader(new InputStreamReader(System.in));
	
	//PUNTO 2.A
	System.out.print("Ingrese Nombre alumno:    ");
	nom = scan.readLine();
	do{
	System.out.print("Ingrese rut:    ");
	rol = Short.parseShort(scan.readLine());
	}while(/*lenght caracter y elpenultino sea -*/);
	
	j=0;
	do{
	System.out.print("Ingrese notas de control "+(j+1)+":    ");
	nctrl[j] = scan.readLine();
	System.out.print("¿Ingresar otra nota?:    1)Si\t2)No");
	i = scan.readLine();
	if(i==1){
	salida = false;
	nctrl[]++
	j++;
	
	}
	
	else
	salida == true;
	}while(salida == false);
	
	do{
	System.out.print("Ingrese Dia de compra:\t1)Con Descuento\t2)Sin descuento\t");
	dia_com = Short.parseShort(scan.readLine());
	}while((dia_com != 1)&&(dia_com != 2));
	
	
	//PUNTO 2.B
	r = new Remedio(nom_r, Tipo_rem, valor, dia_com);
	
	//PUNTO 2.C
	System.out.println("\nDatos del Remedio:");
    System.out.println("Nombre:\t"+r.get_nomrem());
    System.out.println("Tipo:\t"+r.get_tiporem());
	if(dia_com == 1)
    System.out.println("Dia de compra:\tCon Descuento");
	if(dia_com == 2)
    System.out.println("Dia de compra:\tSin Descuento");
	System.out.println("Valor:\t"+r.get_valorrem());
    
	//PUNTO 2.D
	do{
	System.out.print("Ingrese Cantidad:\t");
	cant = Short.parseShort(scan.readLine());
	}while(cant <= 0);	
	System.out.print("Total a Pagar:\t"+r.totalPago(valor, cant)+"\n");
	
	//PUNTO 2.E
	if(promocion == true)
		r.totalPago(valor, cant) *=0.8;
	
	System.out.print("Total a Pagar con Descuento:\t"+r.totalPago(valor, cant)+"\n");
	
	//PUNTO 2.F
	valor = v.liquidacion(valor);
	System.out.print("Se aplico el descuento a cada remedio:\n");
	
	}