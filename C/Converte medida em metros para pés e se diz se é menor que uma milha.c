#include <stdio.h>

int main()
{
	float x, y, z, w;
	/*
	x=metros	
	y=pes
	z=milhas
	*/

	printf("Escreva quantos metros voce anda por dia: ");
	scanf("%f", &x);
	getchar();
	
	y = (x * 3.2808); //converte de metros para pés
	z = 5280;         //valor de 1 milha     
	w = (y / z);      //valor em pés dividido por 1 milha
	
	printf(" %.0f metros eh igual a: %.2f pes \n", x, y);

	if(y < z) {
	  printf(" %.0f metros nao equivale a uma milha completa", x);
	}
	else {
		printf(" %.0f metros equivale a %.2f milha(s) ", x, w);
	}

	return 0;

}