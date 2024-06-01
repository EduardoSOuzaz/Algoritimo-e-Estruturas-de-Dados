#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][3], i, j, soma = 0, soma2 = 0, soma3 = 0;

printf("Digite os elementos da Matriz:");
for (i = 0; i<3; i++){
	for (j = 0; j<3; j++){
		scanf("%d",&mat[i][j]);
	}
}


for (i = 0; i<3; i++){
	for (j = 0; j<3; j++){
		if (j == 0){
			soma = mat[0][0] + mat[1][0] + mat[2][0];
		}
		if (j == 1){
			soma2 = mat[0][1] + mat[1][1] + mat[2][1];
		}
		if (j == 2){
			soma3 = mat[0][2] + mat[1][2] + mat[2][2];
		}	
	}
}
printf("A soma da coluna 1: %d",soma);
printf("\nA soma da coluna 2: %d",soma2);
printf("\nA soma da coluna 3: %d",soma3);





    return 0;
}



