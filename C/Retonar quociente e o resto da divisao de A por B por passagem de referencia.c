#include <stdio.h>

void devede(int *a, int *b, int *quociente, int *resto){

  *quociente = ( *a / *b );
  *resto = ( *a % *b );

}

int main()
{
  int a, b, quociente, resto;

  printf("Digite o valor de A: ");
  scanf("%d", &a);

  printf("Digite o valor de B: ");
  scanf("%d", &b);

  if(b != 0) {
    devede(&a, &b, &quociente, &resto);

    printf("\nO quociente de %d/%d é igual a: %d\n", a, b, quociente);
    printf("\nO resto da divisão entre %d e %d é igual a: %d \n\n", a, b, resto);
    return 0;
  }
  else {
    printf("\nNão é possível realizar a operação!\n\n");
    return -1;
  }

}