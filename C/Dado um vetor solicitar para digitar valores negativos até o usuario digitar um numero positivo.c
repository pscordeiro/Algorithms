#include <stdio.h>
#define tamanho 20 //

int main() {

  int valor[tamanho], i, buscar, flag;

  printf("\n");
  for (i = 0; i < tamanho; i++) {
    printf("Informe o valor %i: ",i+1);
    scanf("%i", &valor[i]);
    if(valor[i] < 0){
      printf("Digite novamente\n");
      i--;
    }
  }

  printf("\nDigite o valor que deseja buscar: ");
  scanf("%d", &buscar);

  flag=0;
  for(i=0; i<tamanho; i++) {
    if(valor[i] == buscar) {
      flag = 1;
      break;
    }
  }

  if(flag == 1) {
    printf("\n%d encontrado na posição %d", buscar, i+1);
  }
  else {
    printf("\n%d não foi encontrado no vetor", buscar);
  }

  printf("\n\n");
  return 0;
  
} 