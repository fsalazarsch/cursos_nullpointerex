class vehiculo{

private short velocidad;
private String patente;
private short rendimiento;
private short cap_est;

vehiculo(short vel, String pat, short ren, short cap){
velocidad = vel;
patente = pat;
rendimiento = ren;
cap_est = cap;
}



void cargar_vel(short x){
velocidad = x;
}

void cargar_pat(String p){
patente = p;
}

void cargar_ren(short x){
rendimiento = x;
}

void cargar_capac(short x){
cap_est = x;
}

short get_vel(){
	return velocidad;
}

String get_pat(){
	return patente;
}

short get_ren(){
	return rendimiento;
}

short get_cap(){
	return cap_est;
}

boolean velocidadpermitida(String x, short vel){
if(x == "carretera"){
	if(vel<=120)
	return true;
	else 
	return false;
	}

else{
	if(vel<=60)
	return true;
	else 
	return false;
	}
}

boolean llega_destino(short d, short vel){
if((vel>100)&&(vel<=120))
	rendimiento *= rendimiento*0.96;
	
if(vel>120)
	rendimiento *= rendimiento*0.9;
	
if(rendimiento/*kn/litro*/*cap_est >= d)
	return false;
else
	return true;
}

short gasto_viaje(short d, short vel){
if((vel>100)&&(vel<=120))
	rendimiento *= rendimiento*0.96;
	
if(vel>120)
	rendimiento *= rendimiento*0.9;
	
	if((rendimiento*cap_est)%d!=0)
		return (short)((rendimiento*cap_est/d)+1);
	
	else
		return (short)(rendimiento*cap_est/d);
}

short llena_estanque(short d, short vel){
if((vel>100)&&(vel<=120))
	rendimiento *= rendimiento*0.96;
	
if(vel>120)
	rendimiento *= rendimiento*0.9;
	
return (short) (d/rendimiento/*kn/litro*/);


}
		
}