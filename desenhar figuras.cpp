#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int fig = 0;
	char cont;
	
	setlocale(LC_ALL, "Portuguese");

do{	

		while(fig <= 0 || fig >= 5 )
		{
	
	system("cls");
	system("color 2");
	printf("************************************************************\n");
	printf("*                ESCOLHA A FIGURA DESEJADA                 *\n");
	printf("************************************************************\n");	
	printf("*\t\t\t\t\t\t\t   *\n");
    printf("*\t    *****\t *\t      *\t       ***\t   *\n");
	printf("*\t   *****\t***\t     * *\t **\t   *\n");
	printf("*\t  *****\t       *****\t    *   *\t   *\t   *\n");
 	printf("*\t *****\t      *******\t   *     *\t **\t   *\n");
	printf("*\t*****\t     *********\t  *********    ***\t   *\n");
	printf("*       Fig 1          Fig 2        Fig 3      Fig 4       *\n");
	printf("************************************************************\n");
	printf("\n\n\nDigite o número referente a figura para selecioná-la: ");
	scanf("%d", &fig);
	
	if(fig <= 0 || fig >= 5)
	{
		printf("\nEste valor não corresponde a nenhuma figura. ");
		system("pause");
	}
	
 		}
	
	if(fig == 1)
	{	
			system("color 3");
	printf("\n\n\t    *****\t     \n");
	printf("\t   *****\n");
	printf("\t  *****\n");
 	printf("\t *****\n");
	printf("\t*****\n\n\n");

	}else if(fig ==2){
			system("color 4");
	printf("\n\n\t     *\n");
    printf("\t    ***\n");
    printf("\t   *****\n");
    printf("\t  *******\n");
	printf("\t *********\n\n\n");	
		
	}else if(fig == 3)
	{
			system("color 5");	
	printf("\n\n\t     *\n");
    printf("\t    * *\n");
    printf("\t   *   *\n");
    printf("\t  *     *\n");
	printf("\t *********\n\n\n");

	}else
	{
			system("color 6");
	printf("\n\n\t*****\n");
	printf("\t  ****\n");
	printf("\t    ***\n");
	printf("\t      **\n");
	printf("\t        *\n");			
	printf("\t      **\n");
	printf("\t    ***\n");
	printf("\t  ****\n");	
	printf("\t*****\n\n\n");	
	}
		printf("Digite \"a\" para alterar a figura ou outra tecla para sair: ");
		scanf("%s", &cont);
	
   }while(cont == 'a');
return 0;	
}

