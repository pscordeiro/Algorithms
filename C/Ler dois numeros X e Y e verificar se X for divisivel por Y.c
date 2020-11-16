#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x, y;

	printf("Digite um numero: \n");
	scanf("%d", &x);

	printf("Digite outro numero: \n");
	scanf("%d", &y);
	
  if((x%y)==0) { //resto da divisão for igual a 0
		printf("O numero %d eh divivel por %d \n", x,y);
	}	
	else {
		printf("O numero %d NAO eh divivel por %d \n", x,y);
	}
}