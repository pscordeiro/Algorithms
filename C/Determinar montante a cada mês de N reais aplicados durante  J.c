#include <stdio.h>
#include <math.h>
#define tempo 12

int main ()
{

  float n, j, jc;

  printf("Qual o valor que você deseja aplicar?: ");
  scanf("%f", &n);
  getchar();

  printf("Quantos %% de juros mensais?: ");
  scanf("%f", &j);
  getchar();

  printf("\n\n");
  for(int i=1;i<=tempo;i++) { //loop pros meses

    jc = n * (j/100);         //faz n X j% // 2000 X 0.02
    jc += n;                  //jc = jc+n  // jc = 2000 + 40
    n=jc;                     //atribui o novo valor a n para o próximo loop

    printf("%dº mês vai ter um montante de: %.2f\n", i, jc); 
    
  }

	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}
