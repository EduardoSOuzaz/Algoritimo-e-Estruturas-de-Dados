#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int vetInv(int vet[10]);

int main() {
    setlocale(LC_ALL, "Portuguese");
  	int vet[10], i = 0;
  	
  	for(i = 0; i<10; i++){
  		printf("Digite o valor %d:",i + 1);
  		scanf("%d",&vet[i]);
	  }
  		
  	vetInv(vet);
  	
    return 0;
}

int vetInv(int vet[10]){
	int i;
	for(i = 9; i>=0; i--){
		printf("\nInverso %d: %d",i + 1,vet[i]);
	}
	
}
