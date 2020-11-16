#include <stdio.h>

int main() {
  int n;

  do{
    
  printf("\nDigite um número para ver sua tabuada: ");
  scanf("%d", &n);
  printf("\n");

  for(int i = 1; i<=10; i++) {
    printf("%ix%i = %i\n",n, i, n*i);
  }

  }while(n>0);
    printf("Fim do programa!");
    printf("\n");

	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}