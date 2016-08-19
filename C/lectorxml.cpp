#include <stdio.h>

int main (){
    
    char cad[50] ="";
	FILE *arch;
	
    arch = fopen("datos.txt","r+");
	if (arch == NULL) 
		printf("Error"); 
	else{
	fscanf(arch,"%s",cad);
	printf("%s",cad);
  }
    getchar();
    return 0;
    }

