#include <stdio.h> 
#include <locale.h>
#include <math.h>
// Autor: Eduardo de Souza de Oliveira
calcSum(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
   	int n, resu = 0;
   	
   	printf("Digite até onde vai o somatório:");
   	scanf("%d",&n);

	resu = calcSum(n);
	printf("\nResultado do Somaório para %d é: %d",n,resu);
    return 0;
}

calcSum(int n){
	int sum = 0, i = 0, aux = 0;
	
	for(i = 1; i<=n; i++){
		sum = (5 * pow(i,2.0)+ (2 * i)+ 8);
		aux += sum;
	}
	
	return aux;
}

