#include <stdio.h>
#define hsegundos 3600

int converti(int duracao)
{
  int ashora = (duracao/hsegundos); 
  int osminuto = (duracao - (hsegundos*ashora))/60;
  int ossegundo = (duracao - (hsegundos*ashora) - (osminuto*60));
  printf("São %d horas %d minutos e %d segundos", ashora, osminuto, ossegundo);
}

int main() {

  int duracao;

  printf("Digite o tempo de duração da fábrica em segundos: ");
  scanf("%d", &duracao);

  converti(duracao);

}