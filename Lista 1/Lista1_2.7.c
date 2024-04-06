#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale (LC_ALL, "Portuguese");
	
	int n1,n2;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor:");
	scanf("%d", &n2);
	
if (n1 > n2) {
	printf("O primeiro número é maior");
} 
else if (n2 > n1) {
	printf("O segundo número é maior");
}

else  {
	printf("Números iguais!");
}
	
	return 0;
}
	

