#include <stdio.h>

int main()
{

	char valordigitado[100];
	
	printf("\n Digite alguma coisa: \n");   //Faz a pergunta;
	scanf("%[^\n]%*c", valordigitado);     //Aparece para o usuário digitar e grava a informação;

	printf("\n Voce digitou: "); 
	printf("%s\n", valordigitado); //imprime o que o usuário digitou;
    
	
	return 0;

}

