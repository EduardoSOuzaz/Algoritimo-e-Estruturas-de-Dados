#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  float raiz, n1;
	  
	printf("Digite o número que desejar:");
	scanf("%f",&n1);
	
 if (n1 > 0){
		raiz = sqrt(n1);
		printf("A raiz quadrada de é: %.1f ",raiz);
	}

if (n1 > 0){
	n1 = n1 * n1;
	printf("\nO número ao quadrado é: %.1f",n1);
}

	else{
		printf("Número Inválido!");
	}
	
	
    return 0;
}
