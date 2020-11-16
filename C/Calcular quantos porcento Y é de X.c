#include <stdio.h>

int main()
{
	int porcentagem;
	float x, y;

	printf("Digte o valor de x \n");
	scanf("%f", &x);
	printf("Digte o valor de y \n");
	scanf("%f", &y);

	porcentagem = (y / x)*100;
	if(y>x) {
		printf("Erro: Y nao pode ser maior que X");
	}
	else {
		printf( "Y corresponde a %d%% de X", porcentagem);
	}
	return 0;
}