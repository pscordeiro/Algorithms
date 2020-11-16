#include <stdio.h>

int main()
{
	int idade;
	
	printf("Escreva sua idade: ");
	scanf("%d", &idade);
	getchar();

    if (idade <= 9) {
	    printf ("Voce esta na faixa menos que criança \n");
    }
    else {
    	if(idade >= 10 && idade <= 14) {
    		printf ("Voce esta na faixa infantil \n");
    	}	
    	else {
    	    if( idade <= 17 ) {
    		    printf ("Voce esta na faixa juvenil \n");
    		}
    		else {
    		    if( idade <= 60 ) {
    			    printf ("Voce esta na faixa adulto \n");
    			}
    			else {
    			    if (idade > 60 ){
    				    printf ("Voce esta na faixa idoso \n");
    				}
    			}
    	    }
        }
    }
    	   
    return 0;

}