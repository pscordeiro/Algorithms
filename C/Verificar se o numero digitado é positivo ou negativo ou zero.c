#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;

	printf("Digite um numero ");
	scanf("%d" ,&x);

	if(x ==0){
		printf("\nZero\n\n");
	}else{
		if(x>0){
				printf("\nPositivo\n\n");
		}else{
				printf("\nNegativo\n\n");
		}
	}
}