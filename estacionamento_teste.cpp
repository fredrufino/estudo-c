#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include<ctype.h>
#define TAM 30
 
 typedef struct {
	char nome[TAM];
	char cpf[TAM];
	char rg[TAM];
	char telefone[TAM];
	char endereco[TAM];
	char codigo[TAM];
    char carro[TAM];
    char ano [TAM];
    char comprador[TAM];
    char data [TAM];
	char buscar [TAM];
 
} cliente;


 

 
int main (void){
 
  FILE *arq;
  if (arq==NULL){
        printf ("\n Erro ao abrir o arquivo \n");
       }
 
       else{
        printf("\n Arquivo aberto com sucesso \n");
       }
       arq=fopen("arq.txt","w+");
  arq=fopen("arq.txt", "r+");
   system ("pause");
   system ("cls");       
  char c,cadastro_login[50] = "germano",cadastro_senha[50] = "geraline",acesso_login[50],acesso_senha[50];
       int a=0,b=1,d=3;
       int menu;
       int cod;
       char nome[TAM];
       char buscar[TAM];          
       cliente cli;
       
       do{
           printf("\nEntre com o login: ");
           fflush(stdin);      
           gets(acesso_login);
           printf("\nEntre com a senha: ");
           a=0;
 
               do{
                   c=getch();
                   if(isprint(c)){     
                   acesso_senha[a]=c;
                   a++;
                   printf("*");     
 
                   }
                   else if(c==8&&a){
                   acesso_senha[a]='\0';
                   a--;
                   printf("\b \b");   
 
                   } 
 
               }while(c!=13);           
               acesso_senha[a]='\0';
               if(!strcmp(cadastro_login,acesso_login)&&!strcmp(cadastro_senha,acesso_senha)){
               printf("\n\n\t\t\tLOGADO COM SUCESSO...\n\n");
               b=0;
               }
               else {
               system("cls");
               d--;         
               if (d)printf("\n\n\t\a\t USUARIO OU SENHA INVALIDOS - TENTE NOVAMENTE...\n\n");
               }
       }while(b&&d);                      
       if(!d){
       printf("\a\n\n\t\tCONTA BLOQUEADA - VOCE ERROU 3 VEZES CONSECUTIVAS...\n\n");
  return 0;
  } 
       system ("pause");       
       system ("cls");
       do
{     

printf("*============================================================================================================*\n");
printf("|                                                XXXX                                                        |\n");
printf("|                                               XXXX                                                         |\n");
printf("|  ____      _____  ___    ___  ________    __________  _____  _________                                     |\n");
printf("|  XXXX      XXXXX  XXX_   XXX  XXXXXXXX    XXXXXXXXXX  XXXXX  XXXXXXXXX                                     |\n");
printf("|  XXXX      XXXXX  XXXX_  XXX  XXXXXXXXXX  XXXXXXXXXX  XXXXX  XXXXXXXXX                                     |\n");
printf("|  XXXX      XXXXX  XXXXX__XXX  XXX    XXX  XXX    XXX  XXXXX  XXX   XXX                                     |\n");
printf("|  XXXX      XXXXX  XXXXXXXXXX  XXX    XXX  XXX    XXX  XXXXX  XXXXXXXXX                                     |\n");
printf("|  XXXX      XXXXX  XXXXXXXXXX  XXX____XXX  XXX____XXX  XXXXX  XXXXXXXXX                                     |\n");
printf("|  XXXXXXXXX XXXXX  XXX XXXXXX  XXXXXXXXXX  XXXXXXXXXX  XXXXX  XXX   XXX                                     |\n");
printf("|  XXXXXXXXX XXXXX  XXX  XXXXX  XXXXXXXX    XXXXXXXXXX  XXXXX  XXX   XXX                                     |\n");
printf("|                                                                                                            |\n");
printf("|                                      XXX                                                                   |\n");
printf("|                                     XXX                                                                    |\n");
printf("|  ____           ____  ___________  ____     ______  ____   ____  ____       __________   __________        |\n");
printf("|  XXXX	          XXXX  XXXXXXXXXXX  XXXX   __XXXXXX  XXXX   XXXX  XXXX       XXXXXXXXXX   XXXXXXXXXX        |\n");
printf("|   XXXX         XXXX   XXXXXXXXXXX  XXXX   XXXXXXXX  XXXX   XXXX  XXXX       XXXXXXXXXX  XXXXXXXXXXX        |\n");
printf("|    XXXX       XXXX    XXXX         XXXX  XXX        XXXX   XXXX  XXXX       XXX    XXX  XXX                |\n");
printf("|     XXXX     XXXX     XXXXXXXX     XXXX  XXX        XXXX   XXXX  XXXX       XXX    XXX   XXXXXXXX          |\n");
printf("|      XXXX   XXXX      XXXX         XXXX  XXX        XXXX   XXXX  XXXX       XXX____XXX          XXX        |\n");
printf("|       XXXX XXXX       XXXXXXXXXXX  XXXX   XXXXXXXX  XXXXXXXXXXX  XXXXXXXXX  XXXXXXXXXX   XXXXXXXXXX        |\n");
printf("|        XXXXXXX        XXXXXXXXXXX  XXXX    XXXXXXX    XXXXXXX    XXXXXXXXX  XXXXXXXXXX   XXXXXXXXX         |\n");
printf("*============================================================================================================*\n");
printf ("                                          LINDOIA VEICULOS    \n "                                              );

       printf("\n                                         <1>  CADASTRAR VENDA");  
       printf("\n                                         <2>  CADASTRAR CLIENTE");  
       printf("\n                                         <3>  BUSCAR VENDA");
	   printf("\n                                         <4>  BUSCAR CLIENTE");  
       printf("\n                                         <5>  MOSTRAR VENDAS"); 
       printf("\n                                         <6>  SAIR");
       printf("\nInforme a opcao desejada: "); 
       scanf("%d", &menu); 
       system("cls");
       
       switch(menu)  
 
       { 
 
       case 1: 
       printf("CADASTRE UMA VENDA \n\n");
  gets (cli.carro);
  fputs (cli.carro, arq);
  printf ("Carro: \t");
  gets (cli.carro);
  fputs (cli.carro, arq);
       
	   printf ("\nano:\t");
       gets (cli.ano);
       fputs (cli.ano, arq);
      
	   printf ("\ncomprador:\t");
       gets (cli.comprador);
       fputs (cli.comprador, arq);
       
	   printf ("\ndata:\t");
       gets (cli.data);
       fputs (cli.data, arq);
       
	   printf("\nCodigo:\t");
       gets (cli.codigo);
       fputs (cli.codigo, arq);
     
	   system ("cls");
  printf ("cadastrado com sucesso \n");
  system ("pause");
  system ("cls");
       getch();
 
       break; 
       
       case 2: 
        printf("CADASTRE UM CLIENTE \n\n");
  gets (cli.nome);
  fputs (cli.nome, arq);
  printf ("Nome: \t");
  gets (cli.nome);
  fputs (cli.nome, arq);
  
       printf ("\ncpf: \t");
       gets (cli.cpf);
       fputs (cli.cpf, arq);
       
	   printf ("\nrg:\t");
       gets (cli.rg);
       fputs (cli.rg, arq);
      
	   printf ("\ntelefone:\t");
       gets (cli.telefone);
       fputs (cli.telefone, arq);
       
	   printf ("\nendereco:\t");
       gets (cli.endereco);
       fputs (cli.endereco, arq);
       
	   printf("\nCodigo:\t");
       gets (cli.codigo);
       fputs (cli.codigo, arq);
 
     
 
       break; 
       case 3: 
       printf("Digite o codigo do clinte:"); //buscar
       gets (cli.buscar);
       scanf("%d", &cod); 
       fputs (cli.buscar, arq);
  if (cli.buscar[1] ==cli.codigo[1]){
   printf ("\n nome: %s", cli.nome);
  
   printf ("\n codigo: %i \n", cli.codigo);
  }
  else {
   printf ("codigo nao encontrado \n");
  } 
  system ("pause");
  system ("cls");
       getch(); 
       
       case 4: 
       printf("Digite o codigo da venda:"); //buscar
       fputs (cli.buscar, arq);
  if (cli.buscar==cli.codigo){
   printf ("\n nome: %s", cli.nome);
  
   printf ("\n codigo: %i \n", cli.codigo);
  }
  else {
   printf ("codigo nao encontrado \n");
  } 
  system ("pause");
  system ("cls");
       getch(); 
 
       break; 
       
       case 5: 
       printf("TOTAL DE VENDAS:\n\n ");
       system ("pause");
  system ("cls");
       getch(); 
       
       break;
       
       case 6: 
       return 0;
  break; 
       } 
       } while (menu != 6);
 
       return 0;
       fclose(arq);
       
       /* adicionar valor da venda,
 troca (s/n) se sim, qual veiculo*/
}
