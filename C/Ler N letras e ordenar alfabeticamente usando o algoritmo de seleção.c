#include <stdio.h>
#include <string.h>
#define tam 10

void selectionSort(char vetor[][tam], int n);

int main()
{
  int n_letras, i;
  char vetor[tam][tam];

  printf("\nQuantas letras você vai digitar ?: ");
  scanf("%d", &n_letras);

  printf("Digite as %d letras para serem ordenadas e aperte enter após cada letra:\n\n", n_letras);

  for(i=0;i<n_letras;i++)
  {
    scanf("%s", vetor[i]);
  }

  selectionSort(vetor, n_letras);
  
  printf("\nAs letras em ordem alfabética são:\n\n");
  for(i=0;i<n_letras;i++){
    printf("%s | ", vetor[i]);
  }

  printf("\n\n");

  return 0;

}

void selectionSort(char vetor[][tam], int n){

  int i,j,min;

  char menorstr[tam];
  for (i = 0; i < n-1; i++) 
  {
    min = i;
    strcpy(menorstr, vetor[i]);
    for(j = i+1; j < n; j++){
      if(strcmp(menorstr, vetor[j]) > 0)
      {
        strcpy(menorstr, vetor[j]);
        min=j;
      }
    }

    if (min != i)
    {
      char temp[tam];
      strcpy(temp, vetor[i]);
      strcpy(vetor[i], vetor[min]);
      strcpy(vetor[min], temp);
    }
  }
}



