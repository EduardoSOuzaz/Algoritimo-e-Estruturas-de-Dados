#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int n = 0, i = 0;

printf("Tamanho Vet:");
scanf("%d",&n);

int vet[n];

for(i = 0; i<n; i++){
	printf("Digite os valores:");
	scanf("%d",&vet[i]);
}

for (i = n - 1; i>=0; i--){
	printf("\n%d",vet[i]);
}
    return 0;
}


