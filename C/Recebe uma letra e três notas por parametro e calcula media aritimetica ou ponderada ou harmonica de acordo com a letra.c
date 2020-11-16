#include <stdio.h>
#include <ctype.h>

float media_arit(float nota1, float nota2, float nota3)
{
  float media_aritc=(nota1+nota2+nota3)/3;
  return media_aritc;
}

float media_pond(float nota1, float nota2, float nota3)
{
  float media_pondc=((nota1*5)+(nota2*3)+(nota3*2))/(5+3+2);
  return media_pondc;
}

float media_harm(float nota1, float nota2, float nota3)
{
    float snotas = (1/nota1) + (1/nota2) + (1/nota3);

    float media_harmc = (3/snotas);
    return media_harmc;
}

int main() {

  char letra;
  float nota1, nota2, nota3, resultado;

  printf("Digite as notas do aluno: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);
  getchar();
  printf("Digite o tipo de media que deseja: ");
  scanf("%c", &letra);
  getchar();

  letra=toupper(letra);

  if(letra=='A') {
    resultado=media_arit(nota1, nota2, nota3);
    printf("A media do aluno é %.2f", resultado);
  }
  else if(letra=='P') {
    resultado=media_pond(nota1, nota2, nota3);
    printf("A media do aluno é %.2f", resultado);
  }
  else if(letra == 'H') {
    resultado=media_harm(nota1, nota2, nota3);
    printf("A media do aluno é %.2f", resultado);
  }
  else {
    printf("Letra do aluno inválida.");
  }
  return 0;
}