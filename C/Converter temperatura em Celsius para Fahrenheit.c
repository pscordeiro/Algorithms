#include <stdio.h>

int main()
{
	float celsius, fahrenheit;

	printf("Escreva qual temperatura eh ideal para voce em celsius: " );
	scanf("%f", &celsius);
	getchar();

	fahrenheit = (celsius * 9 / 5) +32;

	printf("%.1f graus Celsius equivalem a %.1f graus Fahrenheit", celsius, fahrenheit);

	return 0;

}