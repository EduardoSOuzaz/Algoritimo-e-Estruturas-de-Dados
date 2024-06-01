#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
 int n, i, numero, soma = 0;

    printf("Digite a quantidade de números na sequência: ");
    scanf("%d", &n);

    printf("Digite os %d números da sequência:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma da sequência é: %d\n", soma);

    return 0;
}


