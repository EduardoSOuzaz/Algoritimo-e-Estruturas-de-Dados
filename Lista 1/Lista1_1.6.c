#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  float n1, real, dolar, cot;
	  
	 printf("Digite o valor em real: ");
	 scanf("%f",&n1);
	 
	 printf("Digite a taxa de câmbio em dólar: ");
	 scanf("%f",&cot);
	 
	real = n1;	
	n1 = n1 * cot;
	dolar = n1;
	
	
	 
	printf("----------------------------------------------------\n");
	 printf("O valor digitado em reais é %.2f",real);
	 printf("\nO valor que corresponde em dólar é %.2f", dolar);
	 
	
    return 0;
}
