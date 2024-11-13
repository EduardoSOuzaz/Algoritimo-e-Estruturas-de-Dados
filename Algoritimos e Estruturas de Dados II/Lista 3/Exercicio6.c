#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int sum(int vet[], int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    
   int n, i;
   printf("Digite quantos números irá inserir:");
   scanf("%d",&n); 
   int vet[n];
    
   for(i = 0; i<n; i++){
   	printf("Digite o valor %d:", i + 1);
   	scanf("%d",&vet[i]);
   }
   
   sum(vet,n);
    
    return 0;
}

int sum(int vet[], int n){
	int i = 0, soma = 0;
	for(i; i<n; i++){
		soma += vet[i];
	}
printf("\nSoma dos valores digitados: %d",soma);
}
