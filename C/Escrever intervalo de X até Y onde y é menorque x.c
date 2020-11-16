#include <stdio.h>

int main() {
  
  int x, y, i;

	do
  {  
    printf("\nDigite um valor para X: ");
    scanf("%d", &x);

    printf("Digite um valor para Y: ");
    scanf("%d", &y);

    //se o i=1 e i menor ou igual a -5, diminua 1 até chegar em =y
    for(i=x; i>=y; i--) {
      printf("%d ", i);
    }  

	}while(x>y);
    printf("\nX deve ser maior que Y\nTente Novamente\n\n");
  	printf("\n");

  system("PAUSE");
  printf("\n");
  return 0;

}