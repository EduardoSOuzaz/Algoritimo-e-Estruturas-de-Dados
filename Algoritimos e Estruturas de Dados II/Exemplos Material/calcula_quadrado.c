#include <stdio.h>

int calcula_quadrado(int num) {
    return num * num;
}

int main() {
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);
    int quad = calcula_quadrado(n1);
    printf("Quadrado: %d\n", quad);
    return 0;
}
