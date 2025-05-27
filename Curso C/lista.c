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
    nuevo->siguiente = *cabecera;
    *cabecera = nuevo;
}

void imprimir(Nodo* cabecera){
    Nodo* actual = cabecera;
    while( actual != NULL ){
        printf("%i ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

void eliminar_lista(Nodo** cabecera){
    Nodo* actual = *cabecera;
    Nodo* siguiente;
    while( actual != NULL ){
        siguiente = actual->siguiente;
        free(actual);
        actual  = siguiente;
    }
    *cabecera = NULL;
}


int main(){

    Nodo* lista = crear_lista();
    insertar( &lista, -56 );
    insertar( &lista, 46 );
    insertar( &lista, 0 );

    imprimir(lista);
    eliminar_lista(&lista);

    return 0;
    } 

