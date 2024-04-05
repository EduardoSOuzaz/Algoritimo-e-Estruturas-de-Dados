#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale (LC_ALL, "Portuguese");
	
		
	printf("Digite a terceira nota:");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota:");
	scanf("%f", &n4);
	
	float n1, n2, n3, n4, med;
	
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &n2);

	med = (n1 + n2 + n3 + n4)/4;
	
	printf("A média aritmética das suas notas foi %.2f", med);
	
	
	
	
	
	
	return 0;
}
	

