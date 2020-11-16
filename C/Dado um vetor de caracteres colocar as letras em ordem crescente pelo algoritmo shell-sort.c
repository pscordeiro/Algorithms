#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 100

void shell_sort(char *palavra, int tamanho);

int main() {

  char palavra[MAX];
  char p_antes[MAX];

  printf("\nDigite a palavra que deseja ordenar alfabeticamente: ");
  scanf("%s", palavra);
  strcpy(p_antes, palavra);

  for(int i=0;i<strlen(palavra);i++){
    palavra[i] = tolower(palavra[i]);
  }

  shell_sort(palavra, strlen(palavra));

  printf("\nAs letras da palavra %s em ordem alfabetica são: %s\n\n", p_antes, palavra);

  return 0;
}

void shell_sort(char *palavra, int tamanho)  {

  int i = (tamanho - 1) / 2;
  char chave, k, aux;

  while (i != 0)
  {
    do
    {
      chave = 1;
      for(k = 0;k<tamanho-i;++k)
      {
        if(palavra[k] > palavra[k+i])
        {
          aux = palavra[k];
          palavra[k] = palavra[k+i];
          palavra[k+1] = aux;
          chave = 0;
        }
      }
    } while (chave == 0);
    i = i/2;
  }


}