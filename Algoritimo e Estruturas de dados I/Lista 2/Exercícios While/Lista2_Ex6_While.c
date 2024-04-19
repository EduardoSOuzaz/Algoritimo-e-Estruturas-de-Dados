#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int maior = 0, n, nv;
	
	while (1)	{
	printf("\n\n0 para sair");
	printf("\n\nDigite uma lista de números e retornaremos o maior:");
	scanf("%d",&n);
	
	if (n > maior){
		maior = n;
	}
	
	if (n == 0){
			printf("O maior da lista é: %d",maior);
		break;
	}
	
}
    return 0;
}


