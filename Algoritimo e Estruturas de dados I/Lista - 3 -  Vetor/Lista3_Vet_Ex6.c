#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   int vetA[10], i, vetB[10];
   
   for(i = 0; i<10; i++){
	printf("Digite os primeiros elementos:");
	scanf("%d",&vetA[i]);
   }
   
   for (i = 0; i<10; i++){
		vetB[i] = vetA[i];
   }
   
   for (i = 0; i<10; i++){
		printf("\nCopiando Valores: %d",vetB[i]);
   }
 
    return 0;
}


