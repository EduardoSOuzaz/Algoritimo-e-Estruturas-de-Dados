#include <stdio.h> 
#include <locale.h>
#include <math.h>
// Autor: Eduardo de Souza de Oliveira
int Soma(int n1, int n2);

int main() {
    setlocale(LC_ALL, "Portuguese");
   	int n1, n2, resu;
   	
   	printf("Digite o primeiro número:");
   	scanf("%d",&n1);
   	
   	printf("Digite o segundo número:");
   	scanf("%d",&n2);
   	
   	resu = Soma(n1,n2);
   	printf("\nResultado da soma de: %d + %d = %d",n1,n2,resu);
    return 0;
}

int Soma(int n1, int n2){
	
	n1 = n1 + n2;
	
	return n1;
}
