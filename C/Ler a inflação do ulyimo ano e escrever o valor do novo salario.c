#include <stdio.h>
#include <stdlib.h>

int main() 
{
  double salarioantigo = 7536.72;
  double inflacao_2020 = 4.48;
  double salarioajustado, valoraumento;
	
  valoraumento = ((salarioantigo) * inflacao_2020/100);
    
  salarioajustado=(salarioantigo+valoraumento);

  printf("O salario de R$:%.2f ajustado com a inflação de %g%% referente ao ano de 2020 fica igual a R$:%g ", salarioantigo, inflacao_2020, salarioajustado);

  return 0;

}