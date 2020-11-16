#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

double v_esfera(double volume, int r) 
{
  return(4*pi)*(pow(r,3))/3;
}

int main() {
	
  double volume;
  int r;
	
	printf("Qual o valor do raio da esfera ?\n---->: ");
	scanf("%d", &r);

	volume=v_esfera(volume, r);

  printf("O volume é igual a: %.2lf", volume);

  return 0;

}



