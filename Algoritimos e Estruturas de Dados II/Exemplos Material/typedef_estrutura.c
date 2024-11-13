#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa p1 = {"Maria", 22};
    printf("Nome: %s\nIdade: %d\n", p1.nome, p1.idade);
    return 0;
}
