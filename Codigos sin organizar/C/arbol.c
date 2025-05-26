#include <stdio.h>
#include <stdlib.h>

struct arbol{
       int valor;
       struct arbol *der;
       struct arbol *izq;
       };

void insertar(struct arbol **A, int dato);
void preorden(struct arbol *A);
void inorden(struct arbol *A);
void postorden(struct arbol *A);
void borrar(struct arbol **A, int val);
void rotacion(struct arbol **A, struct arbol **B);
int encontrar(struct arbol *A, int val);

int main (){
    
int salida = 0, salida2 = 0, opc, listar_opc;
int ndato, val;

    struct arbol *A;
    A = NULL;


do{
    
printf("1) Insertar\n2) Borrar\n3) Listar\n4) Salir\n=============================\n");
    printf("Seleccione una opcion:\t");
    scanf("%d",&opc);
    switch(opc){
                case 1:                  
                     
                     printf("Ingrese un nuevo número:\t");
                     scanf("%d",&ndato);
                     insertar(&A, ndato);
                   
                     break;
                case 2:
                          do{
                          printf("Seleccione el valor del nodo a borrar:\t");
                          scanf("%d", &val);
                          }while((encontrar(A, val) )  != 0);
                     borrar(&A, val);
                     break;
                case 3:
                     do{
                     printf("1) Preorden\n2) Inorden\n3) Postorden\n4) Salir\n===============\n");
                     printf("Seleccione una opcion:\t");
                     scanf("%d",&listar_opc);                     
                     switch(listar_opc){
                     case 1:
                     preorden(A);
                     printf("\n");
                     break;
                     case 2:
                     inorden(A);
                     printf("\n");
                     break;
                     case 3:
                     postorden(A);
                     printf("\n");
                     break;
                     case 4:
                     salida2 = 1;
                     break;
                     default:
                     salida2 = 0;
                     break;
                     
                     }
                     }while(salida2 == 0);
                     //listar(A);
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

void insertar(struct arbol **A, int ndato){
     
     
     if(*A == NULL){
      *A = (struct arbol *) malloc(sizeof(struct arbol));

           (*A)->valor = ndato;
           (*A)->izq = NULL;
           (*A)->der = NULL;
     }
     else if(ndato < (*A)->valor){
                  insertar(&((*A)->izq), ndato);
                  }
     else if(ndato > (*A)->valor){
                  insertar(&((*A)->der), ndato);
                  }
     else
              printf("Error, no puede haber un valor igual\n");
          
}


void preorden(struct arbol *A){
     if(A != NULL){
          printf("%d ", A->valor);
          preorden(A->izq);
          preorden(A->der);
          }
     }

void inorden(struct arbol *A){
          if(A != NULL){
          inorden(A->izq);
          printf("%d ", A->valor);
          inorden(A->der);
          }
     }
     
void postorden(struct arbol *A){
          if(A != NULL){
          postorden(A->izq);
          postorden(A->der);
          printf("%d ", A->valor);
          }
     }

int encontrar(struct arbol *A, int val){
     
     if(A == NULL){
          printf("Error, no hay nodos en el arbol\n");
          return 2;
          }
     
     if(A != NULL){
          if(A->valor != val){
          preorden(A->izq);
          preorden(A->der);
          }
          else
          return 1;
          }
     return 0;
     }

void borrar(struct arbol **A, int val){
     
     struct arbol *arbol_aux;
     
     if((*A) == NULL){
          printf("Error, no hay nodos en el arbol");
          return;
          }
          

          if((*A)->valor < val)
          borrar(&(*A)->der, val);
          else if((*A)->valor > val)
          borrar(&(*A)->izq, val);
          else if((*A)->valor == val){
                      arbol_aux = *A;              
                      if((*A)->izq == NULL)
                                    *A = (*A)->der;
                      else if((*A)->der == NULL)
                                    *A = (*A)->izq;
                      else
                                    rotacion(&(*A)->izq, &arbol_aux);
                                    
                      free(arbol_aux);
                      }          
     }
     
void rotacion(struct arbol **a, struct arbol **B)
{
  if ((*a)->der != NULL) rotacion(&(*a)->der, B);
  else {
    (*B)->valor = (*a)->valor;
    *B = *a;
    *a = (*a)->izq;
  }
}
