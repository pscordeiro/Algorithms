#include <stdio.h>

int main() {
  int n, m;

  printf("\nDigite um número para a primeira tabuada: ");
  scanf("%d", &n);

  printf("\nDigite um número para a última tabuada: ");
  scanf("%d", &m);
  printf("\n");

  for (int i = n; i <= m; i++) {
    for (int p = 1; p <= 10; p++) {
        printf("%d x %d = %d\n\n", i, p, i*p);
    }
  }
  
	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}