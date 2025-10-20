#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int dato;
    struct Nodo* siguiente;
}Nodo;

//crear lista

Nodo* crear_lista(){
    return NULL;
}


void insertar( Nodo** cabecera, int valor){
    Nodo* nuevo =  (Nodo*) malloc(sizeof(Nodo));
    nuevo->dato = valor; 

    if(*cabecera == NULL){
        *cabecera = nuevo;
        nuevo->siguiente = nuevo;
    }
    else{
       Nodo* actual = *cabecera;
        while( actual->siguiente != *cabecera){
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
        nuevo->siguiente = *cabecera;
    }


}

void eliminar( Nodo** cabecera, int valor){
    if(*cabecera == NULL) return;

    Nodo* actual = *cabecera;
    Nodo* prev = NULL;

    do{
        if(actual->dato == valor){
            if(actual == *cabecera){
                if(actual->siguiente == actual){
                    free(actual);
                    *cabecera =NULL;
                }
                else{
                    Nodo* ultimo = actual;
                    while(ultimo->siguiente != *cabecera){
                        ultimo = ultimo->siguiente;
                    }

                    *cabecera = actual->siguiente;
                    ultimo->siguiente = *cabecera;
                    free(actual);
                    return;
                }

            }else{
                prev->siguiente = actual->siguiente;
                free(actual);
                return;
            }
        }

        prev = actual;
        actual = actual->siguiente;

    }while(actual != *cabecera);
}

void imprimir(Nodo* cabecera){
    if(cabecera == NULL) return;

    Nodo* actual = cabecera;
    do{
        printf("%i ", actual->dato);
        actual = actual->siguiente;
    }while( actual != cabecera );
    printf("\n");
}

void eliminar_lista(Nodo** cabecera){
    if(*cabecera == NULL) return;

    Nodo* actual = *cabecera;
    Nodo* siguiente;
    do{
        siguiente = actual->siguiente;
        free(actual);
        actual  = siguiente;
    }while( actual != *cabecera );
    
    *cabecera = NULL;
}


int main(){

    Nodo* lista = crear_lista();
    insertar( &lista, 10 );
    insertar( &lista, 15 );
    insertar( &lista, 20 );
    insertar( &lista, 30 );
    
    imprimir(lista);
    
    eliminar(&lista, 20);
    imprimir(lista);


    
    eliminar_lista(&lista);
    printf("Lista liberada\n");

    return 0;
}