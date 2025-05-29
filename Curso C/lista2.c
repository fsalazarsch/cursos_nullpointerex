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

void insertar_posicion( Nodo** cabecera, int valor, int posicion){
    Nodo* nuevo =  (Nodo*) malloc(sizeof(Nodo));
    nuevo->dato = valor; 

    if ((posicion == 0) || (*cabecera == NULL)){
        nuevo->siguiente = *cabecera;
        *cabecera = nuevo;
        return;
    }

    Nodo* actual = *cabecera;
    int i = 0;

    while( actual->siguiente != NULL && i< posicion -1 ){
        actual = actual->siguiente;
        i++;
    }

    nuevo->siguiente = actual->siguiente;
    actual->siguiente = nuevo;

}

void imprimir(Nodo* cabecera){
    Nodo* actual = cabecera;
    while( actual != NULL ){
        printf("%i ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

void eliminar_nodo(Nodo** cabecera, int posicion){
    Nodo* actual = *cabecera;

    if (*cabecera == NULL)
        return;

    if (posicion == 0){
        *cabecera = actual->siguiente;
        free(actual);
    }

    int i = 0;
    while( actual != NULL  && i< posicion -1 ){
        actual  = actual->siguiente;
        i++;
    }

    if (actual == NULL || actual->siguiente == NULL){
        return;
    }

    Nodo* siguiente = actual->siguiente->siguiente;
    free(actual->siguiente);
    actual->siguiente  = siguiente;

}





int main(){

    Nodo* lista = crear_lista();
    insertar_posicion( &lista, 9, 0 );
    insertar_posicion( &lista, 18, 1 );
    insertar_posicion( &lista, 27, 1 );
    insertar_posicion( &lista, 36, 5 );

    imprimir(lista);

    eliminar_nodo(&lista, 1);
    printf("\n\n");
    imprimir(lista);

    return 0;
    } 

