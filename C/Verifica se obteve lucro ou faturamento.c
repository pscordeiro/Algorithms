#include <stdio.h>

int main()
{
	int custo, faturamento;

	printf("Escreva quanto voce gastou: ");
	scanf("%d", &custo);
	getchar();

	printf("Escreva quanto voce ganhou: ");
	scanf("%d", &faturamento);
	getchar();
	
	if(custo < faturamento)
	  printf("Voce teve lucro");
	  else
			if(custo > faturamento)
				printf("Voce teve prejuizo");
				else 
					printf("Voce nao teve prejuizo nem lucro");

	return 0;

}