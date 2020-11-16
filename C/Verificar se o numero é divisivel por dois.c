#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numero, resto, divisao;

	printf("Digite um numero para saber se eh divisivel por 2: ");
	scanf("%d", &numero);

	if((numero %2)==0) { 
		printf("O numero %d eh divisivel por 2 \n", numero);
	}	
	else {
		printf("O numero %d nao eh divisivel por 2 \n", numero);
	}
}