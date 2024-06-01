#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
  	int vet[10], i = 0;
  	
  	for (i = 0; i<10; i++){
		printf("Digite os elementos para o array:");
		scanf("%d",&vet[i]);
  	}
  	
  	for (i = 0; i < 10; i++){
		printf("\nMostrando na tela: %d",vet[i]);
  	}
    return 0;
}


