#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int ano;

	printf("Digite um ano para saber se eh bissexto: ");
	scanf("%d", &ano);
	
	if((((ano%4)==0) && (ano%100)!=0)) { 
	  printf("Esse ano eh bissexto");
	}	
	else {
		printf("Esse ano nao eh bissexto ");
	}
}