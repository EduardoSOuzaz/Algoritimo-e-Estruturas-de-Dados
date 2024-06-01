#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[4][3], i, j;

for (i = 0; i<4; i++){
	for (j = 0; j<3; j++){
		if (i == j % 2 == 0){
			mat[i][j] = 1 - i;
		}
		else {
			mat[i][j] = 1 + i;
		}
}
}

for (i = 0; i<4; i++){
	for (j = 0; j<3; j++){
	printf("\nResultado: %d",mat[i][j]);
}
printf("\n");
}
    return 0;
}


