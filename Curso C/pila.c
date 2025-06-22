#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int dato;
    struct Nodo* siguiente;
}Nodo;

//crear pila

Nodo* crear_pila(){
    return NULL;
}


//insertar --> push
//eliminar --> pop -- > devolver
// peek  --> ver el ultimo elmento

int esta_vacia(Nodo* cabecera ){
    return cabecera == NULL;
}

void push( Nodo** cabecera, int valor){
    Nodo* nuevo =  (Nodo*) malloc(sizeof(Nodo));
    nuevo->dato = valor; 
    nuevo->siguiente = *cabecera;
    *cabecera = nuevo;
}

int pop(Nodo** cabecera){
    Nodo* temp = *cabecera;
    int valor = temp->dato;
    *cabecera = temp->siguiente;
    free(temp);
    return valor;
}

int peek(Nodo* cabecera){
    if (esta_vacia(cabecera)){
        printf("Error: Pila vacía\n");
        return -1;
    }
    return cabecera->dato;
}

void imprimir(Nodo* cabecera){
    Nodo* actual = cabecera;
    while( actual != NULL ){
        printf("%i ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

void liberar_pila(Nodo** cabecera){
    while(!esta_vacia(*cabecera) ){
        pop(cabecera);
    }
}


int main(){

    Nodo* pila = crear_pila();
    push( &pila, 10 );
    push( &pila, 20 );
    push( &pila, 30 );

    imprimir(pila);

    printf("Tope : %i\n",  peek(pila));
    printf("Elemento popeado : %i\n",  pop(&pila));
    printf("Elemento popeado 2: %i\n",  pop(&pila));
    

    printf("\n\n");
    imprimir(pila);

    //liberar_pila(&pila);
    //printf("\nSegunda impresion\n");
    imprimir(pila);

    return 0;
    } 

