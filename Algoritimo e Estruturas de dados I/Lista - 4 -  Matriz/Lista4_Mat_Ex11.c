#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][3], i, j, cont = 0;

printf("Digite os elementos:");
for(i = 0; i<3; i++){
	for(j = 0; j<3; j++){
		scanf("%d",&mat[i][j]);
	}
}

	printf("Sua Matriz:\n");
for(i = 0; i<3; i++){
	for(j = 0; j<3; j++){
		if (mat[i][j] == 0){
			cont = cont + 1;
		} 
		printf(" %d ",mat[i][j]);
	}
	printf("\n");
}
printf("Nessa Matriz temos: %d zero(s)",cont);

    return 0;
}


