#include <stdio.h>
#include <math.h>

main() {
  double base, expoente, potencia;
  
  printf("Digite um valor para X: ");
  scanf("%lf", &base);
  printf("Digite um valor para N: ");
  scanf("%lf", &expoente);

  potencia = pow(base, expoente); 

  printf("%.2f^%.2lf = %.2lf", base, expoente, potencia);

	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}