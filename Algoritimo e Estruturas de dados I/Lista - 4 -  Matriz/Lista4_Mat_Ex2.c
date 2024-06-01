#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[2][2], l = 0, c = 0;


for (l = 0; l<2; l++){
	for(c = 0; c<2; c++){
	mat[l][c] = 1;
	}
}


for (l = 0; l<2; l++){
	for(c = 0; c<2; c++){
	printf("\nElementos da matriz: %d",mat[l][c]);
	}
	printf("\n");
}

    return 0;
}


