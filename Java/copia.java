/*crear un array de tipo vehi8culo, cuya capacidad maxima sea 15( los datos los ingresa el usuario
validando que el largo de la patente sea 6, kmrecorridos sea mayou o igual a cero y valor 
minimo de la gasolina sea 300$
========================================================================================
si el array posee datos:
igresa patente, si existe , mostrar datos asociados , de lo contraio dar mensaje.
mostrar patente de vehiculo que y meses en que recorrio menos de 800 km.
mostrar patente de vehiculos con mas km recorridos en el año
mostrar cantidad de vehiculosque recorrieron , en los meses impares, 2450 km
mostrar cantidad de vehiculos cuyo gasto anual por consumo de gasolina fue que 500.000*/


import java.lang.*;
import java.io.*;
class ne{
	public static void main(String [] args) throws IOException{
	vehiculo[] v;
	v = new vehiculo[15];
	
	short km, gas, cont=0, opc;
	String pat, car_o_ciu;
	BufferedReader scan =new BufferedReader(new InputStreamReader(System.in));
	
	do{
	System.out.println(".::Datos de vehiculo::.");
	do{
	System.out.print("Ingrese rendimiento del "+cont+1+"º vehiculo:    ");
	km = Short.parseShort(scan.readLine());
	}while(km<0);
	
	do{
	System.out.print("Ingrese capacidad del "+cont+1+"º vehiculo:    "");
	gas = Short.parseShort(scan.readLine());
	}while(gas<300);
	
	do{
	System.out.print("Ingrese patente del "+cont+1+"º vehiculo:    ");
	pat = scan.readLine();
	}while(pat.length()!=6);
	
	v[cont] = new vehiculo(pat,km,gas);
	
	System.out.print("Desea ingresar otro vehiculo?\t1)Si\t2)No\t");
	opc = scan.readLine();
	if(opc==1)
		cont++;
	if(cont==15)
		opc=2;
	}while (opc!=2);
	
	System.out.println("\nDatos del vehiculo:");
    System.out.println("Velocidad: "+v.get_vel());
    System.out.println("Patente: "+v.get_pat());
    System.out.println("Rendimiento: "+v.get_ren());
    System.out.println("Capacidad: "+v.get_cap());
	
	
	System.out.print("\n\nIngrese Distancia a recorrer:\t");
    d = Short.parseShort(scan.readLine());

	System.out.print("ciudad o carretera?:\t");
    car_o_ciu = scan.readLine();    
if(v.velocidadpermitida(car_o_ciu, vel) == true)
	System.out.print("Velocidad permitida\n");
if(v.velocidadpermitida(car_o_ciu, vel) == false)
	System.out.print("Velocidad NO permitida\n");
	
if(v.llega_destino(d,vel) == true)
	System.out.print("SI llega a destino\n");
else
	System.out.print("NO llega a destino\n");

	System.out.print("Se requiere que se llenen "+v.llena_estanque(d,vel)+" veces el estanque\n");
	System.out.print("Se gastaron "+v.gasto_viaje(d,vel)+" litros\n");
	
	}
}