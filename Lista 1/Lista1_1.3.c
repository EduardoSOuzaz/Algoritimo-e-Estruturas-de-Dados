#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int a, b, c, soma;
	
	printf("Digite o primeiro número:");
	scanf("%d", &a);
	
	printf("Digite o segundo número:");
	scanf("%d", &b);
	
	printf("Digite o terceiro número:");
	scanf("%d", &c);
	
	soma = a + b + c;
	
	printf("A soma dos números foi %d", soma)
	
	
	
	
	
	
	return 0;
}
	

