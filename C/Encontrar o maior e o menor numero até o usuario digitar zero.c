#include <stdio.h>

int main()
{
  int numero1, numero2;

  while ((numero1!=0)&&(numero2!=0)) {

  printf("Digite um numero ou zero para finalizar: ");
  scanf("%d", &numero1);
  getchar();
  printf("Digite outro numero ou zero para finalizar: ");
  scanf("%d", &numero2);
  getchar();

  if(numero1 == 0) {
        printf("Finalizando Programa\n");
  }
    else if (numero2 == 0) {
      printf("Finalizando Programa\n");
    }
      else if (numero1 == numero2) {
          printf("São iguais\n");
      }
        else if (numero1 > numero2) {
          printf("%d é maior\n", numero1);
          printf("%d é menor\n", numero2);
        }
          else {
            printf("%d é maior\n", numero2);
             printf("%d é menor\n", numero1);
          }
  }
}

