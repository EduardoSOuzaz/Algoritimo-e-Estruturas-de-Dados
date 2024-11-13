#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int multV(int vet[], int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
  	int n,i;
  	printf("Digite quantos valores irá inserir:");
  	scanf("%d",&n);
  	printf("\n");
  	int vet[n];
  	
  	for(i = 0; i<n; i++){
  		printf("Digite o valor %d:",i + 1);
  		scanf("%d",&vet[i]);
	  }
  	multV(vet,n);
  
    return 0;
}

int multV(int vet[], int n){
	int i = 0, mult = 1;
	for(i = 0; i<n; i++){
		mult *= vet[i];
	}
	printf("\nMultiplicação dos valores do vetor: %d",mult);
}
