#include <stdio.h>
#include <time.h>

int idadade_dias(int anos, float meses, int dias)
{
  int quebraanos, quebrameses,somatudo, regressao, contabissexto;
  quebraanos=(anos*365);
  quebrameses=(meses*30.6666667);
  
  time_t theTime = time(NULL);
  struct tm *aTime = localtime(&theTime);

  int anoatual = (aTime->tm_year + 1900);
  int nascimento = (anoatual-anos);
  contabissexto=0;

  for(regressao=nascimento;regressao<=anoatual;regressao++)

  if((((regressao%4)==0) && (regressao%100)!=0)) { 
	  contabissexto++;
	}	

  somatudo=(quebraanos+quebrameses+dias+contabissexto);

  return somatudo;
}

int main() {

  int anos,dias,idadeconvertida;
  float meses;

  printf("Digite sua idade COMPLETA (Ex: 19 anos 7 meses 6 dias= 19 7 6)\n");
  printf("\n");
  scanf("%d %f %d", &anos, &meses, &dias);
  getchar();

  if((meses>12) && (dias>31)) {
    printf("Mês e dia não existem");
  }
  else if(dias>31){
    printf("Esse dia não existe");
  }
  else if(meses>12){
    printf("Mês não existe");
  }
  else{
    idadeconvertida=idadade_dias(anos, meses, dias);idadeconvertida=idadade_dias(anos, meses, dias);
    printf("\nSua idade convertida é igual a: %d dias\n\n", idadeconvertida);
  }

  return 0;

}