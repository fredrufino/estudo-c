#include <stdio.h>

int main(){
	int fig, i, j, conti, cont2, a;
	
	a=4;
	conti=5;
	
for (i=0;i<5;i++)
    {
        printf("\n");
        	for (j=0;j<conti;j++)
           	if(j < a){
			   printf(" ");
		}else {
		 printf("*");
		}
    	a=a-1;
    	conti = conti +1;

    }
    
 
    
    }	

