#include <stdio.h>

int main() {
  
  int n,soma;

  printf("Digite um numero: ");
  scanf("%d", &n);

  soma=0;

  for (int i = 1; i <= n; i++) {
    if(i%2==0) {
      soma+=i;
      printf("%d ", i);
    }
  }
  printf("\n");
  printf("\nA soma dos números pares de 0 até %d é igual a: %d\n", n, soma);   

  printf("\n\n");
  system("PAUSE");
  printf("\n\n");
  return 0;

}