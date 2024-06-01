#include <stdio.h>

int main() {
    int vet[15];
    int i, j, temp;

    
    for (i = 0; i < 15; i++) {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 14; i++) {
        for (j = 0; j < 14 - i; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 15; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}


