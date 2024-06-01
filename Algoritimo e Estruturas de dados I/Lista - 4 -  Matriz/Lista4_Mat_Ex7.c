#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, temp;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        temp = mat[0][j];
        mat[0][j] = mat[1][j];
        mat[1][j] = temp;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[ %d ]", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}


