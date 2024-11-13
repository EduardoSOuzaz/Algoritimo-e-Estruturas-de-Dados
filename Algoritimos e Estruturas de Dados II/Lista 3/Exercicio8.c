#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
void exibirPares(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um número:");
    scanf("%d",&n);
    
    exibirPares(n);
    
    return 0;
}

void exibirPares(int n){
	int i;
	for(i = 1; i<=n; i++){
		if (i % 2 == 0){
			printf("\nPares até %d são: %d",n,i);
		}
	}
}
