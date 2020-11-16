#include <stdio.h>

#define tamanho 10 //

int main() {

  int valor[tamanho], i, maiornumero, indice;

  for (i = 0; i < tamanho; i++) {
    printf("Informe o valor %i ",i+1);
    scanf("%i", &valor[i]);
  }

  maiornumero = valor[0];
  indice = 0;
  for (i = 1; i < tamanho; i++) {
    if (valor[i] > maiornumero) {
      maiornumero = valor[i];
      indice = i;
    }
  }

  printf("\nOs valores informados foram: \n\n");
  for (i = 0; i < tamanho; i++) {
      printf("%i ", valor[i]);
  }

  printf("\n\nMaior valor: %i -> Indíce: %d\n\n", maiornumero, indice);

  printf("Todos elementos com indice menor que o maior numero\n\n");
  for(i=0;i<indice;i++){
        printf("%d ",valor[i]);   
  }
  
  printf("\n\nTodos elementos com indice maior que o maior numero\n\n");

  for(i=indice+1;i<10;i++){
    printf("%d ",valor[i]);   
  }

  printf("\n\n");
  
  return 0;
}