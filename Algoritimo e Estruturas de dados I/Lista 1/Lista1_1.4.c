#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	 
	 float n1;
	 printf("Digite o número para saber seu quadrado: ");
	 scanf("%f",&n1);
	 n1 = n1 * n1;
	 
	 printf("O seu número ao quadrado é %.2f", n1);
	 
	
    return 0;
}


