#include <stdio.h>

struct nodo{
       int dato;
       struct nodo *sig;
       };
       
void insertar(struct nodo **L);
void listar(struct nodo *L);
void modificar(struct nodo *L, int nodo);
void borrar(struct nodo **L);


int main(){
int salida = 0, opc, nro_reg = 0;

struct nodo *L;
L = NULL;

do{
printf("1) Insertar\n2) Borrar\n3) Modificar\n4) Listar\n5) Salir\n=============================\n");
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
                     modificar(L, nro_reg);
                     break;
                case 4:
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
     
void modificar(struct nodo *L, int nodo){
     int pos, i;
     do{
     printf("Seleccione la posición del nodo a modificar:\t");
     scanf("%d", &pos);
     }while((pos > nodo) || (pos < 1));
     i=0;
     if(L == NULL)
          printf("No hay datos en la lista\n");
     else
     while((L != NULL) && (i < (pos-1))){
          i++;
          L = L->sig;
          }
          
          printf("Escriba el dato modificado:\t");
          scanf("%d", &pos);
          L->dato = pos;
          
     }
     
void borrar(struct nodo **L){
     
     struct nodo *nodo_ant, *nodo_rec, *nodo_aux;
     
     if(*L == NULL)
          printf("No hay datos en la lista\n");
     else
     {
     
     int pos, i;
     printf("Seleccione la posición del nodo a borrar:\t");
     scanf("%d", &pos);
     i=0;
     
     nodo_rec = *L;
     
     if(i == (pos-1)){
         nodo_aux = *L;
         *L = (*L)->sig;
         free(nodo_aux);
          }
     else
     while ( (nodo_rec != NULL) && (i != (pos-1)) ){
              i++;
              nodo_ant = nodo_rec;
              nodo_rec = nodo_rec->sig;
              }
          if(nodo_rec != NULL){
          nodo_aux = nodo_rec;
          nodo_ant->sig = nodo_rec->sig;
          free(nodo_aux);       
          }
     
     }}
