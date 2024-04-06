#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale (LC_ALL, "Portuguese");
	
	float n2;
	
	printf("Digite o seu número real aqui");
	scanf("%f", &n2);
	
	printf("O número digitado foi %.2f", n2);
	
	
	
	
	
	return 0;
}
	

