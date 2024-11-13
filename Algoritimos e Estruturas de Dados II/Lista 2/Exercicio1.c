#include <stdio.h>

int primo(int num);
int somaPrimos(int n);

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("A soma dos %d primeiros numeros primos e: %d\n", N, somaPrimos(N));
    return 0;
}

int primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int somaPrimos(int n) {
    int count = 0, num = 2, soma = 0;
    while (count < n) {
        if (primo(num)) {
            soma += num;
            count++;
        }
        num++;
    }
    return soma;
}
