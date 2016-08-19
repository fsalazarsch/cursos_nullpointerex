#include <stdio.h>

float promedio(float,float,float);

struct pers{
int edad;
char nombre[20];
};
struct alum{
       struct pers datos;
       float nota1, nota2, nota3;
};

	int main (){
    struct alum alumno[3];
	int i;
	for(i=0; i<3;i++)
	{
		printf("Ingrese la edad %d:\t", i+1);
		scanf("%i",&alumno[i].datos.edad);
		printf("Ingrese el nombre %d:\t", i+1);
		scanf("%s",alumno[i].datos.nombre);
		printf("Ingrese 1º nota del alumno %d:\t", i+1);
		scanf("%f",&alumno[i].nota1);
		printf("Ingrese 2º nota del alumno %d:\t", i+1);
		scanf("%f",&alumno[i].nota2);
		printf("Ingrese 3º nota del alumno %d:\t", i+1);
		scanf("%f",&alumno[i].nota3);
		
		}
	for(i=0; i<3;i++)
	{
	printf("Nombre %d: %i\t", i+1, alumno[i].datos.edad);
	printf("Edad %d: %s\t", i+1, alumno[i].datos.nombre);
	printf("Promedio: %.1f\n",promedio(alumno[i].nota1,alumno[i].nota2,alumno[i].nota3));
    }
    
	getchar();
	getchar();
	return 0;
	}
float promedio(float x, float y, float z){
      return ((x+y+z)/3);
      }
