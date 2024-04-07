#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	float Sal, Prest;
	
	printf("Digite o seu sálario:");
	scanf("%f", &Sal);
	
	printf("Digite o valor da prestação desejada:");
	scanf("%f", &Prest);
	
	if ( Prest > Sal * 0.20){
		printf("Empréstimo não concedido");
	}
	else{
		printf("Empréstimo Feito");
	}
	
    return 0;
}
