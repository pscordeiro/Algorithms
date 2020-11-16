#include <stdio.h>

int main()
{
	int numero1, numero2;

	printf("Escreva o primeiro numero: ");
	scanf("%d", &numero1);

	printf("Escreva o segundo numero: ");
	scanf("%d", &numero2);
	
	if(numero1 == numero2)
        printf("Sao iguais");
    else
    
	if(numero1 > numero2)
		printf("%d eh maior", numero1);
	
	else 
		printf("%d eh  maior", numero2);
	
}