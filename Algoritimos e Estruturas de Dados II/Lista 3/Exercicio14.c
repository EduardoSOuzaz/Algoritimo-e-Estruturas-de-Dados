#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int calcularResultado(int soma, int vet[10]);

int main() {
    setlocale(LC_ALL, "Portuguese");
	int vet[10],i,soma = 0;
	
	for(i = 0; i<10; i++){
		printf("Digite o valor %d:",i+1);
		scanf("%d",&vet[i]);
		soma += vet[i];
	}  	
  
  	calcularResultado(soma,vet);
    return 0;
}


int calcularResultado(int soma, int vet[10]){
	int resultado = 0;
	 resultado = soma + (vet[0] * 5) + (vet[9] * 2);
	 printf("\nResultado da Operação: %d",resultado);
}

