#include <stdio.h>

int main()
{
	float fracaovenda, preco, fracaominima;
  float acao = 2453.42;

	printf("Digte a fracao a ser vendida \n");
	scanf("%f", &fracaovenda);

	fracaominima = 2453.42/100.0;

	if(fracaovenda < 100 & fracaovenda > 0) {
		preco = (fracaovenda * fracaominima);
		printf("O preco da fracao indicada eh %.2f \n", preco);
	}
	else {
		printf("Valor invalido");

	}
	return 0;
}