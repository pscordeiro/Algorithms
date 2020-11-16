#include <stdio.h>

int main() 
{
	int lado_a, lado_b, lado_c;

	printf("Escreva a medida de cada lado do triangulo:\n");
	scanf("%d %d %d", &lado_a, &lado_b, &lado_c );

	if (lado_a == lado_b && lado_b == lado_c) { //todos os lados iguais
	    printf ("Eh um triangulo equilatero \n");
    }
    else {
	    if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c ) { //se qualquer um dos dois lados são iguais
	        printf ("Eh um triangulo isocele \n");
    	}	
    	else { // se todos os lados são diferentes
	    	printf ("Eh um triangulo escaleno \n");
    	}
    }
    
 return 0;
 
}