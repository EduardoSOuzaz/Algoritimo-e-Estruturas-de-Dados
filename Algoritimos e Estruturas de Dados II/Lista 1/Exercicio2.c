#include <stdio.h>
#include <locale.h>
int main(){
	int n;
	printf("Digite o tamanho da matriz:");
	scanf("%d",&n);
	
	int mat[n][n], i = 0, j = 0;
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if( j < i){
					mat[i][j] = j + 1;
				}
				else if(j == i){
					mat[i][j] = i + 1;
				}
				else {
					mat[i][j] = 0;
				}
			}
		}
	printf("Resultado: \n");
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("[ %d ]",mat[i][j]);
			}
			printf("\n");
		}
	return 0;
} 