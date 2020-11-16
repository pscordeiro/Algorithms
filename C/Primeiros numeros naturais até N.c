#include <stdio.h>

int main() {
  
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
       printf("%d ", i);
  }
  printf("\n");
  system("PAUSE");
  return 0;
}