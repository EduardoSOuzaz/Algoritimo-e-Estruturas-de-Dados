#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][3], i, j;

printf("Digite os elementos da Matriz:");
for (i = 0; i<3; i++){
	for(j = 0; j<3; j++){
		scanf("%d",&mat[i][j]);
		}
}

printf("Diagonal principal!\n\n");
for (i = 0; i<3; i++){
	for( j = 0; j<3; j++){
		if (i == j){
			printf(" %d ",mat[i][j]);
		}
		else{
			printf(" * ");
		}
	}
	printf("\n");
}

    return 0;
}


