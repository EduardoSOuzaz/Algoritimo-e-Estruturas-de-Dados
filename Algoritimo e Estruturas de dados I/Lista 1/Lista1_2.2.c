#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	float n1, R;
	
	printf("Digite o um número que deseja saber a raiz quadrada:");
	scanf("%f", &n1);
	
	if (n1 > 0) {
		R = sqrt(n1);
		printf("A raiz quadrada de %.2f é %.2f\n", n1, R);	
	}
	else if (n1 < 0) {
		printf("Número Inválido!");
	}
	

	
	return 0;
}
	

