#include <stdio.h>
 
struct arbol{
       int valor;
       struct arbol *der;
       struct arbol *izq;
       };
 
void insertar(struct nodo **L);
void listar(struct nodo *L);
void borrar(struct nodo **L);
 
int main (){
     
int salida = 0, opc;
 
    struct arbol *A;
    A = NULL;
 
 
do{
printf("1) Insertar\n2) Borrar\n3) Listar\n5) Salir\n=============================\n");
    printf("Seleccione una opcion:\t");
    scanf("%d",&opc);
    switch(opc){
                case 1:                  
                     insertar(&L);
                     nro_reg++;
                     break;
                case 2:
                     borrar(&L);
                     nro_reg--;
                     break;
                case 3:
                     listar(L);
                     break;
                case 5:
                     salida = 1;
                     break;
                default:
                     salida = 0;
                        break;
                }
    }while(salida == 0);
 
 
getchar();  
    return 0;
    }
