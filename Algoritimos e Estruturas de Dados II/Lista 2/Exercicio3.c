#include <stdio.h> 
#include <locale.h>
// Autor: Eduardo de Souza de Oliveira
int calcFib(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, resu;
    
    printf("Digite o número de termos da série: ");
    scanf("%d", &n);
    
    resu = calcFib(n);
    printf("N-ésimo termo da série de Fibonacci: %d\n", resu);

    return 0;
}

int calcFib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return calcFib(n - 1) + calcFib(n - 2);
}
