#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
int menorNumero(int num1, int num2, int num3);

int main() {
    setlocale(LC_ALL, "Portuguese");
  	int num1, num2, num3;
  	printf("Digite o primeiro número:");
  	scanf("%d",&num1);
  	
  	printf("Digite o segundo número:");
  	scanf("%d",&num2);
  	
  	printf("Digite o terceiro número:");
  	scanf("%d",&num3);
  	
  	menorNumero(num1,num2,num3);
  	
    return 0;
}

int menorNumero(int num1, int num2, int num3){
	if(num1 < num2){
		if(num1 < num3){
			printf("O menor é o primeiro: %d",num1);
		}
	}
	if (num2 < num1){
		if (num2 < num3){
			printf("O menor é o segundo: %d", num2);
		}
	}
	if(num3 < num1){
		if(num3 < num2){
			printf("O menor é o terceiro: %d", num3);
		}
	}
	
}
