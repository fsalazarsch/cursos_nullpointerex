class Empleado extends Persona {
	
	private String dni;
	
	Empleado(){}
	
    Empleado(String rut, String nombre, short edad, String dni) {
    	super(rut, nombre, edad);
    	this.dni = dni;
    }
    
    public String get_dni(){
    	return dni;
    	}
    public void set_dni(String dni){
    	this.dni = dni;
    	}
}