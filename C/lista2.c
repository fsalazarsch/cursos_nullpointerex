#include <stdio.h>

struct nodo{
       int dato;
       struct nodo *sig;
       };
       
void insertar(struct nodo **L);
void listar(struct nodo *L);
void borrar(struct nodo **L);


int main(){
int salida = 0, opc;

struct nodo *L;
L = NULL;

do{
printf("1) Insertar\n2) Borrar\n3) Listar\n4) Salir\n=============================\n");
    printf("Seleccione una opcion:\t");
    scanf("%d",&opc);
    switch(opc){
                case 1:                  
                     insertar(&L);
                     break;
                case 2:
                     borrar(&L);
                     break;
                case 3:
                     listar(L);
                     break;
                case 4:
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

void insertar(struct nodo **L){
     int ndato;
     struct nodo *p, *aux, *lista ;
     p = (struct nodo *) malloc(sizeof(struct nodo));
     printf("Ingrese un nuevo número:\t");
     scanf("%d",&ndato);
     p->dato = ndato;
     
     p-> sig = NULL;
     aux = NULL;
     lista = *L;
     
     while(lista != NULL){
                 aux = lista;
                 lista = lista->sig;
                 }
     if(aux == NULL){
            p->sig = *L;
            *L = p;
            }
     else{
          aux->sig = p;
          p->sig = lista;
          }
 
     }

void listar(struct nodo *L){
     if(L != NULL){
     printf("%d,  ", L->dato);
     listar(L->sig);
     }
     else
     printf("\n");
     }
     
void borrar(struct nodo **L){
     
     struct nodo *nodo_ant, *nodo_rec, *nodo_aux;
     
     if(*L == NULL)
          printf("No hay datos en la lista\n");
     else
     {
      
     nodo_rec = *L;
     
     while (nodo_rec->sig != NULL){
              nodo_ant = nodo_rec;
              nodo_rec = nodo_rec->sig;
              }
          if(nodo_rec != NULL){
          nodo_aux = nodo_rec;
          nodo_ant->sig = nodo_rec->sig;
          free(nodo_aux);       
          }
     
     }}
