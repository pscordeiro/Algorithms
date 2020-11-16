#include <stdio.h>
int main()
{
  int n, i = 3, count, c;

  printf("Digite quantos numeros primos quer imprimir: ");
  scanf("%d", &n);

  if (n >= 1) {
    printf("Os primeiros %d números primos são:\n",n);
    printf("\n2\n");
  }

  for (count = 2; count <= n;)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      printf("%d\n", i);
      count++;
    }
    i++;
  }

	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}