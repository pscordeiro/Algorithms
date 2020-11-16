#include <stdio.h>

int main()
{
  int numerodigitado, soma, media, loops;
  soma=0;
	loops=0;

	while (numerodigitado != 0) {
		printf("Digite um numero: ");
		scanf("%d", &numerodigitado);

    if((numerodigitado %2)==0) {
	    soma+=numerodigitado;
      loops++;
			
    }
  
	}
  media=(soma/loops);

  printf("Você digitou %d numeros pares.\nA media eh igual a: %d\n", loops, media);

	return 0; 

}