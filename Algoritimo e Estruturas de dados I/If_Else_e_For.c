#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    int n1=0, n2=0, i=0;
    
    printf("Digite o primeiro valor:");
    scanf("%d",&n1);
    
    printf("\nDigite o segundo valor:");
    scanf("%d",&n2);
    
    if(n1 == n2) {
    	printf("Numeros Iguais!");
	}
    
	else if (n1 < n2){
	
    	for (i=n1; i<=n2; i++)		
    	printf("Os valores do primeiro numero ao segundo numero: %d\n ", i);
	}
	
	else if (n1 > n2) {
		for (i=n1; i>=n2; i--)
		printf("Os valores do segundo numero ao primeiro numero %d\n ", i);
}
	
    return 0;
}
