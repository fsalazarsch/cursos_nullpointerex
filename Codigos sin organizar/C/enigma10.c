#include <stdio.h>
#include <ctype.h>
/* 
   Maquina Enigma de 3 rotores.
   Martin Di Luzio, Ivan Rizzo, Taihu Pire
   enigma@kstor.com.ar
   (C) Mayo - 2006
   
   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.
*/

//Rotores
char extra [2][26]={
     {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
     {"ABCDEFGHIJKLMABCDEFGHIJKLM"},
};
char rotor1 [2][26]={
     {"MNOPQRSTUVWXYZABCDEFGHIJKL"},
     {"ESOVPZJAYQUIRHXLNFTGKDCMWB"},
};
char rotor2 [2][26]={
     {"EFGHIJKLMNOPQRSTUVWXYZABCD"},
     {"BDFHJLCPRTXVZNYEIWGAKMUSQO"},
};
char rotor3 [2][26]={
     {"IJKLMNOPQRSTUVWXYZABCDEFGH"},
     {"AJDKSIRUXBLHWTMCQGZNPYFVOE"},
};

//Gira n veces los rotores
void rotar(char (*rotor)[26],int n)
{
int i,j;
char temp1,temp2;
for(i=0;i<n;i++){
 temp1=rotor[0][25];
 temp2=rotor[1][25];
 for(j=25;j>=0;j--){
  rotor[0][j]=rotor[0][j-1];
  rotor[1][j]=rotor[1][j-1];
 }
 rotor[0][0]=temp1;
 rotor[1][0]=temp2;
 }
}
///////////

//Busca la posicion de un caracter en una lista
int poschar(char (*rotor)[26],char c,int d)
{
 int i;   
     for(i=0; i<26 && c!=rotor[d][i] ;i++);
     return (i);
}
//////////

int main(int argc,char *argv[])
{
 int i,pos,b1,cont=0;
 char a1,c;
    
    if (argc!=4){
     printf("\nUso: ./enigma <clave> <archivo> <destino>\n");
     return 0;
     }
    else {
    
    //Posicion inicial de los rotores
    rotar(rotor1,*argv[1]);
    rotar(rotor2,*++argv[1]);
    rotar(rotor3,*argv[1]);    
            
    printf("\n||||||||||||||< Maquina Enigma de 3 Rotores >||||||||||||||\n\n");
            
    FILE *en,*sa;
    en = fopen(argv[2],"r");
    sa = fopen(argv[3],"w");
    
    if (en==NULL){
     printf("Archivo no encontrado\n");
     return 0;
     } 
    
    printf("Se guardo en %s\n",argv[3]);    
              
    while((c=getc(en))!=EOF){
    
    if (!isalpha(c)) //Se fija si el caracter pertenece al alfabeto.
     continue;  
    else {
    
    c=toupper(c);
    i=poschar(extra,c,0);
    
    a1=rotor1[0][i];
	b1=poschar(rotor1,a1,1);
	a1=rotor2[0][b1];
	b1=poschar(rotor2,a1,1);
	a1=rotor3[0][b1];
	b1=poschar(rotor3,a1,1);
	a1=extra[1][b1];
	
    for(i=0;i<26;i++)
     if ((a1==extra[1][i])&&(i!=b1))
      pos = i;
    
    a1=rotor3[1][pos];
	b1=poschar(rotor3,a1,0);
 	a1=rotor2[1][b1];
	b1=poschar(rotor2,a1,0);
	a1=rotor1[1][b1];
	b1=poschar(rotor1,a1,0);
    a1=extra[0][b1];
	
	putc(a1,sa); //Guarda en archivo
       	
	//Rotacion
    rotar(rotor1,1);
	cont++;
	if ((cont%26)==0){
	 rotar(rotor2,1);
	}
    if ((cont%676)==0){
     rotar(rotor3,1);
    }
    //Fin rotacion
	    
    }
    
    // Forma 12 bloques de 5 char por linea 
    if ((cont%5)==0)
     putc(' ',sa);
    if ((cont%60)==0)
     putc('\n',sa);
          
   }

 fclose(en);
 fclose(sa);
 
 printf("\n");
}

return 0;
}


