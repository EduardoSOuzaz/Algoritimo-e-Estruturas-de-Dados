#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
   int vet[10], i, cont = 0;
   
   for (i =0; i<10; i++){
		printf("Digite os números:");
		scanf("%d",&vet[i]);
		if (vet [i] % 2 == 0){
			cont = cont + 1;
		}
   }
   
   printf("Temos: %d  par(es) no Array",cont);
 
    return 0;
}


