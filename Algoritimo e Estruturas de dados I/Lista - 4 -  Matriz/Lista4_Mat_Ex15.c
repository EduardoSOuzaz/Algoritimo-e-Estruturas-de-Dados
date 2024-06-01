#include <stdio.h>
int main() {
int mat[4][4], i, j, soma = 0;

	printf("Digite os elementos:");
	for (i = 0; i<4; i++){
		for (j = 0; j<4; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("Sua matriz:\n");
	for (i = 0; i<4; i++){
		for (j = 0; j<4; j++){
		printf("[ %d ]",mat[i][j]);	
		}
		printf("\n");
	}
	
	
for (i = 0; i<4; i++){
	for (j = 0; j<4; j++){
		soma += mat[i][j];	
		}
		printf("\n");
	}
	printf("\tMatriz somada: %d",soma);
    return 0;
}


