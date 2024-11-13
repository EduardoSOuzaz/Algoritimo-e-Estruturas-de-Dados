#include <stdio.h>

void muda_valor(int parametro) {
    parametro = 507;
    printf("Valor dentro da função: %d\n", parametro);
}

int main() {
    int n = 1000;
    muda_valor(n);
    printf("Valor fora da função: %d\n", n);
    return 0;
}
