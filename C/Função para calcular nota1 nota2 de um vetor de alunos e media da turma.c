#include <stdio.h>
#define alunos 6

int main()
{
  int matricula[alunos], mediainferior, i;
  float nota1[alunos], nota2[alunos], notafinal[alunos], mediaturma;

  for (i = 0; i < alunos; i++) 
  {
    printf("\nDigite o número da matricula do aluno %i: ", i+1);
    scanf("%i", &matricula[i]);

    printf("\nDigite a nota1 do aluno%i: ", i+1);
    scanf("%f", &nota1[i]);

    printf("Digite a nota2 do aluno%i: ", i+1);
    scanf("%f", &nota2[i]);

    notafinal[i] = (nota1[i]+nota2[i]) / 2;
    mediaturma += notafinal[i];
  }

  printf("\nNo.Matricula    Nota1  Nota2  Nota Final\n");
  
  for (i = 0; i < alunos; i++) {
    printf("    %03d\t\t %4.1f\t%4.1f\t %4.1f\n", matricula[i], nota1[i], nota2[i], notafinal[i]);
  }

  mediaturma = mediaturma/alunos;
  printf("\nMedia da turma: %.1f", mediaturma);

  mediainferior=0;
  for (int i = 0; i < alunos; i++)
  {
    if(notafinal[i] < mediaturma){
      mediainferior++;
    }
  }
  
  printf("\nNúmero de alunos com nota final inferior a media: %d ", mediainferior);
  printf("\n\n");

  return 0;
}