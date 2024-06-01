#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  int n1, n2, dif;
	  
	printf("Digite o primeiro número:");
	scanf("%d",&n1);
	  
	printf("Digite o segundo número:");
	scanf("%d",&n2);
	
	if(n1 > n2){
		
		dif = n1 - n2;
		printf("Primeiro é maior, A diferença deles é de : %d",dif);
	}
	
	else if (n2 > n1 ){
		dif = n2 - n1;
		printf("Segundo é maior, A diferença deles é de: %d",dif);
	}
	
	else if (n1 == n2){
		printf("Números iguais. Sem diferença.");
	}
	  
	  
	  
	  
	  

	
	
    return 0;
}
