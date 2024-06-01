#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[2][2], i, j, n = 0;

printf("Digite os elementos:");
for(i = 0; i<2; i++){
	for (j = 0; j<2; j++){
		scanf("%d",&mat[i][j]);
	}
}
	printf("Coloque um número para multiplicar a Matriz:");
	scanf("%d",&n);
	
for (i = 0; i<2; i++){
	for(j = 0; j<2;j++){
		mat[i][j] = n * mat[i][j];
		printf("Resultado: [%d] ",mat[i][j]);
	}
	printf("\n");
}
    return 0;
}



