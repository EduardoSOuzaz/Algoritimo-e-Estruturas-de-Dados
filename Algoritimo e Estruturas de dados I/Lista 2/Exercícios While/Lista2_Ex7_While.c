#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int numero, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        
        soma += digito;
        
        numero /= 10;
    }

    printf("A soma dos dígitos é: %d\n", soma);
    return 0;
}


