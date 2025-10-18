#include <stdio.h> 
#include <stdlib.h>

typedef struct Nodo{
    int dato;
    struct Nodo* siguiente;
}Nodo;


Nodo* crear_cola(){
    return NULL;
}

int esta_vacia(Nodo* inicio ){
    return inicio == NULL;
}

void encolar(Nodo** inicio, Nodo** final, int valor){

    Nodo* nuevo =  (Nodo*) malloc(sizeof(Nodo));
    nuevo->dato = valor; 
    nuevo->siguiente = NULL;

    if (*inicio == NULL){
        *inicio = nuevo;
        *final = nuevo;
    }
    else{
        (*final)->siguiente = nuevo;
        *final= nuevo;
    }

}

int desencolar(Nodo** inicio, Nodo** final){
    if(esta_vacia(*inicio)){
        return -1;
    }

    Nodo* temp = *inicio;
    int valor = temp->dato;
    *inicio = temp->siguiente;

    if (*inicio ==NULL){
        *final = NULL;
    }

    free(temp);
    return valor;

}


int peek(Nodo* inicio){
    if (esta_vacia(inicio)){
        printf("Error: Pila vacía\n");
        return -1;
    }
    return inicio->dato;
}

void imprimir(Nodo* inicio){
    Nodo* actual = inicio;
    while( actual != NULL ){
        printf("%i ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
}

void liberar_cola(Nodo** inicio, Nodo** final){
    while(!esta_vacia(*inicio) ){
        desencolar(inicio, final);

    }
}

int main(){

    Nodo* inicio = crear_cola();
    Nodo* final = NULL;

    encolar(&inicio, &final, 10);
    encolar(&inicio, &final, 20);
    encolar(&inicio, &final, 30);

    imprimir(inicio);

    printf("Inicio: %i\n", peek(inicio));
    printf( "Desencolado: %i\n", desencolar(&inicio, &final));
    printf( "Desencolado: %i\n", desencolar(&inicio, &final));


    imprimir(inicio);

    return 0;
}