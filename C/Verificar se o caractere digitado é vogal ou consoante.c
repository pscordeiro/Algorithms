#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char letra;
    
    printf("\n Informe uma letra: ");
    scanf("%c",&letra);
    letra = toupper(letra);
    
    if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
        printf(" Essa letra é uma vogal");
    else
        printf(" Essa letra é uma consoante");
    return 0;
}