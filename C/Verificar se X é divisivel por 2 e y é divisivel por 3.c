#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x, y;

	printf("Digite um numero: \n");
	scanf("%d", &x);

	printf("Digite outro numero: \n");
	scanf("%d", &y);
	
  if((x%2 ==0 && y%3 ==0)) { //resto da divisão for igual a 0
		printf("O numero %d eh divivel por 2 e o numero %d eh divisivel por 3 \n", x,y);
	}	
	else {
	    if((x%2 ==0 && y%3 != 0)) { 
		    printf("O numero %d eh divivel por 2 e o numero %d NAO eh divisivel por 3 \n", x,y);
	    }
	    else { 
			if((x%2 !=0 && y%3 ==0)) {
	      printf("O numero %d NAO eh divivel por 2 e o numero %d eh divisivel por 3 \n", x,y);
            }
        else { 
		    if((x%2 !=0 && y%3 !=0)) { 
				printf("O numero %d NAO eh divivel por 2 e o numero %d NÃO eh divisivel por 3 \n", x,y);
                }
            }
        }
    }
}