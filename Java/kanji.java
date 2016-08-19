class kanji{

private short grado;
private String kunyomi;
private String onyomi;
private String sig_esp;

kanji(short n_gra, String kun, String on, String sig){
grado = n_gra;
kunyomi = kun;
onyomi = on;
sig_esp = sig;
}

void cargar_grado(short x){
grado = x;
}

void cargar_lects(String k, String o){
kunyomi = k;
onyomi = o;
}

void cargar_sig(String s){
sig_esp = s;
}

short get_grado(){
	return grado;
}

String get_on(){
	return onyomi;
}

String get_kun(){
	return kunyomi;
}

String get_sig(){
	return sig_esp;
}
}