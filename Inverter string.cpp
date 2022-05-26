#include <stdio.h>
#include <string.h>
#define TAM 20
int main(void) {
	
	char str1[TAM], str2[TAM], aux[TAM];
    int i=0, tam;
   
    printf("Digite uma string: ");
  	fgets(str1, TAM, stdin);
	  
	   printf("\nstr1 = %s\n", str1);
	tam = strlen(str1);

	for(i=0; i<tam/2; i++){	
	aux[i] = str1[i];
	str1[i] = str1[tam - i - 2]; 
    str1[tam - i - 2] = aux[i];
	 
	}
		strncpy ( str2, str1, TAM );
	 	printf("str2 = %s", str2);
		 	
	return 0;	
}
