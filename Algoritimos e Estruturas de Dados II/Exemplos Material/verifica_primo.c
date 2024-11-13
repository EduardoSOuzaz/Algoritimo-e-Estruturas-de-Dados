#include <stdio.h>

int eh_primo(int num) {
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (eh_primo(numero))
        printf("%d é primo.\n", numero);
    else
        printf("%d não é primo.\n", numero);
    return 0;
}
