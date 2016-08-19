#include <stdio.h>

int main(){
    char cad[100];
    FILE * arch;
    char s1[] = "<Saludo>Hola</Saludo>";
    char s2[] = " <>";
    
       char *ptr;

    //strtok
    arch = fopen("dat.txt","r");
    while (!(feof(arch))){
	  ptr = strtok( fgets(cad, 100, arch), "<" );    // Primera llamada => Primer token
   printf( "%s\n", ptr );
    //ptr = strtok( fgets(cad, 100, arch), ">" );    // Primera llamada => Primer token
   //printf( "%s\n", ptr );
     }

        fclose(arch);
    getchar();
    return 0;
}
