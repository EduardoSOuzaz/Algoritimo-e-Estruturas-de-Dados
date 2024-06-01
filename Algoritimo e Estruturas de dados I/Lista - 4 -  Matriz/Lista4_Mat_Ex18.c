#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[2][2], mat1[2][2], i, j, i2, j2;

printf("Digite os elementos da Matriz 1:");
	for (i = 0; i<2; i++){
		for (j = 0; j<2; j++){
			scanf("%d",&mat[i][j]);
		}
	}

printf("Digite os elementos da Matriz 2:");
	for (i2 = 0; i2<2; i2++){
		for (j2 = 0; j2<2; j2++){
			scanf("%d",&mat1[i2][j2]);
		}
	}
	
	printf("Matriz 1:\n");
	for (i = 0; i<2; i++){
		for (j = 0; j<2; j++){
			printf("[%d]",mat[i][j]);
		}
		printf("\n");
	}

printf("Matriz 2:\n");
	for (i2 = 0; i2<2; i2++){
		for (j2 = 0; j2<2; j2++){
			printf("[%d]",mat1[i2][j2]);
		}
		printf("\n");
	}
	
	printf("\n");
	mat[0][0] = mat[0][0] * mat1[0][0];
	mat[0][1] = mat[0][1] * mat1[0][1];
	mat[1][0] = mat[1][0] * mat1[1][0];
	mat[1][1] = mat[1][1] * mat1[1][1];
	
	printf("[%d]",mat[0][0]);
	printf("[%d]",mat[0][1]);
	printf("\n");
	printf("[%d]",mat[1][0]);
	printf("[%d]",mat[1][1]);
	    
return 0;
}



