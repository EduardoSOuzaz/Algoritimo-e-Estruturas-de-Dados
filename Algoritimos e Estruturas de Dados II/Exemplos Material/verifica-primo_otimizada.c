#include <stdio.h>
#include <math.h>

int eh_primo(int num) {
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    int i;
    for (i = 3; i <= sqrt(num); i += 2) {
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
