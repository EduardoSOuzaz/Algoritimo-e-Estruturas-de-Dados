#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[6][6], i, j, cont = 0;

printf("Digite os números:");
	for(i = 0; i<6; i++){
		for (j = 0; j<6; j++){
			scanf("%d",&mat[i][j]);
		}
	}
	
	
	for(i = 0; i<6; i++){
		for (j = 0; j<6; j++){
			printf("[ %d ]",mat[i][j]);
		}
		printf("\n");
	}
	
	
	for(i = 0; i<6; i++){
		for (j = 0; j<6; j++){
			if (mat[i][j] < 0)
			cont = cont + 1;
		}
		printf("\n");
	}
	printf("Temos %d números negativos",cont);
    return 0;
}



