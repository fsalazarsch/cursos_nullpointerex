float powe(float x, int y){

float resultado=1;
int i;

if((y == 0) && (x !=0)){
     printf("\nEl resultado es: ");
     return 1;
     }

if((y == 0) && (x ==0)){
     printf("\nEl resultado es: ");
     printf("ERROR");
     return 0;
     }

for(i=0; i<y; i++){
        resultado *= x;
        }
printf("\n%i veces %f es: ", y, x);
return resultado;
}
