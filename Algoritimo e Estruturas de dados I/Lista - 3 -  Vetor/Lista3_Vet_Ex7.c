#include <stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[30], contador[30] = {0}, max = 0, elemento, i = 0, j = 0;
    
    printf("Digite 30 números inteiros:\n");
    for(i = 0; i < 30; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 30; i++) {
        for(j = 0; j < 30; j++) {
            if(vetor[i] == vetor[j]) {
                contador[i]++;
            }
        }
    }

    for(i = 0; i < 30; i++) {
        if(contador[i] > max) {
            max = contador[i];
            elemento = vetor[i];
        }
    }

    printf("O elemento que mais aparece é %d e ele aparece %d vezes.\n", elemento, max);

    return 0;
}


