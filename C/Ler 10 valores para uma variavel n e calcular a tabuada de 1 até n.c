#include <stdio.h>

int main() {

    int contador, resultado, numero, loop;
    
    loop=10;
  
    for(int i =1; i <= loop; i++){

	printf("\nDigite um numero: ");
	scanf("%d", &numero);
	
    	contador=1;
    	
        while(contador<=numero) {
            resultado=numero*contador;
            printf("\n%d x %d: %d\n\n", numero, contador, resultado);
            contador=contador+1;
        }
    }

  return 0;

}