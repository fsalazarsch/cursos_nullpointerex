#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int dato;
    struct Nodo* primerHijo;
    struct Nodo* siguiente;
}Nodo;

Nodo* crearNodo(int valor){
    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
    nuevo->dato = valor;
    nuevo->primerHijo = NULL;
    nuevo->siguiente = NULL;
    return nuevo;
}


void  agregarHijo(Nodo* padre, Nodo* hijo){
    if (padre->primerHijo == NULL){
        padre->primerHijo = hijo;
    }
    else{
        Nodo* actual = padre->primerHijo;
        while(actual->siguiente != NULL){
            actual = actual->siguiente;
            }
             actual->siguiente = hijo;
        
    }
}

void mostrarArbol(Nodo* nodo, int nivel){
    if(nodo == NULL) return;
    for(int i = 0; i< nivel; i++)
        printf("   ");
    printf("%c %d\n", 192, nodo->dato);
    Nodo* hijo = nodo->primerHijo;
    while( hijo !=NULL){
        mostrarArbol(hijo, nivel +1);
        hijo = hijo->siguiente;
    }

}


int main(){

    Nodo* raiz = crearNodo(1);
    
    Nodo* hijo1 = crearNodo(2);
    Nodo* hijo2 = crearNodo(3);
    Nodo* hijo3 = crearNodo(4);
    
    agregarHijo(raiz, hijo1);
    agregarHijo(raiz, hijo2);
    agregarHijo(raiz, hijo3);

    Nodo* hijo4 = crearNodo(5);
    agregarHijo(hijo2, hijo4);

    Nodo* hijo6 = crearNodo(6);
    agregarHijo(hijo2, hijo6);

    mostrarArbol(raiz, 0);

    return 0;
}