//Programa que soma os valores de compra de 2 itens e pede para o cliente pagar
//Autor: Eduardo
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	//Declaração de váriaveis do tipo real (float)
	float valorPao, valorCafe, valorPagar;
	
	printf("Digite o valor do pão: ");
	scanf("%f", &valorPao);
	
	printf("Digite o valor do café: ");
	scanf("%f", &valorCafe);
	
	valorPagar = valorPao + valorCafe;
	
	printf("\nValor da compra = %.2f" , valorPagar);
	return 0;
}	

