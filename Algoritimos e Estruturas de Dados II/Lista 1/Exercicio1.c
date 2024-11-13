#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int mat[3][5], i, j, cont1 = 0, cont2 = 0, cont3 = 0;
    printf("Fim de Jogo!\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite a pontuação do jogador %d: ", i + 1);
            scanf("%d", &mat[i][j]);
            if(i == 0) {
                cont1 += mat[i][j];
            } else if(i == 1) {
                cont2 += mat[i][j];
            } else {
                cont3 += mat[i][j];
            }
        }
    }
    
    printf("\nPontuação dos Jogadores\n");
    printf("Jogador 1: %d pontos\n", cont1);
    printf("Jogador 2: %d pontos\n", cont2);
    printf("Jogador 3: %d pontos\n", cont3);

    if(cont1 > cont2 && cont1 > cont3) {
        printf("Vencedor: Jogador 1\n");
    } else if(cont2 > cont3) {
        printf("Vencedor: Jogador 2\n");
    } else {
        printf("Vencedor: Jogador 3\n");
    }
    
    return 0;
}
