#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float x, divisao;

	printf("Digite um numero para saber a quantidade de duzias \n");
	scanf("%f", &x);

	divisao = x/12; 

	if (x > 12) {
		printf("Existe aproximadamente %.1f duzias no numero %.1f ", divisao, x);
	}
	else {
		printf("O numero %.0f eh menor que 12 " ,x);
	}
}