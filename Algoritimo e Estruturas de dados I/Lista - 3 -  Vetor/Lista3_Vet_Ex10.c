#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int n = 0, i = 0;

printf("Digite o tamanho do Array:");
scanf("%d",&n);

int vet[i];

for (i = 0; i<n; i++){
	printf("\nDigite os elementos do seu Array:");
	scanf("%d",&vet[i]);
}

for (i = 0; i<n; i++){
	printf("\nO seu array: %d",vet[i]);
}

    return 0;
}


