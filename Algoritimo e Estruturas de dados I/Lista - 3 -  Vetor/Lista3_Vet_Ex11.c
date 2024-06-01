#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int i = 0, n = 0, soma = 0;

printf("Digite o tamanho do seu array:");
scanf("%d",&n);

int vet[n];

for (i =0; i<n; i++){
	printf("\nColoque valores ao array:");
	scanf("%d",&vet[i]);
}

for (i = 0; i<n; i++){
	soma += vet[i];
}

printf("\nA soma dos elementos: %d",soma);



    return 0;
}


