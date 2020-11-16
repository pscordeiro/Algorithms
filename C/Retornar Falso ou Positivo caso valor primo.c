#include <stdio.h>

int testeprimo(int c)
{
  int numero;

  for(numero=2;numero<=c-1;numero++)
  {
    if (c%numero == 0)
    return 0;
  }
  return 1;
}

int main() {
  int n, resultado;

  printf("Digite um número inteiro para saber se é primo: ");
  scanf("%d", &n);

  resultado= testeprimo(n);

  if(resultado == 1)
    printf("Verdadeiro");
  else
    printf("Falso");

  return 0;
}