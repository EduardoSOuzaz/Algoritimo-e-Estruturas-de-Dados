#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
   int n, i=1, soma=0;
   
   printf("Digite a entrada para o somatório:");
   scanf("%d",&n);
   
   for (i; i<=n; i++){
	soma +=	(5 * pow(i,2)) + 2 * i + 8;
   }
   printf("Resultado somatório é: %d \n Entrada: %d ",soma,n);
    return 0;
}


