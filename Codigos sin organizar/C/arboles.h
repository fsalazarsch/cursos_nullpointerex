struct arbol{
int valor;
struct arbol *der;
struct arbol *izq;
};
 
void insertar_arbol(struct arbol **A, int dato, int[]);
void inorden(struct arbol *A);
 
 
//insertar(&A, ndato);
//inorden(A);
 
 
void insertar_arbol(struct arbol **A, int ndato, int cit[]){
if(*A == NULL){
      cit[0]++;
*A = (struct arbol *) malloc(sizeof(struct arbol));
(*A)->valor = ndato;
(*A)->izq = NULL;
(*A)->der = NULL;
}
else if(ndato < (*A)->valor){
     cit[0]++;
     cit[1]++;
insertar_arbol(&((*A)->izq), ndato, cit);
}
else if(ndato > (*A)->valor){
     cit[0]++;
insertar_arbol(&((*A)->der), ndato, cit);
}
else{
     cit[0]++;
     printf("Error, no puede haber un valor igual\n");
     }
}
 
void inorden(struct arbol *A){
if(A != NULL){
inorden(A->izq);
printf("%d ", A->valor);
inorden(A->der);
}
}
