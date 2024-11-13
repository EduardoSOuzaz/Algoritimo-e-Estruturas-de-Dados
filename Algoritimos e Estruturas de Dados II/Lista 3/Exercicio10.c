#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
void maiorNumero(int num1,int num2);

int main() {
    setlocale(LC_ALL, "Portuguese");
  	int num1, num2;
  	printf("Digite o primeiro número:");
  	scanf("%d",&num1);
  	
  	printf("Digite o segundo número:");
  	scanf("%d",&num2);
  	
  	maiorNumero(num1,num2);
  	
    return 0;
}


void maiorNumero(int num1,int num2){
	if (num1 > num2){
		printf("\nO primeiro número: %d \né maior que o segundo: %d", num1,num2);	
	}
	else if(num2 > num1){
		printf("\nO segundo número: %d \né maior que o primeiro: %d", num2,num1);
	}
	else{
		printf("\nNúmero iguais! \n%d e %d",num1,num2);
	}
}

