#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][3], i, j;

printf("Digite os elementos:");
for (i = 0; i<3; i++){
	for (j = 0; j<3; j++){
		scanf("%d",&mat[i][j]);
}
}

for (i = 0; i<3; i++){
	for(j = 0; j<3; j++){
		printf(" %d ",mat[i][j]);
	}
	printf("\n");
}

    return 0;
}


