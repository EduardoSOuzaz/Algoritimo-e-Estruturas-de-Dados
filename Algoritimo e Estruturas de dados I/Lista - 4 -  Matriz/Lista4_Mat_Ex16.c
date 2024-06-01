#include <stdio.h>

int main() {
    int mat[5][5];
    int i, j;
    int mai;
    int l = 0, c = 0;

    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    mai = mat[0][0];

    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (mat[i][j] > mai) {
                mai = mat[i][j];
                l = i;
                c = j;
            }
        }
    }

    printf("Maior elemento: %d\n", mai);
    printf("Posicao: Linha %d, Coluna %d\n", l, c);

    return 0;
}


