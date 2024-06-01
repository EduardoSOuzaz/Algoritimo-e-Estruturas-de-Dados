#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   int vet[8], i;
   
   for (i = 0; i<8; i++){
		printf("Digite um número e o programa irá imprimir seu inverso:");
		scanf("%d",&vet[i]);
   }
   for (i=7; i>=0; i--){
		printf("\nInverso: %d",vet[i]);
   }
 
    return 0;
}


