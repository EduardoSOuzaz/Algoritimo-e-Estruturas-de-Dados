#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat1[2][2], mat2[2][2], i, j, i2, j2;

	printf("Digite os elementos da Matriz 1:");
	for (i = 0; i<2; i++){
		for (j = 0; j<2; j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Digite os elementos da Matriz 2:");
	for (i2 = 0; i2<2; i2++){
		for (j2 = 0; j2<2; j2++){
			scanf("%d",&mat2[i2][j2]);
		}
	}
	for (i = 0; i<2; i++){
		for (j = 0; j<2; j++){
			printf("Matriz 1:[%d] ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for (i2 = 0; i2<2; i2++){
				for(j2 = 0; j2<2; j2++ ){
					printf("Matriz 2:[%d] ",mat2[i2][j2]);	
				}
				printf("\n");
			}

if (mat1[0][0] == mat2[0][0] 
&& mat1[0][1] == mat2[0][1] 
&& mat1[1][0] == mat2[1][0] 
&& mat1[1][1] == mat2[1][1] ){
	printf("\n\tSão iguais");
			}
	else {
	printf("\n\tNão são iguais");
	}
    return 0;
}



