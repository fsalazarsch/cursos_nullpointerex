class cliente{

private String nombre;
private String rut;
private int saldo;

cliente(String nom, String rol, inty sldo){
nombre = nom; rut = rol; saldo = sldo;
}

int deposito(int i){
saldo += i;
return saldo;
}

boolean giro(int i){
if(saldo>=i){
	saldo -= i;
	return true;
	}
else
	return false;
}

int deposito(int i){
saldo += i;
return saldo;
}

void mostr_saldo(){
System.out.println("El saldo es: "+saldo);
}

}