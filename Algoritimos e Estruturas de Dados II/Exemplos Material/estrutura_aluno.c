#include <stdio.h>

struct Aluno {
    int numero;
    float notas[3];
};

int main() {
    struct Aluno aluno;
    aluno.numero = 123;
    aluno.notas[0] = 7.5;
    aluno.notas[1] = 8.0;
    aluno.notas[2] = 9.0;

    printf("Número: %d\n", aluno.numero);
    printf("Nota 1: %.1f\n", aluno.notas[0]);
    printf("Nota 2: %.1f\n", aluno.notas[1]);
    printf("Nota 3: %.1f\n", aluno.notas[2]);

    return 0;
}
