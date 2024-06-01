#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
int vet[12], i = 0;

	for (i = 0; i<12; i++){
printf("Digite os valores ao array os negativos serão substituídos por 0:");
scanf("%d",&vet[i]);

	if (vet[i] < 0){
		vet[i] = 0;
	}
}

for (i = 0; i<12; i++){
	printf("\nZerando o vetor: %d",vet[i]);
}


     
    return 0;
}


