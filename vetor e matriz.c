#include <stdio.h>


int main(void){
	
	int matriz[5][5], l, c, el, m;
		
	for(l=0; l<5; l++){
		for(c=0; c<5; c++){
		
		printf("Digite o valor para L%d, C%d: ", l,c);
		scanf("%d", &matriz[l][c]);
		}
	}
	
	printf("Qual linha deseja encontrar o maior valor?  ");
	scanf("%d", &l);
	
	m=-1;
	
	for(el=l; el==l; el++){
		for(c=0; c<5; c++){
			if(matriz[l][c] > m){
			 m= matriz[l][c];
			}	
		}	
	}	
	
	printf("\n\nO Maior valor da linha %d eh %d", l, m);

	return 0;
}
