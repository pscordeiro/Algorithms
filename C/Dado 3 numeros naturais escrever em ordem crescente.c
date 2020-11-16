#include <stdio.h>
 
int main() {
    
	int x, y, z, temporario;
	
	printf("Digite 3 numeros:\n");
	scanf("%d %d %d", &x, &y, &z);
	
	if (x > z) {
		temporario = z;
		z = x;
		x = temporario;
	}
	if (x > y) {
		temporario = y;
		y = x;
		x = temporario;
	}
	if (y > z) {
		temporario = z;
		z = y;
		y = temporario;
	}
	
    printf("%d %d %d", x, y, z);
}