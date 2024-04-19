#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
int n, i=0, resu,soma=0;

printf("Digite um número para saber até n potência:");
scanf("%d",&n);

for (i; i<=n; i++){
	resu = pow(n,i);
	printf("\nResultado potências: %d",resu);
soma += resu;	
}

printf("\n\nResultado das soma: %d",soma);
    return 0;
}


