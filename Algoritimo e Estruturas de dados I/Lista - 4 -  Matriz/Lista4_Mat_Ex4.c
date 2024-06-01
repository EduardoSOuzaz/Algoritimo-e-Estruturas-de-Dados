#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[2][2], i = 0, j = 0;
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			if (i == j % 2 == 0){
				mat [i][j] = 1;
			}
			else {
				mat[i][j] = 0;
			}
		}
	}
	
	for (i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			printf("\nResultado: [%d]",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

