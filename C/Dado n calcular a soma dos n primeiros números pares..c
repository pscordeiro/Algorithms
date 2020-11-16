#include <stdio.h>

int main() {

  int n,soma, count;

  printf("Digite um numero: ");
  scanf("%d", &n);

  soma=0;

  for (int i = 2 ; i <= n*2; i+=2) {
    soma+=i;
    printf("%d ", i);
  }
    printf("\nA soma dos %d primeiros números pares é igual a: %d\n", n, soma); 

  printf("\n");
  system("PAUSE");
  printf("\n\n");
  return 0;
}