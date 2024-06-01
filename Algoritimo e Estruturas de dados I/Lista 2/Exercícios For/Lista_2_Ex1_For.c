#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i = 2, n;
	
	printf("Digite um número para saber os pares até o informado:");
	scanf("%d",&n);
	
	for (i; i<=n; i++){
		if (i % 2 == 0){
			printf("\n\nApenas os pares até %d %d",n,i);
		}
	} 
    return 0;
}


