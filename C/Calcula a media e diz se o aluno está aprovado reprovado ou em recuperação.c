#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1,nota2;
	float media;

	printf("Digite a nota 1: ");
	scanf("%f" ,&nota1);
	getchar();
	printf("Digite a nota 2: ");
	scanf("%f" ,&nota2);
	getchar();

	media = (nota1 + nota2) /2;
	/*
	Aprovado - 70 a 100
	Recuperação- 41 a 69
	Reprovado- > 40
	
	
	*/
	if((media >= 70) && (media<=100)){
		printf("Aprovado");
	}
	else {
		if(media >= 41) {
			printf("Recuperacao");
	}
		else {
			if(media <= 40) {
				printf("Reprovado"); 
			}
		}
	}
}