#include <stdio.h>
#include <stdlib.h>
 
typedef enum { FALSE, TRUE } boolean;
 
typedef struct tarbol
{
  int clave;
  struct tarbol *izq;
  struct tarbol *der;
} tarbol;
 
void crear(tarbol **a);
boolean buscar(tarbol *a, int elem);
void insertar(tarbol **a, int elem);
void borrar(tarbol **a, int elem);
 
 
int main(void)
{
  tarbol *a;
 
  crear(&a);
  insertar(&a, 5);
  insertar(&a, 2);
  insertar(&a, 4);
  insertar(&a, 3);
  insertar(&a, 6);
 
  borrar(&a, 5);
  borrar(&a, 4);
  borrar(&a, 3);
 
  return 0;
}
 
void crear(tarbol **a)
{
  *a = NULL;
}
 
boolean buscar(tarbol *a, int elem)
{
  if (a == NULL) return FALSE;
  else if (a->clave < elem) return buscar(a->der, elem);
  else if (a->clave > elem) return buscar(a->izq, elem);
  else return TRUE;
}
 
void insertar(tarbol **a, int elem)
{
  if (*a == NULL) {
    *a = (tarbol *) malloc(sizeof(tarbol));
    (*a)->clave = elem;
    (*a)->izq = (*a)->der = NULL;
  }
  else if ((*a)->clave < elem) insertar(&(*a)->der, elem);
  else if ((*a)->clave > elem) insertar(&(*a)->izq, elem);
}
 
void borrar(tarbol **a, int elem)
{
  void sustituir(tarbol **a, tarbol **aux);
  tarbol *aux;
 
  if (*a == NULL)   /* no existe la clave */
    return;
 
  if ((*a)->clave < elem) borrar(&(*a)->der, elem);
  else if ((*a)->clave > elem) borrar(&(*a)->izq, elem);
  else if ((*a)->clave == elem) {
    aux = *a;
    if ((*a)->izq == NULL) *a = (*a)->der;
    else if ((*a)->der == NULL) *a = (*a)->izq;
    else sustituir(&(*a)->izq, &aux); /* se sustituye por la mayor de las menores */
 
    free(aux);
  }
}
 
void sustituir(tarbol **a, tarbol **aux)
{
  if ((*a)->der != NULL) sustituir(&(*a)->der, aux);
  else {
    (*aux)->clave = (*a)->clave;
    *aux = *a;
    *a = (*a)->izq;
  }
}
