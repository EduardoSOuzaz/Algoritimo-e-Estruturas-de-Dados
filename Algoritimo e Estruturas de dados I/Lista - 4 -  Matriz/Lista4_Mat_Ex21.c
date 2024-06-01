#include <stdio.h>
int main() {
    int mat[3][3];
    int i, j;
    int id = 1;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                id = 0;

    if (id){
        printf("Matriz identidade\n");
	}
    else{
        printf("Nao e uma matriz identidade\n");
}
    return 0;
}


