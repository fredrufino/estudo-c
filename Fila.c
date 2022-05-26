#include<stdio.h>
#include<stdlib.h>
# define TAM 5
int F[TAM], topoI , topoF;
	
	//protótipos 
	int menu();
	void criar();
	void inserir();
	void remover();
	void vazia();
	void cheia();
	void atual();
	void vizualizar();

int main(){
	int t;
	char e;
	char opc = menu();
	
	switch(opc)
	{
	case 1:
		system("cls");
		inserir();
		system("pause");
		main();
	break;
	case 2:
		system("cls");
		remover();
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
	
	printf("1 - INSERIR\n");
	printf("2 - REMOVER\n");
	printf("3 - VERIFICAR STATUS - VAZIO\n");
	printf("4 - VERIFICAR STATUS - CHEIO\n");
	printf("5 - VIZUALIZAR FILA\n");
		printf("\nInforme a opcao desejada: "); 
       scanf("%d", &menu); 	
       
	return(menu);
}

void criar(){
	topoI = 0;
	topoF = 0;
}

void inserir(){
	printf("Digite um valor para inserir: ");
	scanf("%d", &F[topoF]); 
	topoF++;
}

void remover(){
	F[topoI] = 0;
	topoI ++;
}

void vazia(){
	if(topoI =! topoF && topoI == 0){
		printf("Fila Vazia");
	}else{
		printf("Fila possui espacos em uso");
	}
}

void cheia(){
	if(topoI == topoF){
		printf("Fila Cheia");
	}else{
		printf("Fila possui espacos dispon");
	}
}

void atual(){
	int cont = topoI - 1;
	
	printf("%d  ", F[cont]);
}	

void vizualizar(){
	int cont;

	for(cont = 0; cont < TAM; cont++){
		printf("%d  ", F[cont]);
}
}



