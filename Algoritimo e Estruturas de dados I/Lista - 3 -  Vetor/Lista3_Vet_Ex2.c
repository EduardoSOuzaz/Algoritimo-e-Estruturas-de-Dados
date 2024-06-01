#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vet[15], i = 0, mai, men;

    for (i = 0; i < 15; i++) {
        printf("Digite o elemento para o array: ");
        scanf("%d", &vet[i]);
    }
    mai = men = vet[0];

    for (i = 0; i < 15; i++) {
        if (vet[i] > mai) {
            mai = vet[i];
        }
        if (vet[i] < men) {
            men = vet[i];
        }
    }

    printf("\nMaior: %d", mai);
    printf("\nMenor: %d", men);
    return 0;
}


