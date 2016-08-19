class Persona {
	
	private String rut;
	private String nombre;
	private short edad;
	
	Persona(){}
	
    Persona(String rut, String nombre, short edad) {
    this.rut = rut;
    this.nombre = nombre;
    this.edad = edad;
    }
    
    public void set_rut(String rut){
    	this.rut = rut;
    	}
    public void set_nom(String nombre){
    	this.nombre = nombre;
    	}
    public void set_edad(short edad){
    	this.edad = edad;
    	}
    
    public String get_rut(){
    	return rut;
    	}

    public String get_nombre(){
    	return nombre;
    	}

    public short get_edad(){
    	return edad;
    	}
    
}