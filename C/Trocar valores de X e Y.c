#include <stdio.h>

//usando uma variável auxiliar/temporária
int main ()
{
    int x, y, temporario;
  
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);
   
    temporario = x;     // registramos o valor de 'a' em 'temp'
    x    = y;           // sobrescrever 'a' com o valor de 'b'
    y    = temporario;  // sobrescrever 'b' com o valor que era de 'a' (e foi registrado em 'temp')

    printf("O valor de X: %d\nO valor de Y: %d\n", x, y);

    return 0;

}

//calculando sem utilizar variáveis extras
#include <stdio.h>

int main ()
{

    int x, y ;
  
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);
   
    x = x+y;
    y = x-y;
    x = x-y;          
    

    printf("O valor de X: %d\nO valor de Y: %d\n", x, y);

    return 0;

}