#include <stdio.h>

int main()
{
	int numero1, numero2;

	printf("\nEscreva o primeiro numero: ");
	scanf("%d", &numero1);

	printf("\nEscreva o segundo numero: ");
	scanf("%d", &numero2);
	
	if(numero1 != numero2) {
        printf("\nSao diferentes\n\n");
	}
  else {
		printf("\nSao iguais\n\n");
	}
}