#include <stdio.h>

main(){
    
	int n, i;
  long long fatorial;
	fatorial = 1;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
  if (n < 0)
    printf("Não existe fatorial de numero negativo");
  else {
    for (i = 1; i <= n; ++i) {
    fatorial *= i;
    }
    printf("O fatorial de %d é igual: %ld", n, fatorial);
  }
  
	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}