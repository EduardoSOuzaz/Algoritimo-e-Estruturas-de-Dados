#include <stdio.h>

struct Aluno {
    int numero;
    float notas[3];
};

int main() {
    struct Aluno alunos[10];

    for (int i = 0; i < 10; i++) {
        alunos[i].numero = i + 1;
        alunos[i].notas[0] = 7.0 + i;
        alunos[i].notas[1] = 6.0 + i;
        alunos[i].notas[2] = 8.0 + i;
    }

    for (int i = 0; i < 10; i++) {
        printf("Aluno %d - Notas: %.1f, %.1f, %.1f\n", 
               alunos[i].numero, alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
    }

    return 0;
}
