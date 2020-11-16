#include <stdio.h>

int main() {
  
  int n;

  printf("\nDigite um numero: ");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n; i++) {
    if(i%2!=0) {
      printf("%d\n", i);
    }
  }
  printf("\n\n");
  system("PAUSE");
  printf("\n\n");
  return 0;
  
}