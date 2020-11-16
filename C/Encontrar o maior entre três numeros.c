#include <stdio.h> 
#include <stdlib.h>

int main()
{
	int x,y,z;

	printf("Digite o primeiro numero que representa x: ");
	scanf("%d" ,&x);
	printf("Digite o segundo numero que representa y: ");
	scanf("%d" ,&y);
	printf("Digite o terceiro numero que representa z: ");
	scanf("%d" ,&z);

	if(x > y && x > z )
		printf("O maior eh X que equivale a %d", x );
	else
	if(y > x && y > z)
		printf("O maior eh Y que equivale a %d", y );
	else
		printf("O maior eh Z que equivale a %d", z );
}