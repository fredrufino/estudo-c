#include <stdio.h>
#include <string.h>
#include <locale.h>

int verifica(char str1[],char charp)
{
  int posicao = -1, linha;
  for(linha = 0; linha < strlen(str1); linha++)
  	{
    	if (charp == str1[linha])
		{
      	posicao = linha;
        break;
    	}
  	}
 return posicao; 
}


int main(){
 int TAM = 30;
 char charp, str1[TAM];
 
setlocale(LC_ALL, "Portuguese");

  printf("\nDigite a string: ");
  fgets(str1, TAM, stdin);
  
  printf("\nDigite o caracter a ser procurado: ");
  scanf("%c", &charp);

  if(verifica(str1, charp) >= 0)
  	{
   	printf("\nO caracter %c está na posição %d da string", charp, verifica(str1, charp));
 	}else 
  		{
   		printf("\nO caracter %c não existe na string!", charp);
  		}

 return 0;
}
