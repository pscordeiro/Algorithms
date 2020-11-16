#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numero, resto, divisao;

	printf("Digite um numero para saber se eh divisivel por 3: ");
	scanf("%d", &numero);
	/* se for divisivel por três e o resto for igual a zero */
	resto = numero %3;
	divisao = numero /3;
	printf ("O resto eh igual a %d e o resultado da divisao eh %d \n", resto, divisao);

	if((numero %3)==0) { 
		printf("O numero %d eh divisivel por 3 \n", numero);
	}	
	else {
		printf("O numero %d nao eh divisivel por 3 \n", numero);
	}
}