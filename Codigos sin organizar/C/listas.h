struct nodo{
       int dato;
       struct nodo *sig;
       };
       
void crear();
void insertar(struct nodo **L, int);
void listar(struct nodo *L);
void modificar(struct nodo *L, int, int);
void borrar(struct nodo **L, int);

//insertar(&L);
//borrar(&L);
//modificar(L);
//listar(L);

void crear(){
struct nodo *L;
L = NULL;
}

void insertar_fin(struct nodo **L, int ndato)
{
  struct nodo *p, *rec, *q;
  
  q = rec = *L;
  
  while (rec != NULL) {
    q = rec;
    rec = rec->sig;
  }
  p = (struct nodo *) malloc(sizeof(struct nodo));
     p->dato = ndato;

 if(q == rec) { 
    p->sig = q;
    *L = p; 
  }
  else {
    p->sig = rec;
    q->sig = p;
  }
}

void insertar(struct nodo **L, int ndato){
     struct nodo *p;
     p = (struct nodo *) malloc(sizeof(struct nodo));
     p->dato = ndato;
     p->sig = *L;
     *L = p;
     }

void listar(struct nodo *L){
     if(L != NULL){
     printf("%s,  ", L->dato);
     listar(L->sig);
     }
     else
     printf("\n");
     }
    
void modificar(struct nodo *L, int pos, int ndato){
     int i = 0;
     if(L == NULL)
          printf("No hay datos en la lista\n");
     else
     while(L != NULL){
          if(i != (pos-1)){
          i++;
          L = L->sig;
          }
          else{
          L->dato = ndato;
          }
     }
     }
    
void borrar(struct nodo **L, int pos){
    
     struct nodo *nodo_ant, *nodo_rec;
    
     if(*L == NULL)
          printf("No hay datos en la lista\n");
     else
     {
    
     int pos, i=0;
    
     nodo_ant = nodo_rec = *L;
    
     while ( (nodo_rec != NULL) && (i != (pos-1)) ){
              i++;
              nodo_ant = nodo_rec;
              nodo_rec = nodo_rec->sig;
              }
          if(nodo_rec != NULL){
                       if(nodo_rec == nodo_ant)
                       *L = nodo_rec->sig;
                       else
                       nodo_ant->sig = nodo_rec->sig;
          free(nodo_rec);      
          }
    
     }}
