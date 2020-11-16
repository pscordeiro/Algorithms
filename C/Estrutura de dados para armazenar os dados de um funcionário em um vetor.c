#include <stdio.h>
#define TAM 5

typedef struct {
  char nome[50];
  char sobrenome[50];
  char data_nasc[10];
  float salario;
  int rg;
 
}Dados;

main() {

  int i;
  Dados empregados[TAM];

  for(i=0;i<TAM;i++) {

    printf("\nDigite o nome: ");
    scanf("%s", empregados[i].nome);
    printf("Digite o sobrenome: ");
    scanf("%s", empregados[i].sobrenome);
    printf("Digite a data de nascimento: ");
    scanf("%s", empregados[i].data_nasc);
    printf("Digite o salário: ");
    scanf("%f", &empregados[i].salario);
    printf("Digite o RG: ");
    scanf("%d", &empregados[i].rg); 

    printf("\nOs dados são: %s, %s, %s, %f, %d", empregados[i].nome, empregados[i].sobrenome, empregados[i].data_nasc, empregados[i].salario, empregados[i].rg); 
    printf("\n");
  }
 
}