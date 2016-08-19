

#include <stdio.h>
struct lista{ 		//declaramos la lista como estructura
int datos;  		//este dato puede ser incluso otra estructura
struct lista *sig;	//esta estructura se usa como puntero al siguiente
}L; 

void Ins_No_ord(L *List, int x){
L *punt;
punt inicio;
inicio = (punt)malloc(sizeof(L));
inicio->datos = x;
inicio->sig = *List;
*List = inicio;
}
void borrar(L *List, int x){
punt p, ant;
p = *Lista;
ant = NULL;
if( !p || p->datos != x)
	return;
else{
	if(!ant) //primer elemento en la lista
	*Lista = p->sig;
	else
	ant->sig = p->sig;
	free(p);
	}}

	int main (void) {
	int primero = 1, segundo = 2;
	typedef  L *List *punt;          //definimos L para el direccionamiento a List y punt
	List lista = NULL;
	punt p;
	Ins_No_ord(&lista, primero);
	Ins_No_ord(&lista, segundo);

	borrar(&lista, primero);
	return 0;
	}

/*+int main (){
    
	char letra[50];
    FILE *arch;
	
    arch = fopen("datos.xml","r+");
	if (arch == NULL) 
		printf("Error");
    /*do{
    fgets(letra, 10 ,arch);
    printf("%s",letra);
    }while(EOF);
     do{
    
     printf("%s",fgets(letra, 50, arch));
     }while(letra == "<");
    //getparam(arch);
    fclose(arch);
    getchar();
    return 0;
    }

void getparam(FILE *arch){
     
     char letra;
     do{
     letra = fgetc(arch);
     printf("%c",letra);
     }while(letra != '>');
     //return valor;
     
     }
*/
