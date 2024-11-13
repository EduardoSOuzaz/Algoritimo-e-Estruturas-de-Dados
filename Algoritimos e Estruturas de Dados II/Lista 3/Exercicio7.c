#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int maiPos(int vet[], int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, n;
    printf("Digite quantos números irá inserir:");
    scanf("%d",&n);
    
    int vet[n];
    
    for(i = 0; i<n; i++){
    	printf("Digite o valor %d:", i + 1);
    	scanf("%d",&vet[i]);
	}
    maiPos(vet,n);
    
    return 0;
}

int maiPos(int vet[], int n){
	int mai = 0,i,pos = 0;
	vet[0] == mai;
	for(i = 0; i<n; i++){
		if (vet[i] > mai){
			mai = vet[i];
			pos = i;
		}
	}
printf("\nO maior valor do vetor é %d \n encontrado na posição %d",mai, pos + 1);
}
