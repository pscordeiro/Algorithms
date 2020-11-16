#include<stdio.h>
int main()
{
  int n, p;

  printf("Digite um número para saber se é primo: ");
  scanf("%d", &n);

  for (p = 2; p <= n/2; p++)
  {
    if (n%p == 0)
    {
      printf("\n\n%d é um número composto\n\n", n);
      break;
    }
  }
  if (p == n/2 + 1)
    printf("\n\n%d é um número primo\n\n", n);

	printf("\n");
  system("PAUSE");
  printf("\n");
  return 0;

}