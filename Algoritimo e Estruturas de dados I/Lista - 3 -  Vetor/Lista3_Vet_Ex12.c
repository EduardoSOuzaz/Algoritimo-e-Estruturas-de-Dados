#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int i = 0, n = 0, mai = 0, men = 0;

printf("Digite o tamanho do array:");
scanf("%d",&n);

int vet[n];

  
for (i = 0; i<n; i++){
	printf("Coloque os valores no array:");
	scanf("%d",&vet[i]);
if (i == 0){
mai = men = vet[i];
}
if (vet [i] > mai)	{
	mai = vet[i];
	}
	if (vet [i] < men)	{
	men = vet[i];
	}
		
}
printf("\nMaior do seu array: %d",mai);
printf("\nMenor do seu array: %d",men);



    return 0;
}


