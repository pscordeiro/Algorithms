#include <stdio.h>

//declaração das funções
int ehprimo(int n);
void goldbach(int g);

int main(){
    int numero = 0;
    while(1){
        printf("Digite um número par: ");
        scanf("%d",&numero);
        printf("\n");
        if(numero>2 && numero%2==0){
          goldbach(numero);
        }
        else{
          printf("Incorreto!!\nTente novamente\n");
        }
        printf("\n");
    }
    return 0;
}


//verifica se é primo
int ehprimo(int n){
    int flag = 1;
    for (int j = 2; j < n/2; j++)
    {
        if((n%j) == 0){
            return flag-1;
        }
    }
    return flag;
}


//função da conjuntura de goldbach 
void goldbach(int g){
    int i = 2;

    for (int j = g-i; j > 2; j--)
    {
        if(ehprimo(i) == 1 && ehprimo(j) == 1)
        {
            printf("%d = %d + %d\n",g,i,j);
            break;
        }
        i++;
    }
}