#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numero;

	printf("\nDigite um numero para saber se é par ou impar: ");
	scanf("%d", &numero);
	
	if((numero %2)==0) { //resto da divisão for igual a 0
		printf("\nO numero é par\n\n");
	}	
	else {
		printf("\nO numero é impar\n\n");
	}
}