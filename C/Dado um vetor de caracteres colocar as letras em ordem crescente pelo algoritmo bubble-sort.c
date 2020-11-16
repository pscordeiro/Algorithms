#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void bubblesort(char *palavra, int n);

int main() {

  char palavra[MAX];
  char p_antes[MAX];

  printf("\nDigite a palavra que deseja ordenar alfabeticamente: ");
  scanf("%s", palavra);
  strcpy(p_antes, palavra);

  for(int i=0;i<strlen(palavra);i++){
    palavra[i] = tolower(palavra[i]);
  }

  bubblesort(palavra, strlen(palavra));

  printf("\nAs letras da palavra %s em ordem alfabetica são: %s\n\n", p_antes, palavra);

  return 0;
}

void bubblesort(char *palavra, int n)  {

  int j,k;
  char aux;

  for(j=1; j<n; j++)
  {
    for(k=0; k<n-j; k++)
    {
      if(palavra[k]>palavra[k+1])
      {
        aux=palavra[k];
        palavra[k]=palavra[k+1];
        palavra[k+1]=aux;
      }
    }
  }
}

