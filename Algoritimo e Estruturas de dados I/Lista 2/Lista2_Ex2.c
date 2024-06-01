#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
   int i=0, j=0, n=0, somaPrimo=0;
   
   printf("Número Primos de 2 até n:");
   scanf("%d",&n);
   
   for (i=2; i<=n; i++){
		for(j=2; j<i; j++){
			if(i%j == 0){
				break;
				
			}
		}
		if (i == j){
			somaPrimo = somaPrimo + i;
			printf("\t%d",i);
		}
   }
   printf("\n\nSoma dos n primos de 2 até %d = %d",n,somaPrimo);
    return 0;
}


