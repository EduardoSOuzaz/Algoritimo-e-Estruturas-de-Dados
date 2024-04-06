#include <stdio.h>
//Exercicio 5 
//Lista 2 
int main(){
	int n1, n2, n3;
	printf("Programa para saber qual eh o menor numero\n");
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	
	printf("Digite o terceiro numero:");
	scanf("%d",&n3);
	
	if (n1 < n2 && n1 < n3){
		printf("O primeiro eh menor: %d",n1);
	}
		else if (n2 < n1 && n2 < n3){
		printf("O segundo eh menor: %d", n2);
	}
			else if (n3 < n1 && n3 < n2) {
				printf("O terceiro eh menor: %d",n3);
			}
	
	return 0;
}
