#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	
	printf("Escreva qual temperatura eh ideal para voce em fahrenheit: ");
	scanf("%f", &fahrenheit);
	getchar();

	celsius = (fahrenheit - 32) * 5 / 9;

	if(celsius < 0) {
		printf ("Esta congelante \n");
	}	
		else {
			if(celsius <= 10) {
				printf ("Muito gelado \n");
			}
				else {
					if(celsius <= 20) {
					printf ("Gelado \n");
				}
				else {
					if(celsius <= 30) {
						printf ("Quente \n");
					}
					else {
						if(celsius <= 40) {
							printf ("Muito quente \n");
						}
						else {
							if(celsius > 40) {
								printf ("Estou derretendo \n");
						    }
					    }	
				    }
		    	}
		    }
	    }	
	return 0;

}