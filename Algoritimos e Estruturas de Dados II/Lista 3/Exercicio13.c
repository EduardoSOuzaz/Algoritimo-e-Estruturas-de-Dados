#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
float calcularMedia(int num1, int num2,int num3);

int main() {
    setlocale(LC_ALL, "Portuguese");
  	int num1, num2, num3;
  	
  	printf("Digite o primeiro número:");
  	scanf("%d",&num1);
  	
  	printf("Digite o segundo número:");
  	scanf("%d",&num2);
  
  	printf("Digite o terceiro número:");
  	scanf("%d",&num3);
  	
  	calcularMedia(num1,num2,num3);
  
    return 0;
}

float calcularMedia(int num1, int num2,int num3){
	float med = 0;
	med = (num1 + num2 + num3) / 3.0;
	printf("\nA média dos números digitados: %.2f",med);
}

