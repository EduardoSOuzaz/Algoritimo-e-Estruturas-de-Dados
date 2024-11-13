#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída para usar printf

// Declaração da função calcularResultado, que receberá um vetor e um inteiro como parâmetros
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado;  // Declara um vetor de inteiros de tamanho 5, além das variáveis inteiras 'i' e 'resultado'

    // Preenche o vetor com valores; cada posição recebe o dobro do índice
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;  // Atribui a cada elemento do vetor o valor do índice multiplicado por 2
    }

    // Chama a função calcularResultado passando o vetor e o tamanho 5, e armazena o retorno em 'resultado'
    resultado = calcularResultado(vetor, 5);

    // Imprime o resultado retornado pela função
    printf("O resultado eh: %d\n", resultado);

    return 0;  // Indica que o programa terminou com sucesso
}

// Implementação da função calcularResultado, que calcula a soma dos elementos do vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;  // Declara as variáveis 'i' e 'soma', inicializando 'soma' com 0

    // Percorre o vetor até o tamanho n e acumula a soma dos elementos
    for (i = 0; i < n; i++) {
        soma += v[i];  // Adiciona o valor de cada elemento do vetor à variável soma
    }
    return soma;  // Retorna a soma total dos elementos do vetor
}
