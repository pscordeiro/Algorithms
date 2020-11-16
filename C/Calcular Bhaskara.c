#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c)
{
  float delta, x1, x2;
  delta = ((b*b)-4*a*c);

  if(delta<0){
    printf("\nNão existe raizes reais\n\n");
  }
  else{
    printf("\nDelta é igual a: %.0f\n", delta);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("\nO valor de x1 é: %.2f", x1);
    printf("\nO valor de x2 é: %.2f\n\n", x2);
  }

}

int main() {

  float a,b,c;

  printf("Digite um valor para A: ");
  scanf("%f", &a);

  printf("\nDigite um valor para B: ");
  scanf("%f", &b);

  printf("\nDigite um valor para C: ");
  scanf("%f", &c);

  bhaskara(a,b,c);

  return 0;
}