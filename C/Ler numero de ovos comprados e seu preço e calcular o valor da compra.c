#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int quantidade;
	float preco;

	printf("Digite quantos ovos deseja comprar: ");
	scanf("%d", &quantidade);
	
	if((quantidade%12)==0) { 
	    preco=0.25;
	}	
	else {
		preco= 0.50;
	}
	
	printf("Voce vai gastar R$:%.2f reais comprando %d ovos" , preco*quantidade, quantidade);
}