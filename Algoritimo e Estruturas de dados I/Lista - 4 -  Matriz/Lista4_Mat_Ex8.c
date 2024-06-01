#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[4][4], j, i, n;

printf("Digite a linha que seja saber a soma {0,1,2,3}:");
scanf("%d",&n);

printf("Digite os elementos:");
for (i = 0; i<4; i++){
	for (j = 0; j<4; j++){
		scanf("%d",&mat[i][j]);
}
}
for (i = 0; i<4; i++){
	for(j = 0; j<4; j++){
		printf("\n Resultado Matriz:%d ",mat[i][j]);
	}
	printf("\n");
}

if (n == 0){
	mat [i][j] = mat[0][0] + mat[0][1] + mat[0][2] + mat[0][3];
	printf("\n\tResultado da Linha:%d",mat[i][j]);
}
else if (n == 1){
	mat [i][j] = mat[1][0] + mat[1][1] + mat[1][2] + mat[1][3];
	printf("\n\tResultado da Linha:%d",mat[i][j]);
}
else if (n == 2){
	mat [i][j] = mat[2][0] + mat[2][1] + mat[2][2] + mat[2][3];
	printf("\n\tResultado da Linha:%d",mat[i][j]);
}
else if (n == 3){
	mat [i][j] = mat[3][0] + mat[3][1] + mat[3][2] + mat[3][3];
	printf("\n\tResultado da Linha:%d",mat[i][j]);
}

    return 0;
}


