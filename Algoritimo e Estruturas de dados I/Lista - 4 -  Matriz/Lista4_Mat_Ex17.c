#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][2], i, j;

printf("Digites os elementos:");
for (i = 0; i<3; i++){
	for(j = 0; j<2; j++){
		scanf("%d",&mat[i][j]);
	}
}

for (i = 0; i<3; i++){
	for(j = 0; j<2; j++){
		printf(" [%d] ",mat[i][j]);
	}
	printf("\n");
}

printf("\n");

for (i = 0; i<2; i++){
	for(j = 0; j<3; j++){
		printf(" [%d] ",mat[j][i]);
	}
	printf("\n");
}


    return 0;
}



