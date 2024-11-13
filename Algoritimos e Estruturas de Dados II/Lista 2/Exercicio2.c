#include <stdio.h>

float mediaTurma(int numAlunos);
float mediaEscola(int numTurmas);

int main() {
    int numTurmas;
    printf("Digite o numero de turmas: ");
    scanf("%d", &numTurmas);
    float mediaGeral = mediaEscola(numTurmas);
    printf("A media geral das turmas e: %.2f\n", mediaGeral);
    return 0;
}

float mediaTurma(int numAlunos) {
    float soma = 0, nota;
    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    return soma / numAlunos;
}

float mediaEscola(int numTurmas) {
    float somaMedias = 0;
    for (int i = 1; i <= numTurmas; i++) {
        int numAlunos;
        printf("Digite o numero de alunos da turma %d: ", i);
        scanf("%d", &numAlunos);
        float media = mediaTurma(numAlunos);
        printf("A media da turma %d e: %.2f\n", i, media);
        somaMedias += media;
    }
    return somaMedias / numTurmas;
}
