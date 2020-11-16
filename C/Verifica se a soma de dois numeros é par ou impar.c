#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x, y, soma;

	printf("Digite um numero: \n");
	scanf("%d", &x);

	printf("Digite outro numero: \n");
	scanf("%d", &y);
	
	soma=(x+y);
	
    if((soma%2)==0) { //resto da divisão for igual a 0
		printf("A soma de %d e %d eh igual a %d, portanto eh par \n", x,y,soma);
	}	
	else {
		printf("A soma de %d e %d eh igual a %d, portanto eh impar \n", x,y,soma);
	}
}