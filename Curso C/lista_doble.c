#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int dato;
    struct Nodo* siguiente;
    struct Nodo* anterior;    
}Nodo;

//NULL <- |__|<- ->|_2_|<- ->|_3_|<- ->|_4_|-> NULL
//crear lista

Nodo* crear_lista(){
    return NULL;
}

void insertar_posicion( Nodo** cabecera, int valor, int posicion){
    Nodo* nuevo =  (Nodo*) malloc(sizeof(Nodo));
    nuevo->dato = valor; 
    nuevo->anterior = NULL;

    if ((posicion == 0) || (*cabecera == NULL)){
        nuevo->siguiente = *cabecera;

        if (*cabecera != NULL){
            (*cabecera)->anterior = nuevo;
        }

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
    nuevo->anterior = actual;

    if( actual->siguiente != NULL){
        actual->siguiente->anterior = nuevo;
    }

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

void imprimir_reves(Nodo* cabecera){
    Nodo* actual = cabecera;
    while( actual->siguiente != NULL ){
        actual = actual->siguiente;
    }

    while( actual != NULL){
        printf("%i ", actual->dato);
        actual = actual->anterior;
    }
    printf("\n");

    
}


void eliminar_nodo(Nodo** cabecera, int posicion){
    Nodo* actual = *cabecera;

    if (*cabecera == NULL)
        return;

    if (posicion == 0){
        *cabecera = actual->siguiente;

        if (*cabecera != NULL){
            (*cabecera)->anterior = NULL;
        }


        free(actual);
        return;
    }

    int i = 0;
    while( actual != NULL  && i< posicion -1 ){
        actual  = actual->siguiente;
        i++;
    }

    if (actual == NULL || actual->siguiente == NULL){
        return;
    }

    Nodo* aux = actual->siguiente;
    actual->siguiente = aux->siguiente;

    if (aux->siguiente != NULL){
        aux->siguiente->anterior = actual;
    }

    free(aux);

}



int main(){

    Nodo* lista = crear_lista();
    insertar_posicion( &lista, 9, 0 );
    insertar_posicion( &lista, 18, 1 );
    insertar_posicion( &lista, 27, 1 );
    insertar_posicion( &lista, 36, 5 );

    imprimir(lista);
    imprimir_reves(lista);

    eliminar_nodo(&lista, 1);
    printf("\n\n");
    imprimir(lista);
    imprimir_reves(lista);

    return 0;
    } 




