#include <stdio.h>    // Inclui a biblioteca padrão de entrada e saída (printf e scanf)
#include <locale.h>    // Inclui a biblioteca para configuração de idioma

// Define uma estrutura chamada "pessoa" com os atributos "peso", "idade" e "altura"
typedef struct {
    double peso;       // Armazena o peso da pessoa
    int idade;         // Armazena a idade da pessoa
    double altura;     // Armazena a altura da pessoa
} pessoa;

// Função para imprimir os dados de uma pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf\n", p.peso, p.idade, p.altura);
}

// Função para receber os dados de uma pessoa diretamente do usuário
void lerPessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);    // Lê e armazena o peso da pessoa
    printf("Digite a idade: ");
    scanf("%d", &p->idade);    // Lê e armazena a idade da pessoa
    printf("Digite a altura: ");
    scanf("%lf", &p->altura);  // Lê e armazena a altura da pessoa
}

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configura o idioma para exibir caracteres especiais

    pessoa pessoas[5];  // Declara um vetor de 5 elementos do tipo "pessoa"
    
    // Loop para receber os dados de cada pessoa do usuário
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        lerPessoa(&pessoas[i]);  // Chama a função lerPessoa para preencher os dados de cada pessoa
    }

    // Exibe os dados de cada pessoa preenchida pelo usuário
    printf("\nDados das pessoas:\n");
    for (int i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);  // Chama a função imprimePessoa para mostrar os dados de cada pessoa
    }

    return 0;  // Indica que o programa terminou com sucesso
}
