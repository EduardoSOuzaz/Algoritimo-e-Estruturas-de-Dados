#include <stdio.h>

void muda_valor(int vetor[]) {
    vetor[0] = 90;
    printf("Valor dentro da função: %d\n", vetor[0]);
}

int main() {
    int v[3] = {200, 500, 300};
    muda_valor(v);
    printf("Vetor após a função: %d %d %d\n", v[0], v[1], v[2]);
    return 0;
}
