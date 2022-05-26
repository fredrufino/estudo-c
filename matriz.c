#include <stdio.h>
#include <string.h>

int main(void){
	
	int matriz[3][2], linha, coluna;
	
	for(linha=0; linha<3; linha++){
		for(coluna=0; coluna<2; coluna++){
		
		matriz[linha][coluna]=0;
		printf("%d", matriz[linha][coluna]);
		
		}
		printf("\n");
	}
	return 0;
}

