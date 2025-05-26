class Triangulo extends Figura{
		private String tipo;
		private short lado;
	
	Triangulo(double b, double h, String t, short l){
		super(b,h);	
		lado = l;
		tipo = t;
		}		
	
    public short get_lado(){
    	return lado;
    	}
	
	public String get_tipo(){
		return tipo;
		}
	
	void perimetro(double b,double h){
		System.out.print((b*h)/2);
		}
	}