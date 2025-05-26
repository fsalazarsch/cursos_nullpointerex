int menu (){
    int opc;
    printf("MENU\n=============================================\n");
    printf("Escriba la opción a buscar:\n1.- Gauss (la suma de los n primeros numeros)\n");
    printf("2.- potencia (x elevado a y)\n3.- Suma\n4.- Resta\n5.- Multiplicacion\n6.- Division\n");
    printf("7.- Factorial\n");
    printf("Opcion:   ");
    scanf("%d",&opc);
    return opc;
    
    }

void gauss(int x){
    printf("La suma de los %d primeros numeros es: %d\n", x, (x*(x+1) /2));
    }
    
void pot(int x, int y){
     int i, pot = 1;
     for(i=0;i<y;i++)
        pot *= x;
    printf("%d elevado a %d es: %d\n", x, y, pot);
    }
    
void sum(float x, float y){
     printf("La suma de %0.2f con %0.2f es: %0.2f\n",x, y, x+y);
     }

void res(float x, float y){
     printf("La resta de %0.2f con %0.2f es: %0.2f\n",x, y, x-y);
     }
     
void prod(float x, float y){
     printf("La multiplicacion de %0.2f con %0.2f es: %0.2f\n",x, y, x*y);
     }
     
void div(float x, float y){
     if(y != 0)
     printf("La division de %0.2f con %0.2f es: %0.2f\n",x, y, x/y);
     else
     printf("Error\n");
     }
void fact(int x){
     int i,tot =1;
     if((x == 0) || (x == 1))
     printf("El factorial es 1");
     else 
     for(i=1;i<x+1;i++){
     tot *= i;                 
     }
     printf("El factorial es %d", tot);
     }
