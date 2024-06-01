#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int mat[3][2], l = 0, c = 0;


for (l = 0; l<3; l++){
	for(c = 0; c<2; c++){
	mat[l][c] = 0;
	}
}


for (l = 0; l<3; l++){
	for(c = 0; c<2; c++){
	printf("\nElementos da matriz: %d",mat[l][c]);
	}
	printf("\n");
}

    return 0;
}


