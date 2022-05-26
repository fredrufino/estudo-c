#include <stdio.h>

int main(){
    int i, j, a,b;
			
	a=5; 
	b=4;
    
    for (i=0;i<4;i++)
    { 
        printf("\n");
       		for (j=1;j<=9;j++)
        {
            if (j < a) 
            {
            printf("  ");
            }else printf("*");
        }
    a++; 
    }
    
    a=0;
    b=9;
    
    for (i=0; i<5;i++)
    {
        printf("\n");
        
        	for (j=1; j<=9; j++)
        {
            if (j < b)
            {
            printf("  ");
            }else printf("*");
        } 
    b--;
    }
   
return 0;
}
