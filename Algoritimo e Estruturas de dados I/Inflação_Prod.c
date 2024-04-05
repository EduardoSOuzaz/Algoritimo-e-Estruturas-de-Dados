#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
int  prec;

printf("Digite o preço de um produto:");
scanf("%d",&prec);

if (prec < 100){
	prec = prec * 0.10;
	printf("O produto foi inflacionado 10 por cento %d", prec);
}

else if (prec >= 100){
	prec = prec * 1.2;
	printf("O produto foi inclacionado em 20 por cento %d", prec);
}

	
    return 0;
}
