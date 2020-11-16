#include <stdio.h>

int main() {
  
  int x, y, i;

	do
	{  
    printf("\nDigite um valor para X: ");
    scanf("%d", &x);

    printf("\nDigite um valor para Y: ");
    scanf("%d", &y);

    //liste os intervalos de x até y  
    for(i=x; i<=y; i++) {
      printf("%d ", i);
    } 
   
	}while(y>x);
    printf("\nY deve ser maior que X\nTente Novamente");

  printf("\n\n");
  system("PAUSE");
  printf("\n\n");
  return 0;
}