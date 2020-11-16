#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int idadehumano, idadealterada, idadedoguinho;

	printf("Digite sua idade para converte-la em idade canina: ");
	scanf("%d", &idadehumano);
	
	if(idadehumano <=0) {
	       printf("Erro: Idade inválida");
	}
	else {
	    if(idadehumano ==1) {
	        printf("A idade do doginho eh 10.5 anos. ");
	    }
        else {
        
            idadealterada = (idadehumano - 2);
            idadedoguinho = ((idadealterada *4) + 21);
        
            printf("%d anos humanos eh igual a %d anos de doguinho. ", idadehumano, idadedoguinho);
        }
	}
	
	return 0;

}