#include <stdio.h>    // Biblioteca padrão para entrada e saída (printf e scanf)
#include <string.h>   // Biblioteca para manipulação de strings (strcpy)
#include <locale.h>   // Biblioteca para configuração de localização (idioma)

// Define uma estrutura chamada Carro, com os atributos 'modelo', 'ano' e 'preço'
typedef struct {
    char modelo[50];  // Armazena o nome do modelo do carro (até 50 caracteres)
    int ano;          // Armazena o ano de fabricação do carro
    double preco;     // Armazena o preço do carro
} Carro;

// Função para modificar o preço do carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;  // Atualiza o atributo 'preco' do carro com o novo valor
}

// Função para imprimir os dados do carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);          // Exibe o modelo do carro
    printf("Ano: %d\n", c->ano);                // Exibe o ano do carro
    printf("Preço: R$ %.2lf\n", c->preco);      // Exibe o preço do carro com duas casas decimais
}

int main() {
    setlocale(LC_ALL, "portuguese");   // Configura o idioma para exibir caracteres especiais em português

    Carro carro1;   // Declara uma variável 'carro1' do tipo Carro

    // Preenche os dados do carro
    strcpy(carro1.modelo, "XyZ");  // Copia a string "XyZ" para o campo 'modelo' do carro
    carro1.ano = 2020;             // Define o ano do carro como 2020
    carro1.preco = 90000.00;       // Define o preço inicial do carro como 90000.00

    printf("Dados antes da modificação:\n");  // Exibe uma mensagem indicando os dados antes da modificação
    imprimirCarro(&carro1);  // Chama a função para exibir os dados do carro

    // Modifica o preço do carro para um novo valor
    modificarPreco(&carro1, 115000.00);  // Atualiza o preço do carro para 115000.00

    printf("\nDados após a modificação do preço:\n");  // Exibe uma mensagem indicando os dados após a modificação
    imprimirCarro(&carro1);  // Exibe os dados atualizados do carro

    return 0;  // Indica que o programa terminou com sucesso
}

