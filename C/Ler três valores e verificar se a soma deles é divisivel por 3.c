#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x, y, z, soma;

	printf("Digite um numero para x : \n");
	scanf("%d", &x);
	getchar();

	printf("Digite um numero para y: \n");
	scanf("%d", &y);
	getchar();

	printf("Digite um numero para z: \n");
	scanf("%d", &z);
	getchar();

	soma= (x+y+z);
	
  if((soma%3)==0) { //resto da divisão for igual a 0
		printf("A soma de %d + %d + %d eh igual a %d logo eh divisivel por 3 \n", x,y,z,soma);
	}	
	else {
		printf("A soma de %d + %d + %d eh igual a %d logo NAO eh divisivel por 3 \n", x,y,z,soma);
	}
}