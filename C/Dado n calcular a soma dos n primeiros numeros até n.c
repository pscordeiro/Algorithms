#include <stdio.h>

int main() {
  
  int n,soma;

  printf("Digite um numero: ");
  scanf("%d", &n);

  soma=0;

  for (int i = 1; i <= n; i++) {
    soma+=i;
      printf("%d ", i);
    }

  printf("\nA soma desses numeros é igual a: %d\n", soma);    

  printf("\n");
  system("PAUSE");
  printf("\n\n");
  return 0;

}