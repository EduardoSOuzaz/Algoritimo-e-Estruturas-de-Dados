#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[2][2], i, j, num;

printf("Digite os elementos:");
for (i = 0; i<2; i++){
	for (j = 0; j<2; j++){
		scanf("%d",&mat[i][j]);
	}
}
printf("\nDigite um número para encontra-lo:");
scanf("%d",&num);

for (i = 0; i<2; i++){
	for (j = 0; j<2; j++){
	if (num == mat[i][j]){
			printf("\n\tNúmero Encontrado: %d",num);
		}
	}
}

    return 0;
}


