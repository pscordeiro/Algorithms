#include <stdio.h>

void maior(int a, int b, int c, int *mai){

  if(a>b && a>c){
    *mai=a;
  }
  else if(b>a && b>c){
    *mai=b;
  }
  else{
    *mai=c;
  }
}

void menor(int a, int b, int c, int *men){

  if(a<b && a<c){
    *men=a;
  }
  else if(b<a && b<c){
    *men=b;
  }
  else{
    *men=c;
  }

}

int main() {

  int a, b, c, mai, men;

  printf("Digite o valor de A: ");
  scanf("%d", &a);
  getchar();

  printf("Digite o valor de B: ");
  scanf("%d", &b);
  getchar();

  printf("Digite o valor de C: ");
  scanf("%d", &c);
  getchar();

  maior(a,b,c, &mai);
  menor(a,b,c, &men);

  printf("\nO maior é: %d e o menor é: %d\n\n", mai, men);

  return 0;
}