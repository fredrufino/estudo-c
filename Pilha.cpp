#include <stdio.h>
#include <stdlib.h>
int P[10], i = 0;

	int menu();
	void empilhar();
	void desempilhar();
	void vazia();
	void cheia();
	void atual();
	void vizualizar();
	
	
int main(){
	int t;
	char opc, e;
	
	opc = menu();
	
	switch(opc)
	{
	case 1:
		system("cls");
		empilhar();
			system("pause");
			main();
	break;
	case 2:
		system("cls");
		desempilhar();
		system("pause");
		main();
	break;
	
	case 3:
		system("cls");
		vazia();
		printf("\n\n");
		system("pause");
		main();	
	break;
	
	case 4:
		system("cls");
		cheia();
		printf("\n\n");
		system("pause");
		main();	
	break;
	
	case 5:
		system("cls");
		atual();
		printf("\n\n");
		system("pause");
		main();	
	break;
			
	case 6:
		system("cls");
		vizualizar();
		printf("\n\n");
		system("pause");
		main();
	break;
	
		
	}
}

int menu(){
	int menu;
	
	system("cls");
	
	printf("1 - EMPILHAR\n");
	printf("2 - DESEMPILHAR\n");
	printf("3 - VERIFICAR STATUS - VAZIO\n");
	printf("4 - VERIFICAR STATUS - CHEIO\n");
	printf("5 - VIZUALIZAR TOPO\n");
	printf("6 - VIZUALIZAR PILHA\n");
		printf("\nInforme a opcao desejada: "); 
       scanf("%d", &menu); 	
       
	return(menu);
}

void empilhar(){
	
	printf("Digite um valor para empilhar: ");
	scanf("%d", &P[i]); 
	i++;
}

void desempilhar(){
	i =i-1;
	P[i] = 0;
}

void vazia(){
	if(i == 0){
		printf("Pilha vazia");
	}else{
		printf("Pilha n vazia");	
	}
}

void cheia(){
	if(i == 10){
		printf("Pilha cheia");
	}else{
		printf("Pilha n cheia");	
	}
}

void atual(){
	
	int cont = i - 1;
	printf("%d  ", P[cont]);
}	

void vizualizar(){
int cont;

for(cont = 0; cont < 10; cont++)
	{
		printf("%d  ", P[cont]);
	}	
}
