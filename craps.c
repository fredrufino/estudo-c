#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Exibe o menu do jogo
int exibirMenu(){
  int opcao;
  
  system("cls");
  
  printf("1 - INICIAR JOGO");
  printf("\n2 - PONTUAÇÃO");
  printf("\n3 - REGRAS");
  printf("\n4 - SAIR");
  printf("\n\nDigite uma opção: ");
  scanf("%d", &opcao);
  return opcao;
}

// Define o valor da aposta
int apostarMoedas(int pont){
  int aposta;
  printf("Você têm %d moedas! \n", pont);
  printf("Qual o valor da aposta? ");
  scanf("%d", &aposta);
  return aposta;  
}

// Define a opção apostada
int apostarOpcao(){
  int opcao;
  printf ("1 - para jogar a favor dos dados \n2 - para jogar contra os dados\n");
  scanf("%d", &opcao);
  return opcao;
}

vetOpc(int apostaOpc, int j){
	int vetorOpc[10];
		vetorOpc[j] = apostaOpc; 
    return vetorOpc[j];
}

int jogarDados(){
  int dado1=0, dado2=0, dados;
// char jogar;

  srand(time(NULL));
  //no portugol aceita sorteio com valor inicial e final
  // printf ("Pressione k para jogar os dados: ");
  //scanf ("%c", &jogar);
  //if (jogar == 'k'){
    dado1 = rand() % 6;
    printf ("Dado 1: %d\n", dado1);
    dado2 = rand() % 6;
    printf ("Dado 2: %d\n", dado2);
  //}
  dados = dado1 + dado2;
  return dados;
}

int pontuarSaida (int dados){
  int i=0;
  if (dados == 7 || dados == 11){
    printf ("Natural\n"); return i-1;
  }else if (dados == 2 || dados == 3 || dados == 12){
    printf ("Craps\n"); return i-2;
  }else{
    printf("Ponto =  %d\n", dados);
    return i+1;
  }
}

int pontuarPontos (int dadosI, int dadosP){
  int i=0;
    if (dadosP == 7){
      printf ("CRAPS\n"); return i-2;
    }else if(dadosP == dadosI){
      return i-1;
    }
}

int resultadoJogo (int jogada, int apostaM, int apostaO, int pont){
  switch(apostaO){
    case 1:
      if(jogada == -1){
        pont = pont + apostaM;
        printf ("Você ganhou %d moedas\n", apostaM);
      }else{
        pont = pont - apostaM;
        printf ("Você perdeu %d moedas\n", apostaM);
      }  
    break;
    case 2:
      if(jogada == -2){
        pont = pont + apostaM;
        printf ("Você ganhou %d moedas\n", apostaM);
      }else{
        pont = pont - apostaM;
        printf ("Você perdeu %d moedas\n", apostaM);
      }       
    break;
  }
  return pont;
}


int main(void) {
  int opcaoMenu, pontTotal=100, apostaMoed, apostaOpc, dadosInic, dadosPont, resultado;
  int j, vetorOpcao, vetop[10];
  j=-1;
  do{

    opcaoMenu = exibirMenu();

    switch(opcaoMenu){
      case 1:      //iniciar jogo
        apostaMoed = apostarMoedas(pontTotal);
        apostaOpc = apostarOpcao();
        
        vetorOpcao= vetOpc(apostaOpc, j);
        j = j+1; 
        vetop[j] = vetorOpcao;
        
        dadosInic = jogarDados();

        resultado = pontuarSaida (dadosInic);
          if (resultado == 1){ 
            do{
              dadosPont = jogarDados();
              resultado = pontuarPontos (dadosInic, dadosPont);
            }while ((dadosPont != dadosInic) && (dadosPont != 7));
          }
        pontTotal = resultadoJogo(resultado, apostaMoed, apostaOpc, pontTotal);

        printf("Sua pontuação é: %i \n", pontTotal);
        
      printf("\n\nRodada 1: \n\n");
      printf("Voce escolheu %d e o ganhou", vetop[0]);
        // funcao vetor contabilidade de apostas
        // voltar ao menu
        break;
      case 2:    // exibir contabilidade de apostas
        break;
      case 3:    // exibir REGRAS
        break;
      case 4:    // sair
//      printf("Encerrando...\n");
        break;
      default:
        printf ("Opção inválida\n\n");
    }
  } while (opcaoMenu<0 || opcaoMenu>4);
//} while(opcao != 4); // A opção 4 finaliza o programa
  return 0;
}
