#include <stdio.h>
#include <limits.h>

void maiores(int *segundomaior, int *quartomaior){

  int maior = INT_MIN;
  *segundomaior = INT_MIN;
  int terceiromaior = INT_MIN;
  *quartomaior = INT_MIN;

  int nvalores=5;

  while (nvalores-- > 0)
  {
      int tempdigitado;
      printf("Digite o %dº número:\n", nvalores+1);
      scanf("%d", &tempdigitado);

      if (tempdigitado > maior)
      {
        *quartomaior  = terceiromaior;
        terceiromaior = *segundomaior;
        *segundomaior = maior;
        maior = tempdigitado;
      }
      else if (tempdigitado > *segundomaior)
      {
        *quartomaior  = terceiromaior;
        terceiromaior = *segundomaior;
        *segundomaior = tempdigitado;
      }
      else if (tempdigitado > terceiromaior) {
        *quartomaior  = terceiromaior;
        terceiromaior = tempdigitado;
      }
      else if (tempdigitado > *quartomaior) {
        *quartomaior  = tempdigitado;
      }
  }
}

int main()
{
  int segundomaior;
  int quartomaior;

  maiores(&segundomaior, &quartomaior);

  printf("O segundo maior número é %d\n", segundomaior);
  printf("O quarto maior número é %d\n", quartomaior);

  return 0;
}