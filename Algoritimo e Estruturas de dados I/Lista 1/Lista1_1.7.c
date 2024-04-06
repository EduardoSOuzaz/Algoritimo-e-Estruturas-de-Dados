#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int n1, aux, auxx;
	
	printf("Digite um número para saber seu Antecessor e seu Sucessor:");
	scanf("%d", &n1);

	aux = n1 - 1;
	auxx = n1 + 1;
	
	
	printf("O seu antecessor é %d", aux);
	printf("\n");
	printf("O seu sucessor é %d", auxx);
	
	
	

	return 0;
}
	

