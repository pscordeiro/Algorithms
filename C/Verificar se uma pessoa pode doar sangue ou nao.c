#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int idade;
	float peso;

	printf("Qual sua idade ? \n");
	scanf("%d", &idade);

	printf ("Qual seu peso em kg ? \n");
	scanf("%f", &peso);

	if((idade >=16) && (idade<=69) && (peso>=50)) {
		printf("Voce pode doar sangue");
	}	
	else {
		printf("Voce nao pode doar sangue");
	}
}