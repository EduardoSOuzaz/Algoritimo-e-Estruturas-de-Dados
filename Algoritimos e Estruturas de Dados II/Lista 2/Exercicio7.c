#include <stdio.h> 
#include <locale.h>
#include <math.h>
// Autor: Eduardo de Souza de Oliveira
int somaVet(int sum,int vet[3]);

int main() {
    setlocale(LC_ALL, "Portuguese");
	int i = 0, vet[3], resu= 0, sum = 0;
		
	for(i = 0; i < 3; i++){
	printf("Digite o valor %d:", i + 1);
	scanf("%d",&vet[i]);	
}

	resu = somaVet(sum,vet);
		printf("\nResultado da soma dos valores do vetor: %d",resu);
	
    return 0;
}

int somaVet(int sum,int vet[3]){
	int i = 0;
	for(i = 0; i<3; i++){
		sum += vet[i];		
	}
	return sum;
}
