public class Kanji {

	private String simbolo;
	private String onyomi;
	private String kunyomi;
	private String sign;
	private int trazo;	
	private int type;
	private String radical;
	
	
	public Kanji(String simbolo, String onyomi, String kunyomi, String sign, int trazo, int type, String radical) {
		this.simbolo = simbolo;
		this.onyomi = onyomi;
		this.kunyomi  = kunyomi;
		this.sign = sign;
		this.trazo = trazo;
		this.type = type;
		this.radical = radical;
	}
	public String getsimbolo() {
		return simbolo;
	}
	public String getonyomi() {
		return onyomi;
	}
	public String getkunyomi() {
		return kunyomi;
	}
	public String getsign() {
		return sign;
	}
	public String getradical() {
		return radical;
	}

	public int getType() {
		return type;
	}

	public void setType(int type) {
		this.type = type;
	}	
	

	
	public String toString() {
		StringBuffer sb = new StringBuffer();
		sb.append("Simbolo:" + getsimbolo());
		sb.append("\n");
		sb.append("Grado:" + getType());
		sb.append("\n");
		sb.append("Onyomi:" + getonyomi());
		sb.append("\n");
		sb.append("Kunyomi:" + getkunyomi());
		sb.append("\n");
		sb.append("Sign:" + getsign());
		sb.append("\n");
		sb.append("Radical:" + getradical());
		sb.append("\n");
		
		return sb.toString();
	}
}
