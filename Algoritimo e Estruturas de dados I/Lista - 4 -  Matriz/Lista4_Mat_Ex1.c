#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][3], L = 0, C = 0;

printf("Digite o elemento para preencher a matriz:");
for (L = 0; L<3; L++){
	for ( C = 0; C<3; C++){
		scanf("%d",&mat[L][C]);
	}
}


for (L = 0; L<3; L++){
	for ( C = 0; C<3; C++){
		printf("\nMatriz preenchida: %d",mat[L][C]);
	
	}
	printf("\n");
}


    return 0;
}


