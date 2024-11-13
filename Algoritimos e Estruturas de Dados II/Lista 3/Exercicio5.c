#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int imp(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
   	int n,i = 0;
   	printf("Digite um número: ");
   	scanf("%d",&n);
	
	printf("\nSão Ímpares não Múltiplos de 7:");
  	imp(n);
   
    return 0;
}

int imp(int n){
	int i = 0;
   for(i = 0; i<=n; i++){
   	if (i % 2 == 1 && i % 7 != 0){
   		printf("\n%d",i);
	   }
   }
   
}
